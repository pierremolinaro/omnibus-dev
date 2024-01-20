#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_taskMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_taskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_taskMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_taskMap (const GALGAS_taskMap & inSource) ;
  public: GALGAS_taskMap & operator = (const GALGAS_taskMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskMap extractObject (const GALGAS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_taskMap class_func_mapWithMapToOverride (const class GALGAS_taskMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_taskMap add_operation (const GALGAS_taskMap & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTaskTypeForKey (const class GALGAS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskMap getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_taskMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                    const GALGAS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_taskMap ;
 
} ; // End of GALGAS_taskMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_taskMap : public cGenericAbstractEnumerator {
  public: cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mTaskType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_taskMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@taskMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMap : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mTaskType ;

//--- Constructor
  public: cMapElement_taskMap (const GALGAS_lstring & inKey,
                               const GALGAS_omnibusType & in_mTaskType
                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mTaskType ;
  public: inline GALGAS_omnibusType readProperty_mTaskType (void) const {
    return mProperty_mTaskType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_taskMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTaskType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_taskMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_taskMap_2D_element (const GALGAS_lstring & in_lkey,
                                     const GALGAS_omnibusType & in_mTaskType) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskMap_2D_element extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_omnibusType & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_taskMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalTaskVariableList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_globalTaskVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_globalTaskVariableList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mTaskName,
                                                 const class GALGAS_string & in_mTaskTypeName,
                                                 const class GALGAS_objectIR & in_mInitialValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalTaskVariableList extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalTaskVariableList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_globalTaskVariableList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_objectIR & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_objectIR & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_globalTaskVariableList add_operation (const GALGAS_globalTaskVariableList & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_objectIR constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_objectIR constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_objectIR & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_objectIR & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_objectIR & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueAtIndex (class GALGAS_objectIR constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_objectIR & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_objectIR & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_globalTaskVariableList ;
 
} ; // End of GALGAS_globalTaskVariableList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalTaskVariableList : public cGenericAbstractEnumerator {
  public: cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mTaskTypeName (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalTaskVariableList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sortedOperandIRList sorted list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sortedOperandIRList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_sortedOperandIRList (void) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sortedOperandIRList extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sortedOperandIRList class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_sortedOperandIRList class_func_sortedListWithValue (const class GALGAS_objectIR & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sortedOperandIRList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_objectIR & inOperand0,
                                                     const class GALGAS_uint & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_objectIR inArgument0,
                                               class GALGAS_uint inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_objectIR & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_objectIR & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_objectIR & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_objectIR & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_sortedOperandIRList ;
 
} ; // End of GALGAS_sortedOperandIRList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sortedOperandIRList : public cGenericAbstractEnumerator {
  public: cEnumerator_sortedOperandIRList (const GALGAS_sortedOperandIRList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_objectIR current_mOperand (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sortedOperandIRList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @operandIRList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_operandIRList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_operandIRList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_operandIRList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_objectIR & in_mOperand
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_operandIRList extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_operandIRList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_operandIRList class_func_listWithValue (const class GALGAS_objectIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_operandIRList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_objectIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_operandIRList add_operation (const GALGAS_operandIRList & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_objectIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_objectIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_objectIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_objectIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_objectIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandAtIndex (class GALGAS_objectIR constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_objectIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_objectIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_operandIRList ;
 
} ; // End of GALGAS_operandIRList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_operandIRList : public cGenericAbstractEnumerator {
  public: cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_objectIR current_mOperand (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_operandIRList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @objectIR enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_reference : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_reference (const GALGAS_omnibusType inAssociatedValue0,
                                                    const GALGAS_string inAssociatedValue1
                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_reference (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_null : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_null (const GALGAS_omnibusType inAssociatedValue0
                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_null (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_llvmNamedValue : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_llvmNamedValue (const GALGAS_omnibusType inAssociatedValue0,
                                                         const GALGAS_string inAssociatedValue1
                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_llvmNamedValue (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_literalInteger : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_omnibusType inAssociatedValue0,
                                                         const GALGAS_bigint inAssociatedValue1
                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_literalInteger (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_llvmStructureValue : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_sortedOperandIRList mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_llvmStructureValue (const GALGAS_omnibusType inAssociatedValue0,
                                                             const GALGAS_sortedOperandIRList inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_llvmStructureValue (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_literalString : public cEnumAssociatedValues {
  public: const GALGAS_uint mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_literalString (const GALGAS_uint inAssociatedValue0,
                                                        const GALGAS_uint inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_literalString (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_zero : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_zero (const GALGAS_omnibusType inAssociatedValue0
                                               COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_zero (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_llvmArrayStaticValues : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_operandIRList mAssociatedValue1 ;
  public: const GALGAS_uint mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_llvmArrayStaticValues (const GALGAS_omnibusType inAssociatedValue0,
                                                                const GALGAS_operandIRList inAssociatedValue1,
                                                                const GALGAS_uint inAssociatedValue2
                                                                COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_llvmArrayStaticValues (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_llvmArrayDynamicValues : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_operandIRList mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (const GALGAS_omnibusType inAssociatedValue0,
                                                                 const GALGAS_operandIRList inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;
  public: const GALGAS_objectIR mAssociatedValue2 ;
  public: const GALGAS_uint mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                       const GALGAS_uint inAssociatedValue1,
                                                                       const GALGAS_objectIR inAssociatedValue2,
                                                                       const GALGAS_uint inAssociatedValue3
                                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;
  public: const GALGAS_objectIR mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType inAssociatedValue0,
                                                                        const GALGAS_uint inAssociatedValue1,
                                                                        const GALGAS_objectIR inAssociatedValue2
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalTaskVariableList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_globalTaskVariableList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTaskName ;
  public: inline GALGAS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GALGAS_string mProperty_mTaskTypeName ;
  public: inline GALGAS_string readProperty_mTaskTypeName (void) const {
    return mProperty_mTaskTypeName ;
  }

  public: GALGAS_objectIR mProperty_mInitialValue ;
  public: inline GALGAS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_globalTaskVariableList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMTaskTypeName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskTypeName = inValue ;
  }

  public: inline void setter_setMInitialValue (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_globalTaskVariableList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & in_mTaskName,
                                                    const GALGAS_string & in_mTaskTypeName,
                                                    const GALGAS_objectIR & in_mInitialValue) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalTaskVariableList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalTaskVariableList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_objectIR & inOperand2,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_globalTaskVariableList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_globalTaskVariableList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDecoratedDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractDecoratedDeclaration : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractDecoratedDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractDecoratedDeclaration (const class cPtr_abstractDecoratedDeclaration * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDecoratedDeclaration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractDecoratedDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractDecoratedDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractDecoratedDeclaration : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext inContext,
           class GALGAS_semanticTemporariesStruct & ioTemporaries,
           class GALGAS_intermediateCodeStruct & ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractDecoratedDeclaration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractDecoratedDeclaration_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractDecoratedDeclaration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractDecoratedDeclaration_2D_weak (const class GALGAS_abstractDecoratedDeclaration & inSource) ;

  public: GALGAS_abstractDecoratedDeclaration_2D_weak & operator = (const class GALGAS_abstractDecoratedDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractDecoratedDeclaration bang_abstractDecoratedDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractDecoratedDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractDecoratedDeclaration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractDecoratedDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractDecoratedDeclaration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationDecorationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_declarationDecorationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_declarationDecorationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationDecorationList extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_declarationDecorationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_declarationDecorationList class_func_listWithValue (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_declarationDecorationList add_operation (const GALGAS_declarationDecorationList & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractDecoratedDeclaration constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDecoratedDeclaration constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeclarationAtIndex (class GALGAS_abstractDecoratedDeclaration constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractDecoratedDeclaration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_declarationDecorationList ;
 
} ; // End of GALGAS_declarationDecorationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_declarationDecorationList : public cGenericAbstractEnumerator {
  public: cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                 const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractDecoratedDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_declarationDecorationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @declarationDecorationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_declarationDecorationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractDecoratedDeclaration mProperty_mDeclaration ;
  public: inline GALGAS_abstractDecoratedDeclaration readProperty_mDeclaration (void) const {
    return mProperty_mDeclaration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_declarationDecorationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclaration (const GALGAS_abstractDecoratedDeclaration & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclaration = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_declarationDecorationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_declarationDecorationList_2D_element (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_declarationDecorationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_declarationDecorationList_2D_element class_func_new (const class GALGAS_abstractDecoratedDeclaration & inOperand0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_declarationDecorationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_declarationDecorationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@constantMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_constantMap : public cMapElement {
//--- Map attributes
  public: GALGAS_bigint mProperty_mIndex ;
  public: GALGAS_lstring mProperty_mClassTypeName ;

//--- Constructor
  public: cMapElement_constantMap (const GALGAS_lstring & inKey,
                                   const GALGAS_bigint & in_mIndex,
                                   const GALGAS_lstring & in_mClassTypeName
                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constantMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_bigint mProperty_mIndex ;
  public: inline GALGAS_bigint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_lstring mProperty_mClassTypeName ;
  public: inline GALGAS_lstring readProperty_mClassTypeName (void) const {
    return mProperty_mClassTypeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_constantMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMClassTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mClassTypeName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constantMap_2D_element (const GALGAS_lstring & in_lkey,
                                         const GALGAS_bigint & in_mIndex,
                                         const GALGAS_lstring & in_mClassTypeName) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constantMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bigint & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constantMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                           Phase 1: @constructorValue enum                                           *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constructorValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_constructorValue (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_null,
    kEnum_simple,
    kEnum_structure,
    kEnum_arrayValue
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorValue extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constructorValue class_func_arrayValue (const class GALGAS_omnibusType & inOperand0,
                                                                      const class GALGAS_uint & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_constructorValue class_func_null (LOCATION_ARGS) ;

  public: static class GALGAS_constructorValue class_func_simple (const class GALGAS_bigint & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_constructorValue class_func_structure (const class GALGAS_sortedOperandIRList & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_arrayValue (class GALGAS_omnibusType & outArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_simple (class GALGAS_bigint & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_structure (class GALGAS_sortedOperandIRList & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSimple (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructure (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_arrayValue (class GALGAS_omnibusType & outOperand0,
                                                     class GALGAS_uint & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_null () const ;

  public: VIRTUAL_IN_DEBUG bool optional_simple (class GALGAS_bigint & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_structure (class GALGAS_sortedOperandIRList & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constructorValue class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorSignature list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constructorSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_constructorSignature (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_constructorSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mSelector,
                                                 const class GALGAS_omnibusType & in_mType,
                                                 const class GALGAS_uint & in_mFieldIndex
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorSignature extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constructorSignature class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_constructorSignature class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_omnibusType & inOperand1,
                                                                             const class GALGAS_uint & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_constructorSignature inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_uint & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_constructorSignature add_operation (const GALGAS_constructorSignature & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               class GALGAS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldIndexAtIndex (class GALGAS_uint constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_constructorSignature ;
 
} ; // End of GALGAS_constructorSignature class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_constructorSignature : public cGenericAbstractEnumerator {
  public: cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mSelector (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mFieldIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_constructorSignature_2D_element current (LOCATION_ARGS) const ;
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
  public: GALGAS_constructorSignature mProperty_mSignature ;
  public: GALGAS_constructorValue mProperty_mInitValue ;

//--- Constructor
  public: cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                      const GALGAS_constructorSignature & in_mSignature,
                                      const GALGAS_constructorValue & in_mInitValue
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_constructorSignature mProperty_mSignature ;
  public: inline GALGAS_constructorSignature readProperty_mSignature (void) const {
    return mProperty_mSignature ;
  }

  public: GALGAS_constructorValue mProperty_mInitValue ;
  public: inline GALGAS_constructorValue readProperty_mInitValue (void) const {
    return mProperty_mInitValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSignature (const GALGAS_constructorSignature & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSignature = inValue ;
  }

  public: inline void setter_setMInitValue (const GALGAS_constructorValue & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_constructorSignature & in_mSignature,
                                            const GALGAS_constructorValue & in_mInitValue) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constructorMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_constructorSignature & inOperand1,
                                                                        const class GALGAS_constructorValue & inOperand2,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @constructorValue enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_constructorValue_simple : public cEnumAssociatedValues {
  public: const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_constructorValue_simple (const GALGAS_bigint inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_constructorValue_simple (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_constructorValue_structure : public cEnumAssociatedValues {
  public: const GALGAS_sortedOperandIRList mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_constructorValue_structure (const GALGAS_sortedOperandIRList inAssociatedValue0
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_constructorValue_structure (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_constructorValue_arrayValue : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_constructorValue_arrayValue (const GALGAS_omnibusType inAssociatedValue0,
                                                             const GALGAS_uint inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_constructorValue_arrayValue (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusTypeAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusTypeAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GALGAS_omnibusTypeAttributes (void) ;

//--------------------------------- Private constructor
  private: GALGAS_omnibusTypeAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_omnibusTypeAttributes extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_omnibusTypeAttributes class_func_all (LOCATION_ARGS) ;

  public: static class GALGAS_omnibusTypeAttributes class_func_copyable (LOCATION_ARGS) ;

  public: static class GALGAS_omnibusTypeAttributes class_func_instanciable (LOCATION_ARGS) ;

  public: static class GALGAS_omnibusTypeAttributes class_func_none (LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_and (const GALGAS_omnibusTypeAttributes & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_or (const GALGAS_omnibusTypeAttributes & inOperand
                                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_xor (const GALGAS_omnibusTypeAttributes & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes substract_operation (const GALGAS_omnibusTypeAttributes & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_omnibusTypeAttributes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_all (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_copyable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_instanciable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_none (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_omnibusTypeAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ;

//--------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @subscript enum                                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_subscript : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_subscript (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_noSubscript,
    kEnum_staticSubscript,
    kEnum_literalString
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_subscript extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_subscript class_func_literalString (LOCATION_ARGS) ;

  public: static class GALGAS_subscript class_func_noSubscript (LOCATION_ARGS) ;

  public: static class GALGAS_subscript class_func_staticSubscript (const class GALGAS_omnibusType & inOperand0,
                                                                    const class GALGAS_bigint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_subscript & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_staticSubscript (class GALGAS_omnibusType & outArgument0,
                                                        class GALGAS_bigint & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoSubscript (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStaticSubscript (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_literalString () const ;

  public: VIRTUAL_IN_DEBUG bool optional_noSubscript () const ;

  public: VIRTUAL_IN_DEBUG bool optional_staticSubscript (class GALGAS_omnibusType & outOperand0,
                                                          class GALGAS_bigint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_subscript class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @subscript enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_subscript_staticSubscript : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_subscript_staticSubscript (const GALGAS_omnibusType inAssociatedValue0,
                                                           const GALGAS_bigint inAssociatedValue1
                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_subscript_staticSubscript (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//                                               Phase 1: @typeKind enum                                               *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_void,
    kEnum_boolean,
    kEnum_literalString,
    kEnum_enumeration,
    kEnum_structure,
    kEnum_syncTool,
    kEnum_integer,
    kEnum_compileTimeInteger,
    kEnum_compileTimeBool,
    kEnum_llvmType,
    kEnum_generic,
    kEnum_opaque,
    kEnum_staticArrayType,
    kEnum_dynamicArrayType,
    kEnum_function
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeKind extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeKind class_func_boolean (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_compileTimeBool (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_compileTimeInteger (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_dynamicArrayType (const class GALGAS_omnibusType & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_enumeration (const class GALGAS_uint & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_function (const class GALGAS_mode & inOperand0,
                                                            const class GALGAS_routineTypedSignature & inOperand1,
                                                            const class GALGAS_unifiedTypeMapEntry & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_generic (const class GALGAS_genericFormalParameterList & inOperand0,
                                                           const class GALGAS_ctExpressionAST & inOperand1,
                                                           const class GALGAS_llvmStringDefinition & inOperand2
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_integer (const class GALGAS_bigint & inOperand0,
                                                           const class GALGAS_bigint & inOperand1,
                                                           const class GALGAS_bool & inOperand2,
                                                           const class GALGAS_uint & inOperand3
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_literalString (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_llvmType (const class GALGAS_bigint & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_opaque (const class GALGAS_bigint & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_staticArrayType (const class GALGAS_omnibusType & inOperand0,
                                                                   const class GALGAS_bigint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_structure (const class GALGAS_propertyList & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_syncTool (LOCATION_ARGS) ;

  public: static class GALGAS_typeKind class_func_void (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_dynamicArrayType (class GALGAS_omnibusType & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_enumeration (class GALGAS_uint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_function (class GALGAS_mode & outArgument0,
                                                 class GALGAS_routineTypedSignature & outArgument1,
                                                 class GALGAS_unifiedTypeMapEntry & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_generic (class GALGAS_genericFormalParameterList & outArgument0,
                                                class GALGAS_ctExpressionAST & outArgument1,
                                                class GALGAS_llvmStringDefinition & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_integer (class GALGAS_bigint & outArgument0,
                                                class GALGAS_bigint & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_uint & outArgument3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_llvmType (class GALGAS_bigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_opaque (class GALGAS_bigint & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_staticArrayType (class GALGAS_omnibusType & outArgument0,
                                                        class GALGAS_bigint & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_structure (class GALGAS_propertyList & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolean (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTimeBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTimeInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDynamicArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumeration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGeneric (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInteger (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOpaque (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStaticArrayType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructure (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSyncTool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVoid (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_boolean () const ;

  public: VIRTUAL_IN_DEBUG bool optional_compileTimeBool () const ;

  public: VIRTUAL_IN_DEBUG bool optional_compileTimeInteger () const ;

  public: VIRTUAL_IN_DEBUG bool optional_dynamicArrayType (class GALGAS_omnibusType & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_enumeration (class GALGAS_uint & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_function (class GALGAS_mode & outOperand0,
                                                   class GALGAS_routineTypedSignature & outOperand1,
                                                   class GALGAS_unifiedTypeMapEntry & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_generic (class GALGAS_genericFormalParameterList & outOperand0,
                                                  class GALGAS_ctExpressionAST & outOperand1,
                                                  class GALGAS_llvmStringDefinition & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_integer (class GALGAS_bigint & outOperand0,
                                                  class GALGAS_bigint & outOperand1,
                                                  class GALGAS_bool & outOperand2,
                                                  class GALGAS_uint & outOperand3) const ;

  public: VIRTUAL_IN_DEBUG bool optional_literalString () const ;

  public: VIRTUAL_IN_DEBUG bool optional_llvmType (class GALGAS_bigint & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_opaque (class GALGAS_bigint & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_staticArrayType (class GALGAS_omnibusType & outOperand0,
                                                          class GALGAS_bigint & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_structure (class GALGAS_propertyList & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_syncTool () const ;

  public: VIRTUAL_IN_DEBUG bool optional_void () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmStringDefinition list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_llvmStringDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_llvmStringDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_llvmStringDefinitionElement & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmStringDefinition extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_llvmStringDefinition class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_llvmStringDefinition class_func_listWithValue (const class GALGAS_llvmStringDefinitionElement & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_llvmStringDefinition inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_llvmStringDefinitionElement & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_llvmStringDefinition add_operation (const GALGAS_llvmStringDefinition & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_llvmStringDefinitionElement constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_llvmStringDefinitionElement constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GALGAS_llvmStringDefinitionElement constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinitionElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinition getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinition getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinition getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_llvmStringDefinition ;
 
} ; // End of GALGAS_llvmStringDefinition class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_llvmStringDefinition : public cGenericAbstractEnumerator {
  public: cEnumerator_llvmStringDefinition (const GALGAS_llvmStringDefinition & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_llvmStringDefinitionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_llvmStringDefinition_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @typeKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_enumeration : public cEnumAssociatedValues {
  public: const GALGAS_uint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_enumeration (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_structure : public cEnumAssociatedValues {
  public: const GALGAS_propertyList mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_structure (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_integer : public cEnumAssociatedValues {
  public: const GALGAS_bigint mAssociatedValue0 ;
  public: const GALGAS_bigint mAssociatedValue1 ;
  public: const GALGAS_bool mAssociatedValue2 ;
  public: const GALGAS_uint mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint inAssociatedValue0,
                                                  const GALGAS_bigint inAssociatedValue1,
                                                  const GALGAS_bool inAssociatedValue2,
                                                  const GALGAS_uint inAssociatedValue3
                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_integer (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_llvmType : public cEnumAssociatedValues {
  public: const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_llvmType (const GALGAS_bigint inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_llvmType (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_generic : public cEnumAssociatedValues {
  public: const GALGAS_genericFormalParameterList mAssociatedValue0 ;
  public: const GALGAS_ctExpressionAST mAssociatedValue1 ;
  public: const GALGAS_llvmStringDefinition mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_generic (const GALGAS_genericFormalParameterList inAssociatedValue0,
                                                  const GALGAS_ctExpressionAST inAssociatedValue1,
                                                  const GALGAS_llvmStringDefinition inAssociatedValue2
                                                  COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_generic (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_opaque : public cEnumAssociatedValues {
  public: const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint inAssociatedValue0
                                                 COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_opaque (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_staticArrayType : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_staticArrayType (const GALGAS_omnibusType inAssociatedValue0,
                                                          const GALGAS_bigint inAssociatedValue1
                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_staticArrayType (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_dynamicArrayType : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_dynamicArrayType (const GALGAS_omnibusType inAssociatedValue0
                                                           COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_dynamicArrayType (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeKind_function : public cEnumAssociatedValues {
  public: const GALGAS_mode mAssociatedValue0 ;
  public: const GALGAS_routineTypedSignature mAssociatedValue1 ;
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_typeKind_function (const GALGAS_mode inAssociatedValue0,
                                                   const GALGAS_routineTypedSignature inAssociatedValue1,
                                                   const GALGAS_unifiedTypeMapEntry inAssociatedValue2
                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeKind_function (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @omnibusType class
//
//--------------------------------------------------------------------------------------------------

class cPtr_omnibusType : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter arcList
  public: virtual class GALGAS_arcAssignmentList getter_arcList (const class GALGAS_uintlist inPropertyIndexPath,
           Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter copyable
  public: virtual class GALGAS_bool getter_copyable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter deinitNeeded
  public: virtual class GALGAS_bool getter_deinitNeeded (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter descriptionForHTMLFile
  public: virtual class GALGAS_string getter_descriptionForHTMLFile (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter instanciable
  public: virtual class GALGAS_bool getter_instanciable (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter isCompileTimeType
  public: virtual class GALGAS_bool getter_isCompileTimeType (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension getter llvmTypeName
  public: virtual class GALGAS_string getter_llvmTypeName (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Extension method checkIsCompileTimeType
  public: virtual void method_checkIsCompileTimeType (const class GALGAS_location inErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method checkIsNotCompileTimeType
  public: virtual void method_checkIsNotCompileTimeType (const class GALGAS_location inErrorLocation,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateInsulate
  public: virtual void method_generateInsulate (const class GALGAS_string inOmnibusName,
           class GALGAS_string & ioLLVMcode,
           class GALGAS_generationAdds & ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateRelease
  public: virtual void method_generateRelease (const class GALGAS_string inOmnibusName,
           class GALGAS_string & ioLLVMcode,
           class GALGAS_generationAdds & ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method generateRetain
  public: virtual void method_generateRetain (const class GALGAS_string inOmnibusName,
           class GALGAS_string & ioLLVMcode,
           class GALGAS_generationAdds & ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GALGAS_subscript mProperty_subscript ;
  public: GALGAS_omnibusTypeAttributes mProperty_attributes ;
  public: GALGAS_string mProperty_omnibusTypeDescriptionName ;
  public: GALGAS_typeKind mProperty_kind ;
  public: GALGAS_string mProperty_llvmBaseTypeName ;

//--- Constructor
  public: cPtr_omnibusType (const GALGAS_subscript & in_subscript,
                            const GALGAS_omnibusTypeAttributes & in_attributes,
                            const GALGAS_string & in_omnibusTypeDescriptionName,
                            const GALGAS_typeKind & in_kind,
                            const GALGAS_string & in_llvmBaseTypeName
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @constructorSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_constructorSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mSelector ;
  public: inline GALGAS_string readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_uint mProperty_mFieldIndex ;
  public: inline GALGAS_uint readProperty_mFieldIndex (void) const {
    return mProperty_mFieldIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_constructorSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMFieldIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldIndex = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_constructorSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_constructorSignature_2D_element (const GALGAS_string & in_mSelector,
                                                  const GALGAS_omnibusType & in_mType,
                                                  const GALGAS_uint & in_mFieldIndex) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_constructorSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_constructorSignature_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_omnibusType & inOperand1,
                                                                              const class GALGAS_uint & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_constructorSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @propertyGetterKind enum                                          *
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGetterKind extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyGetterKind class_func_computedProperty (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GALGAS_routineLLVMNameDict & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyGetterKind class_func_constantProperty (const class GALGAS_objectIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertyGetterKind class_func_storedProperty (const class GALGAS_omnibusType & inOperand0,
                                                                            const class GALGAS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGetterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_computedProperty (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                         class GALGAS_routineLLVMNameDict & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_constantProperty (class GALGAS_objectIR & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_storedProperty (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_computedProperty (class GALGAS_unifiedTypeMapEntry & outOperand0,
                                                           class GALGAS_routineLLVMNameDict & outOperand1) const ;

  public: VIRTUAL_IN_DEBUG bool optional_constantProperty (class GALGAS_objectIR & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_storedProperty (class GALGAS_omnibusType & outOperand0,
                                                         class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyGetterKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyGetterMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyGetterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertyGetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_propertyVisibility mProperty_mVisibility ;
  public: inline GALGAS_propertyVisibility readProperty_mVisibility (void) const {
    return mProperty_mVisibility ;
  }

  public: GALGAS_propertyGetterKind mProperty_mAccess ;
  public: inline GALGAS_propertyGetterKind readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertyGetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertyGetterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_propertyVisibility & inOperand1,
                                                                           const class GALGAS_propertyGetterKind & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertyGetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertyGetterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyGetterKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyGetterKind_storedProperty : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyGetterKind_storedProperty (const GALGAS_omnibusType inAssociatedValue0,
                                                                   const GALGAS_uint inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyGetterKind_storedProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyGetterKind_computedProperty : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;
  public: const GALGAS_routineLLVMNameDict mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyGetterKind_computedProperty (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                     const GALGAS_routineLLVMNameDict inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyGetterKind_computedProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyGetterKind_constantProperty : public cEnumAssociatedValues {
  public: const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_propertyGetterKind_constantProperty (const GALGAS_objectIR inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertyGetterKind_constantProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @propertySetterKind enum                                          *
//
//--------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertySetterKind extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertySetterKind class_func_computedProperty (const class GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                              const class GALGAS_routineLLVMNameDict & inOperand1,
                                                                              const class GALGAS_routineLLVMNameDict & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_propertySetterKind class_func_storedProperty (const class GALGAS_omnibusType & inOperand0,
                                                                            const class GALGAS_uint & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertySetterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_computedProperty (class GALGAS_unifiedTypeMapEntry & outArgument0,
                                                         class GALGAS_routineLLVMNameDict & outArgument1,
                                                         class GALGAS_routineLLVMNameDict & outArgument2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_storedProperty (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_computedProperty (class GALGAS_unifiedTypeMapEntry & outOperand0,
                                                           class GALGAS_routineLLVMNameDict & outOperand1,
                                                           class GALGAS_routineLLVMNameDict & outOperand2) const ;

  public: VIRTUAL_IN_DEBUG bool optional_storedProperty (class GALGAS_omnibusType & outOperand0,
                                                         class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertySetterKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertySetterMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @propertySetterMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_propertySetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_propertyVisibility mProperty_mVisibility ;
  public: inline GALGAS_propertyVisibility readProperty_mVisibility (void) const {
    return mProperty_mVisibility ;
  }

  public: GALGAS_propertySetterKind mProperty_mAccess ;
  public: inline GALGAS_propertySetterKind readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_propertySetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_propertySetterMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_propertyVisibility & inOperand1,
                                                                           const class GALGAS_propertySetterKind & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_propertySetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_propertySetterMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @propertySetterKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertySetterKind_storedProperty : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;
  public: const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public: cEnumAssociatedValues_propertySetterKind_storedProperty (const GALGAS_omnibusType inAssociatedValue0,
                                                                   const GALGAS_uint inAssociatedValue1
                                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertySetterKind_storedProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertySetterKind_computedProperty : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapEntry mAssociatedValue0 ;
  public: const GALGAS_routineLLVMNameDict mAssociatedValue1 ;
  public: const GALGAS_routineLLVMNameDict mAssociatedValue2 ;

//--- Constructor
  public: cEnumAssociatedValues_propertySetterKind_computedProperty (const GALGAS_unifiedTypeMapEntry inAssociatedValue0,
                                                                     const GALGAS_routineLLVMNameDict inAssociatedValue1,
                                                                     const GALGAS_routineLLVMNameDict inAssociatedValue2
                                                                     COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_propertySetterKind_computedProperty (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticStringMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_staticStringMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_staticStringMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_staticStringMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticStringMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticStringMap (const GALGAS_staticStringMap & inSource) ;
  public: GALGAS_staticStringMap & operator = (const GALGAS_staticStringMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticStringMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticStringMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticStringMap class_func_mapWithMapToOverride (const class GALGAS_staticStringMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_staticStringMap add_operation (const GALGAS_staticStringMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticStringMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticStringMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticStringMap ;
 
} ; // End of GALGAS_staticStringMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticStringMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticStringMap (const GALGAS_staticStringMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticStringMap_2D_element current (LOCATION_ARGS) const ;
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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticStringMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticStringMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticStringMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticStringMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_uint & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticStringMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalStructuredConstantList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalStructuredConstantList extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalStructuredConstantList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_globalStructuredConstantList class_func_listWithValue (const class GALGAS_omnibusType & inOperand0,
                                                                                     const class GALGAS_operandIRList & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalStructuredConstantList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_omnibusType & inOperand0,
                                                     const class GALGAS_operandIRList & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_globalStructuredConstantList add_operation (const GALGAS_globalStructuredConstantList & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_omnibusType constinArgument0,
                                               class GALGAS_operandIRList constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_omnibusType constinArgument0,
                                                      class GALGAS_operandIRList constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_omnibusType & outArgument0,
                                                 class GALGAS_operandIRList & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_omnibusType & outArgument0,
                                                class GALGAS_operandIRList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_omnibusType & outArgument0,
                                                      class GALGAS_operandIRList & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMOperandIRListAtIndex (class GALGAS_operandIRList constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_omnibusType & outArgument0,
                                              class GALGAS_operandIRList & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_omnibusType & outArgument0,
                                             class GALGAS_operandIRList & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_mOperandIRListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalStructuredConstantList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_globalStructuredConstantList ;
 
} ; // End of GALGAS_globalStructuredConstantList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalStructuredConstantList : public cGenericAbstractEnumerator {
  public: cEnumerator_globalStructuredConstantList (const GALGAS_globalStructuredConstantList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GALGAS_operandIRList current_mOperandIRList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalStructuredConstantList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @globalStructuredConstantList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_globalStructuredConstantList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_operandIRList mProperty_mOperandIRList ;
  public: inline GALGAS_operandIRList readProperty_mOperandIRList (void) const {
    return mProperty_mOperandIRList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalStructuredConstantList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalStructuredConstantList_2D_element class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                                      const class GALGAS_operandIRList & inOperand1,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_globalStructuredConstantList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_globalStructuredConstantList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @operandIRList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_operandIRList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_objectIR mProperty_mOperand ;
  public: inline GALGAS_objectIR readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_operandIRList_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_operandIRList_2D_element class_func_new (const class GALGAS_objectIR & inOperand0,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_operandIRList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInContext (class cPtr_abstractDeclarationAST * inObject,
                                         class GALGAS_semanticContext & io_ioContext,
                                         class GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                         class GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                         class GALGAS_routineListIR & io_ioRoutineListIR,
                                         class GALGAS_staticListInitializationMap & io_ioStaticListValueMap,
                                         class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                         class GALGAS_controlRegisterUserAccesMapAST & io_ioControlRegisterUserAccesMapAST,
                                         class GALGAS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRegularRoutineList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRegularRoutineList extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedRegularRoutineList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedRegularRoutineList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
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
                                                       class Compiler * inCompiler
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
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
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
                                               Compiler * inCompiler
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
                                                      Compiler * inCompiler
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
                                                 Compiler * inCompiler
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
                                                Compiler * inCompiler
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
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setExportedRoutineAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setFormalArgumentListAtIndex (class GALGAS_routineFormalArgumentListAST constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setIsRequiredAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfRoutineDeclarationAtIndex (class GALGAS_location constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionListAtIndex (class GALGAS_instructionListAST constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setModeAtIndex (class GALGAS_mode constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setReceiverTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setReturnTypeNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineAttributesAtIndex (class GALGAS_routineAttributes constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineKindAtIndex (class GALGAS_routineKind constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setRoutineMangledLLVMNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setWarnIfUnusedAtIndex (class GALGAS_bool constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setWarningOnUnusedArgsAtIndex (class GALGAS_bool constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
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
                                              Compiler * inCompiler
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
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_exportedRoutineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_formalArgumentListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRequiredAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfRoutineDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mInstructionListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mode getter_modeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_receiverTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_returnTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineAttributes getter_routineAttributesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_routineKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_routineMangledLLVMNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedRegularRoutineList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedRegularRoutineList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedRegularRoutineList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_warnIfUnusedAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_warningOnUnusedArgsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedRegularRoutineList ;
 
} ; // End of GALGAS_decoratedRegularRoutineList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractRoutineIR & in_mRoutine
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineListIR extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineListIR class_func_listWithValue (const class GALGAS_abstractRoutineIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractRoutineIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineListIR add_operation (const GALGAS_routineListIR & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractRoutineIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractRoutineIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractRoutineIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractRoutineIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRoutineAtIndex (class GALGAS_abstractRoutineIR constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractRoutineIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractRoutineIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractRoutineIR getter_mRoutineAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_routineListIR ;
 
} ; // End of GALGAS_routineListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_routineListIR (const GALGAS_routineListIR & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractRoutineIR current_mRoutine (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMTypeDefinitionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_userLLVMTypeDefinitionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_userLLVMTypeDefinitionIR & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionListIR extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMTypeDefinitionListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_userLLVMTypeDefinitionListIR class_func_listWithValue (const class GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_userLLVMTypeDefinitionListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_userLLVMTypeDefinitionIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_userLLVMTypeDefinitionListIR add_operation (const GALGAS_userLLVMTypeDefinitionListIR & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_userLLVMTypeDefinitionIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_userLLVMTypeDefinitionIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_userLLVMTypeDefinitionIR constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_userLLVMTypeDefinitionIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionIR getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_userLLVMTypeDefinitionListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_userLLVMTypeDefinitionListIR ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_userLLVMTypeDefinitionListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_userLLVMTypeDefinitionListIR (const GALGAS_userLLVMTypeDefinitionListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_userLLVMTypeDefinitionIR current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_userLLVMTypeDefinitionListIR_2D_element current (LOCATION_ARGS) const ;
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

class GALGAS_staticListInitializationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticListInitializationMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticListInitializationMap (const GALGAS_staticListInitializationMap & inSource) ;
  public: GALGAS_staticListInitializationMap & operator = (const GALGAS_staticListInitializationMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInitializationMap extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListInitializationMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticListInitializationMap class_func_mapWithMapToOverride (const class GALGAS_staticListInitializationMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_stringlist & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_staticListInitializationMap add_operation (const GALGAS_staticListInitializationMap & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringlist constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitializationListForKey (class GALGAS_stringlist constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mInitializationListForKey (const class GALGAS_string & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListInitializationMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_stringlist & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticListInitializationMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                        const GALGAS_string & inKey
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticListInitializationMap ;
 
} ; // End of GALGAS_staticListInitializationMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticListInitializationMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticListInitializationMap (const GALGAS_staticListInitializationMap & inEnumeratedObject,
                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mInitializationList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticListInitializationMap_2D_element current (LOCATION_ARGS) const ;
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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @universalValuedObjectMap struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_universalValuedObjectMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_flatValuedObjectMap mProperty_mInternalPropertyAndRoutineMap ;
  public: inline GALGAS_flatValuedObjectMap readProperty_mInternalPropertyAndRoutineMap (void) const {
    return mProperty_mInternalPropertyAndRoutineMap ;
  }

  public: GALGAS_scopeStack mProperty_mScopeStack ;
  public: inline GALGAS_scopeStack readProperty_mScopeStack (void) const {
    return mProperty_mScopeStack ;
  }

  public: GALGAS_lstringlist mProperty_mLocalObjectList ;
  public: inline GALGAS_lstringlist readProperty_mLocalObjectList (void) const {
    return mProperty_mLocalObjectList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_universalValuedObjectMap extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_universalValuedObjectMap class_func_new (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_universalValuedObjectMap & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_universalValuedObjectMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalValuedObjectMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticContext struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_targetParameters mProperty_mTargetParameters ;
  public: inline GALGAS_targetParameters readProperty_mTargetParameters (void) const {
    return mProperty_mTargetParameters ;
  }

  public: GALGAS_omnibusType mProperty_mPanicCodeType ;
  public: inline GALGAS_omnibusType readProperty_mPanicCodeType (void) const {
    return mProperty_mPanicCodeType ;
  }

  public: GALGAS_omnibusType mProperty_mPanicLineType ;
  public: inline GALGAS_omnibusType readProperty_mPanicLineType (void) const {
    return mProperty_mPanicLineType ;
  }

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;
  public: inline GALGAS_panicRoutinePriorityMap readProperty_mPanicSetupRoutinePriorityMap (void) const {
    return mProperty_mPanicSetupRoutinePriorityMap ;
  }

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;
  public: inline GALGAS_panicRoutinePriorityMap readProperty_mPanicLoopRoutinePriorityMap (void) const {
    return mProperty_mPanicLoopRoutinePriorityMap ;
  }

  public: GALGAS_routineMapForContext mProperty_mRoutineMap ;
  public: inline GALGAS_routineMapForContext readProperty_mRoutineMap (void) const {
    return mProperty_mRoutineMap ;
  }

  public: GALGAS_guardMapForContext mProperty_mGuardMap ;
  public: inline GALGAS_guardMapForContext readProperty_mGuardMap (void) const {
    return mProperty_mGuardMap ;
  }

  public: GALGAS_controlRegisterGroupMap mProperty_mControlRegisterGroupMap ;
  public: inline GALGAS_controlRegisterGroupMap readProperty_mControlRegisterGroupMap (void) const {
    return mProperty_mControlRegisterGroupMap ;
  }

  public: GALGAS_globalConstantMap mProperty_mGlobalConstantMap ;
  public: inline GALGAS_globalConstantMap readProperty_mGlobalConstantMap (void) const {
    return mProperty_mGlobalConstantMap ;
  }

  public: GALGAS_globalSyncInstanceMap mProperty_mGlobalSyncInstanceMap ;
  public: inline GALGAS_globalSyncInstanceMap readProperty_mGlobalSyncInstanceMap (void) const {
    return mProperty_mGlobalSyncInstanceMap ;
  }

  public: GALGAS_staticlistMap mProperty_mStaticListMap ;
  public: inline GALGAS_staticlistMap readProperty_mStaticListMap (void) const {
    return mProperty_mStaticListMap ;
  }

  public: GALGAS_stringset mProperty_mRequiredRoutineSet ;
  public: inline GALGAS_stringset readProperty_mRequiredRoutineSet (void) const {
    return mProperty_mRequiredRoutineSet ;
  }

  public: GALGAS_unifiedTypeMap mProperty_mTypeMap ;
  public: inline GALGAS_unifiedTypeMap readProperty_mTypeMap (void) const {
    return mProperty_mTypeMap ;
  }

  public: GALGAS_typeConstantMap mProperty_mTypeConstantMap ;
  public: inline GALGAS_typeConstantMap readProperty_mTypeConstantMap (void) const {
    return mProperty_mTypeConstantMap ;
  }

  public: GALGAS_typeConstructorMap mProperty_mTypeConstructorMap ;
  public: inline GALGAS_typeConstructorMap readProperty_mTypeConstructorMap (void) const {
    return mProperty_mTypeConstructorMap ;
  }

  public: GALGAS_typePropertySetterMap mProperty_mTypePropertySetterMap ;
  public: inline GALGAS_typePropertySetterMap readProperty_mTypePropertySetterMap (void) const {
    return mProperty_mTypePropertySetterMap ;
  }

  public: GALGAS_typePropertyGetterMap mProperty_mTypePropertyGetterMap ;
  public: inline GALGAS_typePropertyGetterMap readProperty_mTypePropertyGetterMap (void) const {
    return mProperty_mTypePropertyGetterMap ;
  }

  public: GALGAS_availableInterruptMap mProperty_mAvailableInterruptMap ;
  public: inline GALGAS_availableInterruptMap readProperty_mAvailableInterruptMap (void) const {
    return mProperty_mAvailableInterruptMap ;
  }

  public: GALGAS_infixOperatorMap mProperty_mInfixOperatorMap ;
  public: inline GALGAS_infixOperatorMap readProperty_mInfixOperatorMap (void) const {
    return mProperty_mInfixOperatorMap ;
  }

  public: GALGAS_prefixOperatorMap mProperty_mPrefixOperatorMap ;
  public: inline GALGAS_prefixOperatorMap readProperty_mPrefixOperatorMap (void) const {
    return mProperty_mPrefixOperatorMap ;
  }

  public: GALGAS_assignmentOperatorMap mProperty_mAssignmentOperatorMap ;
  public: inline GALGAS_assignmentOperatorMap readProperty_mAssignmentOperatorMap (void) const {
    return mProperty_mAssignmentOperatorMap ;
  }

  public: GALGAS_implicitConversionToBooleanMap mProperty_mImplicitConversionToBooleanMap ;
  public: inline GALGAS_implicitConversionToBooleanMap readProperty_mImplicitConversionToBooleanMap (void) const {
    return mProperty_mImplicitConversionToBooleanMap ;
  }

  public: GALGAS_taskMap mProperty_mTaskMap ;
  public: inline GALGAS_taskMap readProperty_mTaskMap (void) const {
    return mProperty_mTaskMap ;
  }

  public: GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GALGAS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GALGAS_universalValuedObjectMap mProperty_mValuedObjectMap ;
  public: inline GALGAS_universalValuedObjectMap readProperty_mValuedObjectMap (void) const {
    return mProperty_mValuedObjectMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticContext class_func_new (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticEntityMap struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticEntityMap : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_staticStringMap mProperty_mStaticStringMap ;
  public: inline GALGAS_staticStringMap readProperty_mStaticStringMap (void) const {
    return mProperty_mStaticStringMap ;
  }

  public: GALGAS_globalStructuredConstantList mProperty_mGlobalStructuredConstantList ;
  public: inline GALGAS_globalStructuredConstantList readProperty_mGlobalStructuredConstantList (void) const {
    return mProperty_mGlobalStructuredConstantList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticEntityMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticEntityMap class_func_new (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticEntityMap & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticEntityMap class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticEntityMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusType_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_omnibusType_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_omnibusType_2D_weak (const class GALGAS_omnibusType & inSource) ;

  public: GALGAS_omnibusType_2D_weak & operator = (const class GALGAS_omnibusType & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_omnibusType bang_omnibusType_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_omnibusType_2D_weak extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_omnibusType_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_omnibusType_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_omnibusType_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arcAssignmentList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_arcAssignmentList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_arcAssignmentList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_arcAssignmentList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_omnibusType & inOperand1,
                                                                          const class GALGAS_uintlist & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_arcAssignmentList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_uintlist & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_arcAssignmentList add_operation (const GALGAS_arcAssignmentList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               class GALGAS_uintlist constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_uintlist constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_uintlist & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_uintlist & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_uintlist & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyIndexPathAtIndex (class GALGAS_uintlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPropertyTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_uintlist & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_uintlist & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uintlist getter_mPropertyIndexPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mPropertyTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arcAssignmentList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arcAssignmentList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_arcAssignmentList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_arcAssignmentList ;
 
} ; // End of GALGAS_arcAssignmentList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @arcAssignmentList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_arcAssignmentList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mPropertyName ;
  public: inline GALGAS_string readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_omnibusType mProperty_mPropertyType ;
  public: inline GALGAS_omnibusType readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

  public: GALGAS_uintlist mProperty_mPropertyIndexPath ;
  public: inline GALGAS_uintlist readProperty_mPropertyIndexPath (void) const {
    return mProperty_mPropertyIndexPath ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_arcAssignmentList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_arcAssignmentList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_omnibusType & inOperand1,
                                                                           const class GALGAS_uintlist & inOperand2,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_arcAssignmentList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_arcAssignmentList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMTypeDefinitionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMTypeDefinitionIR (const class cPtr_userLLVMTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLLVMDefinedTypeName (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionIR extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMTypeDefinitionIR & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLLVMDefinedTypeName (class GALGAS_string inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionIR class


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
//--- Extension method generateLLVMType
  public: virtual void method_generateLLVMType (class GALGAS_string & ioLLVMcode,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties
  public: GALGAS_string mProperty_mLLVMDefinedTypeName ;

//--- Constructor
  public: cPtr_userLLVMTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName
                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionIR_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMTypeDefinitionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_userLLVMTypeDefinitionIR_2D_weak (const class GALGAS_userLLVMTypeDefinitionIR & inSource) ;

  public: GALGAS_userLLVMTypeDefinitionIR_2D_weak & operator = (const class GALGAS_userLLVMTypeDefinitionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_userLLVMTypeDefinitionIR bang_userLLVMTypeDefinitionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMTypeDefinitionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMTypeDefinitionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (class cPtr_userLLVMTypeDefinitionIR * inObject,
                                           class GALGAS_string & io_ioLLVMcode,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMTypeDefinitionListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_userLLVMTypeDefinitionListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_userLLVMTypeDefinitionIR mProperty_mType ;
  public: inline GALGAS_userLLVMTypeDefinitionIR readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMTypeDefinitionListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_userLLVMTypeDefinitionListIR_2D_element class_func_new (const class GALGAS_userLLVMTypeDefinitionIR & inOperand0,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMTypeDefinitionListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_userLLVMTypeDefinitionListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap unsolvedEntryList' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstringlist extensionGetter_unsolvedEntryList (const class GALGAS_unifiedTypeMap & inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @typeDefinition enum                                            *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_typeDefinition : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_typeDefinition (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_unsolved,
    kEnum_solved
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_typeDefinition extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_typeDefinition class_func_solved (const class GALGAS_omnibusType & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_typeDefinition class_func_unsolved (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_typeDefinition & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_solved (class GALGAS_omnibusType & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSolved (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUnsolved (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_solved (class GALGAS_omnibusType & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_unsolved () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_typeDefinition class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @typeDefinition enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_typeDefinition_solved : public cEnumAssociatedValues {
  public: const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_typeDefinition_solved (const GALGAS_omnibusType inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_typeDefinition_solved (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @unifiedTypeMapElementClass class
//
//--------------------------------------------------------------------------------------------------

class cPtr_unifiedTypeMapElementClass : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter definition
  public: virtual class GALGAS_omnibusType getter_definition (Compiler * COMMA_LOCATION_ARGS) const ;

//--- Properties
  public: GALGAS_lstring mProperty_mTypeName ;
  public: GALGAS_typeDefinition mProperty_mDefinition ;

//--- Constructor
  public: cPtr_unifiedTypeMapElementClass (const GALGAS_lstring & in_mTypeName,
                                           const GALGAS_typeDefinition & in_mDefinition
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (class GALGAS_unifiedTypeMap & ioObject,
                                const class GALGAS_lstring constin_inLKey,
                                class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @unifiedTypeMapElementClass_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapElementClass_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_unifiedTypeMapElementClass_2D_weak (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

  public: GALGAS_unifiedTypeMapElementClass_2D_weak & operator = (const class GALGAS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_unifiedTypeMapElementClass bang_unifiedTypeMapElementClass_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_unifiedTypeMapElementClass_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_unifiedTypeMapElementClass_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_unifiedTypeMapElementClass_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @unifiedTypeMapEntry enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_unifiedTypeMapEntry_element : public cEnumAssociatedValues {
  public: const GALGAS_unifiedTypeMapElementClass_2D_weak mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_unifiedTypeMapEntry_element (const GALGAS_unifiedTypeMapElementClass_2D_weak inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_unifiedTypeMapEntry_element (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeOptionalEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeOptionalEntry (class GALGAS_unifiedTypeMap & ioObject,
                                        const class GALGAS_lstring constin_inLKey,
                                        class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                        class Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (class GALGAS_unifiedTypeMap & ioObject,
                                          const class GALGAS_string constin_inKey,
                                          class GALGAS_unifiedTypeMapEntry & out_outEntry,
                                          class Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMap searchKey' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMapEntry extensionGetter_searchKey (const class GALGAS_unifiedTypeMap & inObject,
                                                            const class GALGAS_lstring & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (class GALGAS_unifiedTypeMap & ioObject,
                                 const class GALGAS_lstring constin_inTypeName,
                                 const class GALGAS_omnibusType constin_inTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap searchType'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchType (const class GALGAS_unifiedTypeMap inObject,
                                 const class GALGAS_lstring constin_inLKey,
                                 class GALGAS_omnibusType & out_outTypeDefinition,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusType extensionGetter_type (const class GALGAS_unifiedTypeMapEntry & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@unifiedTypeMapEntry key' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_key (const class GALGAS_unifiedTypeMapEntry & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDecoratedDeclaration semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (class cPtr_abstractDecoratedDeclaration * inObject,
                                           const class GALGAS_semanticContext constin_inContext,
                                           class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                           class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @panicSortedListIR sorted list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_panicSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_panicSortedListIR (void) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_panicSortedListIR extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_panicSortedListIR class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_panicSortedListIR class_func_sortedListWithValue (const class GALGAS_bigint & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_panicSortedListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bigint & inOperand0
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_bigint inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bigint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bigint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bigint & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_panicSortedListIR ;
 
} ; // End of GALGAS_panicSortedListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_panicSortedListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_panicSortedListIR (const GALGAS_panicSortedListIR & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bigint current_mPriority (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_panicSortedListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicSortedListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupArrayList list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupArrayList extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_controlRegisterGroupArrayList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterGroupArrayList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lbigintlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterGroupArrayList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lbigintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterGroupArrayList add_operation (const GALGAS_controlRegisterGroupArrayList & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lbigintlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lbigintlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lbigintlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lbigintlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lbigintlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBaseAddressesAtIndex (class GALGAS_lbigintlist constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lbigintlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lbigintlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lbigintlist getter_mBaseAddressesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGroupNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupArrayList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterGroupArrayList ;
 
} ; // End of GALGAS_controlRegisterGroupArrayList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterGroupArrayList : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mGroupName (LOCATION_ARGS) const ;
  public: class GALGAS_lbigintlist current_mBaseAddresses (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterGroupArrayList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @driverListIR list
//
//--------------------------------------------------------------------------------------------------

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_driverListIR extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_driverListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_driverListIR class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_omnibusType & inOperand1,
                                                                     const class GALGAS_operandIRList & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_driverListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_operandIRList & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_driverListIR add_operation (const GALGAS_driverListIR & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               class GALGAS_operandIRList constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_operandIRList constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_operandIRList & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_operandIRList & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_operandIRList & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueListAtIndex (class GALGAS_operandIRList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_operandIRList & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_operandIRList & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_mInitialValueListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_driverListIR ;
 
} ; // End of GALGAS_driverListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureMapIR map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_externProcedureMapIR ;

//--------------------------------------------------------------------------------------------------

class GALGAS_externProcedureMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_externProcedureMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_externProcedureMapIR (const GALGAS_externProcedureMapIR & inSource) ;
  public: GALGAS_externProcedureMapIR & operator = (const GALGAS_externProcedureMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externProcedureMapIR extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externProcedureMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_externProcedureMapIR class_func_mapWithMapToOverride (const class GALGAS_externProcedureMapIR & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                     const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_externProcedureMapIR add_operation (const GALGAS_externProcedureMapIR & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_routineFormalArgumentListIR constinArgument1,
                                                  class GALGAS_unifiedTypeMapEntry constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGenerationForKey (class GALGAS_routineFormalArgumentListIR constinArgument0,
                                                                                  class GALGAS_string constinArgument1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMReturnTypeForKey (class GALGAS_unifiedTypeMapEntry constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGenerationForKey (const class GALGAS_string & constinOperand0,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMapEntry getter_mReturnTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_externProcedureMapIR getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_routineFormalArgumentListIR & outOperand1,
                                                    class GALGAS_unifiedTypeMapEntry & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_externProcedureMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_externProcedureMapIR ;
 
} ; // End of GALGAS_externProcedureMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_externProcedureMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_externProcedureMapIR (const GALGAS_externProcedureMapIR & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_routineFormalArgumentListIR current_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public: class GALGAS_unifiedTypeMapEntry current_mReturnType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_externProcedureMapIR_2D_element current (LOCATION_ARGS) const ;
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

class GALGAS_globalSyncInstanceMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_globalSyncInstanceMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inSource) ;
  public: GALGAS_globalSyncInstanceMapIR & operator = (const GALGAS_globalSyncInstanceMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_globalSyncInstanceMapIR extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_globalSyncInstanceMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_globalSyncInstanceMapIR class_func_mapWithMapToOverride (const class GALGAS_globalSyncInstanceMapIR & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_globalSyncInstanceMapIR add_operation (const GALGAS_globalSyncInstanceMapIR & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_objectIR constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInitialValueForKey (class GALGAS_objectIR constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValueForKey (const class GALGAS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_globalSyncInstanceMapIR getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_objectIR & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_globalSyncInstanceMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_globalSyncInstanceMapIR ;
 
} ; // End of GALGAS_globalSyncInstanceMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_globalSyncInstanceMapIR : public cGenericAbstractEnumerator {
  public: cEnumerator_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_globalSyncInstanceMapIR_2D_element current (LOCATION_ARGS) const ;
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

class GALGAS_interruptMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_interruptMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_interruptMapIR (const GALGAS_interruptMapIR & inSource) ;
  public: GALGAS_interruptMapIR & operator = (const GALGAS_interruptMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_interruptMapIR extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_interruptMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_interruptMapIR class_func_mapWithMapToOverride (const class GALGAS_interruptMapIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_string & inOperand2,
                                                     const class GALGAS_mode & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_interruptMapIR add_operation (const GALGAS_interruptMapIR & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_omnibusType constinArgument1,
                                                  class GALGAS_string constinArgument2,
                                                  class GALGAS_mode constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameForKey (class GALGAS_string constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMModeForKey (class GALGAS_mode constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelfTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mDriverNameForKey (const class GALGAS_string & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_mode getter_mModeForKey (const class GALGAS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mSelfTypeForKey (const class GALGAS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_interruptMapIR getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_omnibusType & outOperand1,
                                                    class GALGAS_string & outOperand2,
                                                    class GALGAS_mode & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_interruptMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_interruptMapIR ;
 
} ; // End of GALGAS_interruptMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

class GALGAS_staticListInvokedFunctionSetMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_staticListInvokedFunctionSetMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inSource) ;
  public: GALGAS_staticListInvokedFunctionSetMap & operator = (const GALGAS_staticListInvokedFunctionSetMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInvokedFunctionSetMap extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListInvokedFunctionSetMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_staticListInvokedFunctionSetMap class_func_mapWithMapToOverride (const class GALGAS_staticListInvokedFunctionSetMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_stringset & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_staticListInvokedFunctionSetMap add_operation (const GALGAS_staticListInvokedFunctionSetMap & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInvokedFunctionSetForKey (class GALGAS_stringset constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_stringset & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mInvokedFunctionSetForKey (const class GALGAS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_staticListInvokedFunctionSetMap getter_overriddenMap (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_stringset & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_staticListInvokedFunctionSetMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticListInvokedFunctionSetMap ;
 
} ; // End of GALGAS_staticListInvokedFunctionSetMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_staticListInvokedFunctionSetMap : public cGenericAbstractEnumerator {
  public: cEnumerator_staticListInvokedFunctionSetMap (const GALGAS_staticListInvokedFunctionSetMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_stringset current_mInvokedFunctionSet (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_staticListInvokedFunctionSetMap_2D_element current (LOCATION_ARGS) const ;
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

class GALGAS_taskMapIR : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_taskMapIR (void) ;

//--------------------------------- Handle copy
  public: GALGAS_taskMapIR (const GALGAS_taskMapIR & inSource) ;
  public: GALGAS_taskMapIR & operator = (const GALGAS_taskMapIR & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskMapIR extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskMapIR class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_taskMapIR class_func_mapWithMapToOverride (const class GALGAS_taskMapIR & inOperand0
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
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_taskMapIR add_operation (const GALGAS_taskMapIR & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


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
                                                  Compiler * inCompiler
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
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActivateForKey (class GALGAS_bool constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMActivateOrderedListForKey (class GALGAS_stringlist constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDeactivateOrderedListForKey (class GALGAS_stringlist constinArgument0,
                                                                        class GALGAS_string constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMPriorityForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSetupOrderedListForKey (class GALGAS_stringlist constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStackSizeForKey (class GALGAS_bigint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameStringIndexForKey (class GALGAS_uint constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
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
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mActivateForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mActivateOrderedListForKey (const class GALGAS_string & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mDeactivateOrderedListForKey (const class GALGAS_string & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mPriorityForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mSetupOrderedListForKey (const class GALGAS_string & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mStackSizeForKey (const class GALGAS_string & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mTaskNameStringIndexForKey (const class GALGAS_string & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTaskTypeForKey (const class GALGAS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskMapIR getter_overriddenMap (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_taskMapIR * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_taskMapIR ;
 
} ; // End of GALGAS_taskMapIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @intermediateCodeStruct struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_intermediateCodeStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_staticEntityMap mProperty_mStaticEntityMap ;
  public: inline GALGAS_staticEntityMap readProperty_mStaticEntityMap (void) const {
    return mProperty_mStaticEntityMap ;
  }

  public: GALGAS_interruptMapIR mProperty_mInterruptMapIR ;
  public: inline GALGAS_interruptMapIR readProperty_mInterruptMapIR (void) const {
    return mProperty_mInterruptMapIR ;
  }

  public: GALGAS_externProcedureMapIR mProperty_mExternProcedureMapIR ;
  public: inline GALGAS_externProcedureMapIR readProperty_mExternProcedureMapIR (void) const {
    return mProperty_mExternProcedureMapIR ;
  }

  public: GALGAS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public: inline GALGAS_panicSortedListIR readProperty_mPanicSetupListIR (void) const {
    return mProperty_mPanicSetupListIR ;
  }

  public: GALGAS_panicSortedListIR mProperty_mPanicLoopListIR ;
  public: inline GALGAS_panicSortedListIR readProperty_mPanicLoopListIR (void) const {
    return mProperty_mPanicLoopListIR ;
  }

  public: GALGAS_taskMapIR mProperty_mTaskMapIR ;
  public: inline GALGAS_taskMapIR readProperty_mTaskMapIR (void) const {
    return mProperty_mTaskMapIR ;
  }

  public: GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GALGAS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GALGAS_uint mProperty_mMaxBranchOfOnInstructions ;
  public: inline GALGAS_uint readProperty_mMaxBranchOfOnInstructions (void) const {
    return mProperty_mMaxBranchOfOnInstructions ;
  }

  public: GALGAS_targetParameters mProperty_mTargetParameters ;
  public: inline GALGAS_targetParameters readProperty_mTargetParameters (void) const {
    return mProperty_mTargetParameters ;
  }

  public: GALGAS_driverListIR mProperty_mDriverList ;
  public: inline GALGAS_driverListIR readProperty_mDriverList (void) const {
    return mProperty_mDriverList ;
  }

  public: GALGAS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForIntermediate ;
  public: inline GALGAS_staticListInvokedFunctionSetMap readProperty_mStaticArrayMapForIntermediate (void) const {
    return mProperty_mStaticArrayMapForIntermediate ;
  }

  public: GALGAS_globalSyncInstanceMapIR mProperty_mGlobalSyncInstanceMap ;
  public: inline GALGAS_globalSyncInstanceMapIR readProperty_mGlobalSyncInstanceMap (void) const {
    return mProperty_mGlobalSyncInstanceMap ;
  }

  public: GALGAS_controlRegisterGroupArrayList mProperty_mControlRegisterGroupArrayList ;
  public: inline GALGAS_controlRegisterGroupArrayList readProperty_mControlRegisterGroupArrayList (void) const {
    return mProperty_mControlRegisterGroupArrayList ;
  }

  public: GALGAS_routineListIR mProperty_mRoutineListIR ;
  public: inline GALGAS_routineListIR readProperty_mRoutineListIR (void) const {
    return mProperty_mRoutineListIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_intermediateCodeStruct extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_intermediateCodeStruct class_func_new (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_intermediateCodeStruct class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_intermediateCodeStruct ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @semanticTemporariesStruct struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_semanticTemporariesStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mTemporaryIndex ;
  public: inline GALGAS_uint readProperty_mTemporaryIndex (void) const {
    return mProperty_mTemporaryIndex ;
  }

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicSetupRoutinePriorityMap ;
  public: inline GALGAS_panicRoutinePriorityMap readProperty_mPanicSetupRoutinePriorityMap (void) const {
    return mProperty_mPanicSetupRoutinePriorityMap ;
  }

  public: GALGAS_panicRoutinePriorityMap mProperty_mPanicLoopRoutinePriorityMap ;
  public: inline GALGAS_panicRoutinePriorityMap readProperty_mPanicLoopRoutinePriorityMap (void) const {
    return mProperty_mPanicLoopRoutinePriorityMap ;
  }

  public: GALGAS_staticListInvokedFunctionSetMap mProperty_mStaticArrayMapForTemporaries ;
  public: inline GALGAS_staticListInvokedFunctionSetMap readProperty_mStaticArrayMapForTemporaries (void) const {
    return mProperty_mStaticArrayMapForTemporaries ;
  }

  public: GALGAS_stringset mProperty_mInitializedDriverSet ;
  public: inline GALGAS_stringset readProperty_mInitializedDriverSet (void) const {
    return mProperty_mInitializedDriverSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_semanticTemporariesStruct extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_semanticTemporariesStruct class_func_new (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_semanticTemporariesStruct class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@staticListInvokedFunctionSetMap' map
//
//--------------------------------------------------------------------------------------------------

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
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInvokedFunctionSetMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListInvokedFunctionSetMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_stringset mProperty_mInvokedFunctionSet ;
  public: inline GALGAS_stringset readProperty_mInvokedFunctionSet (void) const {
    return mProperty_mInvokedFunctionSet ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

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

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInvokedFunctionSetMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListInvokedFunctionSetMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_stringset & inOperand1,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticListInvokedFunctionSetMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListInvokedFunctionSetMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimeBoolAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compiletimeBoolAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_compiletimeBoolAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compiletimeBoolAST (const class cPtr_compiletimeBoolAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compiletimeBoolAST extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compiletimeBoolAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compiletimeBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compiletimeBoolAST class


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
//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & ioContext,
           class GALGAS_declarationDecorationList & ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & ioDecoratedRoutineList,
           class GALGAS_routineListIR & ioRoutineListIR,
           class GALGAS_staticListInitializationMap & ioStaticListValueMap,
           class GALGAS_staticEntityMap & ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_compiletimeBoolAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compiletimeBoolAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compiletimeBoolAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compiletimeBoolAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compiletimeBoolAST_2D_weak (const class GALGAS_compiletimeBoolAST & inSource) ;

  public: GALGAS_compiletimeBoolAST_2D_weak & operator = (const class GALGAS_compiletimeBoolAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compiletimeBoolAST bang_compiletimeBoolAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compiletimeBoolAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compiletimeBoolAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compiletimeBoolAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compiletimeBoolAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimeBoolAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractImplicitConverterToBoolean class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractImplicitConverterToBoolean : public acStrongPtr_class {

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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractImplicitConverterToBoolean (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractImplicitConverterToBoolean_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractImplicitConverterToBoolean_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractImplicitConverterToBoolean_2D_weak (const class GALGAS_abstractImplicitConverterToBoolean & inSource) ;

  public: GALGAS_abstractImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_abstractImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractImplicitConverterToBoolean bang_abstractImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractImplicitConverterToBoolean_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_abstractImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractImplicitConverterToBoolean_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorUsage : public acStrongPtr_class {

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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_prefixOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorUsage_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_prefixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_prefixOperatorUsage_2D_weak (const class GALGAS_prefixOperatorUsage & inSource) ;

  public: GALGAS_prefixOperatorUsage_2D_weak & operator = (const class GALGAS_prefixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_prefixOperatorUsage bang_prefixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_prefixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_prefixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_prefixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_prefixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @omnibusInfixOperatorUsage class
//
//--------------------------------------------------------------------------------------------------

class cPtr_omnibusInfixOperatorUsage : public acStrongPtr_class {

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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_omnibusInfixOperatorUsage (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @omnibusInfixOperatorUsage_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_omnibusInfixOperatorUsage_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_omnibusInfixOperatorUsage_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_omnibusInfixOperatorUsage_2D_weak (const class GALGAS_omnibusInfixOperatorUsage & inSource) ;

  public: GALGAS_omnibusInfixOperatorUsage_2D_weak & operator = (const class GALGAS_omnibusInfixOperatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_omnibusInfixOperatorUsage bang_omnibusInfixOperatorUsage_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_omnibusInfixOperatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_omnibusInfixOperatorUsage_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_omnibusInfixOperatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_omnibusInfixOperatorUsage_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolXorOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolXorOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolXorOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolXorOperator (const class cPtr_compileTimeBoolXorOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolXorOperator extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolXorOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolXorOperator class


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
  public: cPtr_compileTimeBoolXorOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolXorOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolXorOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolXorOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeBoolXorOperator_2D_weak (const class GALGAS_compileTimeBoolXorOperator & inSource) ;

  public: GALGAS_compileTimeBoolXorOperator_2D_weak & operator = (const class GALGAS_compileTimeBoolXorOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeBoolXorOperator bang_compileTimeBoolXorOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolXorOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolXorOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolXorOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolXorOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolOrOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolOrOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolOrOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeBoolOrOperator (const class cPtr_compileTimeBoolOrOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolOrOperator extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolOrOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolOrOperator class


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
  public: cPtr_compileTimeBoolOrOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeBoolOrOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeBoolOrOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeBoolOrOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeBoolOrOperator_2D_weak (const class GALGAS_compileTimeBoolOrOperator & inSource) ;

  public: GALGAS_compileTimeBoolOrOperator_2D_weak & operator = (const class GALGAS_compileTimeBoolOrOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeBoolOrOperator bang_compileTimeBoolOrOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeBoolOrOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeBoolOrOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeBoolOrOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeBoolOrOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntAST (const class cPtr_compileTimeIntAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntAST extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntAST class


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
//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & ioContext,
           class GALGAS_declarationDecorationList & ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & ioDecoratedRoutineList,
           class GALGAS_routineListIR & ioRoutineListIR,
           class GALGAS_staticListInitializationMap & ioStaticListValueMap,
           class GALGAS_staticEntityMap & ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_compileTimeIntAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntAST_2D_weak (const class GALGAS_compileTimeIntAST & inSource) ;

  public: GALGAS_compileTimeIntAST_2D_weak & operator = (const class GALGAS_compileTimeIntAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntAST bang_compileTimeIntAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntModuloOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntModuloOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntModuloOperator (const class cPtr_compileTimeIntModuloOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntModuloOperator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntModuloOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntModuloOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntModuloOperator class


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
  public: cPtr_compileTimeIntModuloOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntModuloOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntModuloOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntModuloOperator_2D_weak (const class GALGAS_compileTimeIntModuloOperator & inSource) ;

  public: GALGAS_compileTimeIntModuloOperator_2D_weak & operator = (const class GALGAS_compileTimeIntModuloOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntModuloOperator bang_compileTimeIntModuloOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntModuloOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntModuloOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntModuloOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntModuloOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloZeroOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntModuloZeroOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntModuloZeroOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntModuloZeroOperator (const class cPtr_compileTimeIntModuloZeroOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntModuloZeroOperator extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntModuloZeroOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntModuloZeroOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntModuloZeroOperator class


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
  public: cPtr_compileTimeIntModuloZeroOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntModuloZeroOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntModuloZeroOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntModuloZeroOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntModuloZeroOperator_2D_weak (const class GALGAS_compileTimeIntModuloZeroOperator & inSource) ;

  public: GALGAS_compileTimeIntModuloZeroOperator_2D_weak & operator = (const class GALGAS_compileTimeIntModuloZeroOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntModuloZeroOperator bang_compileTimeIntModuloZeroOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntModuloZeroOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntModuloZeroOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntModuloZeroOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntModuloZeroOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntModuloZeroOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntDivideOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntDivideOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntDivideOperator (const class cPtr_compileTimeIntDivideOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntDivideOperator extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntDivideOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntDivideOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntDivideOperator class


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
  public: cPtr_compileTimeIntDivideOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntDivideOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntDivideOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntDivideOperator_2D_weak (const class GALGAS_compileTimeIntDivideOperator & inSource) ;

  public: GALGAS_compileTimeIntDivideOperator_2D_weak & operator = (const class GALGAS_compileTimeIntDivideOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntDivideOperator bang_compileTimeIntDivideOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntDivideOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntDivideOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntDivideOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntDivideOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideZeroOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntDivideZeroOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntDivideZeroOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntDivideZeroOperator (const class cPtr_compileTimeIntDivideZeroOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntDivideZeroOperator extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntDivideZeroOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntDivideZeroOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntDivideZeroOperator class


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
  public: cPtr_compileTimeIntDivideZeroOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntDivideZeroOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntDivideZeroOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntDivideZeroOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntDivideZeroOperator_2D_weak (const class GALGAS_compileTimeIntDivideZeroOperator & inSource) ;

  public: GALGAS_compileTimeIntDivideZeroOperator_2D_weak & operator = (const class GALGAS_compileTimeIntDivideZeroOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntDivideZeroOperator bang_compileTimeIntDivideZeroOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntDivideZeroOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntDivideZeroOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntDivideZeroOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntDivideZeroOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntDivideZeroOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMultiplyOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMultiplyOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntMultiplyOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntMultiplyOperator (const class cPtr_compileTimeIntMultiplyOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMultiplyOperator extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntMultiplyOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntMultiplyOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntMultiplyOperator class


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
  public: cPtr_compileTimeIntMultiplyOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMultiplyOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMultiplyOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntMultiplyOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntMultiplyOperator_2D_weak (const class GALGAS_compileTimeIntMultiplyOperator & inSource) ;

  public: GALGAS_compileTimeIntMultiplyOperator_2D_weak & operator = (const class GALGAS_compileTimeIntMultiplyOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntMultiplyOperator bang_compileTimeIntMultiplyOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMultiplyOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntMultiplyOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntMultiplyOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntMultiplyOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMultiplyOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntSubtractOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntSubtractOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntSubtractOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntSubtractOperator (const class cPtr_compileTimeIntSubtractOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntSubtractOperator extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntSubtractOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntSubtractOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntSubtractOperator class


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
  public: cPtr_compileTimeIntSubtractOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntSubtractOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntSubtractOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntSubtractOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntSubtractOperator_2D_weak (const class GALGAS_compileTimeIntSubtractOperator & inSource) ;

  public: GALGAS_compileTimeIntSubtractOperator_2D_weak & operator = (const class GALGAS_compileTimeIntSubtractOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntSubtractOperator bang_compileTimeIntSubtractOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntSubtractOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntSubtractOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntSubtractOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntSubtractOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntSubtractOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntEqualOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntEqualOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntEqualOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntEqualOperator (const class cPtr_compileTimeIntEqualOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntEqualOperator extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntEqualOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntEqualOperator class


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
  public: cPtr_compileTimeIntEqualOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntEqualOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntEqualOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntEqualOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntEqualOperator_2D_weak (const class GALGAS_compileTimeIntEqualOperator & inSource) ;

  public: GALGAS_compileTimeIntEqualOperator_2D_weak & operator = (const class GALGAS_compileTimeIntEqualOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntEqualOperator bang_compileTimeIntEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntEqualOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntEqualOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntEqualOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntEqualOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntEqualOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAddOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntAddOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntAddOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntAddOperator (const class cPtr_compileTimeIntAddOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntAddOperator extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntAddOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntAddOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntAddOperator class


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
  public: cPtr_compileTimeIntAddOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntAddOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntAddOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntAddOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntAddOperator_2D_weak (const class GALGAS_compileTimeIntAddOperator & inSource) ;

  public: GALGAS_compileTimeIntAddOperator_2D_weak & operator = (const class GALGAS_compileTimeIntAddOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntAddOperator bang_compileTimeIntAddOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntAddOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntAddOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntAddOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntAddOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntAddOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseAndOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseAndOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntBitWiseAndOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntBitWiseAndOperator (const class cPtr_compileTimeIntBitWiseAndOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseAndOperator extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntBitWiseAndOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseAndOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntBitWiseAndOperator class


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
  public: cPtr_compileTimeIntBitWiseAndOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseAndOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseAndOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntBitWiseAndOperator_2D_weak (const class GALGAS_compileTimeIntBitWiseAndOperator & inSource) ;

  public: GALGAS_compileTimeIntBitWiseAndOperator_2D_weak & operator = (const class GALGAS_compileTimeIntBitWiseAndOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntBitWiseAndOperator bang_compileTimeIntBitWiseAndOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseAndOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntBitWiseAndOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseAndOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntBitWiseAndOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseAndOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftLeftOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntShiftLeftOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntShiftLeftOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntShiftLeftOperator (const class cPtr_compileTimeIntShiftLeftOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntShiftLeftOperator extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntShiftLeftOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntShiftLeftOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntShiftLeftOperator class


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
  public: cPtr_compileTimeIntShiftLeftOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftLeftOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntShiftLeftOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntShiftLeftOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntShiftLeftOperator_2D_weak (const class GALGAS_compileTimeIntShiftLeftOperator & inSource) ;

  public: GALGAS_compileTimeIntShiftLeftOperator_2D_weak & operator = (const class GALGAS_compileTimeIntShiftLeftOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntShiftLeftOperator bang_compileTimeIntShiftLeftOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntShiftLeftOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntShiftLeftOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntShiftLeftOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntShiftLeftOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftLeftOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftRightOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntShiftRightOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntShiftRightOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntShiftRightOperator (const class cPtr_compileTimeIntShiftRightOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntShiftRightOperator extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntShiftRightOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntShiftRightOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntShiftRightOperator class


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
  public: cPtr_compileTimeIntShiftRightOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntShiftRightOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntShiftRightOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntShiftRightOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntShiftRightOperator_2D_weak (const class GALGAS_compileTimeIntShiftRightOperator & inSource) ;

  public: GALGAS_compileTimeIntShiftRightOperator_2D_weak & operator = (const class GALGAS_compileTimeIntShiftRightOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntShiftRightOperator bang_compileTimeIntShiftRightOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntShiftRightOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntShiftRightOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntShiftRightOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntShiftRightOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntShiftRightOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLessThanOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLessThanOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntLessThanOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntLessThanOperator (const class cPtr_compileTimeIntLessThanOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLessThanOperator extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntLessThanOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntLessThanOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntLessThanOperator class


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
  public: cPtr_compileTimeIntLessThanOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLessThanOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLessThanOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntLessThanOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntLessThanOperator_2D_weak (const class GALGAS_compileTimeIntLessThanOperator & inSource) ;

  public: GALGAS_compileTimeIntLessThanOperator_2D_weak & operator = (const class GALGAS_compileTimeIntLessThanOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntLessThanOperator bang_compileTimeIntLessThanOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLessThanOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntLessThanOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntLessThanOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntLessThanOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLessThanOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLowerOrEqualOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLowerOrEqualOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntLowerOrEqualOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntLowerOrEqualOperator (const class cPtr_compileTimeIntLowerOrEqualOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLowerOrEqualOperator extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntLowerOrEqualOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntLowerOrEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntLowerOrEqualOperator class


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
  public: cPtr_compileTimeIntLowerOrEqualOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntLowerOrEqualOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak (const class GALGAS_compileTimeIntLowerOrEqualOperator & inSource) ;

  public: GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & operator = (const class GALGAS_compileTimeIntLowerOrEqualOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntLowerOrEqualOperator bang_compileTimeIntLowerOrEqualOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntLowerOrEqualOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntXorOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntXorOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntXorOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntXorOperator (const class cPtr_compileTimeIntXorOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntXorOperator extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntXorOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntXorOperator class


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
  public: cPtr_compileTimeIntXorOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntXorOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntXorOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntXorOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntXorOperator_2D_weak (const class GALGAS_compileTimeIntXorOperator & inSource) ;

  public: GALGAS_compileTimeIntXorOperator_2D_weak & operator = (const class GALGAS_compileTimeIntXorOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntXorOperator bang_compileTimeIntXorOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntXorOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntXorOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntXorOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntXorOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntXorOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseOrOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseOrOperator : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntBitWiseOrOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntBitWiseOrOperator (const class cPtr_compileTimeIntBitWiseOrOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseOrOperator extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntBitWiseOrOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntBitWiseOrOperator class


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
  public: cPtr_compileTimeIntBitWiseOrOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntBitWiseOrOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntBitWiseOrOperator_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntBitWiseOrOperator_2D_weak (const class GALGAS_compileTimeIntBitWiseOrOperator & inSource) ;

  public: GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & operator = (const class GALGAS_compileTimeIntBitWiseOrOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntBitWiseOrOperator bang_compileTimeIntBitWiseOrOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntBitWiseOrOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntBitWiseOrOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntBitWiseOrOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntBitWiseOrOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntBitWiseOrOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMinusOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMinusOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntMinusOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntMinusOperator (const class cPtr_compileTimeIntMinusOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMinusOperator extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntMinusOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntMinusOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntMinusOperator class


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
  public: cPtr_compileTimeIntMinusOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntMinusOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntMinusOperator_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntMinusOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntMinusOperator_2D_weak (const class GALGAS_compileTimeIntMinusOperator & inSource) ;

  public: GALGAS_compileTimeIntMinusOperator_2D_weak & operator = (const class GALGAS_compileTimeIntMinusOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntMinusOperator bang_compileTimeIntMinusOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntMinusOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntMinusOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntMinusOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntMinusOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntMinusOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntComplementOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntComplementOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntComplementOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_compileTimeIntComplementOperator (const class cPtr_compileTimeIntComplementOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntComplementOperator extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntComplementOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntComplementOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntComplementOperator class


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
  public: cPtr_compileTimeIntComplementOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeIntComplementOperator_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_compileTimeIntComplementOperator_2D_weak : public GALGAS_prefixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_compileTimeIntComplementOperator_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_compileTimeIntComplementOperator_2D_weak (const class GALGAS_compileTimeIntComplementOperator & inSource) ;

  public: GALGAS_compileTimeIntComplementOperator_2D_weak & operator = (const class GALGAS_compileTimeIntComplementOperator & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_compileTimeIntComplementOperator bang_compileTimeIntComplementOperator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_compileTimeIntComplementOperator_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_compileTimeIntComplementOperator_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_compileTimeIntComplementOperator_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_compileTimeIntComplementOperator_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeIntComplementOperator_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolTypeAST reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolTypeAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_boolTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolTypeAST (const class cPtr_boolTypeAST * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolTypeAST extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolTypeAST class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolTypeAST class


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
//--- Extension getter keyRepresentationForErrorSignaling
  public: virtual class GALGAS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension getter locationForErrorSignaling
  public: virtual class GALGAS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension method enterInContext
  public: virtual void method_enterInContext (class GALGAS_semanticContext & ioContext,
           class GALGAS_declarationDecorationList & ioDecoratedDeclarationList,
           class GALGAS_decoratedRegularRoutineList & ioDecoratedRoutineList,
           class GALGAS_routineListIR & ioRoutineListIR,
           class GALGAS_staticListInitializationMap & ioStaticListValueMap,
           class GALGAS_staticEntityMap & ioStaticEntityMap,
           class GALGAS_controlRegisterUserAccesMapAST & ioControlRegisterUserAccesMapAST,
           class GALGAS_userLLVMTypeDefinitionListIR & ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GALGAS_semanticTypePrecedenceGraph & ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties

//--- Constructor
  public: cPtr_boolTypeAST (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolTypeAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolTypeAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolTypeAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolTypeAST_2D_weak (const class GALGAS_boolTypeAST & inSource) ;

  public: GALGAS_boolTypeAST_2D_weak & operator = (const class GALGAS_boolTypeAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolTypeAST bang_boolTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolTypeAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolTypeAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolTypeAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolTypeAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolTypeAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolImplicitConverterToBoolean reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GALGAS_boolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolImplicitConverterToBoolean (const class cPtr_boolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolImplicitConverterToBoolean class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolImplicitConverterToBoolean class


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
  public: cPtr_boolImplicitConverterToBoolean (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolImplicitConverterToBoolean_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolImplicitConverterToBoolean_2D_weak : public GALGAS_abstractImplicitConverterToBoolean_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_boolImplicitConverterToBoolean_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_boolImplicitConverterToBoolean_2D_weak (const class GALGAS_boolImplicitConverterToBoolean & inSource) ;

  public: GALGAS_boolImplicitConverterToBoolean_2D_weak & operator = (const class GALGAS_boolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_boolImplicitConverterToBoolean bang_boolImplicitConverterToBoolean_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolImplicitConverterToBoolean_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolImplicitConverterToBoolean_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolImplicitConverterToBoolean_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolImplicitConverterToBoolean_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @boolNotOperator reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_boolNotOperator : public GALGAS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_boolNotOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_boolNotOperator (const class cPtr_boolNotOperator * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_boolNotOperator extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_boolNotOperator class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_boolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_boolNotOperator class


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
  public: cPtr_boolNotOperator (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

