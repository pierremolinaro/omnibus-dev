#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//   enum scopeKind
//--------------------------------------------------------------------------------------------------

class GGS_scopeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_scopeKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_selectScope,
    enum_repeatScope
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeKind extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_scopeKind class_func_repeatScope (LOCATION_ARGS) ;

  public: static class GGS_scopeKind class_func_selectScope (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isRepeatScope (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSelectScope (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @referenceStateMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_referenceStateMap final {

  public: DownEnumerator_referenceStateMap (const class GGS_referenceStateMap & inMap) ;

  public: ~ DownEnumerator_referenceStateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_valuedObjectState current_mState (LOCATION_ARGS) const ;

  public: class GGS_referenceStateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_referenceStateMap (const DownEnumerator_referenceStateMap &) = delete ;
  private: DownEnumerator_referenceStateMap & operator = (const DownEnumerator_referenceStateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_referenceStateMap final {
  public: UpEnumerator_referenceStateMap (const class GGS_referenceStateMap & inMap)  ;

  public: ~ UpEnumerator_referenceStateMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_valuedObjectState current_mState (LOCATION_ARGS) const ;
  public: class GGS_referenceStateMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_referenceStateMap (const UpEnumerator_referenceStateMap &) = delete ;
  private: UpEnumerator_referenceStateMap & operator = (const UpEnumerator_referenceStateMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_referenceStateMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_referenceStateMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_referenceStateMap (void) ;

//--- Handle copy
  public: GGS_referenceStateMap (const GGS_referenceStateMap & inSource) ;
  public: GGS_referenceStateMap & operator = (const GGS_referenceStateMap & inSource) ;

//--- Build
  protected: void build (LOCATION_ARGS) ;

//--- isValid
  public: bool isValid (void) const override ;

//--- Drop
  public: void drop (void) override ;

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;



//--- performInsert
  protected: void performInsert (const class GGS_referenceStateMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_referenceStateMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_referenceStateMap init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_referenceStateMap extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_referenceStateMap class_func_mapWithMapToOverride (const class GGS_referenceStateMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_valuedObjectState constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMStateForKey (class GGS_valuedObjectState constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_valuedObjectState & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                               const class GGS_uint & constinOperand1
                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_stringset getter_keySet (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_valuedObjectState getter_mStateForKey (const class GGS_string & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_referenceStateMap getter_overriddenMap (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_referenceStateMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_referenceStateMap ;
  friend class DownEnumerator_referenceStateMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @scopeStack_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_scopeStack_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_scopeKind mProperty_mScopeKind ;
  public: inline GGS_scopeKind readProperty_mScopeKind (void) const {
    return mProperty_mScopeKind ;
  }

  public: GGS_bool mProperty_mFirstBranch ;
  public: inline GGS_bool readProperty_mFirstBranch (void) const {
    return mProperty_mFirstBranch ;
  }

  public: GGS_referenceStateMap mProperty_mInitialStateMap ;
  public: inline GGS_referenceStateMap readProperty_mInitialStateMap (void) const {
    return mProperty_mInitialStateMap ;
  }

  public: GGS_referenceStateMap mProperty_mReferenceStateMap ;
  public: inline GGS_referenceStateMap readProperty_mReferenceStateMap (void) const {
    return mProperty_mReferenceStateMap ;
  }

  public: GGS_lstringlist mProperty_mObjectList ;
  public: inline GGS_lstringlist readProperty_mObjectList (void) const {
    return mProperty_mObjectList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_scopeStack_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMScopeKind (const GGS_scopeKind & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mScopeKind = inValue ;
  }

  public: inline void setter_setMFirstBranch (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFirstBranch = inValue ;
  }

  public: inline void setter_setMInitialStateMap (const GGS_referenceStateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialStateMap = inValue ;
  }

  public: inline void setter_setMReferenceStateMap (const GGS_referenceStateMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReferenceStateMap = inValue ;
  }

  public: inline void setter_setMObjectList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_scopeStack_2E_element (const GGS_scopeKind & in_mScopeKind,
                                     const GGS_bool & in_mFirstBranch,
                                     const GGS_referenceStateMap & in_mInitialStateMap,
                                     const GGS_referenceStateMap & in_mReferenceStateMap,
                                     const GGS_lstringlist & in_mObjectList) ;

//--------------------------------- Copy constructor
  public: GGS_scopeStack_2E_element (const GGS_scopeStack_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_scopeStack_2E_element & operator = (const GGS_scopeStack_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_scopeStack_2E_element init_21__21__21__21__21_ (const class GGS_scopeKind & inOperand0,
                                                                     const class GGS_bool & inOperand1,
                                                                     const class GGS_referenceStateMap & inOperand2,
                                                                     const class GGS_referenceStateMap & inOperand3,
                                                                     const class GGS_lstringlist & inOperand4,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_scopeStack_2E_element extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueOperandAST_2E_arrayAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_arrayAccess : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_index ;
  public: inline GGS_expressionAST readProperty_index (void) const {
    return mProperty_index ;
  }

  public: GGS_location mProperty_endOfIndex ;
  public: inline GGS_location readProperty_endOfIndex (void) const {
    return mProperty_endOfIndex ;
  }

  public: GGS_bool mProperty_checkIndexExpression ;
  public: inline GGS_bool readProperty_checkIndexExpression (void) const {
    return mProperty_checkIndexExpression ;
  }

  public: GGS_LValueOperandAST mProperty_next ;
  public: inline GGS_LValueOperandAST readProperty_next (void) const {
    return mProperty_next ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_arrayAccess (void) ;

//--------------------------------- Property setters
  public: inline void setter_setIndex (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_index = inValue ;
  }

  public: inline void setter_setEndOfIndex (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfIndex = inValue ;
  }

  public: inline void setter_setCheckIndexExpression (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_checkIndexExpression = inValue ;
  }

  public: inline void setter_setNext (const GGS_LValueOperandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_next = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueOperandAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                               const GGS_location & in_endOfIndex,
                                               const GGS_bool & in_checkIndexExpression,
                                               const GGS_LValueOperandAST & in_next) ;

//--------------------------------- Copy constructor
  public: GGS_LValueOperandAST_2E_arrayAccess (const GGS_LValueOperandAST_2E_arrayAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueOperandAST_2E_arrayAccess & operator = (const GGS_LValueOperandAST_2E_arrayAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueOperandAST_2E_arrayAccess init_21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                           const class GGS_location & inOperand1,
                                                                           const class GGS_bool & inOperand2,
                                                                           const class GGS_LValueOperandAST & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueOperandAST_2E_arrayAccess extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_arrayAccess & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: LValueOperandAST.arrayAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_LValueOperandAST_2E_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_arrayAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_LValueOperandAST_2E_arrayAccess_3F_ (const GGS_LValueOperandAST_2E_arrayAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_LValueOperandAST_2E_arrayAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_LValueOperandAST_2E_arrayAccess unwrappedValue (void) const {
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
  public: static GGS_LValueOperandAST_2E_arrayAccess_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_arrayAccess_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_arrayAccess_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueOperandAST_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

  public: GGS_LValueOperandAST mProperty_next ;
  public: inline GGS_LValueOperandAST readProperty_next (void) const {
    return mProperty_next ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

  public: inline void setter_setNext (const GGS_LValueOperandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_next = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueOperandAST_2E_property (const GGS_lstring & in_name,
                                            const GGS_LValueOperandAST & in_next) ;

//--------------------------------- Copy constructor
  public: GGS_LValueOperandAST_2E_property (const GGS_LValueOperandAST_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueOperandAST_2E_property & operator = (const GGS_LValueOperandAST_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueOperandAST_2E_property init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_LValueOperandAST & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueOperandAST_2E_property extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_property & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: LValueOperandAST.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_LValueOperandAST_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_LValueOperandAST_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_LValueOperandAST_2E_property_3F_ (const GGS_LValueOperandAST_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_LValueOperandAST_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_LValueOperandAST_2E_property unwrappedValue (void) const {
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
  public: static GGS_LValueOperandAST_2E_property_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_property_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_driver struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_driver : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_bool mProperty_instancied ;
  public: inline GGS_bool readProperty_instancied (void) const {
    return mProperty_instancied ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_driver (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setInstancied (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instancied = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_driver (const GGS_omnibusType & in_type,
                                      const GGS_bool & in_instancied) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_driver (const GGS_valuedObject_2E_driver & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_driver & operator = (const GGS_valuedObject_2E_driver & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_driver init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                          const class GGS_bool & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_driver extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.driver? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_driver_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_driver mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_driver_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_driver_3F_ (const GGS_valuedObject_2E_driver & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_driver_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_driver unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_driver_3F_ extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_driver_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_globalConstant struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalConstant : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_objectIR mProperty_objectIR ;
  public: inline GGS_objectIR readProperty_objectIR (void) const {
    return mProperty_objectIR ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalConstant (void) ;

//--------------------------------- Property setters
  public: inline void setter_setObjectIR (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_objectIR = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_globalConstant (const GGS_objectIR & in_objectIR) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_globalConstant (const GGS_valuedObject_2E_globalConstant & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_globalConstant & operator = (const GGS_valuedObject_2E_globalConstant & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_globalConstant init_21_ (const class GGS_objectIR & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_globalConstant extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.globalConstant? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalConstant_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_globalConstant mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalConstant_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_globalConstant_3F_ (const GGS_valuedObject_2E_globalConstant & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_globalConstant_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_globalConstant unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_globalConstant_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalConstant_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_globalSyncInstance struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalSyncInstance : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_lstring mProperty_omnibusName ;
  public: inline GGS_lstring readProperty_omnibusName (void) const {
    return mProperty_omnibusName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalSyncInstance (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setOmnibusName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_omnibusName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_globalSyncInstance (const GGS_omnibusType & in_type,
                                                  const GGS_lstring & in_omnibusName) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_globalSyncInstance (const GGS_valuedObject_2E_globalSyncInstance & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_globalSyncInstance & operator = (const GGS_valuedObject_2E_globalSyncInstance & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_globalSyncInstance init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_globalSyncInstance extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.globalSyncInstance? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_globalSyncInstance_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_globalSyncInstance mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_globalSyncInstance_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_globalSyncInstance_3F_ (const GGS_valuedObject_2E_globalSyncInstance & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_globalSyncInstance_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_globalSyncInstance unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_globalSyncInstance_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_globalSyncInstance_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_localConstant struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localConstant : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_lstring mProperty_omnibusName ;
  public: inline GGS_lstring readProperty_omnibusName (void) const {
    return mProperty_omnibusName ;
  }

  public: GGS_bool mProperty_isFormalInputArgument ;
  public: inline GGS_bool readProperty_isFormalInputArgument (void) const {
    return mProperty_isFormalInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localConstant (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setOmnibusName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_omnibusName = inValue ;
  }

  public: inline void setter_setIsFormalInputArgument (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_isFormalInputArgument = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_localConstant (const GGS_omnibusType & in_type,
                                             const GGS_lstring & in_omnibusName,
                                             const GGS_bool & in_isFormalInputArgument) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_localConstant (const GGS_valuedObject_2E_localConstant & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_localConstant & operator = (const GGS_valuedObject_2E_localConstant & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_localConstant init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_bool & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_localConstant extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.localConstant? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localConstant_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_localConstant mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localConstant_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_localConstant_3F_ (const GGS_valuedObject_2E_localConstant & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_localConstant_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_localConstant unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_localConstant_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localConstant_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_localVariable struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

  public: GGS_lstring mProperty_omnibusName ;
  public: inline GGS_lstring readProperty_omnibusName (void) const {
    return mProperty_omnibusName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setOmnibusName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_omnibusName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_localVariable (const GGS_omnibusType & in_type,
                                             const GGS_lstring & in_omnibusName) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_localVariable (const GGS_valuedObject_2E_localVariable & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_localVariable & operator = (const GGS_valuedObject_2E_localVariable & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_localVariable init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_localVariable extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.localVariable? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_localVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_localVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_localVariable_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_localVariable_3F_ (const GGS_valuedObject_2E_localVariable & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_localVariable_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_localVariable unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_localVariable_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_localVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @valuedObject_2E_task struct
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_task : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_type ;
  public: inline GGS_omnibusType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_task (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_valuedObject_2E_task (const GGS_omnibusType & in_type) ;

//--------------------------------- Copy constructor
  public: GGS_valuedObject_2E_task (const GGS_valuedObject_2E_task & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_valuedObject_2E_task & operator = (const GGS_valuedObject_2E_task & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_valuedObject_2E_task init_21_ (const class GGS_omnibusType & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_valuedObject_2E_task extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_task ;

//--------------------------------------------------------------------------------------------------
// Phase 1: valuedObject.task? optional
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject_2E_task_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_valuedObject_2E_task mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_valuedObject_2E_task_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_valuedObject_2E_task_3F_ (const GGS_valuedObject_2E_task & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_valuedObject_2E_task_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_valuedObject_2E_task unwrappedValue (void) const {
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
  public: static GGS_valuedObject_2E_task_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject_2E_task_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @referenceStateMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_valuedObjectState mProperty_mState ;
  public: inline GGS_valuedObjectState readProperty_mState (void) const {
    return mProperty_mState ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_referenceStateMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMState (const GGS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mState = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_referenceStateMap_2E_element (const GGS_lstring & in_lkey,
                                            const GGS_valuedObjectState & in_mState) ;

//--------------------------------- Copy constructor
  public: GGS_referenceStateMap_2E_element (const GGS_referenceStateMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_referenceStateMap_2E_element & operator = (const GGS_referenceStateMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_referenceStateMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_valuedObjectState & inOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_referenceStateMap_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: referenceStateMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_referenceStateMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_referenceStateMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_referenceStateMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_referenceStateMap_2E_element_3F_ (const GGS_referenceStateMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_referenceStateMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_referenceStateMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_referenceStateMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@valuedObjectState string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_valuedObjectState & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendTrunc'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendTrunc (class GGS_instructionListIR & ioObject,
                                  const class GGS_omnibusType constin_inResultType,
                                  class GGS_objectIR & io_ioObject,
                                  class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @truncIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_truncIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_truncIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_truncIR (const class cPtr_truncIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_truncIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                           const class GGS_objectIR & inOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncIR extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @truncIR class
//--------------------------------------------------------------------------------------------------

class cPtr_truncIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void truncIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                     const class GGS_objectIR & inOperand1,
                                     Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;


//--- Default constructor
  public: cPtr_truncIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncIR (const GGS_objectIR & in_mResult,
                        const GGS_objectIR & in_mSource,
                        Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @truncIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_truncIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_truncIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_truncIR_2E_weak (const class GGS_truncIR & inSource) ;

  public: GGS_truncIR_2E_weak & operator = (const class GGS_truncIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_truncIR_2E_weak init_nil (void) {
    GGS_truncIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_truncIR bang_truncIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_truncIR unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncIR_2E_weak extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_truncIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@instructionAST noteInstructionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteInstructionTypesInPrecedenceGraph (class cPtr_instructionAST * inObject,
                                                                class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@instructionAST instructionSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_instructionSemanticAnalysis (class cPtr_instructionAST * inObject,
                                                      const class GGS_omnibusType constin_inSelfType,
                                                      const class GGS_routineAttributes constin_inRoutineAttributes,
                                                      const class GGS_semanticContext constin_inContext,
                                                      const class GGS_mode constin_inMode,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                      class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                      class GGS_allocaList & io_ioAllocaList,
                                                      class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListAST analyzeBranchInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeBranchInstructionList (const class GGS_instructionListAST inObject,
                                                   const class GGS_omnibusType constin_inSelfType,
                                                   const class GGS_routineAttributes constin_inRoutineAttributes,
                                                   const class GGS_location constin_inEndOfInstructionList,
                                                   const class GGS_semanticContext constin_inContext,
                                                   const class GGS_mode constin_inMode,
                                                   class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                   class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                   class GGS_allocaList & io_ioAllocaList,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendSourceLineComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSourceLineComment (class GGS_instructionListIR & ioObject,
                                              const class GGS_location constin_inSourceLocation,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (class GGS_universalValuedObjectMap & ioObject,
                                  const class GGS_location constin_inErrorLocation,
                                  class Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (class GGS_universalValuedObjectMap & ioObject,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListAST analyzeRoutineInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeRoutineInstructionList (const class GGS_instructionListAST inObject,
                                                    const class GGS_omnibusType constin_inSelfType,
                                                    const class GGS_routineAttributes constin_inRoutineAttributes,
                                                    const class GGS_semanticContext constin_inContext,
                                                    const class GGS_mode constin_inMode,
                                                    class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                    class GGS_staticEntityMap & io_ioStaticEntityMap,
                                                    class GGS_universalValuedObjectMap & io_ioUniversalMap,
                                                    class GGS_allocaList & io_ioAllocaList,
                                                    class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR instructionListLLVMCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_instructionListLLVMCode (const class GGS_instructionListIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractInstructionIR llvmInstructionCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmInstructionCode (class cPtr_abstractInstructionIR * inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalBooleanInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBooleanInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_literalBooleanInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalBooleanInExpressionAST (const class cPtr_literalBooleanInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalBooleanInExpressionAST init_21_ (const class GGS_bool & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalBooleanInExpressionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBooleanInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalBooleanInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalBooleanInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalBooleanInExpressionAST_init_21_ (const class GGS_bool & inOperand0,
                                                       Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_bool mProperty_mValue ;


//--- Default constructor
  public: cPtr_literalBooleanInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalBooleanInExpressionAST (const GGS_bool & in_mValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalBooleanInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalBooleanInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalBooleanInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalBooleanInExpressionAST_2E_weak (const class GGS_literalBooleanInExpressionAST & inSource) ;

  public: GGS_literalBooleanInExpressionAST_2E_weak & operator = (const class GGS_literalBooleanInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalBooleanInExpressionAST_2E_weak init_nil (void) {
    GGS_literalBooleanInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalBooleanInExpressionAST bang_literalBooleanInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalBooleanInExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalBooleanInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalBooleanInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalBooleanInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBooleanInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'omnibus_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_omnibus_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_omnibus_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_assignment_5F_combined_5F_with_5F_operator_ (class GGS_omnibusInfixOperator & outArgument0,
                                                                          class GGS_location & outArgument1,
                                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_assignment_5F_combined_5F_with_5F_operator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimeInfixOperator_ (class GGS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                        class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimeInfixOperator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimePrefixOperator_ (class GGS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compileTimePrefixOperator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_ (class GGS_ctExpressionAST & outArgument0,
                                                             class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_addition_ (class GGS_ctExpressionAST & outArgument0,
                                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_addition_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_ (class GGS_ctExpressionAST & outArgument0,
                                                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_and_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_ (class GGS_ctExpressionAST & outArgument0,
                                                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_bitwise_5F_xor_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_comparison_ (class GGS_ctExpressionAST & outArgument0,
                                                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_comparison_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_equality_ (class GGS_ctExpressionAST & outArgument0,
                                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_equality_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_product_ (class GGS_ctExpressionAST & outArgument0,
                                                                        class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_product_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_shift_ (class GGS_ctExpressionAST & outArgument0,
                                                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_expression_5F_shift_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_primary_ (class GGS_ctExpressionAST & outArgument0,
                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_compile_5F_time_5F_primary_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_control_5F_register_5F_lvalue_ (class GGS_ast & ioArgument0,
                                                             class GGS_controlRegisterLValueAST & outArgument1,
                                                             class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_control_5F_register_5F_lvalue_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_ (class GGS_ast & ioArgument0,
                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_effective_5F_parameters_ (class GGS_ast & ioArgument0,
                                                       class GGS_effectiveArgumentListAST & outArgument1,
                                                       class GGS_location & outArgument2,
                                                       class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_effective_5F_parameters_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_ast & ioArgument0,
                                          class GGS_expressionAST & outArgument1,
                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_access_5F_list_ (class GGS_ast & ioArgument0,
                                                            class GGS_primaryInExpressionAccessListAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_access_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_addition_ (class GGS_ast & ioArgument0,
                                                      class GGS_expressionAST & outArgument1,
                                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_addition_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_and_ (class GGS_ast & ioArgument0,
                                                            class GGS_expressionAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_and_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_or_ (class GGS_ast & ioArgument0,
                                                           class GGS_expressionAST & outArgument1,
                                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_or_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_xor_ (class GGS_ast & ioArgument0,
                                                            class GGS_expressionAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_bitwise_5F_xor_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_comparison_ (class GGS_ast & ioArgument0,
                                                        class GGS_expressionAST & outArgument1,
                                                        class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_comparison_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_equality_ (class GGS_ast & ioArgument0,
                                                      class GGS_expressionAST & outArgument1,
                                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_equality_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_if_ (class GGS_ast & ioArgument0,
                                                class GGS_ifExpressionAST & outArgument1,
                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_if_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_logical_5F_and_ (class GGS_ast & ioArgument0,
                                                            class GGS_expressionAST & outArgument1,
                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_logical_5F_and_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_product_ (class GGS_ast & ioArgument0,
                                                     class GGS_expressionAST & outArgument1,
                                                     class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_product_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_shift_ (class GGS_ast & ioArgument0,
                                                   class GGS_expressionAST & outArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_5F_shift_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_ (class GGS_ast & ioArgument0,
                                                       const class GGS_lstring constinArgument1,
                                                       class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_header_ (class GGS_ast & ioArgument0,
                                                  class GGS_mode & outArgument1,
                                                  class GGS_lstring & outArgument2,
                                                  class GGS_lstringlist & outArgument3,
                                                  class GGS_routineFormalArgumentListAST & outArgument4,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_function_5F_header_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_formal_5F_arguments_ (class GGS_genericFormalParameterList & outArgument0,
                                                              class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_formal_5F_arguments_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_where_5F_clause_ (class GGS_ctExpressionAST & outArgument0,
                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_generic_5F_where_5F_clause_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guard_ (class GGS_ast & ioArgument0,
                                     const class GGS_lstring constinArgument1,
                                     const class GGS_string constinArgument2,
                                     class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guard_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guarded_5F_command_ (class GGS_ast & ioArgument0,
                                                  const class GGS_bool constinArgument1,
                                                  class GGS_guardedCommandAST & outArgument2,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_guarded_5F_command_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_ (class GGS_ast & ioArgument0,
                                                 class GGS_ifInstructionAST & outArgument1,
                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_if_5F_instruction_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_import_5F_file_ (class GGS_lstringlist & ioArgument0,
                                              class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_import_5F_file_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_ (class GGS_ast & ioArgument0,
                                           class GGS_instructionListAST & ioArgument1,
                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instruction_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instructionList_ (class GGS_ast & ioArgument0,
                                               class GGS_instructionListAST & outArgument1,
                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_instructionList_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_isr_5F_in_5F_driver_ (class GGS_ast & ioArgument0,
                                                   const class GGS_lstring constinArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_isr_5F_in_5F_driver_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvmPrefixOperator_ (class GGS_llvmPrefixOperatorEnumeration & outArgument0,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvmPrefixOperator_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_function_5F_header_ (class GGS_lstring & outArgument0,
                                                          class GGS_lstring & outArgument1,
                                                          class GGS_genericFormalParameterList & outArgument2,
                                                          class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_function_5F_header_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_ (class GGS_abstractLLVMInstruction & outArgument0,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_5F_list_ (class GGS_llvmGenerationInstructionList & outArgument0,
                                                           class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_llvm_5F_instruction_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_ (class GGS_ast & ioArgument0,
                                      class GGS_LValueAST & outArgument1,
                                      class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_5F_operand_ (class GGS_ast & ioArgument0,
                                                 class GGS_LValueOperandAST & outArgument1,
                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_lvalue_5F_operand_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_mode_ (class GGS_mode & outArgument0,
                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_mode_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_primary_ (class GGS_ast & ioArgument0,
                                       class GGS_expressionAST & outArgument1,
                                       class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_primary_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                                            class GGS_structurePropertyListAST & ioArgument1,
                                                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_struct_5F_property_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                            class GGS_structurePropertyListAST & ioArgument1,
                                                                            class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_private_5F_struct_5F_property_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_call_ (class GGS_ast & ioArgument0,
                                                 class GGS_callInstructionAST & outArgument1,
                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_call_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_formal_5F_arguments_ (class GGS_ast & ioArgument0,
                                                                class GGS_routineFormalArgumentListAST & outArgument1,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_formal_5F_arguments_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_ (class GGS_ast & ioArgument0,
                                                                         class GGS_routineFormalArgumentListAST & outArgument1,
                                                                         class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_procedure_5F_input_5F_formal_5F_arguments_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_propertyGetterSetter_ (class GGS_ast & ioArgument0,
                                                    const class GGS_propertyVisibility constinArgument1,
                                                    const class GGS_lstring constinArgument2,
                                                    const class GGS_propertyAttributeList constinArgument3,
                                                    const class GGS_lstring constinArgument4,
                                                    class GGS_structurePropertyListAST & ioArgument5,
                                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_propertyGetterSetter_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_registerDeclaration_ (class GGS_ast & ioArgument0,
                                                   class GGS_controlRegisterNameListAST & ioArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_registerDeclaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_ast & ioArgument0,
                                               class GGS_lstringlist & outArgument1,
                                               class GGS_location & outArgument2,
                                               class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArrayProperty_ (class GGS_ast & ioArgument0,
                                                   class GGS_staticListPropertyListAST & ioArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArrayProperty_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArray_5F_exp_ (class GGS_ast & ioArgument0,
                                                  class GGS_extendStaticListElementAST & ioArgument1,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_staticArray_5F_exp_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_struct_5F_property_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                 const class GGS_propertyVisibility constinArgument1,
                                                                 class GGS_structurePropertyListAST & ioArgument2,
                                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_struct_5F_property_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_system_5F_routine_5F_declaration_ (class GGS_ast & ioArgument0,
                                                                const class GGS_lstring constinArgument1,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_system_5F_routine_5F_declaration_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_task_5F_event_ (class GGS_ast & ioArgument0,
                                             const class GGS_lstring constinArgument1,
                                             class GGS_taskSetupListAST & ioArgument2,
                                             class GGS_taskSetupListAST & ioArgument3,
                                             class GGS_taskSetupListAST & ioArgument4,
                                             class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_task_5F_event_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_ (class GGS_ast & ioArgument0,
                                                  class GGS_lstring & outArgument1,
                                                  class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_5F_definition_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_syntax_import_5F_file_i0_ (GGS_lstringlist & ioArgument0,
                                                             Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_import_5F_file_i0_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_import_5F_file_i0_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i1_ (GGS_ast & ioArgument0,
                                                              GGS_lstringlist & outArgument1,
                                                              GGS_location & outArgument2,
                                                              Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i1_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_start_5F_symbol_i1_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i2_ (GGS_ast & ioArgument0,
                                                      GGS_expressionAST & outArgument1,
                                                      Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i2_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i2_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i3_ (GGS_lstring & outArgument0,
                                                                         GGS_lstring & outArgument1,
                                                                         GGS_genericFormalParameterList & outArgument2,
                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i3_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_llvm_5F_function_5F_header_i3_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i4_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i4_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i4_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i5_ (GGS_ast & ioArgument0,
                                                          GGS_instructionListAST & ioArgument1,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i5_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i5_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i6_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i6_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i6_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i7_ (GGS_ast & ioArgument0,
                                                          GGS_instructionListAST & ioArgument1,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i7_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i7_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i8_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i8_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i8_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i9_ (GGS_ast & ioArgument0,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i9_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i9_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i10_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i10_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i10_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i11_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i11_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i11_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_access_5F_list_i12_ (GGS_ast & ioArgument0,
                                                                            GGS_primaryInExpressionAccessListAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_access_5F_list_i12_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_access_5F_list_i12_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i13_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i13_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i13_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i14_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i14_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i14_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i15_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i15_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i15_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i16_ (GGS_ctExpressionAST & outArgument0,
                                                                             Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i16_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_i16_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i17_ (GGS_ctExpressionAST & outArgument0,
                                                                                               Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i17_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_xor_i17_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i18_ (GGS_ctExpressionAST & outArgument0,
                                                                                               Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i18_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_bitwise_5F_and_i18_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i19_ (GGS_ctExpressionAST & outArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i19_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_equality_i19_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i20_ (GGS_ctExpressionAST & outArgument0,
                                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i20_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_comparison_i20_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i21_ (GGS_ctExpressionAST & outArgument0,
                                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i21_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_shift_i21_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i22_ (GGS_ctExpressionAST & outArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i22_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_addition_i22_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i23_ (GGS_ctExpressionAST & outArgument0,
                                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i23_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_expression_5F_product_i23_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i24_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i24_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i24_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i25_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i25_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i25_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i26_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i26_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i26_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i27_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i27_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i27_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i28_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i28_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i28_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i29_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i29_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i29_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i30_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i30_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compile_5F_time_5F_primary_i30_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i31_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i31_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i31_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i32_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i32_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i32_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_registerDeclaration_i33_ (GGS_ast & ioArgument0,
                                                                   GGS_controlRegisterNameListAST & ioArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_registerDeclaration_i33_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_registerDeclaration_i33_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i34_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i34_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i34_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i35_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i35_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i35_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i36_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i36_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i36_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_effective_5F_parameters_i37_ (GGS_ast & ioArgument0,
                                                                       GGS_effectiveArgumentListAST & outArgument1,
                                                                       GGS_location & outArgument2,
                                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_effective_5F_parameters_i37_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_effective_5F_parameters_i37_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimeInfixOperator_i38_ (GGS_compileTimeInfixOperatorEnumeration & outArgument0,
                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compileTimeInfixOperator_i38_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compileTimeInfixOperator_i38_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i39_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i39_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i39_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i40_ (GGS_ast & ioArgument0,
                                                                  GGS_lstring & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_type_5F_definition_i40_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i40_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i41_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i41_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i41_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i42_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i42_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i42_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i43_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i43_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i43_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i44_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i44_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i44_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i45_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i45_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i45_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i46_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i46_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i46_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i47_ (GGS_ast & ioArgument0,
                                                                                const GGS_lstring constinArgument1,
                                                                                Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i47_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i47_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i48_ (GGS_ast & ioArgument0,
                                                                                const GGS_lstring constinArgument1,
                                                                                Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i48_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i48_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i49_ (GGS_ast & ioArgument0,
                                                                                const GGS_lstring constinArgument1,
                                                                                Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i49_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_system_5F_routine_5F_declaration_i49_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_compileTimePrefixOperator_i50_ (GGS_compileTimePrefixOperatorEnumeration & outArgument0,
                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_compileTimePrefixOperator_i50_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_compileTimePrefixOperator_i50_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i51_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i51_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i51_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i52_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i52_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i52_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_if_5F_instruction_i53_ (GGS_ast & ioArgument0,
                                                                 GGS_ifInstructionAST & outArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_if_5F_instruction_i53_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_if_5F_instruction_i53_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i54_ (GGS_ast & ioArgument0,
                                                                  GGS_lstring & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_type_5F_definition_i54_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i54_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i55_ (GGS_ast & ioArgument0,
                                                                             GGS_controlRegisterLValueAST & outArgument1,
                                                                             Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i55_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_control_5F_register_5F_lvalue_i55_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i56_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i56_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i56_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvmPrefixOperator_i57_ (GGS_llvmPrefixOperatorEnumeration & outArgument0,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_llvmPrefixOperator_i57_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_llvmPrefixOperator_i57_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i58_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i58_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i58_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i59_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i59_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i59_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guard_i60_ (GGS_ast & ioArgument0,
                                                     const GGS_lstring constinArgument1,
                                                     const GGS_string constinArgument2,
                                                     Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_guard_i60_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_guard_i60_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_i61_ (GGS_ast & ioArgument0,
                                                          GGS_expressionAST & outArgument1,
                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_i61_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_i61_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i62_ (GGS_ast & ioArgument0,
                                                                            GGS_expressionAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i62_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_logical_5F_and_i62_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i63_ (GGS_ast & ioArgument0,
                                                                           GGS_expressionAST & outArgument1,
                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i63_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_or_i63_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i64_ (GGS_ast & ioArgument0,
                                                                            GGS_expressionAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i64_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_xor_i64_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i65_ (GGS_ast & ioArgument0,
                                                                            GGS_expressionAST & outArgument1,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i65_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_bitwise_5F_and_i65_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_equality_i66_ (GGS_ast & ioArgument0,
                                                                      GGS_expressionAST & outArgument1,
                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_equality_i66_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_equality_i66_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_comparison_i67_ (GGS_ast & ioArgument0,
                                                                        GGS_expressionAST & outArgument1,
                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_comparison_i67_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_comparison_i67_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_shift_i68_ (GGS_ast & ioArgument0,
                                                                   GGS_expressionAST & outArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_shift_i68_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_shift_i68_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_addition_i69_ (GGS_ast & ioArgument0,
                                                                      GGS_expressionAST & outArgument1,
                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_addition_i69_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_addition_i69_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_product_i70_ (GGS_ast & ioArgument0,
                                                                     GGS_expressionAST & outArgument1,
                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_product_i70_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_product_i70_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i71_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i71_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i71_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i72_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i72_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i72_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i73_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i73_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i73_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i74_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i74_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i74_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i75_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i75_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i75_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i76_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i76_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i76_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i77_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i77_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i77_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instructionList_i78_ (GGS_ast & ioArgument0,
                                                               GGS_instructionListAST & outArgument1,
                                                               Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instructionList_i78_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instructionList_i78_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i79_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i79_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i79_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i80_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i80_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i80_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i81_ (GGS_ast & ioArgument0,
                                                       GGS_expressionAST & outArgument1,
                                                       Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i81_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i81_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_expression_5F_if_i82_ (GGS_ast & ioArgument0,
                                                                GGS_ifExpressionAST & outArgument1,
                                                                Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_expression_5F_if_i82_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_expression_5F_if_i82_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i83_ (GGS_genericFormalParameterList & outArgument0,
                                                                              Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i83_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_generic_5F_formal_5F_arguments_i83_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i84_ (GGS_ctExpressionAST & outArgument0,
                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i84_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_generic_5F_where_5F_clause_i84_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i85_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i85_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i85_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i86_ (GGS_ast & ioArgument0,
                                                                                                            GGS_structurePropertyListAST & ioArgument1,
                                                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i86_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_private_5F_or_5F_public_5F_struct_5F_property_5F_declaration_i86_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i87_ (GGS_ast & ioArgument0,
                                                                                            GGS_structurePropertyListAST & ioArgument1,
                                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i87_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_private_5F_struct_5F_property_5F_declaration_i87_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i88_ (GGS_ast & ioArgument0,
                                                                                 const GGS_propertyVisibility constinArgument1,
                                                                                 GGS_structurePropertyListAST & ioArgument2,
                                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i88_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i88_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i89_ (GGS_ast & ioArgument0,
                                                                                 const GGS_propertyVisibility constinArgument1,
                                                                                 GGS_structurePropertyListAST & ioArgument2,
                                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i89_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_struct_5F_property_5F_declaration_i89_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_propertyGetterSetter_i90_ (GGS_ast & ioArgument0,
                                                                    const GGS_propertyVisibility constinArgument1,
                                                                    const GGS_lstring constinArgument2,
                                                                    const GGS_propertyAttributeList constinArgument3,
                                                                    const GGS_lstring constinArgument4,
                                                                    GGS_structurePropertyListAST & ioArgument5,
                                                                    Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_propertyGetterSetter_i90_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_propertyGetterSetter_i90_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i91_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i91_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i91_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i92_ (GGS_ast & ioArgument0,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i92_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i92_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_i93_ (GGS_ast & ioArgument0,
                                                      GGS_LValueAST & outArgument1,
                                                      Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_lvalue_i93_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_lvalue_i93_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i94_ (GGS_ast & ioArgument0,
                                                                 GGS_LValueOperandAST & outArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i94_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i94_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i95_ (GGS_ast & ioArgument0,
                                                                 GGS_LValueOperandAST & outArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i95_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i95_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i96_ (GGS_ast & ioArgument0,
                                                                 GGS_LValueOperandAST & outArgument1,
                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i96_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_lvalue_5F_operand_i96_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i97_ (GGS_ast & ioArgument0,
                                                                  const GGS_bool constinArgument1,
                                                                  GGS_guardedCommandAST & outArgument2,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i97_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i97_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i98_ (GGS_ast & ioArgument0,
                                                                  const GGS_bool constinArgument1,
                                                                  GGS_guardedCommandAST & outArgument2,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i98_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_guarded_5F_command_i98_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i99_ (GGS_ast & ioArgument0,
                                                           GGS_instructionListAST & ioArgument1,
                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i99_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i99_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i100_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i100_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i100_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i101_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i101_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i101_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i102_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i102_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i102_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i103_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i103_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i103_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i104_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i104_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i104_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i105_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i105_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i105_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i106_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i106_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i106_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_task_5F_event_i107_ (GGS_ast & ioArgument0,
                                                              const GGS_lstring constinArgument1,
                                                              GGS_taskSetupListAST & ioArgument2,
                                                              GGS_taskSetupListAST & ioArgument3,
                                                              GGS_taskSetupListAST & ioArgument4,
                                                              Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_task_5F_event_i107_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_task_5F_event_i107_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i108_ (GGS_ast & ioArgument0,
                                                                                 GGS_routineFormalArgumentListAST & outArgument1,
                                                                                 Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i108_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_procedure_5F_formal_5F_arguments_i108_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i109_ (GGS_ast & ioArgument0,
                                                                                          GGS_routineFormalArgumentListAST & outArgument1,
                                                                                          Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i109_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_procedure_5F_input_5F_formal_5F_arguments_i109_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i110_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i110_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i110_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i111_ (GGS_llvmGenerationInstructionList & outArgument0,
                                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i111_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_5F_list_i111_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i112_ (GGS_abstractLLVMInstruction & outArgument0,
                                                                    Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i112_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i112_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i113_ (GGS_abstractLLVMInstruction & outArgument0,
                                                                    Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i113_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_llvm_5F_instruction_i113_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i114_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i114_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i114_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i115_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i115_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i115_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_procedure_5F_call_i116_ (GGS_ast & ioArgument0,
                                                                  GGS_callInstructionAST & outArgument1,
                                                                  Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_procedure_5F_call_i116_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_procedure_5F_call_i116_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i117_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i117_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i117_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i118_ (GGS_ast & ioArgument0,
                                                                   GGS_lstring & outArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_type_5F_definition_i118_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_type_5F_definition_i118_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i119_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i119_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i119_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i120_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i120_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i120_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i121_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i121_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i121_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i122_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i122_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i122_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArrayProperty_i123_ (GGS_ast & ioArgument0,
                                                                    GGS_staticListPropertyListAST & ioArgument1,
                                                                    Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_staticArrayProperty_i123_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_staticArrayProperty_i123_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i124_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i124_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i124_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_staticArray_5F_exp_i125_ (GGS_ast & ioArgument0,
                                                                   GGS_extendStaticListElementAST & ioArgument1,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_staticArray_5F_exp_i125_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_staticArray_5F_exp_i125_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i126_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i126_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i126_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i127_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i127_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i127_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i128_ (GGS_ast & ioArgument0,
                                                                    const GGS_lstring constinArgument1,
                                                                    Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i128_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_isr_5F_in_5F_driver_i128_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i129_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i129_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i129_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i130_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i130_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i130_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i131_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i131_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i131_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i132_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i132_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i132_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i133_ (GGS_omnibusInfixOperator & outArgument0,
                                                                                           GGS_location & outArgument1,
                                                                                           Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i133_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_assignment_5F_combined_5F_with_5F_operator_i133_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i134_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i134_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i134_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_instruction_i135_ (GGS_ast & ioArgument0,
                                                            GGS_instructionListAST & ioArgument1,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_instruction_i135_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_instruction_i135_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i136_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i136_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i136_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i137_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i137_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i137_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i138_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i138_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i138_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_declaration_i139_ (GGS_ast & ioArgument0,
                                                            Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_declaration_i139_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_declaration_i139_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_declaration_i140_ (GGS_ast & ioArgument0,
                                                                        const GGS_lstring constinArgument1,
                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_function_5F_declaration_i140_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_function_5F_declaration_i140_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_mode_i141_ (GGS_mode & outArgument0,
                                                     Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_mode_i141_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_mode_i141_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_function_5F_header_i142_ (GGS_ast & ioArgument0,
                                                                   GGS_mode & outArgument1,
                                                                   GGS_lstring & outArgument2,
                                                                   GGS_lstringlist & outArgument3,
                                                                   GGS_routineFormalArgumentListAST & outArgument4,
                                                                   Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_function_5F_header_i142_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_function_5F_header_i142_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_syntax_primary_i143_ (GGS_ast & ioArgument0,
                                                        GGS_expressionAST & outArgument1,
                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_syntax_primary_i143_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_syntax_primary_i143_indexing (Lexique_omnibus_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_omnibus_5F_syntax_0 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_1 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_2 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_3 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_4 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_5 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_6 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_7 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_8 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_9 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_10 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_11 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_12 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_13 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_14 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_15 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_16 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_17 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_18 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_19 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_20 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_21 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_22 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_23 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_24 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_25 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_26 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_27 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_28 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_29 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_30 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_31 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_32 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_33 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_34 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_35 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_36 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_37 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_38 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_39 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_40 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_41 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_42 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_43 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_44 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_45 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_46 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_47 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_48 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_49 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_50 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_51 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_52 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_53 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_54 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_55 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_56 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_57 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_58 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_59 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_60 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_61 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_62 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_63 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_64 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_65 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_66 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_67 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_68 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_69 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_70 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_71 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_72 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_73 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_74 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_75 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_76 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_77 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_78 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_79 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_80 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_81 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_82 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_83 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_84 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_85 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_86 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_87 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_88 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_89 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_90 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_91 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_92 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_93 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_94 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_95 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_96 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_97 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_98 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_99 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_100 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_101 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_102 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_103 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_104 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_105 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_106 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_107 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_108 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_109 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_110 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_111 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_112 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_113 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_114 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_115 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_116 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_117 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_118 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_119 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_120 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_121 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_122 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_123 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_124 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_125 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_126 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_127 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_128 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_129 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_130 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_131 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_132 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_133 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_134 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_135 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_136 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_137 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_138 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_139 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_140 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_syntax_141 (Lexique_omnibus_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addressofControlRegisterAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofControlRegisterAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_addressofControlRegisterAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addressofControlRegisterAST (const class cPtr_addressofControlRegisterAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_controlRegisterLValueAST readProperty_mControlRegisterLValue (void) const ;
  public: void setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addressofControlRegisterAST init_21_ (const class GGS_controlRegisterLValueAST & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofControlRegisterAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofControlRegisterAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofControlRegisterAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @addressofControlRegisterAST class
//--------------------------------------------------------------------------------------------------

class cPtr_addressofControlRegisterAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addressofControlRegisterAST_init_21_ (const class GGS_controlRegisterLValueAST & inOperand0,
                                                     Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_controlRegisterLValueAST mProperty_mControlRegisterLValue ;


//--- Default constructor
  public: cPtr_addressofControlRegisterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addressofControlRegisterAST (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_assignmentInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_assignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignmentInstructionAST (const class cPtr_assignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_LValueAST readProperty_mTargetAST (void) const ;
  public: void setProperty_mTargetAST (const GGS_LValueAST & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentInstructionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                                const class GGS_LValueAST & inOperand1,
                                                                const class GGS_expressionAST & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentInstructionAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void assignmentInstructionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                          const class GGS_LValueAST & inOperand1,
                                                          const class GGS_expressionAST & inOperand2,
                                                          Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_LValueAST mProperty_mTargetAST ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                         const GGS_LValueAST & in_mTargetAST,
                                         const GGS_expressionAST & in_mSourceExpression,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @booleanShortCircuitAndOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_booleanShortCircuitAndOperatorExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_booleanShortCircuitAndOperatorExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_booleanShortCircuitAndOperatorExpressionAST (const class cPtr_booleanShortCircuitAndOperatorExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mOperatorLocation (void) const ;
  public: void setProperty_mOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_expressionAST readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_booleanShortCircuitAndOperatorExpressionAST init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                                   const class GGS_location & inOperand1,
                                                                                   const class GGS_expressionAST & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_booleanShortCircuitAndOperatorExpressionAST extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_booleanShortCircuitAndOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanShortCircuitAndOperatorExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @booleanShortCircuitAndOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_booleanShortCircuitAndOperatorExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void booleanShortCircuitAndOperatorExpressionAST_init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_expressionAST & inOperand2,
                                                                             Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mLeftExpression ;
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_expressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_booleanShortCircuitAndOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_booleanShortCircuitAndOperatorExpressionAST (const GGS_expressionAST & in_mLeftExpression,
                                                            const GGS_location & in_mOperatorLocation,
                                                            const GGS_expressionAST & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeConvertToBooleanAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_compileTimeConvertToBooleanAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeConvertToBooleanAST (const class cPtr_compileTimeConvertToBooleanAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mConverterName (void) const ;
  public: void setProperty_mConverterName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeConvertToBooleanAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstring & inOperand1,
                                                                          const class GGS_lstring & inOperand2,
                                                                          const class GGS_ctExpressionAST & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeConvertToBooleanAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeConvertToBooleanAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeConvertToBooleanAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeConvertToBooleanAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lstring & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_ctExpressionAST & inOperand3,
                                                                    Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mConverterName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeConvertToBooleanAST (const GGS_lstring & in_mReceiverName,
                                               const GGS_lstring & in_mReceiverTypeName,
                                               const GGS_lstring & in_mConverterName,
                                               const GGS_ctExpressionAST & in_mExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorCallAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_constructorCallAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_constructorCallAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_constructorCallAST (const class cPtr_constructorCallAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_functionCallEffectiveParameterListAST readProperty_mParameterList (void) const ;
  public: void setProperty_mParameterList (const GGS_functionCallEffectiveParameterListAST & inValue) ;

  public: class GGS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_constructorCallAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_functionCallEffectiveParameterListAST & inOperand1,
                                                          const class GGS_location & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_constructorCallAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constructorCallAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorCallAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionCallEffectiveParameterListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_functionCallEffectiveParameterListAST final {
  public: DownEnumerator_functionCallEffectiveParameterListAST (const class GGS_functionCallEffectiveParameterListAST & inList) ;

  public: ~ DownEnumerator_functionCallEffectiveParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_functionCallEffectiveParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_functionCallEffectiveParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_functionCallEffectiveParameterListAST (const DownEnumerator_functionCallEffectiveParameterListAST &) = delete ;
  private: DownEnumerator_functionCallEffectiveParameterListAST & operator = (const DownEnumerator_functionCallEffectiveParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_functionCallEffectiveParameterListAST final {
  public: UpEnumerator_functionCallEffectiveParameterListAST (const class GGS_functionCallEffectiveParameterListAST & inList)  ;

  public: ~ UpEnumerator_functionCallEffectiveParameterListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_functionCallEffectiveParameterListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_functionCallEffectiveParameterListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_functionCallEffectiveParameterListAST (const UpEnumerator_functionCallEffectiveParameterListAST &) = delete ;
  private: UpEnumerator_functionCallEffectiveParameterListAST & operator = (const UpEnumerator_functionCallEffectiveParameterListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @functionCallEffectiveParameterListAST list
//--------------------------------------------------------------------------------------------------

class GGS_functionCallEffectiveParameterListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_functionCallEffectiveParameterListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_functionCallEffectiveParameterListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_functionCallEffectiveParameterListAST (void) = default ;

//--- Copy
  public: GGS_functionCallEffectiveParameterListAST (const GGS_functionCallEffectiveParameterListAST &) = default ;
  public: GGS_functionCallEffectiveParameterListAST & operator = (const GGS_functionCallEffectiveParameterListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_functionCallEffectiveParameterListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_functionCallEffectiveParameterListAST subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_functionCallEffectiveParameterListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSelector,
                                                 const class GGS_expressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionCallEffectiveParameterListAST init (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionCallEffectiveParameterListAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_functionCallEffectiveParameterListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_expressionAST & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_functionCallEffectiveParameterListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_expressionAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_functionCallEffectiveParameterListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_functionCallEffectiveParameterListAST add_operation (const GGS_functionCallEffectiveParameterListAST & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_expressionAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_expressionAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_expressionAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_expressionAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_expressionAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_expressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectorAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_expressionAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_expressionAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_expressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_functionCallEffectiveParameterListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_functionCallEffectiveParameterListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_functionCallEffectiveParameterListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_functionCallEffectiveParameterListAST ;
  friend class DownEnumerator_functionCallEffectiveParameterListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @constructorCallAST class
//--------------------------------------------------------------------------------------------------

class cPtr_constructorCallAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void constructorCallAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_functionCallEffectiveParameterListAST & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_functionCallEffectiveParameterListAST mProperty_mParameterList ;
  public: GGS_location mProperty_mErrorLocation ;


//--- Default constructor
  public: cPtr_constructorCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_constructorCallAST (const GGS_lstring & in_mTypeName,
                                   const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                                   const GGS_location & in_mErrorLocation,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterAssignmentInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_controlRegisterAssignmentInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_controlRegisterAssignmentInstructionAST (const class cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_controlRegisterLValueAST readProperty_mControlRegisterLValue (void) const ;
  public: void setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) ;

  public: class GGS_controlRegisterAssignmentOperatorKind readProperty_mAssignmentKind (void) const ;
  public: void setProperty_mAssignmentKind (const GGS_controlRegisterAssignmentOperatorKind & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterAssignmentInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                   const class GGS_controlRegisterLValueAST & inOperand1,
                                                                                   const class GGS_controlRegisterAssignmentOperatorKind & inOperand2,
                                                                                   const class GGS_expressionAST & inOperand3,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterAssignmentInstructionAST extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_controlRegisterAssignmentInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @controlRegisterAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_controlRegisterAssignmentInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_controlRegisterLValueAST & inOperand1,
                                                                             const class GGS_controlRegisterAssignmentOperatorKind & inOperand2,
                                                                             const class GGS_expressionAST & inOperand3,
                                                                             Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_controlRegisterLValueAST mProperty_mControlRegisterLValue ;
  public: GGS_controlRegisterAssignmentOperatorKind mProperty_mAssignmentKind ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_controlRegisterAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_controlRegisterAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                        const GGS_expressionAST & in_mSourceExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @convertExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_convertExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_convertExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_convertExpressionAST (const class cPtr_convertExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_location readProperty_mEndOfExpression (void) const ;
  public: void setProperty_mEndOfExpression (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_convertExpressionAST init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                            const class GGS_lstring & inOperand1,
                                                            const class GGS_location & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_convertExpressionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_convertExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_convertExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @convertExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_convertExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void convertExpressionAST_init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                      const class GGS_lstring & inOperand1,
                                                      const class GGS_location & inOperand2,
                                                      Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_location mProperty_mEndOfExpression ;


//--- Default constructor
  public: cPtr_convertExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_convertExpressionAST (const GGS_expressionAST & in_mExpression,
                                     const GGS_lstring & in_mTypeName,
                                     const GGS_location & in_mEndOfExpression,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumerationDeclarationAST (const class cPtr_enumerationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mEnumerationName (void) const ;
  public: void setProperty_mEnumerationName (const GGS_lstring & inValue) ;

  public: class GGS_enumerationConstantList readProperty_mCaseNameList (void) const ;
  public: void setProperty_mCaseNameList (const GGS_enumerationConstantList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_enumerationConstantList & inOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationDeclarationAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationConstantList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_enumerationConstantList final {
  public: DownEnumerator_enumerationConstantList (const class GGS_enumerationConstantList & inList) ;

  public: ~ DownEnumerator_enumerationConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mConstantValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_enumerationConstantList (const DownEnumerator_enumerationConstantList &) = delete ;
  private: DownEnumerator_enumerationConstantList & operator = (const DownEnumerator_enumerationConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_enumerationConstantList final {
  public: UpEnumerator_enumerationConstantList (const class GGS_enumerationConstantList & inList)  ;

  public: ~ UpEnumerator_enumerationConstantList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mConstantName (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mConstantValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_enumerationConstantList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_enumerationConstantList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_enumerationConstantList (const UpEnumerator_enumerationConstantList &) = delete ;
  private: UpEnumerator_enumerationConstantList & operator = (const UpEnumerator_enumerationConstantList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @enumerationConstantList list
//--------------------------------------------------------------------------------------------------

class GGS_enumerationConstantList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_enumerationConstantList_2E_element> mArray ;

//--- Default constructor
  public: GGS_enumerationConstantList (void) ;

//--- Destructor
  public: virtual ~ GGS_enumerationConstantList (void) = default ;

//--- Copy
  public: GGS_enumerationConstantList (const GGS_enumerationConstantList &) = default ;
  public: GGS_enumerationConstantList & operator = (const GGS_enumerationConstantList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_enumerationConstantList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_enumerationConstantList subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_enumerationConstantList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mConstantName,
                                                 const class GGS_bigint & in_mConstantValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationConstantList init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationConstantList extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationConstantList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                             const class GGS_bigint & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_enumerationConstantList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_bigint & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_enumerationConstantList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_enumerationConstantList add_operation (const GGS_enumerationConstantList & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_bigint constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_bigint constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_bigint & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_bigint & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_bigint & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMConstantNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMConstantValueAtIndex (class GGS_bigint constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_bigint & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_bigint & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mConstantNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_bigint getter_mConstantValueAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_enumerationConstantList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationConstantList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_enumerationConstantList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_enumerationConstantList ;
  friend class DownEnumerator_enumerationConstantList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationConstantList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumerationDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_enumerationConstantList & inOperand1,
                                                       Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mEnumerationName ;
  public: GGS_enumerationConstantList mProperty_mCaseNameList ;


//--- Default constructor
  public: cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumerationDeclarationAST (const GGS_lstring & in_mEnumerationName,
                                          const GGS_enumerationConstantList & in_mCaseNameList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_extendExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_extendExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_extendExpressionAST (const class cPtr_extendExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_location readProperty_mEndOfExpression (void) const ;
  public: void setProperty_mEndOfExpression (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendExpressionAST init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           const class GGS_location & inOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_extendExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @extendExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_extendExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void extendExpressionAST_init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     const class GGS_location & inOperand2,
                                                     Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_location mProperty_mEndOfExpression ;


//--- Default constructor
  public: cPtr_extendExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_extendExpressionAST (const GGS_expressionAST & in_mExpression,
                                    const GGS_lstring & in_mTypeName,
                                    const GGS_location & in_mEndOfExpression,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionAST (const class cPtr_forInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mIteratedObject (void) const ;
  public: void setProperty_mIteratedObject (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mWhileExpression (void) const ;
  public: void setProperty_mWhileExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_whileExpression (void) const ;
  public: void setProperty_mEndOf_5F_whileExpression (const GGS_location & inValue) ;

  public: class GGS_bool readProperty_mStaticWhileExpression (void) const ;
  public: void setProperty_mStaticWhileExpression (const GGS_bool & inValue) ;

  public: class GGS_instructionListAST readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOf_5F_for_5F_instruction (void) const ;
  public: void setProperty_mEndOf_5F_for_5F_instruction (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionAST init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             const class GGS_expressionAST & inOperand3,
                                                                             const class GGS_location & inOperand4,
                                                                             const class GGS_bool & inOperand5,
                                                                             const class GGS_instructionListAST & inOperand6,
                                                                             const class GGS_location & inOperand7,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionAST_init_21__21__21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_lstring & inOperand2,
                                                                       const class GGS_expressionAST & inOperand3,
                                                                       const class GGS_location & inOperand4,
                                                                       const class GGS_bool & inOperand5,
                                                                       const class GGS_instructionListAST & inOperand6,
                                                                       const class GGS_location & inOperand7,
                                                                       Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: GGS_lstring mProperty_mIteratedObject ;
  public: GGS_expressionAST mProperty_mWhileExpression ;
  public: GGS_location mProperty_mEndOf_5F_whileExpression ;
  public: GGS_bool mProperty_mStaticWhileExpression ;
  public: GGS_instructionListAST mProperty_mDoInstructionList ;
  public: GGS_location mProperty_mEndOf_5F_for_5F_instruction ;


//--- Default constructor
  public: cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionAST (const GGS_location & in_mInstructionLocation,
                                  const GGS_lstring & in_mVarName,
                                  const GGS_lstring & in_mIteratedObject,
                                  const GGS_expressionAST & in_mWhileExpression,
                                  const GGS_location & in_mEndOf_5F_whileExpression,
                                  const GGS_bool & in_mStaticWhileExpression,
                                  const GGS_instructionListAST & in_mDoInstructionList,
                                  const GGS_location & in_mEndOf_5F_for_5F_instruction,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_functionDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_functionDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_functionDeclarationAST (const class cPtr_functionDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GGS_mode & inValue) ;

  public: class GGS_bool readProperty_mPublicFunction (void) const ;
  public: void setProperty_mPublicFunction (const GGS_bool & inValue) ;

  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mFunctionName (void) const ;
  public: void setProperty_mFunctionName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mFunctionAttributeList (void) const ;
  public: void setProperty_mFunctionAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_routineFormalArgumentListAST readProperty_mFunctionFormalArgumentList (void) const ;
  public: void setProperty_mFunctionFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) ;

  public: class GGS_lstring readProperty_mFunctionReturnTypeName (void) const ;
  public: void setProperty_mFunctionReturnTypeName (const GGS_lstring & inValue) ;

  public: class GGS_instructionListAST readProperty_mFunctionInstructionList (void) const ;
  public: void setProperty_mFunctionInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfFunctionDeclaration (void) const ;
  public: void setProperty_mEndOfFunctionDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_mode & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_lstring & inOperand2,
                                                                                      const class GGS_lstring & inOperand3,
                                                                                      const class GGS_lstringlist & inOperand4,
                                                                                      const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                      const class GGS_lstring & inOperand6,
                                                                                      const class GGS_instructionListAST & inOperand7,
                                                                                      const class GGS_location & inOperand8,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionDeclarationAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_functionDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_functionDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void functionDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_mode & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_lstring & inOperand2,
                                                                                const class GGS_lstring & inOperand3,
                                                                                const class GGS_lstringlist & inOperand4,
                                                                                const class GGS_routineFormalArgumentListAST & inOperand5,
                                                                                const class GGS_lstring & inOperand6,
                                                                                const class GGS_instructionListAST & inOperand7,
                                                                                const class GGS_location & inOperand8,
                                                                                Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_mode mProperty_mMode ;
  public: GGS_bool mProperty_mPublicFunction ;
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mFunctionName ;
  public: GGS_lstringlist mProperty_mFunctionAttributeList ;
  public: GGS_routineFormalArgumentListAST mProperty_mFunctionFormalArgumentList ;
  public: GGS_lstring mProperty_mFunctionReturnTypeName ;
  public: GGS_instructionListAST mProperty_mFunctionInstructionList ;
  public: GGS_location mProperty_mEndOfFunctionDeclaration ;


//--- Default constructor
  public: cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_functionDeclarationAST (const GGS_mode & in_mMode,
                                       const GGS_bool & in_mPublicFunction,
                                       const GGS_lstring & in_mReceiverTypeName,
                                       const GGS_lstring & in_mFunctionName,
                                       const GGS_lstringlist & in_mFunctionAttributeList,
                                       const GGS_routineFormalArgumentListAST & in_mFunctionFormalArgumentList,
                                       const GGS_lstring & in_mFunctionReturnTypeName,
                                       const GGS_instructionListAST & in_mFunctionInstructionList,
                                       const GGS_location & in_mEndOfFunctionDeclaration,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_globalConstantDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_globalConstantDeclarationAST (const class cPtr_globalConstantDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;
  public: void setProperty_mConstantName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mAttributeList (void) const ;
  public: void setProperty_mAttributeList (const GGS_lstringlist & inValue) ;

  public: class GGS_lstring readProperty_mConstantTypeName (void) const ;
  public: void setProperty_mConstantTypeName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalConstantDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstringlist & inOperand1,
                                                                        const class GGS_lstring & inOperand2,
                                                                        const class GGS_expressionAST & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalConstantDeclarationAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_globalConstantDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @globalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_globalConstantDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void globalConstantDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstringlist & inOperand1,
                                                                  const class GGS_lstring & inOperand2,
                                                                  const class GGS_expressionAST & inOperand3,
                                                                  Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_lstringlist mProperty_mAttributeList ;
  public: GGS_lstring mProperty_mConstantTypeName ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_globalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_globalConstantDeclarationAST (const GGS_lstring & in_mConstantName,
                                             const GGS_lstringlist & in_mAttributeList,
                                             const GGS_lstring & in_mConstantTypeName,
                                             const GGS_expressionAST & in_mSourceExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_ifExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ifExpressionAST (const class cPtr_ifExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mIfExpression (void) const ;
  public: void setProperty_mIfExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mIfExpressionEndLocation (void) const ;
  public: void setProperty_mIfExpressionEndLocation (const GGS_location & inValue) ;

  public: class GGS_expressionAST readProperty_mThenExpression (void) const ;
  public: void setProperty_mThenExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mThenExpressionEndLocation (void) const ;
  public: void setProperty_mThenExpressionEndLocation (const GGS_location & inValue) ;

  public: class GGS_expressionAST readProperty_mElseExpression (void) const ;
  public: void setProperty_mElseExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mElseExpressionEndLocation (void) const ;
  public: void setProperty_mElseExpressionEndLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ifExpressionAST init_21__21__21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_expressionAST & inOperand2,
                                                                   const class GGS_location & inOperand3,
                                                                   const class GGS_expressionAST & inOperand4,
                                                                   const class GGS_location & inOperand5,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ifExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ifExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ifExpressionAST_init_21__21__21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                             const class GGS_location & inOperand1,
                                                             const class GGS_expressionAST & inOperand2,
                                                             const class GGS_location & inOperand3,
                                                             const class GGS_expressionAST & inOperand4,
                                                             const class GGS_location & inOperand5,
                                                             Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mIfExpression ;
  public: GGS_location mProperty_mIfExpressionEndLocation ;
  public: GGS_expressionAST mProperty_mThenExpression ;
  public: GGS_location mProperty_mThenExpressionEndLocation ;
  public: GGS_expressionAST mProperty_mElseExpression ;
  public: GGS_location mProperty_mElseExpressionEndLocation ;


//--- Default constructor
  public: cPtr_ifExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ifExpressionAST (const GGS_expressionAST & in_mIfExpression,
                                const GGS_location & in_mIfExpressionEndLocation,
                                const GGS_expressionAST & in_mThenExpression,
                                const GGS_location & in_mThenExpressionEndLocation,
                                const GGS_expressionAST & in_mElseExpression,
                                const GGS_location & in_mElseExpressionEndLocation,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @isrDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_isrDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_isrDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_isrDeclarationAST (const class cPtr_isrDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mISRName (void) const ;
  public: void setProperty_mISRName (const GGS_lstring & inValue) ;

  public: class GGS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GGS_mode & inValue) ;

  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

  public: class GGS_instructionListAST readProperty_mISRInstructionList (void) const ;
  public: void setProperty_mISRInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfISRDeclaration (void) const ;
  public: void setProperty_mEndOfISRDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_isrDeclarationAST init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_mode & inOperand1,
                                                                 const class GGS_lstring & inOperand2,
                                                                 const class GGS_instructionListAST & inOperand3,
                                                                 const class GGS_location & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_isrDeclarationAST extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_isrDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_isrDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @isrDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_isrDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void isrDeclarationAST_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_mode & inOperand1,
                                                           const class GGS_lstring & inOperand2,
                                                           const class GGS_instructionListAST & inOperand3,
                                                           const class GGS_location & inOperand4,
                                                           Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mISRName ;
  public: GGS_mode mProperty_mMode ;
  public: GGS_lstring mProperty_mDriverName ;
  public: GGS_instructionListAST mProperty_mISRInstructionList ;
  public: GGS_location mProperty_mEndOfISRDeclaration ;


//--- Default constructor
  public: cPtr_isrDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_isrDeclarationAST (const GGS_lstring & in_mISRName,
                                  const GGS_mode & in_mMode,
                                  const GGS_lstring & in_mDriverName,
                                  const GGS_instructionListAST & in_mISRInstructionList,
                                  const GGS_location & in_mEndOfISRDeclaration,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @letInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_letInstructionWithAssignmentAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_letInstructionWithAssignmentAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_letInstructionWithAssignmentAST (const class cPtr_letInstructionWithAssignmentAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mConstantName (void) const ;
  public: void setProperty_mConstantName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mOptionalTypeName (void) const ;
  public: void setProperty_mOptionalTypeName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_letInstructionWithAssignmentAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_lstring & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_expressionAST & inOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_letInstructionWithAssignmentAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_letInstructionWithAssignmentAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @letInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

class cPtr_letInstructionWithAssignmentAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void letInstructionWithAssignmentAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_lstring & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_expressionAST & inOperand3,
                                                                     Compiler * inCompiler) ;


//--- Extension proc instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: GGS_lstring mProperty_mOptionalTypeName ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_letInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_letInstructionWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mConstantName,
                                                const GGS_lstring & in_mOptionalTypeName,
                                                const GGS_expressionAST & in_mSourceExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalIntegerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalIntegerInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_literalIntegerInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalIntegerInExpressionAST (const class cPtr_literalIntegerInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mLiteralInteger (void) const ;
  public: void setProperty_mLiteralInteger (const GGS_lbigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalIntegerInExpressionAST init_21_ (const class GGS_lbigint & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalIntegerInExpressionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalIntegerInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalIntegerInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalIntegerInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalIntegerInExpressionAST_init_21_ (const class GGS_lbigint & inOperand0,
                                                       Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mLiteralInteger ;


//--- Default constructor
  public: cPtr_literalIntegerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalIntegerInExpressionAST (const GGS_lbigint & in_mLiteralInteger,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmConvertToBooleanAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_llvmConvertToBooleanAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmConvertToBooleanAST (const class cPtr_llvmConvertToBooleanAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mConverterName (void) const ;
  public: void setProperty_mConverterName (const GGS_lstring & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmConvertToBooleanAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_lstring & inOperand2,
                                                                   const class GGS_llvmGenerationInstructionList & inOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmConvertToBooleanAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmConvertToBooleanAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmConvertToBooleanAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmConvertToBooleanAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_lstring & inOperand2,
                                                             const class GGS_llvmGenerationInstructionList & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mConverterName ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmConvertToBooleanAST (const GGS_lstring & in_mReceiverName,
                                        const GGS_lstring & in_mReceiverTypeName,
                                        const GGS_lstring & in_mConverterName,
                                        const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstruction : public GGS_abstractLLVMInstruction {
//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmGenerationInstruction (const class cPtr_llvmGenerationInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_llvmGenerationInstructionElementList readProperty_mGenerationList (void) const ;
  public: void setProperty_mGenerationList (const GGS_llvmGenerationInstructionElementList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstruction init_21_ (const class GGS_llvmGenerationInstructionElementList & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstruction extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmGenerationInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElementList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_llvmGenerationInstructionElementList final {
  public: DownEnumerator_llvmGenerationInstructionElementList (const class GGS_llvmGenerationInstructionElementList & inList) ;

  public: ~ DownEnumerator_llvmGenerationInstructionElementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_llvmGenerationInstructionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmGenerationInstructionElementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_llvmGenerationInstructionElementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_llvmGenerationInstructionElementList (const DownEnumerator_llvmGenerationInstructionElementList &) = delete ;
  private: DownEnumerator_llvmGenerationInstructionElementList & operator = (const DownEnumerator_llvmGenerationInstructionElementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_llvmGenerationInstructionElementList final {
  public: UpEnumerator_llvmGenerationInstructionElementList (const class GGS_llvmGenerationInstructionElementList & inList)  ;

  public: ~ UpEnumerator_llvmGenerationInstructionElementList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_llvmGenerationInstructionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmGenerationInstructionElementList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_llvmGenerationInstructionElementList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_llvmGenerationInstructionElementList (const UpEnumerator_llvmGenerationInstructionElementList &) = delete ;
  private: UpEnumerator_llvmGenerationInstructionElementList & operator = (const UpEnumerator_llvmGenerationInstructionElementList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @llvmGenerationInstructionElementList list
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElementList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_llvmGenerationInstructionElementList_2E_element> mArray ;

//--- Default constructor
  public: GGS_llvmGenerationInstructionElementList (void) ;

//--- Destructor
  public: virtual ~ GGS_llvmGenerationInstructionElementList (void) = default ;

//--- Copy
  public: GGS_llvmGenerationInstructionElementList (const GGS_llvmGenerationInstructionElementList &) = default ;
  public: GGS_llvmGenerationInstructionElementList & operator = (const GGS_llvmGenerationInstructionElementList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_llvmGenerationInstructionElementList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_llvmGenerationInstructionElementList subList (const int32_t inStart,
                                                             const int32_t inLength,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_llvmGenerationInstructionElementList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_llvmGenerationInstructionElement & in_mElement
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElementList init (Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElementList extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenerationInstructionElementList class_func_listWithValue (const class GGS_llvmGenerationInstructionElement & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_llvmGenerationInstructionElementList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_llvmGenerationInstructionElement & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_llvmGenerationInstructionElementList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_llvmGenerationInstructionElementList add_operation (const GGS_llvmGenerationInstructionElementList & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_llvmGenerationInstructionElement constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_llvmGenerationInstructionElement constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_llvmGenerationInstructionElement & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_llvmGenerationInstructionElement & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_llvmGenerationInstructionElement & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMElementAtIndex (class GGS_llvmGenerationInstructionElement constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_llvmGenerationInstructionElement & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_llvmGenerationInstructionElement & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_llvmGenerationInstructionElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_llvmGenerationInstructionElementList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_llvmGenerationInstructionElementList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_llvmGenerationInstructionElementList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_llvmGenerationInstructionElementList ;
  friend class DownEnumerator_llvmGenerationInstructionElementList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmGenerationInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmGenerationInstruction : public cPtr_abstractLLVMInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmGenerationInstruction_init_21_ (const class GGS_llvmGenerationInstructionElementList & inOperand0,
                                                   Compiler * inCompiler) ;


//--- Extension proc checkInstructionList
  public: virtual void method_checkInstructionList (class GGS_ctCheckMap & arg_ioMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateIRCode
  public: virtual void method_generateIRCode (class GGS_assignmentGenerationVarMap & arg_ioVarMap,
           class GGS_assignmentGenerationVarMap & arg_ioTypeMap,
           class GGS_stringlist & arg_ioInstructionAsStringListIR,
           class GGS_uint & arg_ioTemporaryIndex,
           class GGS_allocaList & arg_ioAllocaList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_llvmGenerationInstructionElementList mProperty_mGenerationList ;


//--- Default constructor
  public: cPtr_llvmGenerationInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmGenerationInstruction (const GGS_llvmGenerationInstructionElementList & in_mGenerationList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenericType reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenericType : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_llvmGenericType (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmGenericType (const class cPtr_llvmGenericType * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_genericFormalParameterList readProperty_mGenericFormalParameterList (void) const ;
  public: void setProperty_mGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mWhereClause (void) const ;
  public: void setProperty_mWhereClause (const GGS_ctExpressionAST & inValue) ;

  public: class GGS_bigint readProperty_mBitSize (void) const ;
  public: void setProperty_mBitSize (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenericType init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_genericFormalParameterList & inOperand1,
                                                           const class GGS_ctExpressionAST & inOperand2,
                                                           const class GGS_bigint & inOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenericType extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmGenericType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenericType ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmGenericType class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmGenericType : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmGenericType_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS_genericFormalParameterList & inOperand1,
                                                     const class GGS_ctExpressionAST & inOperand2,
                                                     const class GGS_bigint & inOperand3,
                                                     Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_genericFormalParameterList mProperty_mGenericFormalParameterList ;
  public: GGS_ctExpressionAST mProperty_mWhereClause ;
  public: GGS_bigint mProperty_mBitSize ;


//--- Default constructor
  public: cPtr_llvmGenericType (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmGenericType (const GGS_lstring & in_mTypeName,
                                const GGS_genericFormalParameterList & in_mGenericFormalParameterList,
                                const GGS_ctExpressionAST & in_mWhereClause,
                                const GGS_bigint & in_mBitSize,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmVarInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmVarInstruction : public GGS_abstractLLVMInstruction {
//--------------------------------- Default constructor
  public: GGS_llvmVarInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmVarInstruction (const class cPtr_llvmVarInstruction * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVariableName (void) const ;
  public: void setProperty_mVariableName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmVarInstruction init_21_ (const class GGS_lstring & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmVarInstruction extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmVarInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmVarInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmVarInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmVarInstruction : public cPtr_abstractLLVMInstruction {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmVarInstruction_init_21_ (const class GGS_lstring & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension proc checkInstructionList
  public: virtual void method_checkInstructionList (class GGS_ctCheckMap & arg_ioMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc generateIRCode
  public: virtual void method_generateIRCode (class GGS_assignmentGenerationVarMap & arg_ioVarMap,
           class GGS_assignmentGenerationVarMap & arg_ioTypeMap,
           class GGS_stringlist & arg_ioInstructionAsStringListIR,
           class GGS_uint & arg_ioTemporaryIndex,
           class GGS_allocaList & arg_ioAllocaList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mVariableName ;


//--- Default constructor
  public: cPtr_llvmVarInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmVarInstruction (const GGS_lstring & in_mVariableName,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @omnibusInfixOperatorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperatorExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperatorExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_omnibusInfixOperatorExpressionAST (const class cPtr_omnibusInfixOperatorExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mOperatorLocation (void) const ;
  public: void setProperty_mOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_omnibusInfixOperator readProperty_mInfixOperator (void) const ;
  public: void setProperty_mInfixOperator (const GGS_omnibusInfixOperator & inValue) ;

  public: class GGS_expressionAST readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_omnibusInfixOperatorExpressionAST init_21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                             const class GGS_location & inOperand1,
                                                                             const class GGS_omnibusInfixOperator & inOperand2,
                                                                             const class GGS_expressionAST & inOperand3,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_omnibusInfixOperatorExpressionAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_omnibusInfixOperatorExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @omnibusInfixOperatorExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_omnibusInfixOperatorExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void omnibusInfixOperatorExpressionAST_init_21__21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                       const class GGS_location & inOperand1,
                                                                       const class GGS_omnibusInfixOperator & inOperand2,
                                                                       const class GGS_expressionAST & inOperand3,
                                                                       Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mLeftExpression ;
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_omnibusInfixOperator mProperty_mInfixOperator ;
  public: GGS_expressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_omnibusInfixOperatorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_omnibusInfixOperatorExpressionAST (const GGS_expressionAST & in_mLeftExpression,
                                                  const GGS_location & in_mOperatorLocation,
                                                  const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                  const GGS_expressionAST & in_mRightExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @panicAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_panicAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_panicAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_panicAST (const class cPtr_panicAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsSetup (void) const ;
  public: void setProperty_mIsSetup (const GGS_bool & inValue) ;

  public: class GGS_instructionListAST readProperty_mPanicInstructionList (void) const ;
  public: void setProperty_mPanicInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfPanicInstructions (void) const ;
  public: void setProperty_mEndOfPanicInstructions (const GGS_location & inValue) ;

  public: class GGS_lbigint readProperty_mPriority (void) const ;
  public: void setProperty_mPriority (const GGS_lbigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_panicAST init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                                    const class GGS_instructionListAST & inOperand1,
                                                    const class GGS_location & inOperand2,
                                                    const class GGS_lbigint & inOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_panicAST extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_panicAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @panicAST class
//--------------------------------------------------------------------------------------------------

class cPtr_panicAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void panicAST_init_21__21__21__21_ (const class GGS_bool & inOperand0,
                                              const class GGS_instructionListAST & inOperand1,
                                              const class GGS_location & inOperand2,
                                              const class GGS_lbigint & inOperand3,
                                              Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteTypesInPrecedenceGraph
  public: virtual void method_noteTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_bool mProperty_mIsSetup ;
  public: GGS_instructionListAST mProperty_mPanicInstructionList ;
  public: GGS_location mProperty_mEndOfPanicInstructions ;
  public: GGS_lbigint mProperty_mPriority ;


//--- Default constructor
  public: cPtr_panicAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_panicAST (const GGS_bool & in_mIsSetup,
                         const GGS_instructionListAST & in_mPanicInstructionList,
                         const GGS_location & in_mEndOfPanicInstructions,
                         const GGS_lbigint & in_mPriority,
                         Compiler * inCompiler
                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procedureCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_procedureCallInstructionAST : public GGS_callInstructionAST {
//--------------------------------- Default constructor
  public: GGS_procedureCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_procedureCallInstructionAST (const class cPtr_procedureCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mIdentifier (void) const ;
  public: void setProperty_mIdentifier (const GGS_lstring & inValue) ;

  public: class GGS_accessInAssignmentListAST readProperty_mAccessList (void) const ;
  public: void setProperty_mAccessList (const GGS_accessInAssignmentListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procedureCallInstructionAST init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_effectiveArgumentListAST & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           const class GGS_accessInAssignmentListAST & inOperand4,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procedureCallInstructionAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procedureCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @accessInAssignmentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_accessInAssignmentListAST final {
  public: DownEnumerator_accessInAssignmentListAST (const class GGS_accessInAssignmentListAST & inList) ;

  public: ~ DownEnumerator_accessInAssignmentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_accessInAssignmentAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_accessInAssignmentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_accessInAssignmentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_accessInAssignmentListAST (const DownEnumerator_accessInAssignmentListAST &) = delete ;
  private: DownEnumerator_accessInAssignmentListAST & operator = (const DownEnumerator_accessInAssignmentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_accessInAssignmentListAST final {
  public: UpEnumerator_accessInAssignmentListAST (const class GGS_accessInAssignmentListAST & inList)  ;

  public: ~ UpEnumerator_accessInAssignmentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_accessInAssignmentAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_accessInAssignmentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_accessInAssignmentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_accessInAssignmentListAST (const UpEnumerator_accessInAssignmentListAST &) = delete ;
  private: UpEnumerator_accessInAssignmentListAST & operator = (const UpEnumerator_accessInAssignmentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @accessInAssignmentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_accessInAssignmentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_accessInAssignmentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_accessInAssignmentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_accessInAssignmentListAST (void) = default ;

//--- Copy
  public: GGS_accessInAssignmentListAST (const GGS_accessInAssignmentListAST &) = default ;
  public: GGS_accessInAssignmentListAST & operator = (const GGS_accessInAssignmentListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_accessInAssignmentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_accessInAssignmentListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_accessInAssignmentListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_accessInAssignmentAST & in_mAccess
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_accessInAssignmentListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_accessInAssignmentListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_accessInAssignmentListAST class_func_listWithValue (const class GGS_accessInAssignmentAST & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_accessInAssignmentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_accessInAssignmentAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_accessInAssignmentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_accessInAssignmentListAST add_operation (const GGS_accessInAssignmentListAST & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_accessInAssignmentAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_accessInAssignmentAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_accessInAssignmentAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_accessInAssignmentAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_accessInAssignmentAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAccessAtIndex (class GGS_accessInAssignmentAST constinArgument0,
                                         class GGS_uint constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_accessInAssignmentAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_accessInAssignmentAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_accessInAssignmentAST getter_mAccessAtIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_accessInAssignmentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_accessInAssignmentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_accessInAssignmentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_accessInAssignmentListAST ;
  friend class DownEnumerator_accessInAssignmentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_accessInAssignmentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @procedureCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_procedureCallInstructionAST : public cPtr_callInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void procedureCallInstructionAST_init_21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                     const class GGS_effectiveArgumentListAST & inOperand1,
                                                                     const class GGS_location & inOperand2,
                                                                     const class GGS_lstring & inOperand3,
                                                                     const class GGS_accessInAssignmentListAST & inOperand4,
                                                                     Compiler * inCompiler) ;


//--- Extension proc baseGuardAnalyze
  public: virtual void method_baseGuardAnalyze (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_guardKindGenerationIR & arg_outConvenienceGuardGenerationIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mIdentifier ;
  public: GGS_accessInAssignmentListAST mProperty_mAccessList ;


//--- Default constructor
  public: cPtr_procedureCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_procedureCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                            const GGS_effectiveArgumentListAST & in_mArguments,
                                            const GGS_location & in_mEndOfArguments,
                                            const GGS_lstring & in_mIdentifier,
                                            const GGS_accessInAssignmentListAST & in_mAccessList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_sizeofExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sizeofExpressionAST (const class cPtr_sizeofExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_LValueAST readProperty_mLValue (void) const ;
  public: void setProperty_mLValue (const GGS_LValueAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sizeofExpressionAST init_21_ (const class GGS_LValueAST & inOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sizeofExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sizeofExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sizeofExpressionAST_init_21_ (const class GGS_LValueAST & inOperand0,
                                             Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_LValueAST mProperty_mLValue ;


//--- Default constructor
  public: cPtr_sizeofExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sizeofExpressionAST (const GGS_LValueAST & in_mLValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofTypeAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofTypeAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_sizeofTypeAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sizeofTypeAST (const class cPtr_sizeofTypeAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sizeofTypeAST init_21_ (const class GGS_lstring & inOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofTypeAST extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sizeofTypeAST class
//--------------------------------------------------------------------------------------------------

class cPtr_sizeofTypeAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sizeofTypeAST_init_21_ (const class GGS_lstring & inOperand0,
                                       Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTypeName ;


//--- Default constructor
  public: cPtr_sizeofTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sizeofTypeAST (const GGS_lstring & in_mTypeName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standAloneProcedureCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_standAloneProcedureCallInstructionAST : public GGS_callInstructionAST {
//--------------------------------- Default constructor
  public: GGS_standAloneProcedureCallInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_standAloneProcedureCallInstructionAST (const class cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSandAloneRoutineName (void) const ;
  public: void setProperty_mSandAloneRoutineName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_standAloneProcedureCallInstructionAST init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                                 const class GGS_effectiveArgumentListAST & inOperand1,
                                                                                 const class GGS_location & inOperand2,
                                                                                 const class GGS_lstring & inOperand3,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_standAloneProcedureCallInstructionAST extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standAloneProcedureCallInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @standAloneProcedureCallInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_standAloneProcedureCallInstructionAST : public cPtr_callInstructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void standAloneProcedureCallInstructionAST_init_21__21__21__21_ (const class GGS_location & inOperand0,
                                                                           const class GGS_effectiveArgumentListAST & inOperand1,
                                                                           const class GGS_location & inOperand2,
                                                                           const class GGS_lstring & inOperand3,
                                                                           Compiler * inCompiler) ;


//--- Extension proc baseGuardAnalyze
  public: virtual void method_baseGuardAnalyze (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_guardKindGenerationIR & arg_outConvenienceGuardGenerationIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc instructionSemanticAnalysis
  public: virtual void method_instructionSemanticAnalysis (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteInstructionTypesInPrecedenceGraph
  public: virtual void method_noteInstructionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSandAloneRoutineName ;


//--- Default constructor
  public: cPtr_standAloneProcedureCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_standAloneProcedureCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_effectiveArgumentListAST & in_mArguments,
                                                      const GGS_location & in_mEndOfArguments,
                                                      const GGS_lstring & in_mSandAloneRoutineName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneFunctionInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_standaloneFunctionInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_standaloneFunctionInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_standaloneFunctionInExpressionAST (const class cPtr_standaloneFunctionInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStandaloneFunctionName (void) const ;
  public: void setProperty_mStandaloneFunctionName (const GGS_lstring & inValue) ;

  public: class GGS_effectiveArgumentListAST readProperty_mArguments (void) const ;
  public: void setProperty_mArguments (const GGS_effectiveArgumentListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfArguments (void) const ;
  public: void setProperty_mEndOfArguments (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_standaloneFunctionInExpressionAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_effectiveArgumentListAST & inOperand1,
                                                                         const class GGS_location & inOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_standaloneFunctionInExpressionAST extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneFunctionInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @standaloneFunctionInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_standaloneFunctionInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void standaloneFunctionInExpressionAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_effectiveArgumentListAST & inOperand1,
                                                                   const class GGS_location & inOperand2,
                                                                   Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mStandaloneFunctionName ;
  public: GGS_effectiveArgumentListAST mProperty_mArguments ;
  public: GGS_location mProperty_mEndOfArguments ;


//--- Default constructor
  public: cPtr_standaloneFunctionInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_standaloneFunctionInExpressionAST (const GGS_lstring & in_mStandaloneFunctionName,
                                                  const GGS_effectiveArgumentListAST & in_mArguments,
                                                  const GGS_location & in_mEndOfArguments,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_staticListAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_staticListAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_staticListAST (const class cPtr_staticListAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStaticListName (void) const ;
  public: void setProperty_mStaticListName (const GGS_lstring & inValue) ;

  public: class GGS_staticListPropertyListAST readProperty_mPropertyList (void) const ;
  public: void setProperty_mPropertyList (const GGS_staticListPropertyListAST & inValue) ;

  public: class GGS_staticListValueListAST readProperty_mValueList (void) const ;
  public: void setProperty_mValueList (const GGS_staticListValueListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS_staticListPropertyListAST & inOperand1,
                                                     const class GGS_staticListValueListAST & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListAST extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListPropertyListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_staticListPropertyListAST final {
  public: DownEnumerator_staticListPropertyListAST (const class GGS_staticListPropertyListAST & inList) ;

  public: ~ DownEnumerator_staticListPropertyListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_staticListPropertyTypeAST current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticListPropertyListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_staticListPropertyListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_staticListPropertyListAST (const DownEnumerator_staticListPropertyListAST &) = delete ;
  private: DownEnumerator_staticListPropertyListAST & operator = (const DownEnumerator_staticListPropertyListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_staticListPropertyListAST final {
  public: UpEnumerator_staticListPropertyListAST (const class GGS_staticListPropertyListAST & inList)  ;

  public: ~ UpEnumerator_staticListPropertyListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_staticListPropertyTypeAST current_mPropertyType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticListPropertyListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_staticListPropertyListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_staticListPropertyListAST (const UpEnumerator_staticListPropertyListAST &) = delete ;
  private: UpEnumerator_staticListPropertyListAST & operator = (const UpEnumerator_staticListPropertyListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @staticListPropertyListAST list
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_staticListPropertyListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_staticListPropertyListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_staticListPropertyListAST (void) = default ;

//--- Copy
  public: GGS_staticListPropertyListAST (const GGS_staticListPropertyListAST &) = default ;
  public: GGS_staticListPropertyListAST & operator = (const GGS_staticListPropertyListAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_staticListPropertyListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_staticListPropertyListAST subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_staticListPropertyListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mPropertyName,
                                                 const class GGS_staticListPropertyTypeAST & in_mPropertyType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListPropertyListAST init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListPropertyListAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListPropertyListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                               const class GGS_staticListPropertyTypeAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_staticListPropertyListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_staticListPropertyTypeAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_staticListPropertyListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_staticListPropertyListAST add_operation (const GGS_staticListPropertyListAST & inOperand,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_staticListPropertyTypeAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_staticListPropertyTypeAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_staticListPropertyTypeAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_staticListPropertyTypeAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_staticListPropertyTypeAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyNameAtIndex (class GGS_lstring constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: void setter_setMPropertyTypeAtIndex (class GGS_staticListPropertyTypeAST constinArgument0,
                                               class GGS_uint constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_staticListPropertyTypeAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_staticListPropertyTypeAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListPropertyTypeAST getter_mPropertyTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_staticListPropertyListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListPropertyListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListPropertyListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_staticListPropertyListAST ;
  friend class DownEnumerator_staticListPropertyListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @staticListAST class
//--------------------------------------------------------------------------------------------------

class cPtr_staticListAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void staticListAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                               const class GGS_staticListPropertyListAST & inOperand1,
                                               const class GGS_staticListValueListAST & inOperand2,
                                               Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterExtension
  public: virtual void method_enterExtension (class GGS_extendStaticArrayDeclarationDictAST & arg_ioExtendStaticArrayDeclarationAST,
           class GGS_abstractDeclarationAST & arg_outNewDeclaration,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mStaticListName ;
  public: GGS_staticListPropertyListAST mProperty_mPropertyList ;
  public: GGS_staticListValueListAST mProperty_mValueList ;


//--- Default constructor
  public: cPtr_staticListAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticListAST (const GGS_lstring & in_mStaticListName,
                              const GGS_staticListPropertyListAST & in_mPropertyList,
                              const GGS_staticListValueListAST & in_mValueList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_structureDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_structureDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_structureDeclarationAST (const class cPtr_structureDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mOmnibusTypeSpecificName (void) const ;
  public: void setProperty_mOmnibusTypeSpecificName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mLLVMBaseTypeName (void) const ;
  public: void setProperty_mLLVMBaseTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mAttributeListAST (void) const ;
  public: void setProperty_mAttributeListAST (const GGS_lstringlist & inValue) ;

  public: class GGS_bool readProperty_mGenerateAssignmentRoutine (void) const ;
  public: void setProperty_mGenerateAssignmentRoutine (const GGS_bool & inValue) ;

  public: class GGS_structurePropertyListAST readProperty_mStructurePropertyListAST (void) const ;
  public: void setProperty_mStructurePropertyListAST (const GGS_structurePropertyListAST & inValue) ;

  public: class GGS_bool readProperty_mMayImplementDeinit (void) const ;
  public: void setProperty_mMayImplementDeinit (const GGS_bool & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_structureDeclarationAST init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstring & inOperand1,
                                                                               const class GGS_lstring & inOperand2,
                                                                               const class GGS_lstringlist & inOperand3,
                                                                               const class GGS_bool & inOperand4,
                                                                               const class GGS_structurePropertyListAST & inOperand5,
                                                                               const class GGS_bool & inOperand6,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structureDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structureDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @structureDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_structureDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void structureDeclarationAST_init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_lstring & inOperand1,
                                                                         const class GGS_lstring & inOperand2,
                                                                         const class GGS_lstringlist & inOperand3,
                                                                         const class GGS_bool & inOperand4,
                                                                         const class GGS_structurePropertyListAST & inOperand5,
                                                                         const class GGS_bool & inOperand6,
                                                                         Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverTypeName ;
  public: GGS_lstring mProperty_mOmnibusTypeSpecificName ;
  public: GGS_lstring mProperty_mLLVMBaseTypeName ;
  public: GGS_lstringlist mProperty_mAttributeListAST ;
  public: GGS_bool mProperty_mGenerateAssignmentRoutine ;
  public: GGS_structurePropertyListAST mProperty_mStructurePropertyListAST ;
  public: GGS_bool mProperty_mMayImplementDeinit ;


//--- Default constructor
  public: cPtr_structureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_structureDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                        const GGS_lstring & in_mOmnibusTypeSpecificName,
                                        const GGS_lstring & in_mLLVMBaseTypeName,
                                        const GGS_lstringlist & in_mAttributeListAST,
                                        const GGS_bool & in_mGenerateAssignmentRoutine,
                                        const GGS_structurePropertyListAST & in_mStructurePropertyListAST,
                                        const GGS_bool & in_mMayImplementDeinit,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncToolInstanceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncToolInstanceDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_syncToolInstanceDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_syncToolInstanceDeclarationAST (const class cPtr_syncToolInstanceDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyncTypeName (void) const ;
  public: void setProperty_mSyncTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mSyncInstanceName (void) const ;
  public: void setProperty_mSyncInstanceName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncToolInstanceDeclarationAST init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      const class GGS_expressionAST & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncToolInstanceDeclarationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncToolInstanceDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @syncToolInstanceDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_syncToolInstanceDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void syncToolInstanceDeclarationAST_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstring & inOperand1,
                                                                const class GGS_expressionAST & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyncTypeName ;
  public: GGS_lstring mProperty_mSyncInstanceName ;
  public: GGS_expressionAST mProperty_mSourceExpression ;


//--- Default constructor
  public: cPtr_syncToolInstanceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_syncToolInstanceDeclarationAST (const GGS_lstring & in_mSyncTypeName,
                                               const GGS_lstring & in_mSyncInstanceName,
                                               const GGS_expressionAST & in_mSourceExpression,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSetupDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_taskSetupDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_taskSetupDeclarationAST (const class cPtr_taskSetupDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTaskName (void) const ;
  public: void setProperty_mTaskName (const GGS_lstring & inValue) ;

  public: class GGS_string readProperty_mQualifier (void) const ;
  public: void setProperty_mQualifier (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mSetupName (void) const ;
  public: void setProperty_mSetupName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mDependanceList (void) const ;
  public: void setProperty_mDependanceList (const GGS_lstringlist & inValue) ;

  public: class GGS_instructionListAST readProperty_mTaskSetupInstructionList (void) const ;
  public: void setProperty_mTaskSetupInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mEndOfTaskSetupDeclaration (void) const ;
  public: void setProperty_mEndOfTaskSetupDeclaration (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSetupDeclarationAST init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_string & inOperand1,
                                                                           const class GGS_lstring & inOperand2,
                                                                           const class GGS_lstringlist & inOperand3,
                                                                           const class GGS_instructionListAST & inOperand4,
                                                                           const class GGS_location & inOperand5,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSetupDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskSetupDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @taskSetupDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_taskSetupDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void taskSetupDeclarationAST_init_21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_lstring & inOperand2,
                                                                     const class GGS_lstringlist & inOperand3,
                                                                     const class GGS_instructionListAST & inOperand4,
                                                                     const class GGS_location & inOperand5,
                                                                     Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mTaskName ;
  public: GGS_string mProperty_mQualifier ;
  public: GGS_lstring mProperty_mSetupName ;
  public: GGS_lstringlist mProperty_mDependanceList ;
  public: GGS_instructionListAST mProperty_mTaskSetupInstructionList ;
  public: GGS_location mProperty_mEndOfTaskSetupDeclaration ;


//--- Default constructor
  public: cPtr_taskSetupDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_taskSetupDeclarationAST (const GGS_lstring & in_mTaskName,
                                        const GGS_string & in_mQualifier,
                                        const GGS_lstring & in_mSetupName,
                                        const GGS_lstringlist & in_mDependanceList,
                                        const GGS_instructionListAST & in_mTaskSetupInstructionList,
                                        const GGS_location & in_mEndOfTaskSetupDeclaration,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @truncateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_truncateExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_truncateExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_truncateExpressionAST (const class cPtr_truncateExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_location readProperty_mEndOfExpression (void) const ;
  public: void setProperty_mEndOfExpression (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_truncateExpressionAST init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_location & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_truncateExpressionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_truncateExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_truncateExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @truncateExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_truncateExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void truncateExpressionAST_init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                       const class GGS_lstring & inOperand1,
                                                       const class GGS_location & inOperand2,
                                                       Compiler * inCompiler) ;


//--- Extension proc addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc analyzeExpression
  public: virtual void method_analyzeExpression (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_expressionAST mProperty_mExpression ;
  public: GGS_lstring mProperty_mTypeName ;
  public: GGS_location mProperty_mEndOfExpression ;


//--- Default constructor
  public: cPtr_truncateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_truncateExpressionAST (const GGS_expressionAST & in_mExpression,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_location & in_mEndOfExpression,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeAliasDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeAliasDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_typeAliasDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeAliasDeclarationAST (const class cPtr_typeAliasDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mAliasTypeName (void) const ;
  public: void setProperty_mAliasTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mOriginalTypeName (void) const ;
  public: void setProperty_mOriginalTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeAliasDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                           const class GGS_lstring & inOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeAliasDeclarationAST extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeAliasDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeAliasDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typeAliasDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeAliasDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1,
                                                     Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mAliasTypeName ;
  public: GGS_lstring mProperty_mOriginalTypeName ;


//--- Default constructor
  public: cPtr_typeAliasDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeAliasDeclarationAST (const GGS_lstring & in_mAliasTypeName,
                                        const GGS_lstring & in_mOriginalTypeName,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeOpaqueDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeOpaqueDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_typeOpaqueDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeOpaqueDeclarationAST (const class cPtr_typeOpaqueDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mOpaqueTypeName (void) const ;
  public: void setProperty_mOpaqueTypeName (const GGS_lstring & inValue) ;

  public: class GGS_expressionAST readProperty_mSizeExpression (void) const ;
  public: void setProperty_mSizeExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mSizeExpressionLocation (void) const ;
  public: void setProperty_mSizeExpressionLocation (const GGS_location & inValue) ;

  public: class GGS_lstringlist readProperty_mAttributeList (void) const ;
  public: void setProperty_mAttributeList (const GGS_lstringlist & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeOpaqueDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_expressionAST & inOperand1,
                                                                    const class GGS_location & inOperand2,
                                                                    const class GGS_lstringlist & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeOpaqueDeclarationAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeOpaqueDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeOpaqueDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typeOpaqueDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeOpaqueDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_expressionAST & inOperand1,
                                                              const class GGS_location & inOperand2,
                                                              const class GGS_lstringlist & inOperand3,
                                                              Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc noteTypesInPrecedenceGraph
  public: virtual void method_noteTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Properties
  public: GGS_lstring mProperty_mOpaqueTypeName ;
  public: GGS_expressionAST mProperty_mSizeExpression ;
  public: GGS_location mProperty_mSizeExpressionLocation ;
  public: GGS_lstringlist mProperty_mAttributeList ;


//--- Default constructor
  public: cPtr_typeOpaqueDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeOpaqueDeclarationAST (const GGS_lstring & in_mOpaqueTypeName,
                                         const GGS_expressionAST & in_mSizeExpression,
                                         const GGS_location & in_mSizeExpressionLocation,
                                         const GGS_lstringlist & in_mAttributeList,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//   enum extendStaticListExpressionAST
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_expression,
    enum_function
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_expression (class GGS_expressionAST & out_exp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_function (class GGS_lstring & out_functionName,
                                                                 class GGS_routineFormalArgumentListAST & out_formalArgs) const ;

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
  public: static GGS_extendStaticListExpressionAST extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListExpressionAST class_func_expression (const class GGS_expressionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_extendStaticListExpressionAST class_func_function (const class GGS_lstring & inOperand0,
                                                                              const class GGS_routineFormalArgumentListAST & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractExpression (class GGS_expressionAST & outArgument0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;

  public: void method_extractFunction (class GGS_lstring & outArgument0,
                                       class GGS_routineFormalArgumentListAST & outArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_extendStaticListExpressionAST_2E_expression_3F_ getter_getExpression (LOCATION_ARGS) const ;

  public: class GGS_extendStaticListExpressionAST_2E_function_3F_ getter_getFunction (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isExpression (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFunction (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST ;

//--------------------------------------------------------------------------------------------------
//   enum llvmGenerationInstructionElement
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_string,
    enum_symbol,
    enum_type
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_string (class GGS_string & out_string) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_symbol (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_type (class GGS_lstring & out_name) const ;

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
  public: static GGS_llvmGenerationInstructionElement extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenerationInstructionElement class_func_string (const class GGS_string & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_llvmGenerationInstructionElement class_func_symbol (const class GGS_lstring & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

  public: static class GGS_llvmGenerationInstructionElement class_func_type (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractString (class GGS_string & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractSymbol (class GGS_lstring & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractType (class GGS_lstring & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_llvmGenerationInstructionElement_2E_string_3F_ getter_getString (LOCATION_ARGS) const ;

  public: class GGS_llvmGenerationInstructionElement_2E_symbol_3F_ getter_getSymbol (LOCATION_ARGS) const ;

  public: class GGS_llvmGenerationInstructionElement_2E_type_3F_ getter_getType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isString (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSymbol (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ;

//--------------------------------------------------------------------------------------------------
//   enum staticListPropertyTypeAST
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyTypeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_staticListPropertyTypeAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_valueType,
    enum_function
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_valueType (class GGS_lstring & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_function (class GGS_mode & out_mode,
                                                                 class GGS_routineFormalArgumentListAST & out_formalArgs,
                                                                 class GGS_lstring & out_returnType) const ;

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
  public: static GGS_staticListPropertyTypeAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListPropertyTypeAST class_func_function (const class GGS_mode & inOperand0,
                                                                          const class GGS_routineFormalArgumentListAST & inOperand1,
                                                                          const class GGS_lstring & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_staticListPropertyTypeAST class_func_valueType (const class GGS_lstring & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractFunction (class GGS_mode & outArgument0,
                                       class GGS_routineFormalArgumentListAST & outArgument1,
                                       class GGS_lstring & outArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractValueType (class GGS_lstring & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_staticListPropertyTypeAST_2E_function_3F_ getter_getFunction (LOCATION_ARGS) const ;

  public: class GGS_staticListPropertyTypeAST_2E_valueType_3F_ getter_getValueType (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFunction (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isValueType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;

//--------------------------------------------------------------------------------------------------
//
//Function 'exportedAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_exportedAttribute (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmDriverNameFromName (const class GGS_lstring & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_omnibusTypeSpecificNameForDriver (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'staticAttribute'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_staticAttribute (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'userAttributeForRegister'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_userAttributeForRegister (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticListElementAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_extendStaticListElementAST final {
  public: DownEnumerator_extendStaticListElementAST (const class GGS_extendStaticListElementAST & inList) ;

  public: ~ DownEnumerator_extendStaticListElementAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_extendStaticListExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extendStaticListElementAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_extendStaticListElementAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_extendStaticListElementAST (const DownEnumerator_extendStaticListElementAST &) = delete ;
  private: DownEnumerator_extendStaticListElementAST & operator = (const DownEnumerator_extendStaticListElementAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extendStaticListElementAST final {
  public: UpEnumerator_extendStaticListElementAST (const class GGS_extendStaticListElementAST & inList)  ;

  public: ~ UpEnumerator_extendStaticListElementAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_extendStaticListExpressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extendStaticListElementAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_extendStaticListElementAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_extendStaticListElementAST (const UpEnumerator_extendStaticListElementAST &) = delete ;
  private: UpEnumerator_extendStaticListElementAST & operator = (const UpEnumerator_extendStaticListElementAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @extendStaticListElementAST list
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListElementAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_extendStaticListElementAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_extendStaticListElementAST (void) ;

//--- Destructor
  public: virtual ~ GGS_extendStaticListElementAST (void) = default ;

//--- Copy
  public: GGS_extendStaticListElementAST (const GGS_extendStaticListElementAST &) = default ;
  public: GGS_extendStaticListElementAST & operator = (const GGS_extendStaticListElementAST &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_extendStaticListElementAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_extendStaticListElementAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_extendStaticListElementAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_extendStaticListExpressionAST & in_mExpression,
                                                 const class GGS_location & in_mEndOfExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListElementAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListElementAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListElementAST class_func_listWithValue (const class GGS_extendStaticListExpressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_extendStaticListElementAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_extendStaticListExpressionAST & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_extendStaticListElementAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_extendStaticListElementAST add_operation (const GGS_extendStaticListElementAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_extendStaticListExpressionAST constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_extendStaticListExpressionAST constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_extendStaticListExpressionAST & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_extendStaticListExpressionAST & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_extendStaticListExpressionAST & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfExpressionAtIndex (class GGS_location constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMExpressionAtIndex (class GGS_extendStaticListExpressionAST constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_extendStaticListExpressionAST & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_extendStaticListExpressionAST & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_extendStaticListExpressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_extendStaticListElementAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_extendStaticListElementAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_extendStaticListElementAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extendStaticListElementAST ;
  friend class DownEnumerator_extendStaticListElementAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListElementAST ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@LValueOperandAST buildExpressionAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildExpressionAccessList (const class GGS_LValueOperandAST inObject,
                                                class GGS_primaryInExpressionAccessListAST & io_ioExpressionAccessList,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@LValueOperandAST buildProcedureCallAccessList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildProcedureCallAccessList (const class GGS_LValueOperandAST inObject,
                                                   class GGS_accessInAssignmentListAST & io_ioAccessList,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ast struct
//--------------------------------------------------------------------------------------------------

class GGS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_declarationListAST mProperty_mDeclarationListAST ;
  public: inline GGS_declarationListAST readProperty_mDeclarationListAST (void) const {
    return mProperty_mDeclarationListAST ;
  }

  public: GGS_extendStaticArrayDeclarationDictAST mProperty_mExtendStaticArrayDeclarationAST ;
  public: inline GGS_extendStaticArrayDeclarationDictAST readProperty_mExtendStaticArrayDeclarationAST (void) const {
    return mProperty_mExtendStaticArrayDeclarationAST ;
  }

  public: GGS_requiredFunctionDeclarationListAST mProperty_mRequiredFunctionListAST ;
  public: inline GGS_requiredFunctionDeclarationListAST readProperty_mRequiredFunctionListAST (void) const {
    return mProperty_mRequiredFunctionListAST ;
  }

  public: GGS_externFunctionDeclarationListAST mProperty_mExternFunctionListAST ;
  public: inline GGS_externFunctionDeclarationListAST readProperty_mExternFunctionListAST (void) const {
    return mProperty_mExternFunctionListAST ;
  }

  public: GGS_lstringlist mProperty_mTargetListAST ;
  public: inline GGS_lstringlist readProperty_mTargetListAST (void) const {
    return mProperty_mTargetListAST ;
  }

  public: GGS_taskListAST mProperty_mTaskListAST ;
  public: inline GGS_taskListAST readProperty_mTaskListAST (void) const {
    return mProperty_mTaskListAST ;
  }

  public: GGS_checkTargetListAST mProperty_mCheckTargetListAST ;
  public: inline GGS_checkTargetListAST readProperty_mCheckTargetListAST (void) const {
    return mProperty_mCheckTargetListAST ;
  }

  public: GGS_driverDeclarationListAST mProperty_mDriverDeclarationListAST ;
  public: inline GGS_driverDeclarationListAST readProperty_mDriverDeclarationListAST (void) const {
    return mProperty_mDriverDeclarationListAST ;
  }

  public: GGS_driverInstanciationListAST mProperty_mRequiredDriverListAST ;
  public: inline GGS_driverInstanciationListAST readProperty_mRequiredDriverListAST (void) const {
    return mProperty_mRequiredDriverListAST ;
  }

  public: GGS_uint mProperty_mTypeDeclarationIndex ;
  public: inline GGS_uint readProperty_mTypeDeclarationIndex (void) const {
    return mProperty_mTypeDeclarationIndex ;
  }

  public: GGS_controlRegisterUserAccesMapAST mProperty_mControlRegisterUserAccesMapAST ;
  public: inline GGS_controlRegisterUserAccesMapAST readProperty_mControlRegisterUserAccesMapAST (void) const {
    return mProperty_mControlRegisterUserAccesMapAST ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ast (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDeclarationListAST (const GGS_declarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeclarationListAST = inValue ;
  }

  public: inline void setter_setMExtendStaticArrayDeclarationAST (const GGS_extendStaticArrayDeclarationDictAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExtendStaticArrayDeclarationAST = inValue ;
  }

  public: inline void setter_setMRequiredFunctionListAST (const GGS_requiredFunctionDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredFunctionListAST = inValue ;
  }

  public: inline void setter_setMExternFunctionListAST (const GGS_externFunctionDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternFunctionListAST = inValue ;
  }

  public: inline void setter_setMTargetListAST (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetListAST = inValue ;
  }

  public: inline void setter_setMTaskListAST (const GGS_taskListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskListAST = inValue ;
  }

  public: inline void setter_setMCheckTargetListAST (const GGS_checkTargetListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCheckTargetListAST = inValue ;
  }

  public: inline void setter_setMDriverDeclarationListAST (const GGS_driverDeclarationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverDeclarationListAST = inValue ;
  }

  public: inline void setter_setMRequiredDriverListAST (const GGS_driverInstanciationListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRequiredDriverListAST = inValue ;
  }

  public: inline void setter_setMTypeDeclarationIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeDeclarationIndex = inValue ;
  }

  public: inline void setter_setMControlRegisterUserAccesMapAST (const GGS_controlRegisterUserAccesMapAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterUserAccesMapAST = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ast (const GGS_declarationListAST & in_mDeclarationListAST,
                   const GGS_extendStaticArrayDeclarationDictAST & in_mExtendStaticArrayDeclarationAST,
                   const GGS_requiredFunctionDeclarationListAST & in_mRequiredFunctionListAST,
                   const GGS_externFunctionDeclarationListAST & in_mExternFunctionListAST,
                   const GGS_lstringlist & in_mTargetListAST,
                   const GGS_taskListAST & in_mTaskListAST,
                   const GGS_checkTargetListAST & in_mCheckTargetListAST,
                   const GGS_driverDeclarationListAST & in_mDriverDeclarationListAST,
                   const GGS_driverInstanciationListAST & in_mRequiredDriverListAST,
                   const GGS_uint & in_mTypeDeclarationIndex,
                   const GGS_controlRegisterUserAccesMapAST & in_mControlRegisterUserAccesMapAST) ;

//--------------------------------- Copy constructor
  public: GGS_ast (const GGS_ast & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ast & operator = (const GGS_ast & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ast init (Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ast extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ast ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'omnibus_target_specific_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_omnibus_5F_target_5F_specific_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_omnibus_5F_target_5F_specific_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_configuration_5F_key_ (const class GGS_string constinArgument0,
                                                    class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_key_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_ (class GGS_ast & ioArgument0,
                                                                class GGS_lstringlist & outArgument1,
                                                                class GGS_location & outArgument2,
                                                                class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_configuration_5F_start_5F_symbol_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_ (class GGS_interruptionConfigurationList & outArgument0,
                                                   class GGS_enumerationConstantList & outArgument1,
                                                   class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_interruptConfigList_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_ (class GGS__32_lstringlist & outArgument0,
                                                                 class Lexique_omnibus_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_python_5F_utility_5F_tool_5F_list_indexing (class Lexique_omnibus_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_ (const GGS_string constinArgument0,
                                                                                         Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_key_i0_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_ (GGS__32_lstringlist & outArgument0,
                                                                                                      Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_python_5F_utility_5F_tool_5F_list_i1_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_ (GGS_ast & ioArgument0,
                                                                                                     GGS_lstringlist & outArgument1,
                                                                                                     GGS_location & outArgument2,
                                                                                                     Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_configuration_5F_start_5F_symbol_i2_indexing (Lexique_omnibus_5F_lexique * inLexique) ;

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_ (GGS_interruptionConfigurationList & outArgument0,
                                                                                        GGS_enumerationConstantList & outArgument1,
                                                                                        Lexique_omnibus_5F_lexique * inLexique) ;

/*  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_parse (Lexique_omnibus_5F_lexique * inLexique) ; */

  protected: void rule_omnibus_5F_target_5F_specific_5F_syntax_interruptConfigList_i3_indexing (Lexique_omnibus_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_0 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_1 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_2 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_3 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_4 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_5 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_6 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_7 (Lexique_omnibus_5F_lexique *) = 0 ;

  protected: virtual int32_t select_omnibus_5F_target_5F_specific_5F_syntax_8 (Lexique_omnibus_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configurationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_configurationDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_configurationDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_configurationDeclarationAST (const class cPtr_configurationDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mPanicCodeTypeName (void) const ;
  public: void setProperty_mPanicCodeTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mPanicLineTypeName (void) const ;
  public: void setProperty_mPanicLineTypeName (const GGS_lstring & inValue) ;

  public: class GGS_targetParameters readProperty_mTargetParameters (void) const ;
  public: void setProperty_mTargetParameters (const GGS_targetParameters & inValue) ;

  public: class GGS_interruptionConfigurationList readProperty_mInterruptionConfigurationList (void) const ;
  public: void setProperty_mInterruptionConfigurationList (const GGS_interruptionConfigurationList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_configurationDeclarationAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       const class GGS_targetParameters & inOperand2,
                                                                       const class GGS_interruptionConfigurationList & inOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_configurationDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_configurationDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptionConfigurationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_interruptionConfigurationList final {
  public: DownEnumerator_interruptionConfigurationList (const class GGS_interruptionConfigurationList & inList) ;

  public: ~ DownEnumerator_interruptionConfigurationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_interruptionConfigurationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_interruptionConfigurationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_interruptionConfigurationList (const DownEnumerator_interruptionConfigurationList &) = delete ;
  private: DownEnumerator_interruptionConfigurationList & operator = (const DownEnumerator_interruptionConfigurationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_interruptionConfigurationList final {
  public: UpEnumerator_interruptionConfigurationList (const class GGS_interruptionConfigurationList & inList)  ;

  public: ~ UpEnumerator_interruptionConfigurationList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mInterruptName (LOCATION_ARGS) const ;
  public: class GGS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_interruptionConfigurationList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_interruptionConfigurationList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_interruptionConfigurationList (const UpEnumerator_interruptionConfigurationList &) = delete ;
  private: UpEnumerator_interruptionConfigurationList & operator = (const UpEnumerator_interruptionConfigurationList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @interruptionConfigurationList list
//--------------------------------------------------------------------------------------------------

class GGS_interruptionConfigurationList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_interruptionConfigurationList_2E_element> mArray ;

//--- Default constructor
  public: GGS_interruptionConfigurationList (void) ;

//--- Destructor
  public: virtual ~ GGS_interruptionConfigurationList (void) = default ;

//--- Copy
  public: GGS_interruptionConfigurationList (const GGS_interruptionConfigurationList &) = default ;
  public: GGS_interruptionConfigurationList & operator = (const GGS_interruptionConfigurationList &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline uint32_t count (void) const { return uint32_t (mArray.count ()) ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_interruptionConfigurationList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_interruptionConfigurationList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_interruptionConfigurationList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mInterruptName,
                                                 const class GGS_interruptionPanicCode & in_mInterruptionPanicCode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptionConfigurationList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptionConfigurationList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptionConfigurationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                   const class GGS_interruptionPanicCode & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_interruptionConfigurationList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_interruptionPanicCode & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_interruptionConfigurationList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_interruptionConfigurationList add_operation (const GGS_interruptionConfigurationList & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_interruptionPanicCode constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_interruptionPanicCode constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_interruptionPanicCode & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_interruptionPanicCode & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_interruptionPanicCode & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInterruptNameAtIndex (class GGS_lstring constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMInterruptionPanicCodeAtIndex (class GGS_interruptionPanicCode constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_interruptionPanicCode & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_interruptionPanicCode & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mInterruptNameAtIndex (const class GGS_uint & constinOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_interruptionPanicCode getter_mInterruptionPanicCodeAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_interruptionConfigurationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_interruptionConfigurationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_interruptionConfigurationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_interruptionConfigurationList ;
  friend class DownEnumerator_interruptionConfigurationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionConfigurationList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @configurationDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_configurationDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void configurationDeclarationAST_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstring & inOperand1,
                                                                 const class GGS_targetParameters & inOperand2,
                                                                 const class GGS_interruptionConfigurationList & inOperand3,
                                                                 Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension proc enterInContext
  public: virtual void method_enterInContext (class GGS_semanticContext & arg_ioContext,
           class GGS_declarationDecorationList & arg_ioDecoratedDeclarationList,
           class GGS_decoratedRegularRoutineList & arg_ioDecoratedRoutineList,
           class GGS_routineListIR & arg_ioRoutineListIR,
           class GGS_staticListInitializationMap & arg_ioStaticListValueMap,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_controlRegisterUserAccesMapAST & arg_ioControlRegisterUserAccesMapAST,
           class GGS_userLLVMTypeDefinitionListIR & arg_ioUserLLVMTypeDefinitionListIR,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterInPrecedenceGraph
  public: virtual void method_enterInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mPanicCodeTypeName ;
  public: GGS_lstring mProperty_mPanicLineTypeName ;
  public: GGS_targetParameters mProperty_mTargetParameters ;
  public: GGS_interruptionConfigurationList mProperty_mInterruptionConfigurationList ;


//--- Default constructor
  public: cPtr_configurationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_configurationDeclarationAST (const GGS_lstring & in_mPanicCodeTypeName,
                                            const GGS_lstring & in_mPanicLineTypeName,
                                            const GGS_targetParameters & in_mTargetParameters,
                                            const GGS_interruptionConfigurationList & in_mInterruptionConfigurationList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//   enum interruptionPanicCode
//--------------------------------------------------------------------------------------------------

class GGS_interruptionPanicCode : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_interruptionPanicCode (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noCode,
    enum_code
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_code (class GGS_lbigint & out_value) const ;

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
  public: static GGS_interruptionPanicCode extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_interruptionPanicCode class_func_code (const class GGS_lbigint & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_interruptionPanicCode class_func_noCode (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractCode (class GGS_lbigint & outArgument0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_interruptionPanicCode_2E_code_3F_ getter_getCode (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCode (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoCode (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode ;

//--------------------------------------------------------------------------------------------------
//
//Function 'isrSlotTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_isrSlotTypeName (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ifExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ifExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ifExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ifExpressionAST_2E_weak (const class GGS_ifExpressionAST & inSource) ;

  public: GGS_ifExpressionAST_2E_weak & operator = (const class GGS_ifExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ifExpressionAST_2E_weak init_nil (void) {
    GGS_ifExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ifExpressionAST bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ifExpressionAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ifExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ifExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericFormalParameter_2E_constant struct
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameter_2E_constant : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericFormalParameter_2E_constant (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericFormalParameter_2E_constant (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_genericFormalParameter_2E_constant (const GGS_genericFormalParameter_2E_constant & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_genericFormalParameter_2E_constant & operator = (const GGS_genericFormalParameter_2E_constant & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericFormalParameter_2E_constant init_21_ (const class GGS_lstring & inOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericFormalParameter_2E_constant extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameter_2E_constant & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_constant ;

//--------------------------------------------------------------------------------------------------
// Phase 1: genericFormalParameter.constant? optional
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameter_2E_constant_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_genericFormalParameter_2E_constant mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_genericFormalParameter_2E_constant_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_genericFormalParameter_2E_constant_3F_ (const GGS_genericFormalParameter_2E_constant & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_genericFormalParameter_2E_constant_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_genericFormalParameter_2E_constant unwrappedValue (void) const {
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
  public: static GGS_genericFormalParameter_2E_constant_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameter_2E_constant_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_constant_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericFormalParameter_2E_type struct
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameter_2E_type : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_genericFormalParameter_2E_type (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_genericFormalParameter_2E_type (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_genericFormalParameter_2E_type (const GGS_genericFormalParameter_2E_type & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_genericFormalParameter_2E_type & operator = (const GGS_genericFormalParameter_2E_type & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericFormalParameter_2E_type init_21_ (const class GGS_lstring & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericFormalParameter_2E_type extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameter_2E_type & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_type ;

//--------------------------------------------------------------------------------------------------
// Phase 1: genericFormalParameter.type? optional
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameter_2E_type_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_genericFormalParameter_2E_type mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_genericFormalParameter_2E_type_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_genericFormalParameter_2E_type_3F_ (const GGS_genericFormalParameter_2E_type & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_genericFormalParameter_2E_type_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_genericFormalParameter_2E_type unwrappedValue (void) const {
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
  public: static GGS_genericFormalParameter_2E_type_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameter_2E_type_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameter_2E_type_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum llvmStringDefinitionElement
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinitionElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_llvmStringDefinitionElement (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_variable,
    enum_string
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_variable (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_string (class GGS_lstring & out_value) const ;

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
  public: static GGS_llvmStringDefinitionElement extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmStringDefinitionElement class_func_string (const class GGS_lstring & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

  public: static class GGS_llvmStringDefinitionElement class_func_variable (const class GGS_lstring & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinitionElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractString (class GGS_lstring & outArgument0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_extractVariable (class GGS_lstring & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_llvmStringDefinitionElement_2E_string_3F_ getter_getString (LOCATION_ARGS) const ;

  public: class GGS_llvmStringDefinitionElement_2E_variable_3F_ getter_getVariable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isString (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmStringDefinitionElement_2E_string struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinitionElement_2E_string : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_value ;
  public: inline GGS_lstring readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmStringDefinitionElement_2E_string (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmStringDefinitionElement_2E_string (const GGS_lstring & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_llvmStringDefinitionElement_2E_string (const GGS_llvmStringDefinitionElement_2E_string & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmStringDefinitionElement_2E_string & operator = (const GGS_llvmStringDefinitionElement_2E_string & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmStringDefinitionElement_2E_string init_21_ (const class GGS_lstring & inOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmStringDefinitionElement_2E_string extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinitionElement_2E_string & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_string ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmStringDefinitionElement.string? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinitionElement_2E_string_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmStringDefinitionElement_2E_string mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmStringDefinitionElement_2E_string_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmStringDefinitionElement_2E_string_3F_ (const GGS_llvmStringDefinitionElement_2E_string & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmStringDefinitionElement_2E_string_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmStringDefinitionElement_2E_string unwrappedValue (void) const {
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
  public: static GGS_llvmStringDefinitionElement_2E_string_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinitionElement_2E_string_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_string_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmStringDefinitionElement_2E_variable struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinitionElement_2E_variable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmStringDefinitionElement_2E_variable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmStringDefinitionElement_2E_variable (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_llvmStringDefinitionElement_2E_variable (const GGS_llvmStringDefinitionElement_2E_variable & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmStringDefinitionElement_2E_variable & operator = (const GGS_llvmStringDefinitionElement_2E_variable & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmStringDefinitionElement_2E_variable init_21_ (const class GGS_lstring & inOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmStringDefinitionElement_2E_variable extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinitionElement_2E_variable & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_variable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmStringDefinitionElement.variable? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinitionElement_2E_variable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmStringDefinitionElement_2E_variable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmStringDefinitionElement_2E_variable_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmStringDefinitionElement_2E_variable_3F_ (const GGS_llvmStringDefinitionElement_2E_variable & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmStringDefinitionElement_2E_variable_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmStringDefinitionElement_2E_variable unwrappedValue (void) const {
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
  public: static GGS_llvmStringDefinitionElement_2E_variable_3F_ extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinitionElement_2E_variable_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinitionElement_2E_variable_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmStringDefinition_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinition_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_llvmStringDefinitionElement mProperty_mElement ;
  public: inline GGS_llvmStringDefinitionElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmStringDefinition_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_llvmStringDefinitionElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmStringDefinition_2E_element (const GGS_llvmStringDefinitionElement & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_llvmStringDefinition_2E_element (const GGS_llvmStringDefinition_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmStringDefinition_2E_element & operator = (const GGS_llvmStringDefinition_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmStringDefinition_2E_element init_21_ (const class GGS_llvmStringDefinitionElement & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmStringDefinition_2E_element extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinition_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinition_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenericType_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenericType_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmGenericType_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmGenericType_2E_weak (const class GGS_llvmGenericType & inSource) ;

  public: GGS_llvmGenericType_2E_weak & operator = (const class GGS_llvmGenericType & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmGenericType_2E_weak init_nil (void) {
    GGS_llvmGenericType_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmGenericType bang_llvmGenericType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmGenericType unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenericType_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenericType_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmGenericType_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenericType_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@genericFormalParameterList buildFormalGenericConstantMap'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildFormalGenericConstantMap (const class GGS_genericFormalParameterList inObject,
                                                    class GGS_ctCheckMap & io_ioMap,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@llvmStringDefinition checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompileTimeExpression (const class GGS_llvmStringDefinition inObject,
                                                 const class GGS_ctCheckMap constin_inMap,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @structureDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_structureDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_structureDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_structureDeclarationAST_2E_weak (const class GGS_structureDeclarationAST & inSource) ;

  public: GGS_structureDeclarationAST_2E_weak & operator = (const class GGS_structureDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_structureDeclarationAST_2E_weak init_nil (void) {
    GGS_structureDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_structureDeclarationAST bang_structureDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_structureDeclarationAST unwrappedValue (void) const ;

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_structureDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_structureDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_structureDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structureDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyAttributeList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyAttributeList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mAttributeName ;
  public: inline GGS_lstring readProperty_mAttributeName (void) const {
    return mProperty_mAttributeName ;
  }

  public: GGS_lbigint mProperty_mAttributeValue ;
  public: inline GGS_lbigint readProperty_mAttributeValue (void) const {
    return mProperty_mAttributeValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyAttributeList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAttributeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeName = inValue ;
  }

  public: inline void setter_setMAttributeValue (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyAttributeList_2E_element (const GGS_lstring & in_mAttributeName,
                                                const GGS_lbigint & in_mAttributeValue) ;

//--------------------------------- Copy constructor
  public: GGS_propertyAttributeList_2E_element (const GGS_propertyAttributeList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyAttributeList_2E_element & operator = (const GGS_propertyAttributeList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyAttributeList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_lbigint & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyAttributeList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAttributeList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKindAST_2E_initializedConstantProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_initializedConstantProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_initExpression ;
  public: inline GGS_expressionAST readProperty_initExpression (void) const {
    return mProperty_initExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_initializedConstantProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInitExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKindAST_2E_initializedConstantProperty (const GGS_expressionAST & in_initExpression) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKindAST_2E_initializedConstantProperty (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKindAST_2E_initializedConstantProperty & operator = (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKindAST_2E_initializedConstantProperty init_21_ (const class GGS_expressionAST & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKindAST_2E_initializedConstantProperty extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKindAST.initializedConstantProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_initializedConstantProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKindAST_2E_initializedConstantProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKindAST_2E_initializedConstantProperty_3F_ (const GGS_propertyKindAST_2E_initializedConstantProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKindAST_2E_initializedConstantProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKindAST_2E_initializedConstantProperty unwrappedValue (void) const {
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
  public: static GGS_propertyKindAST_2E_initializedConstantProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedConstantProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKindAST_2E_initializedStoredProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_initializedStoredProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_initExpression ;
  public: inline GGS_expressionAST readProperty_initExpression (void) const {
    return mProperty_initExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_initializedStoredProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInitExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_initExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKindAST_2E_initializedStoredProperty (const GGS_expressionAST & in_initExpression) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKindAST_2E_initializedStoredProperty (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKindAST_2E_initializedStoredProperty & operator = (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKindAST_2E_initializedStoredProperty init_21_ (const class GGS_expressionAST & inOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKindAST_2E_initializedStoredProperty extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKindAST.initializedStoredProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_initializedStoredProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKindAST_2E_initializedStoredProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKindAST_2E_initializedStoredProperty_3F_ (const GGS_propertyKindAST_2E_initializedStoredProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKindAST_2E_initializedStoredProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKindAST_2E_initializedStoredProperty unwrappedValue (void) const {
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
  public: static GGS_propertyKindAST_2E_initializedStoredProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_initializedStoredProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKindAST_2E_readOnlyComputedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_readOnlyComputedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_instructionListAST mProperty_instructionList ;
  public: inline GGS_instructionListAST readProperty_instructionList (void) const {
    return mProperty_instructionList ;
  }

  public: GGS_location mProperty_endOfInstructionList ;
  public: inline GGS_location readProperty_endOfInstructionList (void) const {
    return mProperty_endOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_readOnlyComputedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionList = inValue ;
  }

  public: inline void setter_setEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKindAST_2E_readOnlyComputedProperty (const GGS_instructionListAST & in_instructionList,
                                                           const GGS_location & in_endOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKindAST_2E_readOnlyComputedProperty (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKindAST_2E_readOnlyComputedProperty & operator = (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKindAST_2E_readOnlyComputedProperty init_21__21_ (const class GGS_instructionListAST & inOperand0,
                                                                               const class GGS_location & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKindAST_2E_readOnlyComputedProperty extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKindAST.readOnlyComputedProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKindAST_2E_readOnlyComputedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ (const GGS_propertyKindAST_2E_readOnlyComputedProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKindAST_2E_readOnlyComputedProperty unwrappedValue (void) const {
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
  public: static GGS_propertyKindAST_2E_readOnlyComputedProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_readOnlyComputedProperty_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @propertyKindAST_2E_writeComputedProperty struct
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_writeComputedProperty : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_instructionListAST mProperty_instructionList ;
  public: inline GGS_instructionListAST readProperty_instructionList (void) const {
    return mProperty_instructionList ;
  }

  public: GGS_location mProperty_endOfInstructionList ;
  public: inline GGS_location readProperty_endOfInstructionList (void) const {
    return mProperty_endOfInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_writeComputedProperty (void) ;

//--------------------------------- Property setters
  public: inline void setter_setInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_instructionList = inValue ;
  }

  public: inline void setter_setEndOfInstructionList (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_propertyKindAST_2E_writeComputedProperty (const GGS_instructionListAST & in_instructionList,
                                                        const GGS_location & in_endOfInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_propertyKindAST_2E_writeComputedProperty (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_propertyKindAST_2E_writeComputedProperty & operator = (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_propertyKindAST_2E_writeComputedProperty init_21__21_ (const class GGS_instructionListAST & inOperand0,
                                                                            const class GGS_location & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_propertyKindAST_2E_writeComputedProperty extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty ;

//--------------------------------------------------------------------------------------------------
// Phase 1: propertyKindAST.writeComputedProperty? optional
//--------------------------------------------------------------------------------------------------

class GGS_propertyKindAST_2E_writeComputedProperty_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_propertyKindAST_2E_writeComputedProperty mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_propertyKindAST_2E_writeComputedProperty_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_propertyKindAST_2E_writeComputedProperty_3F_ (const GGS_propertyKindAST_2E_writeComputedProperty & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_propertyKindAST_2E_writeComputedProperty_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_propertyKindAST_2E_writeComputedProperty unwrappedValue (void) const {
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
  public: static GGS_propertyKindAST_2E_writeComputedProperty_3F_ extractObject (const GGS_object & inObject,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKindAST_2E_writeComputedProperty_3F_ ;

