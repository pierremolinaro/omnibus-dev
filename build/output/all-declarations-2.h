#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @propertyGetterKind enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGetterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_propertyGetterKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_storedProperty,
    kEnum_computedProperty,
    kEnum_constantProperty
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGetterKind extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyGetterKind constructor_computedProperty (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                               const class GALGAS_routineLLVMNameDict & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyGetterKind constructor_constantProperty (const class GALGAS_objectIR & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyGetterKind constructor_storedProperty (const class GALGAS_omnibusType & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGetterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_computedProperty (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                         class GALGAS_routineLLVMNameDict & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_constantProperty (class GALGAS_objectIR & outArgument0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_storedProperty (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_computedProperty (class GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                           class GALGAS_routineLLVMNameDict & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_constantProperty (class GALGAS_objectIR & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_storedProperty (class GALGAS_omnibusType & outOperand0,
                                                         class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyGetterKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyGetterMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertyGetterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_propertyVisibility mProperty_mVisibility ;
  public: GALGAS_propertyGetterKind mProperty_mAccess ;

//--- Constructor
  public: cMapElement_propertyGetterMap (const GALGAS_lstring & inKey,
                                         const GALGAS_propertyVisibility & in_mVisibility,
                                         const GALGAS_propertyGetterKind & in_mAccess
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyGetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_propertyVisibility mProperty_mVisibility ;

  public: GALGAS_propertyGetterKind mProperty_mAccess ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_propertyGetterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMVisibility (const GALGAS_propertyVisibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVisibility = inValue ;
  }

  public: inline void setter_setMAccess (const GALGAS_propertyGetterKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyGetterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyGetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_propertyVisibility & in_mVisibility,
                                               const GALGAS_propertyGetterKind & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyGetterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_propertyVisibility & inOperand1,
                                                                            const class GALGAS_propertyGetterKind & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyGetterKind getter_mAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyVisibility getter_mVisibility (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyGetterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyGetterKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyGetterKind_storedProperty : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyGetterKind_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                   const GALGAS_uint & inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyGetterKind_storedProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyGetterKind_computedProperty : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMap_2D_entry mAssociatedValue0 ;
  public: const GALGAS_routineLLVMNameDict mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyGetterKind_computedProperty (const GALGAS_unifiedTypeMap_2D_entry & inAssociatedValue0,
                                                                     const GALGAS_routineLLVMNameDict & inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyGetterKind_computedProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyGetterKind_constantProperty : public cEnumAssociatedValues {
  public: const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyGetterKind_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyGetterKind_constantProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @propertySetterKind enum                                          *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertySetterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_propertySetterKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_storedProperty,
    kEnum_computedProperty
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertySetterKind extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertySetterKind constructor_computedProperty (const class GALGAS_unifiedTypeMap_2D_entry & inOperand0,
                                                                               const class GALGAS_routineLLVMNameDict & inOperand1,
                                                                               const class GALGAS_routineLLVMNameDict & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertySetterKind constructor_storedProperty (const class GALGAS_omnibusType & inOperand0,
                                                                             const class GALGAS_uint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertySetterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_computedProperty (class GALGAS_unifiedTypeMap_2D_entry & outArgument0,
                                                         class GALGAS_routineLLVMNameDict & outArgument1,
                                                         class GALGAS_routineLLVMNameDict & outArgument2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_storedProperty (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_computedProperty (class GALGAS_unifiedTypeMap_2D_entry & outOperand0,
                                                           class GALGAS_routineLLVMNameDict & outOperand1,
                                                           class GALGAS_routineLLVMNameDict & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_storedProperty (class GALGAS_omnibusType & outOperand0,
                                                         class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertySetterKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertySetterMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertySetterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_propertyVisibility mProperty_mVisibility ;
  public: GALGAS_propertySetterKind mProperty_mAccess ;

//--- Constructor
  public: cMapElement_propertySetterMap (const GALGAS_lstring & inKey,
                                         const GALGAS_propertyVisibility & in_mVisibility,
                                         const GALGAS_propertySetterKind & in_mAccess
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertySetterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertySetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_propertyVisibility mProperty_mVisibility ;

  public: GALGAS_propertySetterKind mProperty_mAccess ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_propertySetterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMVisibility (const GALGAS_propertyVisibility & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVisibility = inValue ;
  }

  public: inline void setter_setMAccess (const GALGAS_propertySetterKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertySetterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertySetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_propertyVisibility & in_mVisibility,
                                               const GALGAS_propertySetterKind & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertySetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertySetterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_propertyVisibility & inOperand1,
                                                                            const class GALGAS_propertySetterKind & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertySetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertySetterKind getter_mAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyVisibility getter_mVisibility (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertySetterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertySetterKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertySetterKind_storedProperty : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertySetterKind_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                   const GALGAS_uint & inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertySetterKind_storedProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertySetterKind_computedProperty : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMap_2D_entry mAssociatedValue0 ;
  public: const GALGAS_routineLLVMNameDict mAssociatedValue1 ;
  public: const GALGAS_routineLLVMNameDict mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_propertySetterKind_computedProperty (const GALGAS_unifiedTypeMap_2D_entry & inAssociatedValue0,
                                                                     const GALGAS_routineLLVMNameDict & inAssociatedValue1,
                                                                     const GALGAS_routineLLVMNameDict & inAssociatedValue2
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertySetterKind_computedProperty (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticStringMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_staticStringMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_staticStringMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticStringMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticStringMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) ;
  public: GALGAS_staticStringMap & operator = (const GALGAS_staticStringMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticStringMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticStringMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticStringMap constructor_mapWithMapToOverride (const class GALGAS_staticStringMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticStringMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticStringMap ;
 
} ; // End of GALGAS_staticStringMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_staticStringMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticStringMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticStringMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_staticStringMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;

//--- Constructor
  public: cMapElement_staticStringMap (const GALGAS_lstring & inKey,
                                       const GALGAS_uint & in_mIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticStringMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticStringMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_uint mProperty_mIndex ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticStringMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_staticStringMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_staticStringMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_staticStringMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticStringMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticStringMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_uint & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticStringMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @globalStructuredConstantList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_globalStructuredConstantList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_globalStructuredConstantList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_globalStructuredConstantList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_omnibusType & in_mType,
                                                 const class GALGAS_operandIRList & in_mOperandIRList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_globalStructuredConstantList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_globalStructuredConstantList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_globalStructuredConstantList constructor_listWithValue (const class GALGAS_omnibusType & inOperand0,
                                                                                      const class GALGAS_operandIRList & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalStructuredConstantList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_omnibusType & inOperand0,
                                                     const class GALGAS_operandIRList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_globalStructuredConstantList add_operation (const GALGAS_globalStructuredConstantList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_globalStructuredConstantList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_omnibusType constinArgument0,
                                                      class GALGAS_operandIRList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_omnibusType & outArgument0,
                                                 class GALGAS_operandIRList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_omnibusType & outArgument0,
                                                class GALGAS_operandIRList & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_omnibusType & outArgument0,
                                                      class GALGAS_operandIRList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandIRListAtIndex (class GALGAS_operandIRList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_omnibusType & outArgument0,
                                              class GALGAS_operandIRList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_omnibusType & outArgument0,
                                             class GALGAS_operandIRList & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_mOperandIRListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_globalStructuredConstantList ;
 
} ; // End of GALGAS_globalStructuredConstantList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_globalStructuredConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_globalStructuredConstantList (const GALGAS_globalStructuredConstantList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_operandIRList current_mOperandIRList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalStructuredConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @globalStructuredConstantList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_globalStructuredConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_omnibusType mProperty_mType ;

  public: GALGAS_operandIRList mProperty_mOperandIRList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_globalStructuredConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_globalStructuredConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMOperandIRList (const GALGAS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperandIRList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_globalStructuredConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_globalStructuredConstantList_2D_element (const GALGAS_omnibusType & in_mType,
                                                          const GALGAS_operandIRList & in_mOperandIRList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_globalStructuredConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_globalStructuredConstantList_2D_element constructor_new (const class GALGAS_omnibusType & inOperand0,
                                                                                       const class GALGAS_operandIRList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_globalStructuredConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_mOperandIRList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalStructuredConstantList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @operandIRList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_operandIRList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_objectIR mProperty_mOperand ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_operandIRList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperand (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_operandIRList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_operandIRList_2D_element (const GALGAS_objectIR & in_mOperand) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_operandIRList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_operandIRList_2D_element constructor_new (const class GALGAS_objectIR & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_operandIRList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterInContext) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                class GALGAS_semanticContext & ioArgument0,
                                                                                class GALGAS_declarationDecorationList & ioArgument1,
                                                                                class GALGAS_decoratedRegularRoutineList & ioArgument2,
                                                                                class GALGAS_routineListIR & ioArgument3,
                                                                                class GALGAS_staticListInitializationMap & ioArgument4,
                                                                                class GALGAS_staticEntityMap & ioArgument5,
                                                                                class GALGAS_controlRegisterUserAccesMapAST & ioArgument6,
                                                                                class GALGAS_userLLVMTypeDefinitionListIR & ioArgument7,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInContext (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclarationAST_enterInContext inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (const class cPtr_abstractDeclarationAST * inObject,
                                         GALGAS_semanticContext & io_ioContext,
                                         GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         GALGAS_routineListIR & io_ioRoutineListIR,
                                         GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                         GALGAS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         GALGAS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRegularRoutineList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedRegularRoutineList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_decoratedRegularRoutineList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_decoratedRegularRoutineList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_receiverTypeName,
                                                 const class GALGAS_mode & in_mode,
                                                 const class GALGAS_bool & in_isRequired,
                                                 const class GALGAS_routineKind & in_routineKind,
                                                 const class GALGAS_bool & in_warnIfUnused,
                                                 const class GALGAS_bool & in_exportedRoutine,
                                                 const class GALGAS_routineAttributes & in_routineAttributes,
                                                 const class GALGAS_lstring & in_routineMangledLLVMName,
                                                 const class GALGAS_routineFormalArgumentListAST & in_formalArgumentList,
                                                 const class GALGAS_bool & in_warningOnUnusedArgs,
                                                 const class GALGAS_instructionListAST & in_mInstructionList,
                                                 const class GALGAS_location & in_mEndOfRoutineDeclaration,
                                                 const class GALGAS_lstring & in_returnTypeName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRegularRoutineList extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_decoratedRegularRoutineList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedRegularRoutineList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_mode & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_routineKind & inOperand3,
                                                                                     const class GALGAS_bool & inOperand4,
                                                                                     const class GALGAS_bool & inOperand5,
                                                                                     const class GALGAS_routineAttributes & inOperand6,
                                                                                     const class GALGAS_lstring & inOperand7,
                                                                                     const class GALGAS_routineFormalArgumentListAST & inOperand8,
                                                                                     const class GALGAS_bool & inOperand9,
                                                                                     const class GALGAS_instructionListAST & inOperand10,
                                                                                     const class GALGAS_location & inOperand11,
                                                                                     const class GALGAS_lstring & inOperand12
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedRegularRoutineList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_mode & inOperand1,
                                                     const class GALGAS_bool & inOperand2,
                                                     const class GALGAS_routineKind & inOperand3,
                                                     const class GALGAS_bool & inOperand4,
                                                     const class GALGAS_bool & inOperand5,
                                                     const class GALGAS_routineAttributes & inOperand6,
                                                     const class GALGAS_lstring & inOperand7,
                                                     const class GALGAS_routineFormalArgumentListAST & inOperand8,
                                                     const class GALGAS_bool & inOperand9,
                                                     const class GALGAS_instructionListAST & inOperand10,
                                                     const class GALGAS_location & inOperand11,
                                                     const class GALGAS_lstring & inOperand12
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedRegularRoutineList add_operation (const GALGAS_decoratedRegularRoutineList & inOperand,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_decoratedRegularRoutineList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_mode constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_routineKind constinArgument3,
                                                      class GALGAS_bool constinArgument4,
                                                      class GALGAS_bool constinArgument5,
                                                      class GALGAS_routineAttributes constinArgument6,
                                                      class GALGAS_lstring constinArgument7,
                                                      class GALGAS_routineFormalArgumentListAST constinArgument8,
                                                      class GALGAS_bool constinArgument9,
                                                      class GALGAS_instructionListAST constinArgument10,
                                                      class GALGAS_location constinArgument11,
                                                      class GALGAS_lstring constinArgument12,
                                                      class GALGAS_uint constinArgument13,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_mode & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_routineKind & outArgument3,
                                                 class GALGAS_bool & outArgument4,
                                                 class GALGAS_bool & outArgument5,
                                                 class GALGAS_routineAttributes & outArgument6,
                                                 class GALGAS_lstring & outArgument7,
                                                 class GALGAS_routineFormalArgumentListAST & outArgument8,
                                                 class GALGAS_bool & outArgument9,
                                                 class GALGAS_instructionListAST & outArgument10,
                                                 class GALGAS_location & outArgument11,
                                                 class GALGAS_lstring & outArgument12,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_mode & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_routineKind & outArgument3,
                                                class GALGAS_bool & outArgument4,
                                                class GALGAS_bool & outArgument5,
                                                class GALGAS_routineAttributes & outArgument6,
                                                class GALGAS_lstring & outArgument7,
                                                class GALGAS_routineFormalArgumentListAST & outArgument8,
                                                class GALGAS_bool & outArgument9,
                                                class GALGAS_instructionListAST & outArgument10,
                                                class GALGAS_location & outArgument11,
                                                class GALGAS_lstring & outArgument12,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_mode & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_routineKind & outArgument3,
                                                      class GALGAS_bool & outArgument4,
                                                      class GALGAS_bool & outArgument5,
                                                      class GALGAS_routineAttributes & outArgument6,
                                                      class GALGAS_lstring & outArgument7,
                                                      class GALGAS_routineFormalArgumentListAST & outArgument8,
                                                      class GALGAS_bool & outArgument9,
                                                      class GALGAS_instructionListAST & outArgument10,
                                                      class GALGAS_location & outArgument11,
                                                      class GALGAS_lstring & outArgument12,
                                                      class GALGAS_uint constinArgument13,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setExportedRoutineAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setFormalArgumentListAtIndex (class GALGAS_routineFormalArgumentListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsRequiredAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineDeclarationAtIndex (class GALGAS_location constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_instructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setModeAtIndex (class GALGAS_mode constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setReceiverTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setReturnTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineAttributesAtIndex (class GALGAS_routineAttributes constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineKindAtIndex (class GALGAS_routineKind constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineMangledLLVMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setWarnIfUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setWarningOnUnusedArgsAtIndex (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_mode & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              class GALGAS_routineKind & outArgument3,
                                              class GALGAS_bool & outArgument4,
                                              class GALGAS_bool & outArgument5,
                                              class GALGAS_routineAttributes & outArgument6,
                                              class GALGAS_lstring & outArgument7,
                                              class GALGAS_routineFormalArgumentListAST & outArgument8,
                                              class GALGAS_bool & outArgument9,
                                              class GALGAS_instructionListAST & outArgument10,
                                              class GALGAS_location & outArgument11,
                                              class GALGAS_lstring & outArgument12,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_mode & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             class GALGAS_routineKind & outArgument3,
                                             class GALGAS_bool & outArgument4,
                                             class GALGAS_bool & outArgument5,
                                             class GALGAS_routineAttributes & outArgument6,
                                             class GALGAS_lstring & outArgument7,
                                             class GALGAS_routineFormalArgumentListAST & outArgument8,
                                             class GALGAS_bool & outArgument9,
                                             class GALGAS_instructionListAST & outArgument10,
                                             class GALGAS_location & outArgument11,
                                             class GALGAS_lstring & outArgument12,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_exportedRoutineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_formalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRequiredAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mode getter_modeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_receiverTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_returnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineAttributes getter_routineAttributesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_routineKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_routineMangledLLVMNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedRegularRoutineList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedRegularRoutineList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedRegularRoutineList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_warnIfUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_warningOnUnusedArgsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedRegularRoutineList ;
 
} ; // End of GALGAS_decoratedRegularRoutineList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_decoratedRegularRoutineList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedRegularRoutineList (const GALGAS_decoratedRegularRoutineList & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_receiverTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_mode current_mode (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_isRequired (LOCATION_ARGS) const ;
  public: class GALGAS_routineKind current_routineKind (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_warnIfUnused (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_exportedRoutine (LOCATION_ARGS) const ;
  public: class GALGAS_routineAttributes current_routineAttributes (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_routineMangledLLVMName (LOCATION_ARGS) const ;
  public: class GALGAS_routineFormalArgumentListAST current_formalArgumentList (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_warningOnUnusedArgs (LOCATION_ARGS) const ;
  public: class GALGAS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfRoutineDeclaration (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_returnTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedRegularRoutineList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_routineListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractRoutineIR & in_mRoutine
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineListIR extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineListIR constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineListIR constructor_listWithValue (const class GALGAS_abstractRoutineIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractRoutineIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineListIR add_operation (const GALGAS_routineListIR & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_routineListIR_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractRoutineIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractRoutineIR & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractRoutineIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractRoutineIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractRoutineIR & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractRoutineIR getter_mRoutineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineListIR ;
 
} ; // End of GALGAS_routineListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_routineListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_routineListIR (const GALGAS_routineListIR & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMTypeDefinitionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionListIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_userLLVMTypeDefinitionListIR constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_userLLVMTypeDefinitionListIR constructor_listWithValue (const class GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_userLLVMTypeDefinitionListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_userLLVMTypeDefinitionListIR add_operation (const GALGAS_userLLVMTypeDefinitionListIR & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_userLLVMTypeDefinitionListIR_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_userLLVMTypeDefinitionIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_userLLVMTypeDefinitionIR constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionIR getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_userLLVMTypeDefinitionListIR ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_userLLVMTypeDefinitionListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_userLLVMTypeDefinitionIR current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_userLLVMTypeDefinitionListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInitializationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_staticListInitializationMap ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticListInitializationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticListInitializationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticListInitializationMap (const GALGAS_staticListInitializationMap & inSource) ;
  public: GALGAS_staticListInitializationMap & operator = (const GALGAS_staticListInitializationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInitializationMap extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListInitializationMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticListInitializationMap constructor_mapWithMapToOverride (const class GALGAS_staticListInitializationMap & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_stringlist & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringlist constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitializationListForKey (class GALGAS_stringlist constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mInitializationListForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListInitializationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_stringlist & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticListInitializationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticListInitializationMap ;
 
} ; // End of GALGAS_staticListInitializationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_staticListInitializationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticListInitializationMap (const GALGAS_staticListInitializationMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mInitializationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticListInitializationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticListInitializationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_staticListInitializationMap : public cMapElement {
//--- Map attributes
  public: GALGAS_stringlist mProperty_mInitializationList ;

//--- Constructor
  public: cMapElement_staticListInitializationMap (const GALGAS_lstring & inKey,
                                                   const GALGAS_stringlist & in_mInitializationList
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @universalValuedObjectMap struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_universalValuedObjectMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_flatValuedObjectMap mProperty_mInternalPropertyAndRoutineMap ;

  public: GALGAS_scopeStack mProperty_mScopeStack ;

  public: GALGAS_lstringlist mProperty_mLocalObjectList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_universalValuedObjectMap constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_universalValuedObjectMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInternalPropertyAndRoutineMap (const GALGAS_flatValuedObjectMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInternalPropertyAndRoutineMap = inValue ;
  }

  public: inline void setter_setMScopeStack (const GALGAS_scopeStack & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScopeStack = inValue ;
  }

  public: inline void setter_setMLocalObjectList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocalObjectList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_universalValuedObjectMap (void) ;

//--------------------------------- Native constructor
  public: GALGAS_universalValuedObjectMap (const GALGAS_flatValuedObjectMap & in_mInternalPropertyAndRoutineMap,
                                           const GALGAS_scopeStack & in_mScopeStack,
                                           const GALGAS_lstringlist & in_mLocalObjectList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_universalValuedObjectMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_universalValuedObjectMap constructor_new (const class GALGAS_flatValuedObjectMap & inOperand0,
                                                                        const class GALGAS_scopeStack & inOperand1,
                                                                        const class GALGAS_lstringlist & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_universalValuedObjectMap & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_flatValuedObjectMap getter_mInternalPropertyAndRoutineMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mLocalObjectList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_mScopeStack (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_universalValuedObjectMap class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalValuedObjectMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_targetParameters mProperty_mTargetParameters ;

  public: GALGAS_omnibusType mProperty_mPanicCodeType ;

  public: GALGAS_omnibusType mProperty_mPanicLineType ;

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;

  public: GALGAS_routineMapForContext mProperty_mRoutineMap ;

  public: GALGAS_guardMapForContext mProperty_mGuardMap ;

  public: GALGAS_controlRegisterGroupMap mProperty_mControlRegisterGroupMap ;

  public: GALGAS_globalConstantMap mProperty_mGlobalConstantMap ;

  public: GALGAS_globalSyncInstanceMap mProperty_mGlobalSyncInstanceMap ;

  public: GALGAS_staticlistMap mProperty_mStaticListMap ;

  public: GALGAS_stringset mProperty_mRequiredRoutineSet ;

  public: GALGAS_unifiedTypeMap mProperty_mTypeMap ;

  public: GALGAS_typeConstantMap mProperty_mTypeConstantMap ;

  public: GALGAS_typeConstructorMap mProperty_mTypeConstructorMap ;

  public: GALGAS_typePropertySetterMap mProperty_mTypePropertySetterMap ;

  public: GALGAS_typePropertyGetterMap mProperty_mTypePropertyGetterMap ;

  public: GALGAS_availableInterruptMap mProperty_mAvailableInterruptMap ;

  public: GALGAS_infixOperatorMap mProperty_mInfixOperatorMap ;

  public: GALGAS_prefixOperatorMap mProperty_mPrefixOperatorMap ;

  public: GALGAS_assignmentOperatorMap mProperty_mAssignmentOperatorMap ;

  public: GALGAS_implicitConversionToBooleanMap mProperty_mImplicitConversionToBooleanMap ;

  public: GALGAS_taskMap mProperty_mTaskMap ;

  public: GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;

  public: GALGAS_universalValuedObjectMap mProperty_mValuedObjectMap ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_semanticContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetParameters (const GALGAS_targetParameters & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetParameters = inValue ;
  }

  public: inline void setter_setMPanicCodeType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicCodeType = inValue ;
  }

  public: inline void setter_setMPanicLineType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLineType = inValue ;
  }

  public: inline void setter_setMPanicSetupRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicSetupRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMPanicLoopRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLoopRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMRoutineMap (const GALGAS_routineMapForContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineMap = inValue ;
  }

  public: inline void setter_setMGuardMap (const GALGAS_guardMapForContext & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardMap = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupMap = inValue ;
  }

  public: inline void setter_setMGlobalConstantMap (const GALGAS_globalConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalConstantMap = inValue ;
  }

  public: inline void setter_setMGlobalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSyncInstanceMap = inValue ;
  }

  public: inline void setter_setMStaticListMap (const GALGAS_staticlistMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticListMap = inValue ;
  }

  public: inline void setter_setMRequiredRoutineSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredRoutineSet = inValue ;
  }

  public: inline void setter_setMTypeMap (const GALGAS_unifiedTypeMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeMap = inValue ;
  }

  public: inline void setter_setMTypeConstantMap (const GALGAS_typeConstantMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeConstantMap = inValue ;
  }

  public: inline void setter_setMTypeConstructorMap (const GALGAS_typeConstructorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeConstructorMap = inValue ;
  }

  public: inline void setter_setMTypePropertySetterMap (const GALGAS_typePropertySetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypePropertySetterMap = inValue ;
  }

  public: inline void setter_setMTypePropertyGetterMap (const GALGAS_typePropertyGetterMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypePropertyGetterMap = inValue ;
  }

  public: inline void setter_setMAvailableInterruptMap (const GALGAS_availableInterruptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAvailableInterruptMap = inValue ;
  }

  public: inline void setter_setMInfixOperatorMap (const GALGAS_infixOperatorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInfixOperatorMap = inValue ;
  }

  public: inline void setter_setMPrefixOperatorMap (const GALGAS_prefixOperatorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPrefixOperatorMap = inValue ;
  }

  public: inline void setter_setMAssignmentOperatorMap (const GALGAS_assignmentOperatorMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAssignmentOperatorMap = inValue ;
  }

  public: inline void setter_setMImplicitConversionToBooleanMap (const GALGAS_implicitConversionToBooleanMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplicitConversionToBooleanMap = inValue ;
  }

  public: inline void setter_setMTaskMap (const GALGAS_taskMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskMap = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GALGAS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMValuedObjectMap (const GALGAS_universalValuedObjectMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValuedObjectMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticContext (const GALGAS_targetParameters & in_mTargetParameters,
                                  const GALGAS_omnibusType & in_mPanicCodeType,
                                  const GALGAS_omnibusType & in_mPanicLineType,
                                  const GALGAS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                  const GALGAS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                  const GALGAS_routineMapForContext & in_mRoutineMap,
                                  const GALGAS_guardMapForContext & in_mGuardMap,
                                  const GALGAS_controlRegisterGroupMap & in_mControlRegisterGroupMap,
                                  const GALGAS_globalConstantMap & in_mGlobalConstantMap,
                                  const GALGAS_globalSyncInstanceMap & in_mGlobalSyncInstanceMap,
                                  const GALGAS_staticlistMap & in_mStaticListMap,
                                  const GALGAS_stringset & in_mRequiredRoutineSet,
                                  const GALGAS_unifiedTypeMap & in_mTypeMap,
                                  const GALGAS_typeConstantMap & in_mTypeConstantMap,
                                  const GALGAS_typeConstructorMap & in_mTypeConstructorMap,
                                  const GALGAS_typePropertySetterMap & in_mTypePropertySetterMap,
                                  const GALGAS_typePropertyGetterMap & in_mTypePropertyGetterMap,
                                  const GALGAS_availableInterruptMap & in_mAvailableInterruptMap,
                                  const GALGAS_infixOperatorMap & in_mInfixOperatorMap,
                                  const GALGAS_prefixOperatorMap & in_mPrefixOperatorMap,
                                  const GALGAS_assignmentOperatorMap & in_mAssignmentOperatorMap,
                                  const GALGAS_implicitConversionToBooleanMap & in_mImplicitConversionToBooleanMap,
                                  const GALGAS_taskMap & in_mTaskMap,
                                  const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                  const GALGAS_universalValuedObjectMap & in_mValuedObjectMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticContext constructor_new (const class GALGAS_targetParameters & inOperand0,
                                                               const class GALGAS_omnibusType & inOperand1,
                                                               const class GALGAS_omnibusType & inOperand2,
                                                               const class GALGAS_panicRoutinePriorityMap & inOperand3,
                                                               const class GALGAS_panicRoutinePriorityMap & inOperand4,
                                                               const class GALGAS_routineMapForContext & inOperand5,
                                                               const class GALGAS_guardMapForContext & inOperand6,
                                                               const class GALGAS_controlRegisterGroupMap & inOperand7,
                                                               const class GALGAS_globalConstantMap & inOperand8,
                                                               const class GALGAS_globalSyncInstanceMap & inOperand9,
                                                               const class GALGAS_staticlistMap & inOperand10,
                                                               const class GALGAS_stringset & inOperand11,
                                                               const class GALGAS_unifiedTypeMap & inOperand12,
                                                               const class GALGAS_typeConstantMap & inOperand13,
                                                               const class GALGAS_typeConstructorMap & inOperand14,
                                                               const class GALGAS_typePropertySetterMap & inOperand15,
                                                               const class GALGAS_typePropertyGetterMap & inOperand16,
                                                               const class GALGAS_availableInterruptMap & inOperand17,
                                                               const class GALGAS_infixOperatorMap & inOperand18,
                                                               const class GALGAS_prefixOperatorMap & inOperand19,
                                                               const class GALGAS_assignmentOperatorMap & inOperand20,
                                                               const class GALGAS_implicitConversionToBooleanMap & inOperand21,
                                                               const class GALGAS_taskMap & inOperand22,
                                                               const class GALGAS_globalTaskVariableList & inOperand23,
                                                               const class GALGAS_universalValuedObjectMap & inOperand24
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_assignmentOperatorMap getter_mAssignmentOperatorMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_availableInterruptMap getter_mAvailableInterruptMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupMap getter_mControlRegisterGroupMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap getter_mGlobalConstantMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalSyncInstanceMap getter_mGlobalSyncInstanceMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_guardMapForContext getter_mGuardMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_implicitConversionToBooleanMap getter_mImplicitConversionToBooleanMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_mInfixOperatorMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mPanicCodeType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mPanicLineType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicLoopRoutinePriorityMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicSetupRoutinePriorityMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_mPrefixOperatorMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mRequiredRoutineSet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineMapForContext getter_mRoutineMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticlistMap getter_mStaticListMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_targetParameters getter_mTargetParameters (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskMap getter_mTaskMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeConstantMap getter_mTypeConstantMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typeConstructorMap getter_mTypeConstructorMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap getter_mTypeMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typePropertyGetterMap getter_mTypePropertyGetterMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_typePropertySetterMap getter_mTypePropertySetterMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_universalValuedObjectMap getter_mValuedObjectMap (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticEntityMap struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticEntityMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_staticStringMap mProperty_mStaticStringMap ;

  public: GALGAS_globalStructuredConstantList mProperty_mGlobalStructuredConstantList ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticEntityMap constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_staticEntityMap (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStaticStringMap (const GALGAS_staticStringMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticStringMap = inValue ;
  }

  public: inline void setter_setMGlobalStructuredConstantList (const GALGAS_globalStructuredConstantList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalStructuredConstantList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_staticEntityMap (void) ;

//--------------------------------- Native constructor
  public: GALGAS_staticEntityMap (const GALGAS_staticStringMap & in_mStaticStringMap,
                                  const GALGAS_globalStructuredConstantList & in_mGlobalStructuredConstantList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticEntityMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticEntityMap constructor_new (const class GALGAS_staticStringMap & inOperand0,
                                                               const class GALGAS_globalStructuredConstantList & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticEntityMap & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_mGlobalStructuredConstantList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_mStaticStringMap (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticEntityMap class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticEntityMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arcAssignmentList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arcAssignmentList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_arcAssignmentList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_arcAssignmentList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mPropertyName,
                                                 const class GALGAS_omnibusType & in_mPropertyType,
                                                 const class GALGAS_uintlist & in_mPropertyIndexPath
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arcAssignmentList extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arcAssignmentList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_arcAssignmentList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_omnibusType & inOperand1,
                                                                           const class GALGAS_uintlist & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arcAssignmentList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_uintlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_arcAssignmentList add_operation (const GALGAS_arcAssignmentList & inOperand,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_arcAssignmentList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_uintlist constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_uintlist & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_uintlist & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_uintlist & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyIndexPathAtIndex (class GALGAS_uintlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_uintlist & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_uintlist & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mPropertyIndexPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mPropertyTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arcAssignmentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arcAssignmentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arcAssignmentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_arcAssignmentList ;
 
} ; // End of GALGAS_arcAssignmentList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_arcAssignmentList : public cGenericAbstractEnumerator {
  public: cEnumerator_arcAssignmentList (const GALGAS_arcAssignmentList & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mPropertyType (LOCATION_ARGS) const ;
  public: class GALGAS_uintlist current_mPropertyIndexPath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_arcAssignmentList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arcAssignmentList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arcAssignmentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mPropertyName ;

  public: GALGAS_omnibusType mProperty_mPropertyType ;

  public: GALGAS_uintlist mProperty_mPropertyIndexPath ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_arcAssignmentList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_arcAssignmentList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMPropertyType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

  public: inline void setter_setMPropertyIndexPath (const GALGAS_uintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyIndexPath = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_arcAssignmentList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_arcAssignmentList_2D_element (const GALGAS_string & in_mPropertyName,
                                               const GALGAS_omnibusType & in_mPropertyType,
                                               const GALGAS_uintlist & in_mPropertyIndexPath) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_arcAssignmentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_arcAssignmentList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_omnibusType & inOperand1,
                                                                            const class GALGAS_uintlist & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arcAssignmentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mPropertyIndexPath (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arcAssignmentList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionIR : public AC_GALGAS_class {
//--- Constructor
  public: GALGAS_userLLVMTypeDefinitionIR (void) ;

//---
  public: inline const class cPtr_userLLVMTypeDefinitionIR * ptr (void) const { return (const cPtr_userLLVMTypeDefinitionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMTypeDefinitionIR (const cPtr_userLLVMTypeDefinitionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMDefinedTypeName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMDefinedTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @userLLVMTypeDefinitionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_userLLVMTypeDefinitionIR : public acPtr_class {
//--- Attributes
  public: GALGAS_string mProperty_mLLVMDefinedTypeName ;

//--- Constructor
  public: cPtr_userLLVMTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName
                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMDefinedTypeName (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMDefinedTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_userLLVMTypeDefinitionIR_generateLLVMType) (const class cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                                    class GALGAS_string & ioArgument0,
                                                                                    class C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateLLVMType (const int32_t inClassIndex,
                                            extensionMethodSignature_userLLVMTypeDefinitionIR_generateLLVMType inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (const class cPtr_userLLVMTypeDefinitionIR * inObject,
                                           GALGAS_string & io_ioLLVMcode,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_userLLVMTypeDefinitionIR mProperty_mType ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_userLLVMTypeDefinitionListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMType (const GALGAS_userLLVMTypeDefinitionIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_userLLVMTypeDefinitionListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_userLLVMTypeDefinitionListIR_2D_element (const GALGAS_userLLVMTypeDefinitionIR & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_userLLVMTypeDefinitionListIR_2D_element constructor_new (const class GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMTypeDefinitionListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionIR getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractDecoratedDeclaration_semanticAnalysis) (const class cPtr_abstractDecoratedDeclaration * inObject,
                                                                                        const class GALGAS_semanticContext constinArgument0,
                                                                                        class GALGAS_semanticTemporariesStruct & ioArgument1,
                                                                                        class GALGAS_intermediateCodeStruct & ioArgument2,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_semanticAnalysis (const int32_t inClassIndex,
                                            extensionMethodSignature_abstractDecoratedDeclaration_semanticAnalysis inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (const class cPtr_abstractDecoratedDeclaration * inObject,
                                           const GALGAS_semanticContext constin_inContext,
                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @panicSortedListIR sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_panicSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_panicSortedListIR (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_panicSortedListIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_panicSortedListIR constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_panicSortedListIR constructor_sortedListWithValue (const class GALGAS_bigint & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_panicSortedListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bigint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bigint & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bigint & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bigint & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bigint & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_panicSortedListIR ;
 
} ; // End of GALGAS_panicSortedListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_panicSortedListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_panicSortedListIR (const GALGAS_panicSortedListIR & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_panicSortedListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupArrayList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupArrayList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupArrayList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_controlRegisterGroupArrayList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mGroupName,
                                                 const class GALGAS_lbigintlist & in_mBaseAddresses
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupArrayList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterGroupArrayList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterGroupArrayList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lbigintlist & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterGroupArrayList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lbigintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterGroupArrayList add_operation (const GALGAS_controlRegisterGroupArrayList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_controlRegisterGroupArrayList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lbigintlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lbigintlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lbigintlist & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lbigintlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBaseAddressesAtIndex (class GALGAS_lbigintlist constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lbigintlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lbigintlist & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lbigintlist getter_mBaseAddressesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGroupNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterGroupArrayList ;
 
} ; // End of GALGAS_controlRegisterGroupArrayList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterGroupArrayList : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mGroupName (LOCATION_ARGS) const ;
  public: class GALGAS_lbigintlist current_mBaseAddresses (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterGroupArrayList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @driverListIR list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_driverListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_driverListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_driverListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mDriverName,
                                                 const class GALGAS_omnibusType & in_mType,
                                                 const class GALGAS_operandIRList & in_mInitialValueList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_driverListIR extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_driverListIR constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_driverListIR constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                      const class GALGAS_operandIRList & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_driverListIR inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_operandIRList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_driverListIR add_operation (const GALGAS_driverListIR & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_driverListIR_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_operandIRList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_operandIRList & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_operandIRList & outArgument2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_operandIRList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueListAtIndex (class GALGAS_operandIRList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_operandIRList & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_operandIRList & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_mInitialValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_driverListIR ;
 
} ; // End of GALGAS_driverListIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_driverListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_driverListIR (const GALGAS_driverListIR & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_operandIRList current_mInitialValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_driverListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureMapIR map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_externProcedureMapIR ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externProcedureMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_externProcedureMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) ;
  public: GALGAS_externProcedureMapIR & operator = (const GALGAS_externProcedureMapIR & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_externProcedureMapIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_externProcedureMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_externProcedureMapIR constructor_mapWithMapToOverride (const class GALGAS_externProcedureMapIR & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                     const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_routineFormalArgumentListIR constinArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_entry constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGenerationForKey (class GALGAS_routineFormalArgumentListIR constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeForKey (class GALGAS_unifiedTypeMap_2D_entry constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_entry getter_mReturnTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externProcedureMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_routineFormalArgumentListIR & outOperand1,
                                                    class GALGAS_unifiedTypeMap_2D_entry & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_externProcedureMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_externProcedureMapIR ;
 
} ; // End of GALGAS_externProcedureMapIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_externProcedureMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMap_2D_entry current_mReturnType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externProcedureMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @globalSyncInstanceMapIR map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMapIR ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_globalSyncInstanceMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_globalSyncInstanceMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inSource) ;
  public: GALGAS_globalSyncInstanceMapIR & operator = (const GALGAS_globalSyncInstanceMapIR & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_globalSyncInstanceMapIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_globalSyncInstanceMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_globalSyncInstanceMapIR constructor_mapWithMapToOverride (const class GALGAS_globalSyncInstanceMapIR & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_objectIR constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueForKey (class GALGAS_objectIR constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValueForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalSyncInstanceMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_objectIR & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalSyncInstanceMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_globalSyncInstanceMapIR ;
 
} ; // End of GALGAS_globalSyncInstanceMapIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_globalSyncInstanceMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalSyncInstanceMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptMapIR map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_interruptMapIR ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_interruptMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_interruptMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) ;
  public: GALGAS_interruptMapIR & operator = (const GALGAS_interruptMapIR & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_interruptMapIR extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_interruptMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_interruptMapIR constructor_mapWithMapToOverride (const class GALGAS_interruptMapIR & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_mode & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  class GALGAS_mode constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameForKey (class GALGAS_string constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeForKey (class GALGAS_mode constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelfTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDriverNameForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeForKey (const class GALGAS_string & constinOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mSelfTypeForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_string & outOperand2,
                                                    class GALGAS_mode & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_interruptMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_interruptMapIR ;
 
} ; // End of GALGAS_interruptMapIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_interruptMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_interruptMapIR (const GALGAS_interruptMapIR & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mSelfType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mDriverName (LOCATION_ARGS) const ;
  public: class GALGAS_mode current_mMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_interruptMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInvokedFunctionSetMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_staticListInvokedFunctionSetMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_staticListInvokedFunctionSetMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticListInvokedFunctionSetMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticListInvokedFunctionSetMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inSource) ;
  public: GALGAS_staticListInvokedFunctionSetMap & operator = (const GALGAS_staticListInvokedFunctionSetMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInvokedFunctionSetMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListInvokedFunctionSetMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticListInvokedFunctionSetMap constructor_mapWithMapToOverride (const class GALGAS_staticListInvokedFunctionSetMap & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_stringset & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInvokedFunctionSetForKey (class GALGAS_stringset constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInvokedFunctionSetForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListInvokedFunctionSetMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_stringset & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticListInvokedFunctionSetMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticListInvokedFunctionSetMap ;
 
} ; // End of GALGAS_staticListInvokedFunctionSetMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_staticListInvokedFunctionSetMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_stringset current_mInvokedFunctionSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticListInvokedFunctionSetMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @taskMapIR map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_taskMapIR ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_taskMapIR_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_taskMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_taskMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) ;
  public: GALGAS_taskMapIR & operator = (const GALGAS_taskMapIR & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_taskMapIR extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_taskMapIR constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_taskMapIR constructor_mapWithMapToOverride (const class GALGAS_taskMapIR & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_bigint & inOperand3,
                                                     const class GALGAS_stringlist & inOperand4,
                                                     const class GALGAS_stringlist & inOperand5,
                                                     const class GALGAS_stringlist & inOperand6,
                                                     const class GALGAS_uint & inOperand7,
                                                     const class GALGAS_bool & inOperand8,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_bigint constinArgument3,
                                                  class GALGAS_stringlist constinArgument4,
                                                  class GALGAS_stringlist constinArgument5,
                                                  class GALGAS_stringlist constinArgument6,
                                                  class GALGAS_uint constinArgument7,
                                                  class GALGAS_bool constinArgument8,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_bigint & outArgument3,
                                                  class GALGAS_stringlist & outArgument4,
                                                  class GALGAS_stringlist & outArgument5,
                                                  class GALGAS_stringlist & outArgument6,
                                                  class GALGAS_uint & outArgument7,
                                                  class GALGAS_bool & outArgument8,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActivateForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActivateOrderedListForKey (class GALGAS_stringlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeactivateOrderedListForKey (class GALGAS_stringlist constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPriorityForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetupOrderedListForKey (class GALGAS_stringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStackSizeForKey (class GALGAS_bigint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameStringIndexForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_bigint & outArgument3,
                                                  class GALGAS_stringlist & outArgument4,
                                                  class GALGAS_stringlist & outArgument5,
                                                  class GALGAS_stringlist & outArgument6,
                                                  class GALGAS_uint & outArgument7,
                                                  class GALGAS_bool & outArgument8,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mActivateForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mActivateOrderedListForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mDeactivateOrderedListForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPriorityForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mSetupOrderedListForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mStackSizeForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTaskNameStringIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTaskTypeForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskMapIR getter_overriddenMap (C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_bigint & outOperand3,
                                                    class GALGAS_stringlist & outOperand4,
                                                    class GALGAS_stringlist & outOperand5,
                                                    class GALGAS_stringlist & outOperand6,
                                                    class GALGAS_uint & outOperand7,
                                                    class GALGAS_bool & outOperand8) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_taskMapIR * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_taskMapIR ;
 
} ; // End of GALGAS_taskMapIR class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_taskMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_taskMapIR (const GALGAS_taskMapIR & inEnumeratedObject,
                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mTaskType (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mActivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_taskMapIR_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @intermediateCodeStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_intermediateCodeStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_staticEntityMap mProperty_mStaticEntityMap ;

  public: GALGAS_interruptMapIR mProperty_mInterruptMapIR ;

  public: GALGAS_externProcedureMapIR mProperty_mExternProcedureMapIR ;

  public: GALGAS_panicSortedListIR mProperty_mPanicSetupListIR ;

  public: GALGAS_panicSortedListIR mProperty_mPanicLoopListIR ;

  public: GALGAS_taskMapIR mProperty_mTaskMapIR ;

  public: GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;

  public: GALGAS_uint mProperty_mMaxBranchOfOnInstructions ;

  public: GALGAS_targetParameters mProperty_mTargetParameters ;

  public: GALGAS_driverListIR mProperty_mDriverList ;

  public: GALGAS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForIntermediate ;

  public: GALGAS_globalSyncInstanceMapIR mProperty_mGlobalSyncInstanceMap ;

  public: GALGAS_controlRegisterGroupArrayList mProperty_mControlRegisterGroupArrayList ;

  public: GALGAS_routineListIR mProperty_mRoutineListIR ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_intermediateCodeStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_intermediateCodeStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMStaticEntityMap (const GALGAS_staticEntityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticEntityMap = inValue ;
  }

  public: inline void setter_setMInterruptMapIR (const GALGAS_interruptMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptMapIR = inValue ;
  }

  public: inline void setter_setMExternProcedureMapIR (const GALGAS_externProcedureMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternProcedureMapIR = inValue ;
  }

  public: inline void setter_setMPanicSetupListIR (const GALGAS_panicSortedListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicSetupListIR = inValue ;
  }

  public: inline void setter_setMPanicLoopListIR (const GALGAS_panicSortedListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLoopListIR = inValue ;
  }

  public: inline void setter_setMTaskMapIR (const GALGAS_taskMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskMapIR = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GALGAS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMMaxBranchOfOnInstructions (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMaxBranchOfOnInstructions = inValue ;
  }

  public: inline void setter_setMTargetParameters (const GALGAS_targetParameters & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetParameters = inValue ;
  }

  public: inline void setter_setMDriverList (const GALGAS_driverListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverList = inValue ;
  }

  public: inline void setter_setMStaticArrayMapForIntermediate (const GALGAS_staticListInvokedFunctionSetMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticArrayMapForIntermediate = inValue ;
  }

  public: inline void setter_setMGlobalSyncInstanceMap (const GALGAS_globalSyncInstanceMapIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalSyncInstanceMap = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupArrayList = inValue ;
  }

  public: inline void setter_setMRoutineListIR (const GALGAS_routineListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineListIR = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_intermediateCodeStruct (void) ;

//--------------------------------- Native constructor
  public: GALGAS_intermediateCodeStruct (const GALGAS_staticEntityMap & in_mStaticEntityMap,
                                         const GALGAS_interruptMapIR & in_mInterruptMapIR,
                                         const GALGAS_externProcedureMapIR & in_mExternProcedureMapIR,
                                         const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                         const GALGAS_panicSortedListIR & in_mPanicLoopListIR,
                                         const GALGAS_taskMapIR & in_mTaskMapIR,
                                         const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                         const GALGAS_uint & in_mMaxBranchOfOnInstructions,
                                         const GALGAS_targetParameters & in_mTargetParameters,
                                         const GALGAS_driverListIR & in_mDriverList,
                                         const GALGAS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForIntermediate,
                                         const GALGAS_globalSyncInstanceMapIR & in_mGlobalSyncInstanceMap,
                                         const GALGAS_controlRegisterGroupArrayList & in_mControlRegisterGroupArrayList,
                                         const GALGAS_routineListIR & in_mRoutineListIR) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_intermediateCodeStruct extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_intermediateCodeStruct constructor_new (const class GALGAS_staticEntityMap & inOperand0,
                                                                      const class GALGAS_interruptMapIR & inOperand1,
                                                                      const class GALGAS_externProcedureMapIR & inOperand2,
                                                                      const class GALGAS_panicSortedListIR & inOperand3,
                                                                      const class GALGAS_panicSortedListIR & inOperand4,
                                                                      const class GALGAS_taskMapIR & inOperand5,
                                                                      const class GALGAS_globalTaskVariableList & inOperand6,
                                                                      const class GALGAS_uint & inOperand7,
                                                                      const class GALGAS_targetParameters & inOperand8,
                                                                      const class GALGAS_driverListIR & inOperand9,
                                                                      const class GALGAS_staticListInvokedFunctionSetMap & inOperand10,
                                                                      const class GALGAS_globalSyncInstanceMapIR & inOperand11,
                                                                      const class GALGAS_controlRegisterGroupArrayList & inOperand12,
                                                                      const class GALGAS_routineListIR & inOperand13
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_mControlRegisterGroupArrayList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_mDriverList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externProcedureMapIR getter_mExternProcedureMapIR (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalSyncInstanceMapIR getter_mGlobalSyncInstanceMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_mGlobalTaskVariableList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptMapIR getter_mInterruptMapIR (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mMaxBranchOfOnInstructions (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_panicSortedListIR getter_mPanicLoopListIR (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_panicSortedListIR getter_mPanicSetupListIR (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_mRoutineListIR (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListInvokedFunctionSetMap getter_mStaticArrayMapForIntermediate (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticEntityMap getter_mStaticEntityMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_targetParameters getter_mTargetParameters (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskMapIR getter_mTaskMapIR (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_intermediateCodeStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTemporariesStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticTemporariesStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mTemporaryIndex ;

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;

  public: GALGAS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForTemporaries ;

  public: GALGAS_stringset mProperty_mInitializedDriverSet ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_semanticTemporariesStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_semanticTemporariesStruct (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTemporaryIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTemporaryIndex = inValue ;
  }

  public: inline void setter_setMPanicSetupRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicSetupRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMPanicLoopRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLoopRoutinePriorityMap = inValue ;
  }

  public: inline void setter_setMStaticArrayMapForTemporaries (const GALGAS_staticListInvokedFunctionSetMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticArrayMapForTemporaries = inValue ;
  }

  public: inline void setter_setMInitializedDriverSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitializedDriverSet = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_semanticTemporariesStruct (void) ;

//--------------------------------- Native constructor
  public: GALGAS_semanticTemporariesStruct (const GALGAS_uint & in_mTemporaryIndex,
                                            const GALGAS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                            const GALGAS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                            const GALGAS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForTemporaries,
                                            const GALGAS_stringset & in_mInitializedDriverSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTemporariesStruct extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_semanticTemporariesStruct constructor_new (const class GALGAS_uint & inOperand0,
                                                                         const class GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                         const class GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                         const class GALGAS_staticListInvokedFunctionSetMap & inOperand3,
                                                                         const class GALGAS_stringset & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInitializedDriverSet (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicLoopRoutinePriorityMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_mPanicSetupRoutinePriorityMap (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListInvokedFunctionSetMap getter_mStaticArrayMapForTemporaries (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTemporaryIndex (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTemporariesStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticListInvokedFunctionSetMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_staticListInvokedFunctionSetMap : public cMapElement {
//--- Map attributes
  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--- Constructor
  public: cMapElement_staticListInvokedFunctionSetMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_stringset & in_mInvokedFunctionSet
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInvokedFunctionSetMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_staticListInvokedFunctionSetMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;

  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticListInvokedFunctionSetMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_staticListInvokedFunctionSetMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInvokedFunctionSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInvokedFunctionSet = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_staticListInvokedFunctionSetMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListInvokedFunctionSetMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_stringset & in_mInvokedFunctionSet) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInvokedFunctionSetMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListInvokedFunctionSetMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_stringset & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticListInvokedFunctionSetMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInvokedFunctionSet (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListInvokedFunctionSetMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimeBoolAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compiletimeBoolAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_compiletimeBoolAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compiletimeBoolAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compiletimeBoolAST * ptr (void) const { return (const cPtr_compiletimeBoolAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compiletimeBoolAST (const cPtr_compiletimeBoolAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compiletimeBoolAST extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compiletimeBoolAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compiletimeBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compiletimeBoolAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compiletimeBoolAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compiletimeBoolAST : public cPtr_abstractDeclarationAST {
//--- Attributes

//--- Constructor
  public: cPtr_compiletimeBoolAST (LOCATION_ARGS) ;

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
// Phase 2: pointer class for @abstractImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractImplicitConverterToBoolean : public acPtr_class {
//--- Attributes

//--- Constructor
  public: cPtr_abstractImplicitConverterToBoolean (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorUsage : public acPtr_class {
//--- Attributes

//--- Constructor
  public: cPtr_prefixOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @omnibusInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_omnibusInfixOperatorUsage : public acPtr_class {
//--- Attributes

//--- Constructor
  public: cPtr_omnibusInfixOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolXorOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolXorOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeBoolXorOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeBoolXorOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeBoolXorOperator * ptr (void) const { return (const cPtr_compileTimeBoolXorOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolXorOperator (const cPtr_compileTimeBoolXorOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolXorOperator extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeBoolXorOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeBoolXorOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolXorOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolXorOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeBoolXorOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeBoolOrOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolOrOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeBoolOrOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeBoolOrOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeBoolOrOperator * ptr (void) const { return (const cPtr_compileTimeBoolOrOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolOrOperator (const cPtr_compileTimeBoolOrOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolOrOperator extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeBoolOrOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeBoolOrOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeBoolOrOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolOrOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeBoolOrOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_compileTimeIntAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntAST * ptr (void) const { return (const cPtr_compileTimeIntAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntAST (const cPtr_compileTimeIntAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntAST extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntAST : public cPtr_abstractDeclarationAST {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntAST (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntModuloOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntModuloOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntModuloOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntModuloOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntModuloOperator * ptr (void) const { return (const cPtr_compileTimeIntModuloOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntModuloOperator (const cPtr_compileTimeIntModuloOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntModuloOperator extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntModuloOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntModuloOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntModuloOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntModuloOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntModuloOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntModuloOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntModuloZeroOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntModuloZeroOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntModuloZeroOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntModuloZeroOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntModuloZeroOperator * ptr (void) const { return (const cPtr_compileTimeIntModuloZeroOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntModuloZeroOperator (const cPtr_compileTimeIntModuloZeroOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntModuloZeroOperator extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntModuloZeroOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntModuloZeroOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntModuloZeroOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntModuloZeroOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntModuloZeroOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntModuloZeroOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntDivideOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntDivideOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntDivideOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntDivideOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntDivideOperator * ptr (void) const { return (const cPtr_compileTimeIntDivideOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntDivideOperator (const cPtr_compileTimeIntDivideOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntDivideOperator extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntDivideOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntDivideOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntDivideOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntDivideOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntDivideOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntDivideOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntDivideZeroOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntDivideZeroOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntDivideZeroOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntDivideZeroOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntDivideZeroOperator * ptr (void) const { return (const cPtr_compileTimeIntDivideZeroOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntDivideZeroOperator (const cPtr_compileTimeIntDivideZeroOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntDivideZeroOperator extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntDivideZeroOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntDivideZeroOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntDivideZeroOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntDivideZeroOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntDivideZeroOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntDivideZeroOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntMultiplyOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMultiplyOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntMultiplyOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntMultiplyOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntMultiplyOperator * ptr (void) const { return (const cPtr_compileTimeIntMultiplyOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntMultiplyOperator (const cPtr_compileTimeIntMultiplyOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMultiplyOperator extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntMultiplyOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntMultiplyOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntMultiplyOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntMultiplyOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntMultiplyOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntMultiplyOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntSubtractOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntSubtractOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntSubtractOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntSubtractOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntSubtractOperator * ptr (void) const { return (const cPtr_compileTimeIntSubtractOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntSubtractOperator (const cPtr_compileTimeIntSubtractOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntSubtractOperator extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntSubtractOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntSubtractOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntSubtractOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntSubtractOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntSubtractOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntSubtractOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntEqualOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntEqualOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntEqualOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntEqualOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntEqualOperator * ptr (void) const { return (const cPtr_compileTimeIntEqualOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntEqualOperator (const cPtr_compileTimeIntEqualOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntEqualOperator extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntEqualOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntEqualOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntEqualOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntEqualOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntEqualOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntAddOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntAddOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntAddOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntAddOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntAddOperator * ptr (void) const { return (const cPtr_compileTimeIntAddOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntAddOperator (const cPtr_compileTimeIntAddOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntAddOperator extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntAddOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntAddOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntAddOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntAddOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntAddOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntAddOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntBitWiseAndOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseAndOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntBitWiseAndOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntBitWiseAndOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntBitWiseAndOperator * ptr (void) const { return (const cPtr_compileTimeIntBitWiseAndOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntBitWiseAndOperator (const cPtr_compileTimeIntBitWiseAndOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseAndOperator extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntBitWiseAndOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseAndOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntBitWiseAndOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntBitWiseAndOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntBitWiseAndOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntBitWiseAndOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntShiftLeftOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntShiftLeftOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntShiftLeftOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntShiftLeftOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntShiftLeftOperator * ptr (void) const { return (const cPtr_compileTimeIntShiftLeftOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntShiftLeftOperator (const cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntShiftLeftOperator extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntShiftLeftOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntShiftLeftOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntShiftLeftOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntShiftLeftOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntShiftLeftOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntShiftLeftOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntShiftRightOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntShiftRightOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntShiftRightOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntShiftRightOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntShiftRightOperator * ptr (void) const { return (const cPtr_compileTimeIntShiftRightOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntShiftRightOperator (const cPtr_compileTimeIntShiftRightOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntShiftRightOperator extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntShiftRightOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntShiftRightOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntShiftRightOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntShiftRightOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntShiftRightOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntShiftRightOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntLessThanOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLessThanOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntLessThanOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntLessThanOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntLessThanOperator * ptr (void) const { return (const cPtr_compileTimeIntLessThanOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntLessThanOperator (const cPtr_compileTimeIntLessThanOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLessThanOperator extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntLessThanOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntLessThanOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntLessThanOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntLessThanOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntLessThanOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntLessThanOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntLowerOrEqualOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLowerOrEqualOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntLowerOrEqualOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntLowerOrEqualOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntLowerOrEqualOperator * ptr (void) const { return (const cPtr_compileTimeIntLowerOrEqualOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntLowerOrEqualOperator (const cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLowerOrEqualOperator extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntLowerOrEqualOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntLowerOrEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntLowerOrEqualOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntLowerOrEqualOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntLowerOrEqualOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntLowerOrEqualOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntXorOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntXorOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntXorOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntXorOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntXorOperator * ptr (void) const { return (const cPtr_compileTimeIntXorOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntXorOperator (const cPtr_compileTimeIntXorOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntXorOperator extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntXorOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntXorOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntXorOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntXorOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntXorOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntBitWiseOrOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseOrOperator : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntBitWiseOrOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntBitWiseOrOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntBitWiseOrOperator * ptr (void) const { return (const cPtr_compileTimeIntBitWiseOrOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntBitWiseOrOperator (const cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseOrOperator extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntBitWiseOrOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntBitWiseOrOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntBitWiseOrOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntBitWiseOrOperator : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntBitWiseOrOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntMinusOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMinusOperator : public GALGAS_prefixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntMinusOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntMinusOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntMinusOperator * ptr (void) const { return (const cPtr_compileTimeIntMinusOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntMinusOperator (const cPtr_compileTimeIntMinusOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMinusOperator extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntMinusOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntMinusOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntMinusOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntMinusOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntMinusOperator : public cPtr_prefixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntMinusOperator (LOCATION_ARGS) ;

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
// Phase 1: @compileTimeIntComplementOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntComplementOperator : public GALGAS_prefixOperatorUsage {
//--- Constructor
  public: GALGAS_compileTimeIntComplementOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_compileTimeIntComplementOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_compileTimeIntComplementOperator * ptr (void) const { return (const cPtr_compileTimeIntComplementOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntComplementOperator (const cPtr_compileTimeIntComplementOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntComplementOperator extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_compileTimeIntComplementOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntComplementOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeIntComplementOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeIntComplementOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeIntComplementOperator : public cPtr_prefixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_compileTimeIntComplementOperator (LOCATION_ARGS) ;

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
// Phase 1: @boolTypeAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolTypeAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_boolTypeAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolTypeAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_boolTypeAST * ptr (void) const { return (const cPtr_boolTypeAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_boolTypeAST (const cPtr_boolTypeAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolTypeAST extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolTypeAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolTypeAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolTypeAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolTypeAST : public cPtr_abstractDeclarationAST {
//--- Attributes

//--- Constructor
  public: cPtr_boolTypeAST (LOCATION_ARGS) ;

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
// Phase 1: @boolImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--- Constructor
  public: GALGAS_boolImplicitConverterToBoolean (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolImplicitConverterToBoolean constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_boolImplicitConverterToBoolean * ptr (void) const { return (const cPtr_boolImplicitConverterToBoolean *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_boolImplicitConverterToBoolean (const cPtr_boolImplicitConverterToBoolean * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolImplicitConverterToBoolean constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolImplicitConverterToBoolean class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {
//--- Attributes

//--- Constructor
  public: cPtr_boolImplicitConverterToBoolean (LOCATION_ARGS) ;

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
// Phase 1: @boolNotOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolNotOperator : public GALGAS_prefixOperatorUsage {
//--- Constructor
  public: GALGAS_boolNotOperator (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_boolNotOperator constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_boolNotOperator * ptr (void) const { return (const cPtr_boolNotOperator *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_boolNotOperator (const cPtr_boolNotOperator * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_boolNotOperator extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_boolNotOperator constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolNotOperator class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolNotOperator ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolNotOperator class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolNotOperator : public cPtr_prefixOperatorUsage {
//--- Attributes

//--- Constructor
  public: cPtr_boolNotOperator (LOCATION_ARGS) ;

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
// Phase 2: pointer class for @abstractAssignmentOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_abstractAssignmentOperatorUsage : public acPtr_class {
//--- Attributes

//--- Constructor
  public: cPtr_abstractAssignmentOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationConstantList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mConstantName ;

  public: GALGAS_bigint mProperty_mConstantValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_enumerationConstantList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_enumerationConstantList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMConstantValue (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_enumerationConstantList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & in_mConstantName,
                                                     const GALGAS_bigint & in_mConstantValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_enumerationConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_enumerationConstantList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bigint & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mConstantName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mConstantValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationConstantList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @structurePropertyListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_structurePropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mPropertyName ;

  public: GALGAS_propertyAttributeList mProperty_mPropertyAttributeList ;

  public: GALGAS_propertyVisibility mProperty_mVisibility ;

  public: GALGAS_lstring mProperty_mPropertyTypeName ;

  public: GALGAS_propertyKindAST mProperty_mPropertyKind ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_structurePropertyListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_structurePropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                      const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                      const GALGAS_propertyVisibility & in_mVisibility,
                                                      const GALGAS_lstring & in_mPropertyTypeName,
                                                      const GALGAS_propertyKindAST & in_mPropertyKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_structurePropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_structurePropertyListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_propertyAttributeList & inOperand1,
                                                                                   const class GALGAS_propertyVisibility & inOperand2,
                                                                                   const class GALGAS_lstring & inOperand3,
                                                                                   const class GALGAS_propertyKindAST & inOperand4
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_structurePropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyAttributeList getter_mPropertyAttributeList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyKindAST getter_mPropertyKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_propertyVisibility getter_mVisibility (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_structurePropertyListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structurePropertyListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyAttributeList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyAttributeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mAttributeName ;

  public: GALGAS_lbigint mProperty_mAttributeValue ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_propertyAttributeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_propertyAttributeList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAttributeValue (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyAttributeList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyAttributeList_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                   const GALGAS_lbigint & in_mAttributeValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyAttributeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyAttributeList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_lbigint & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyAttributeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mAttributeValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyAttributeList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mPropertyName ;

  public: GALGAS_omnibusType mProperty_mType ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_propertyList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_propertyList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_propertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_propertyList_2D_element (const GALGAS_string & in_mPropertyName,
                                          const GALGAS_omnibusType & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_propertyList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_omnibusType & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedOperandIRList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sortedOperandIRList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_objectIR mProperty_mOperand ;

  public: GALGAS_uint mProperty_mIndex ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_sortedOperandIRList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMOperand (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_sortedOperandIRList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_sortedOperandIRList_2D_element (const GALGAS_objectIR & in_mOperand,
                                                 const GALGAS_uint & in_mIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedOperandIRList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sortedOperandIRList_2D_element constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sortedOperandIRList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedOperandIRList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMSructureTypeDefinitionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMSructureTypeDefinitionIR : public GALGAS_userLLVMTypeDefinitionIR {
//--- Constructor
  public: GALGAS_userLLVMSructureTypeDefinitionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_userLLVMSructureTypeDefinitionIR constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_userLLVMSructureTypeDefinitionIR * ptr (void) const { return (const cPtr_userLLVMSructureTypeDefinitionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMSructureTypeDefinitionIR (const cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMSructureTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_userLLVMSructureTypeDefinitionIR constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_propertyList & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyList (class GALGAS_propertyList inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_mPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_userLLVMSructureTypeDefinitionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @userLLVMSructureTypeDefinitionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_userLLVMSructureTypeDefinitionIR : public cPtr_userLLVMTypeDefinitionIR {
//--- Attributes
  public: GALGAS_propertyList mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_userLLVMSructureTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                 const GALGAS_propertyList & in_mPropertyList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_propertyList getter_mPropertyList (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMPropertyList (GALGAS_propertyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_integerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_integerDeclarationAST * ptr (void) const { return (const cPtr_integerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_integerDeclarationAST (const cPtr_integerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_integerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerDeclarationAST constructor_new (const class GALGAS_bool & inOperand0,
                                                                     const class GALGAS_uint & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMIsSigned (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSize (class GALGAS_uint inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSigned (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mSize (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @integerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_integerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public: GALGAS_bool mProperty_mIsSigned ;
  public: GALGAS_uint mProperty_mSize ;

//--- Constructor
  public: cPtr_integerDeclarationAST (const GALGAS_bool & in_mIsSigned,
                                      const GALGAS_uint & in_mSize
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsSigned (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMIsSigned (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_mSize (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMSize (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@integerDeclarationAST typeName'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_integerDeclarationAST_typeName) (const class cPtr_integerDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_typeName (const int32_t inClassIndex,
                                    enterExtensionGetter_integerDeclarationAST_typeName inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * ptr (void) const { return (const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage constructor_new (const class GALGAS_string & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMOperation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfix_integer_compileTimeInt_operatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public: GALGAS_string mProperty_mLLVMOperation ;

//--- Constructor
  public: cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
                                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMOperation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * ptr (void) const { return (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage extractObject (const GALGAS_object & inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage constructor_new (const class GALGAS_string & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (class GALGAS_string inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mLLVMOperation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @inlineInfix_compileTimeInt_integer_operatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public: GALGAS_string mProperty_mLLVMOperation ;

//--- Constructor
  public: cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
                                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public: VIRTUAL_IN_DEBUG GALGAS_string getter_mLLVMOperation (LOCATION_ARGS) const ;
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMOperation (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public: GALGAS_literalStringDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public: inline const class cPtr_literalStringDeclarationAST * ptr (void) const { return (const cPtr_literalStringDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringDeclarationAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalStringDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalStringDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes

//--- Constructor
  public: cPtr_literalStringDeclarationAST (LOCATION_ARGS) ;

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
// Phase 1: @controlRegisterNameListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterNameListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRegisterName ;

  public: GALGAS_controlRegisterKind mProperty_mControlRegisterKind ;

  public: GALGAS_bool mProperty_mIsReadOnly ;

  public: GALGAS_expressionAST mProperty_mRegisterOffset ;

  public: GALGAS_location mProperty_mRegisterOffsetLocation ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterNameListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterNameListAST_2D_element (const GALGAS_lstring & in_mRegisterName,
                                                        const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                        const GALGAS_bool & in_mIsReadOnly,
                                                        const GALGAS_expressionAST & in_mRegisterOffset,
                                                        const GALGAS_location & in_mRegisterOffsetLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterNameListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterNameListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_controlRegisterKind & inOperand1,
                                                                                     const class GALGAS_bool & inOperand2,
                                                                                     const class GALGAS_expressionAST & inOperand3,
                                                                                     const class GALGAS_location & inOperand4
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterNameListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterKind getter_mControlRegisterKind (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsReadOnly (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterName (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mRegisterOffset (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterOffsetLocation (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterNameListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterDeclarationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_controlRegisterNameListAST mProperty_mRegisterArrayList ;

  public: GALGAS_lstring mProperty_mRegisterTypeName ;

  public: GALGAS_controlRegisterBitSliceList mProperty_mRegisterBitSliceList ;

  public: GALGAS_location mProperty_mRegisterBitSliceListLocation ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterDeclarationList_2D_element constructor_default (LOCATION_ARGS) ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterDeclarationList_2D_element (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                            const GALGAS_lstring & in_mRegisterTypeName,
                                                            const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                            const GALGAS_location & in_mRegisterBitSliceListLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterDeclarationList_2D_element constructor_new (const class GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                         const class GALGAS_lstring & inOperand1,
                                                                                         const class GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                         const class GALGAS_location & inOperand3
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterNameListAST getter_mRegisterArrayList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSliceList getter_mRegisterBitSliceList (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mRegisterBitSliceListLocation (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRegisterTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterDeclarationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterDeclarationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterBitSliceList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterBitSliceList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_controlRegisterBitSlice mProperty_mRegisterBitSlice ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterBitSliceList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterBitSlice (const GALGAS_controlRegisterBitSlice & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitSlice = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterBitSliceList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterBitSliceList_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterBitSliceList_2D_element constructor_new (const class GALGAS_controlRegisterBitSlice & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterBitSliceList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterBitSlice getter_mRegisterBitSlice (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterBitSliceList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;

