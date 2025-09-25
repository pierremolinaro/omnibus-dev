#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_sliceMap final {

  public: DownEnumerator_sliceMap (const class GGS_sliceMap & inMap) ;

  public: ~ DownEnumerator_sliceMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_llvmBinaryOperation current_mAccessOperator (LOCATION_ARGS) const ;

  public: class GGS_bigint current_mAccessRightOperand (LOCATION_ARGS) const ;

  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;

  public: class GGS_sliceMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sliceMap (const DownEnumerator_sliceMap &) = delete ;
  private: DownEnumerator_sliceMap & operator = (const DownEnumerator_sliceMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sliceMap final {
  public: UpEnumerator_sliceMap (const class GGS_sliceMap & inMap)  ;

  public: ~ UpEnumerator_sliceMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_llvmBinaryOperation current_mAccessOperator (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mAccessRightOperand (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public: class GGS_sliceMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sliceMap (const UpEnumerator_sliceMap &) = delete ;
  private: UpEnumerator_sliceMap & operator = (const UpEnumerator_sliceMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_sliceMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_sliceMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_sliceMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_sliceMap (void) ;

//--- Handle copy
  public: GGS_sliceMap (const GGS_sliceMap & inSource) ;
  public: GGS_sliceMap & operator = (const GGS_sliceMap & inSource) ;

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
  protected: void performInsert (const class GGS_sliceMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_sliceMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceMap init (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceMap extractObject (const GGS_object & inObject,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_sliceMap class_func_mapWithMapToOverride (const class GGS_sliceMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_llvmBinaryOperation constinArgument1,
                                                  class GGS_bigint constinArgument2,
                                                  class GGS_omnibusType constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessOperatorForKey (class GGS_llvmBinaryOperation constinArgument0,
                                                                 class GGS_string constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessRightOperandForKey (class GGS_bigint constinArgument0,
                                                                     class GGS_string constinArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GGS_omnibusType constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_llvmBinaryOperation & outArgument1,
                                                  class GGS_bigint & outArgument2,
                                                  class GGS_omnibusType & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmBinaryOperation getter_mAccessOperatorForKey (const class GGS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bigint getter_mAccessRightOperandForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mResultTypeForKey (const class GGS_string & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceMap getter_overriddenMap (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_sliceMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sliceMap ;
  friend class DownEnumerator_sliceMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap ;

//--------------------------------------------------------------------------------------------------
//   enum llvmBinaryOperation
//--------------------------------------------------------------------------------------------------

class GGS_llvmBinaryOperation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_llvmBinaryOperation (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_addNoOVF,
    enum_subNoOVF,
    enum_mulNoOVF,
    enum_udivNoOVF,
    enum_sdivNoOVF,
    enum_uremNoOVF,
    enum_sremNoOVF,
    enum_uaddOVF,
    enum_saddOVF,
    enum_usubOVF,
    enum_ssubOVF,
    enum_umulOVF,
    enum_smulOVF,
    enum_udivOVF,
    enum_sdivOVF,
    enum_uremOVF,
    enum_sremOVF,
    enum_and,
    enum_ior,
    enum_xor,
    enum_shl,
    enum_ashr,
    enum_lshr,
    enum_icmp_5F_eq,
    enum_icmp_5F_ult,
    enum_icmp_5F_ule,
    enum_icmp_5F_slt,
    enum_icmp_5F_sle
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
  public: static GGS_llvmBinaryOperation extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmBinaryOperation class_func_addNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_and (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_ashr (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_eq (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_sle (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_slt (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_ule (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_icmp_5F_ult (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_ior (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_lshr (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_mulNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_saddOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sdivNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sdivOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_shl (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_smulOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sremNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_sremOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_ssubOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_subNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_uaddOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_udivNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_udivOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_umulOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_uremNoOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_uremOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_usubOVF (LOCATION_ARGS) ;

  public: static class GGS_llvmBinaryOperation class_func_xor (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAddNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAnd (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAshr (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIcmp_5F_eq (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIcmp_5F_sle (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIcmp_5F_slt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIcmp_5F_ule (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIcmp_5F_ult (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isIor (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLshr (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMulNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSaddOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSdivNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSdivOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isShl (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSmulOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSremNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSremOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSsubOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSubNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUaddOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUdivNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUdivOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUmulOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUremNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUremOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isUsubOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isXor (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmBinaryOperation ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_llvmBinaryOperation mProperty_mAccessOperator ;
  public: inline GGS_llvmBinaryOperation readProperty_mAccessOperator (void) const {
    return mProperty_mAccessOperator ;
  }

  public: GGS_bigint mProperty_mAccessRightOperand ;
  public: inline GGS_bigint readProperty_mAccessRightOperand (void) const {
    return mProperty_mAccessRightOperand ;
  }

  public: GGS_omnibusType mProperty_mResultType ;
  public: inline GGS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessOperator (const GGS_llvmBinaryOperation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessOperator = inValue ;
  }

  public: inline void setter_setMAccessRightOperand (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessRightOperand = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceMap_2E_element (const GGS_lstring & in_lkey,
                                   const GGS_llvmBinaryOperation & in_mAccessOperator,
                                   const GGS_bigint & in_mAccessRightOperand,
                                   const GGS_omnibusType & in_mResultType) ;

//--------------------------------- Copy constructor
  public: GGS_sliceMap_2E_element (const GGS_sliceMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceMap_2E_element & operator = (const GGS_sliceMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_llvmBinaryOperation & inOperand1,
                                                               const class GGS_bigint & inOperand2,
                                                               const class GGS_omnibusType & inOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceMap_2E_element extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_llvmBinaryOperation & inOperand1,
                                                               const class GGS_bigint & inOperand2,
                                                               const class GGS_omnibusType & inOperand3,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceMap_2E_element_3F_ (const GGS_sliceMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_sliceMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (class cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compileTimeDeclarationBarrier'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_compileTimeDeclarationBarrier (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_bool mProperty_mIsReadOnly ;
  public: inline GGS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GGS_bool mProperty_mUserAccess ;
  public: inline GGS_bool readProperty_mUserAccess (void) const {
    return mProperty_mUserAccess ;
  }

  public: GGS_sliceMap mProperty_mRegisterFieldAccessMap ;
  public: inline GGS_sliceMap readProperty_mRegisterFieldAccessMap (void) const {
    return mProperty_mRegisterFieldAccessMap ;
  }

  public: GGS_controlRegisterFieldMap mProperty_mRegisterFieldMap ;
  public: inline GGS_controlRegisterFieldMap readProperty_mRegisterFieldMap (void) const {
    return mProperty_mRegisterFieldMap ;
  }

  public: GGS_bigint mProperty_mAddressOffset ;
  public: inline GGS_bigint readProperty_mAddressOffset (void) const {
    return mProperty_mAddressOffset ;
  }

  public: GGS_controlRegisterFieldList mProperty_mControlRegisterFieldList ;
  public: inline GGS_controlRegisterFieldList readProperty_mControlRegisterFieldList (void) const {
    return mProperty_mControlRegisterFieldList ;
  }

  public: GGS_uint mProperty_mRegisterBitCount ;
  public: inline GGS_uint readProperty_mRegisterBitCount (void) const {
    return mProperty_mRegisterBitCount ;
  }

  public: GGS_uint mProperty_mArraySize ;
  public: inline GGS_uint readProperty_mArraySize (void) const {
    return mProperty_mArraySize ;
  }

  public: GGS_uint mProperty_mElementArraySize ;
  public: inline GGS_uint readProperty_mElementArraySize (void) const {
    return mProperty_mElementArraySize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMIsReadOnly (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsReadOnly = inValue ;
  }

  public: inline void setter_setMUserAccess (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserAccess = inValue ;
  }

  public: inline void setter_setMRegisterFieldAccessMap (const GGS_sliceMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldAccessMap = inValue ;
  }

  public: inline void setter_setMRegisterFieldMap (const GGS_controlRegisterFieldMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldMap = inValue ;
  }

  public: inline void setter_setMAddressOffset (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddressOffset = inValue ;
  }

  public: inline void setter_setMControlRegisterFieldList (const GGS_controlRegisterFieldList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterFieldList = inValue ;
  }

  public: inline void setter_setMRegisterBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitCount = inValue ;
  }

  public: inline void setter_setMArraySize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArraySize = inValue ;
  }

  public: inline void setter_setMElementArraySize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElementArraySize = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_omnibusType & in_mType,
                                             const GGS_bool & in_mIsReadOnly,
                                             const GGS_bool & in_mUserAccess,
                                             const GGS_sliceMap & in_mRegisterFieldAccessMap,
                                             const GGS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                             const GGS_bigint & in_mAddressOffset,
                                             const GGS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                             const GGS_uint & in_mRegisterBitCount,
                                             const GGS_uint & in_mArraySize,
                                             const GGS_uint & in_mElementArraySize) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterMap_2E_element (const GGS_controlRegisterMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterMap_2E_element & operator = (const GGS_controlRegisterMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterMap_2E_element init_21__21__21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                     const class GGS_omnibusType & inOperand1,
                                                                                                     const class GGS_bool & inOperand2,
                                                                                                     const class GGS_bool & inOperand3,
                                                                                                     const class GGS_sliceMap & inOperand4,
                                                                                                     const class GGS_controlRegisterFieldMap & inOperand5,
                                                                                                     const class GGS_bigint & inOperand6,
                                                                                                     const class GGS_controlRegisterFieldList & inOperand7,
                                                                                                     const class GGS_uint & inOperand8,
                                                                                                     const class GGS_uint & inOperand9,
                                                                                                     const class GGS_uint & inOperand10,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_omnibusType & inOperand1,
                                                                         const class GGS_bool & inOperand2,
                                                                         const class GGS_bool & inOperand3,
                                                                         const class GGS_sliceMap & inOperand4,
                                                                         const class GGS_controlRegisterFieldMap & inOperand5,
                                                                         const class GGS_bigint & inOperand6,
                                                                         const class GGS_controlRegisterFieldList & inOperand7,
                                                                         const class GGS_uint & inOperand8,
                                                                         const class GGS_uint & inOperand9,
                                                                         const class GGS_uint & inOperand10,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterMap_2E_element_3F_ (const GGS_controlRegisterMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_controlRegisterMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupKind_2E_arrayGroup struct
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_arrayGroup : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigintlist mProperty_baseAddresses ;
  public: inline GGS_lbigintlist readProperty_baseAddresses (void) const {
    return mProperty_baseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_arrayGroup (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBaseAddresses (const GGS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseAddresses = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupKind_2E_arrayGroup (const GGS_lbigintlist & in_baseAddresses) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupKind_2E_arrayGroup (const GGS_registerGroupKind_2E_arrayGroup & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupKind_2E_arrayGroup & operator = (const GGS_registerGroupKind_2E_arrayGroup & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupKind_2E_arrayGroup init_21_ (const class GGS_lbigintlist & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupKind_2E_arrayGroup extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerGroupKind_2E_arrayGroup class_func_new (const class GGS_lbigintlist & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerGroupKind.arrayGroup? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_arrayGroup_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerGroupKind_2E_arrayGroup mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_arrayGroup_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerGroupKind_2E_arrayGroup_3F_ (const GGS_registerGroupKind_2E_arrayGroup & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerGroupKind_2E_arrayGroup_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerGroupKind_2E_arrayGroup unwrappedValue (void) const {
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
  public: static GGS_registerGroupKind_2E_arrayGroup_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_arrayGroup_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @registerGroupKind_2E_single struct
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_single : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_baseAddress ;
  public: inline GGS_bigint readProperty_baseAddress (void) const {
    return mProperty_baseAddress ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_single (void) ;

//--------------------------------- Property setters
  public: inline void setter_setBaseAddress (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_baseAddress = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_registerGroupKind_2E_single (const GGS_bigint & in_baseAddress) ;

//--------------------------------- Copy constructor
  public: GGS_registerGroupKind_2E_single (const GGS_registerGroupKind_2E_single & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_registerGroupKind_2E_single & operator = (const GGS_registerGroupKind_2E_single & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_registerGroupKind_2E_single init_21_ (const class GGS_bigint & inOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_registerGroupKind_2E_single extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerGroupKind_2E_single class_func_new (const class GGS_bigint & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single ;

//--------------------------------------------------------------------------------------------------
// Phase 1: registerGroupKind.single? optional
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupKind_2E_single_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_registerGroupKind_2E_single mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_registerGroupKind_2E_single_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_registerGroupKind_2E_single_3F_ (const GGS_registerGroupKind_2E_single & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_registerGroupKind_2E_single_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_registerGroupKind_2E_single unwrappedValue (void) const {
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
  public: static GGS_registerGroupKind_2E_single_3F_ extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupKind_2E_single_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedControlRegisterArrayGroupDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedControlRegisterArrayGroupDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedControlRegisterArrayGroupDeclaration (const class cPtr_decoratedControlRegisterArrayGroupDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mGroupName (void) const ;
  public: void setProperty_mGroupName (const GGS_lstring & inValue) ;

  public: class GGS_lbigintlist readProperty_mBaseAddresses (void) const ;
  public: void setProperty_mBaseAddresses (const GGS_lbigintlist & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedControlRegisterArrayGroupDeclaration init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_lbigintlist & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedControlRegisterArrayGroupDeclaration extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedControlRegisterArrayGroupDeclaration class_func_new (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_lbigintlist & inOperand1,
                                                                                         class Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedControlRegisterArrayGroupDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedControlRegisterArrayGroupDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedControlRegisterArrayGroupDeclaration_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                           const class GGS_lbigintlist & inOperand1,
                                                                           Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mGroupName ;
  public: GGS_lbigintlist mProperty_mBaseAddresses ;


//--- Default constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedControlRegisterArrayGroupDeclaration (const GGS_lstring & in_mGroupName,
                                                              const GGS_lbigintlist & in_mBaseAddresses,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedControlRegisterArrayGroupDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak (const class GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) ;

  public: GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & operator = (const class GGS_decoratedControlRegisterArrayGroupDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak init_nil (void) {
    GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedControlRegisterArrayGroupDeclaration bang_decoratedControlRegisterArrayGroupDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedControlRegisterArrayGroupDeclaration unwrappedValue (void) const ;

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
  public: static GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedControlRegisterArrayGroupDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterGroupArrayList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterGroupArrayList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mGroupName ;
  public: inline GGS_lstring readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GGS_lbigintlist mProperty_mBaseAddresses ;
  public: inline GGS_lbigintlist readProperty_mBaseAddresses (void) const {
    return mProperty_mBaseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterGroupArrayList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMBaseAddresses (const GGS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseAddresses = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterGroupArrayList_2E_element (const GGS_lstring & in_mGroupName,
                                                        const GGS_lbigintlist & in_mBaseAddresses) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterGroupArrayList_2E_element (const GGS_controlRegisterGroupArrayList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterGroupArrayList_2E_element & operator = (const GGS_controlRegisterGroupArrayList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterGroupArrayList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_lbigintlist & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterGroupArrayList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterGroupArrayList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lbigintlist & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByAddress sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterByAddress final {
//--- Constructor
  public: DownEnumerator_controlRegisterByAddress (const class GGS_controlRegisterByAddress & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByAddress_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByAddress_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_controlRegisterByAddress (const DownEnumerator_controlRegisterByAddress &) = delete ;
  private: DownEnumerator_controlRegisterByAddress & operator = (const DownEnumerator_controlRegisterByAddress &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterByAddress final {
//--- Constructor
  public: UpEnumerator_controlRegisterByAddress (const class GGS_controlRegisterByAddress & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByAddress_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByAddress_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_controlRegisterByAddress (const UpEnumerator_controlRegisterByAddress &) = delete ;
  private: UpEnumerator_controlRegisterByAddress & operator = (const UpEnumerator_controlRegisterByAddress &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByAddress sorted list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByAddress final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterByAddress_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_controlRegisterByAddress (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterByAddress (void) = default ;

//--- Handle copy
  public: GGS_controlRegisterByAddress (const GGS_controlRegisterByAddress &) = default ;
  public: GGS_controlRegisterByAddress & operator = (const GGS_controlRegisterByAddress &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_controlRegisterByAddress_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByAddress init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByAddress extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterByAddress class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_controlRegisterByAddress class_func_sortedListWithValue (const class GGS_bigint & inOperand0,
                                                                                    const class GGS_string & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_controlRegisterByAddress inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_bigint & inOperand0,
                                                    const class GGS_string & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_controlRegisterByAddress_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_bigint inArgument0,
                                               class GGS_string inArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_bigint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_bigint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_bigint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_bigint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterByAddress ;
  friend class DownEnumerator_controlRegisterByAddress ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByAddress_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByAddress_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mAddress ;
  public: inline GGS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GGS_string mProperty_mHTML ;
  public: inline GGS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterByAddress_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterByAddress_2E_element (const GGS_bigint & in_mAddress,
                                                   const GGS_string & in_mHTML) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterByAddress_2E_element (const GGS_controlRegisterByAddress_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterByAddress_2E_element & operator = (const GGS_controlRegisterByAddress_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByAddress_2E_element init_21__21_ (const class GGS_bigint & inOperand0,
                                                                       const class GGS_string & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByAddress_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterByAddress_2E_element class_func_new (const class GGS_bigint & inOperand0,
                                                                               const class GGS_string & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByAddress_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByName sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterByName final {
//--- Constructor
  public: DownEnumerator_controlRegisterByName (const class GGS_controlRegisterByName & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByName_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByName_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_controlRegisterByName (const DownEnumerator_controlRegisterByName &) = delete ;
  private: DownEnumerator_controlRegisterByName & operator = (const DownEnumerator_controlRegisterByName &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterByName final {
//--- Constructor
  public: UpEnumerator_controlRegisterByName (const class GGS_controlRegisterByName & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GGS_string current_mHTML (LOCATION_ARGS) const ;
  public: class GGS_string current_mName (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_controlRegisterByName_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_controlRegisterByName_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_controlRegisterByName (const UpEnumerator_controlRegisterByName &) = delete ;
  private: UpEnumerator_controlRegisterByName & operator = (const UpEnumerator_controlRegisterByName &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByName sorted list
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByName final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_controlRegisterByName_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_controlRegisterByName (void) ;

//--- Destructor
  public: virtual ~ GGS_controlRegisterByName (void) = default ;

//--- Handle copy
  public: GGS_controlRegisterByName (const GGS_controlRegisterByName &) = default ;
  public: GGS_controlRegisterByName & operator = (const GGS_controlRegisterByName &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_controlRegisterByName_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByName init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByName extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterByName class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_controlRegisterByName class_func_sortedListWithValue (const class GGS_bigint & inOperand0,
                                                                                 const class GGS_string & inOperand1,
                                                                                 const class GGS_string & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_controlRegisterByName inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_bigint & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_controlRegisterByName_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_bigint inArgument0,
                                               class GGS_string inArgument1,
                                               class GGS_string inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_bigint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    class GGS_string & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_bigint & outArgument0,
                                                    class GGS_string & outArgument1,
                                                    class GGS_string & outArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_bigint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_bigint & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterByName ;
  friend class DownEnumerator_controlRegisterByName ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterByName_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterByName_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bigint mProperty_mAddress ;
  public: inline GGS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GGS_string mProperty_mHTML ;
  public: inline GGS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

  public: GGS_string mProperty_mName ;
  public: inline GGS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterByName_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

  public: inline void setter_setMName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterByName_2E_element (const GGS_bigint & in_mAddress,
                                                const GGS_string & in_mHTML,
                                                const GGS_string & in_mName) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterByName_2E_element (const GGS_controlRegisterByName_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterByName_2E_element & operator = (const GGS_controlRegisterByName_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterByName_2E_element init_21__21__21_ (const class GGS_bigint & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_string & inOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterByName_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterByName_2E_element class_func_new (const class GGS_bigint & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_string & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterByName_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalConstantDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_globalConstantDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_globalConstantDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_globalConstantDeclarationAST_2E_weak (const class GGS_globalConstantDeclarationAST & inSource) ;

  public: GGS_globalConstantDeclarationAST_2E_weak & operator = (const class GGS_globalConstantDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_globalConstantDeclarationAST_2E_weak init_nil (void) {
    GGS_globalConstantDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_globalConstantDeclarationAST bang_globalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_globalConstantDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_globalConstantDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalConstantDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_globalConstantDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalConstantDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addDependenceEdgeForStaticExpression (class cPtr_expressionAST * inObject,
                                                               const class GGS_lstring constin_inConstantName,
                                                               class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncToolInstanceDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_syncToolInstanceDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_syncToolInstanceDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_syncToolInstanceDeclarationAST_2E_weak (const class GGS_syncToolInstanceDeclarationAST & inSource) ;

  public: GGS_syncToolInstanceDeclarationAST_2E_weak & operator = (const class GGS_syncToolInstanceDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_syncToolInstanceDeclarationAST_2E_weak init_nil (void) {
    GGS_syncToolInstanceDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_syncToolInstanceDeclarationAST bang_syncToolInstanceDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_syncToolInstanceDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_syncToolInstanceDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncToolInstanceDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_syncToolInstanceDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedSyncInstance reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedSyncInstance : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedSyncInstance (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedSyncInstance (const class cPtr_decoratedSyncInstance * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mSyncInstanceName (void) const ;
  public: void setProperty_mSyncInstanceName (const GGS_lstring & inValue) ;

  public: class GGS_objectIR readProperty_mExpressionGeneratedCode (void) const ;
  public: void setProperty_mExpressionGeneratedCode (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedSyncInstance init_21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_objectIR & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedSyncInstance extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedSyncInstance class_func_new (const class GGS_lstring & inOperand0,
                                                                 const class GGS_objectIR & inOperand1,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedSyncInstance & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedSyncInstance class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedSyncInstance : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedSyncInstance_init_21__21_ (const class GGS_lstring & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mSyncInstanceName ;
  public: GGS_objectIR mProperty_mExpressionGeneratedCode ;


//--- Default constructor
  public: cPtr_decoratedSyncInstance (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedSyncInstance (const GGS_lstring & in_mSyncInstanceName,
                                      const GGS_objectIR & in_mExpressionGeneratedCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedSyncInstance_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedSyncInstance_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedSyncInstance_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedSyncInstance_2E_weak (const class GGS_decoratedSyncInstance & inSource) ;

  public: GGS_decoratedSyncInstance_2E_weak & operator = (const class GGS_decoratedSyncInstance & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedSyncInstance_2E_weak init_nil (void) {
    GGS_decoratedSyncInstance_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedSyncInstance bang_decoratedSyncInstance_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedSyncInstance unwrappedValue (void) const ;

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
  public: static GGS_decoratedSyncInstance_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedSyncInstance_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedSyncInstance_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedSyncInstance_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @globalSyncInstanceMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_objectIR mProperty_mInitialValue ;
  public: inline GGS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialValue (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (const GGS_lstring & in_lkey,
                                                  const GGS_objectIR & in_mInitialValue) ;

//--------------------------------- Copy constructor
  public: GGS_globalSyncInstanceMapIR_2E_element (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_globalSyncInstanceMapIR_2E_element & operator = (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_globalSyncInstanceMapIR_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_globalSyncInstanceMapIR_2E_element extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_globalSyncInstanceMapIR_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_objectIR & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: globalSyncInstanceMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_globalSyncInstanceMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_globalSyncInstanceMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_globalSyncInstanceMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_globalSyncInstanceMapIR_2E_element_3F_ (const GGS_globalSyncInstanceMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_globalSyncInstanceMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_globalSyncInstanceMapIR_2E_element unwrappedValue (void) const {
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
  public: static GGS_globalSyncInstanceMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverInstanciationArgumentListAST_2E_element (const GGS_lstring & in_mSelector,
                                                             const GGS_expressionAST & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_driverInstanciationArgumentListAST_2E_element (const GGS_driverInstanciationArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverInstanciationArgumentListAST_2E_element & operator = (const GGS_driverInstanciationArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                 const class GGS_expressionAST & inOperand1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationArgumentListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_expressionAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implementedDriverAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_implementedDriverAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_implementedDriverAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_implementedDriverAST (const class cPtr_implementedDriverAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mDriverDependanceList (void) const ;
  public: void setProperty_mDriverDependanceList (const GGS_lstringlist & inValue) ;

  public: class GGS_bool readProperty_mIsInstancied (void) const ;
  public: void setProperty_mIsInstancied (const GGS_bool & inValue) ;

  public: class GGS_location readProperty_mBootLocation (void) const ;
  public: void setProperty_mBootLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListAST readProperty_mBootInstructionList (void) const ;
  public: void setProperty_mBootInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mBootEndLocation (void) const ;
  public: void setProperty_mBootEndLocation (const GGS_location & inValue) ;

  public: class GGS_location readProperty_mStartupLocation (void) const ;
  public: void setProperty_mStartupLocation (const GGS_location & inValue) ;

  public: class GGS_instructionListAST readProperty_mStartupInstructionList (void) const ;
  public: void setProperty_mStartupInstructionList (const GGS_instructionListAST & inValue) ;

  public: class GGS_location readProperty_mStartupEndLocation (void) const ;
  public: void setProperty_mStartupEndLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implementedDriverAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
                                                                                    const class GGS_bool & inOperand2,
                                                                                    const class GGS_location & inOperand3,
                                                                                    const class GGS_instructionListAST & inOperand4,
                                                                                    const class GGS_location & inOperand5,
                                                                                    const class GGS_location & inOperand6,
                                                                                    const class GGS_instructionListAST & inOperand7,
                                                                                    const class GGS_location & inOperand8,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implementedDriverAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implementedDriverAST class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_lstringlist & inOperand1,
                                                                const class GGS_bool & inOperand2,
                                                                const class GGS_location & inOperand3,
                                                                const class GGS_instructionListAST & inOperand4,
                                                                const class GGS_location & inOperand5,
                                                                const class GGS_location & inOperand6,
                                                                const class GGS_instructionListAST & inOperand7,
                                                                const class GGS_location & inOperand8,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_implementedDriverAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @implementedDriverAST class
//--------------------------------------------------------------------------------------------------

class cPtr_implementedDriverAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void implementedDriverAST_init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1,
                                                                              const class GGS_bool & inOperand2,
                                                                              const class GGS_location & inOperand3,
                                                                              const class GGS_instructionListAST & inOperand4,
                                                                              const class GGS_location & inOperand5,
                                                                              const class GGS_location & inOperand6,
                                                                              const class GGS_instructionListAST & inOperand7,
                                                                              const class GGS_location & inOperand8,
                                                                              Compiler * inCompiler) ;


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
  public: GGS_lstring mProperty_mDriverName ;
  public: GGS_lstringlist mProperty_mDriverDependanceList ;
  public: GGS_bool mProperty_mIsInstancied ;
  public: GGS_location mProperty_mBootLocation ;
  public: GGS_instructionListAST mProperty_mBootInstructionList ;
  public: GGS_location mProperty_mBootEndLocation ;
  public: GGS_location mProperty_mStartupLocation ;
  public: GGS_instructionListAST mProperty_mStartupInstructionList ;
  public: GGS_location mProperty_mStartupEndLocation ;


//--- Default constructor
  public: cPtr_implementedDriverAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_implementedDriverAST (const GGS_lstring & in_mDriverName,
                                     const GGS_lstringlist & in_mDriverDependanceList,
                                     const GGS_bool & in_mIsInstancied,
                                     const GGS_location & in_mBootLocation,
                                     const GGS_instructionListAST & in_mBootInstructionList,
                                     const GGS_location & in_mBootEndLocation,
                                     const GGS_location & in_mStartupLocation,
                                     const GGS_instructionListAST & in_mStartupInstructionList,
                                     const GGS_location & in_mStartupEndLocation,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implementedDriverAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_implementedDriverAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_implementedDriverAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_implementedDriverAST_2E_weak (const class GGS_implementedDriverAST & inSource) ;

  public: GGS_implementedDriverAST_2E_weak & operator = (const class GGS_implementedDriverAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_implementedDriverAST_2E_weak init_nil (void) {
    GGS_implementedDriverAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_implementedDriverAST bang_implementedDriverAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_implementedDriverAST unwrappedValue (void) const ;

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
  public: static GGS_implementedDriverAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implementedDriverAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_implementedDriverAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implementedDriverAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_driverInstanciationArgumentMap final {

  public: DownEnumerator_driverInstanciationArgumentMap (const class GGS_driverInstanciationArgumentMap & inMap) ;

  public: ~ DownEnumerator_driverInstanciationArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_driverInstanciationArgumentMap (const DownEnumerator_driverInstanciationArgumentMap &) = delete ;
  private: DownEnumerator_driverInstanciationArgumentMap & operator = (const DownEnumerator_driverInstanciationArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_driverInstanciationArgumentMap final {
  public: UpEnumerator_driverInstanciationArgumentMap (const class GGS_driverInstanciationArgumentMap & inMap)  ;

  public: ~ UpEnumerator_driverInstanciationArgumentMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
  public: class GGS_driverInstanciationArgumentMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_driverInstanciationArgumentMap (const UpEnumerator_driverInstanciationArgumentMap &) = delete ;
  private: UpEnumerator_driverInstanciationArgumentMap & operator = (const UpEnumerator_driverInstanciationArgumentMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_driverInstanciationArgumentMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_driverInstanciationArgumentMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_driverInstanciationArgumentMap (void) ;

//--- Handle copy
  public: GGS_driverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inSource) ;
  public: GGS_driverInstanciationArgumentMap & operator = (const GGS_driverInstanciationArgumentMap & inSource) ;

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
  protected: void performInsert (const class GGS_driverInstanciationArgumentMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_driverInstanciationArgumentMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentMap init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentMap extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationArgumentMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_driverInstanciationArgumentMap class_func_mapWithMapToOverride (const class GGS_driverInstanciationArgumentMap & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_expressionAST constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionForKey (class GGS_expressionAST constinArgument0,
                                                             class GGS_string constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_expressionAST & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_expressionAST getter_mExpressionForKey (const class GGS_string & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentMap getter_overriddenMap (Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverInstanciationArgumentMap ;
  friend class DownEnumerator_driverInstanciationArgumentMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_expressionAST mProperty_mExpression ;
  public: inline GGS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationArgumentMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExpression (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverInstanciationArgumentMap_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_expressionAST & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_driverInstanciationArgumentMap_2E_element (const GGS_driverInstanciationArgumentMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverInstanciationArgumentMap_2E_element & operator = (const GGS_driverInstanciationArgumentMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_expressionAST & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentMap_2E_element extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationArgumentMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_expressionAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: driverInstanciationArgumentMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_driverInstanciationArgumentMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationArgumentMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_driverInstanciationArgumentMap_2E_element_3F_ (const GGS_driverInstanciationArgumentMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_driverInstanciationArgumentMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_driverInstanciationArgumentMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_driverInstanciationArgumentMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instanciedDriverMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_instanciedDriverMap final {

  public: DownEnumerator_instanciedDriverMap (const class GGS_instanciedDriverMap & inMap) ;

  public: ~ DownEnumerator_instanciedDriverMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentMap current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const ;

  public: class GGS_instanciedDriverMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instanciedDriverMap (const DownEnumerator_instanciedDriverMap &) = delete ;
  private: DownEnumerator_instanciedDriverMap & operator = (const DownEnumerator_instanciedDriverMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instanciedDriverMap final {
  public: UpEnumerator_instanciedDriverMap (const class GGS_instanciedDriverMap & inMap)  ;

  public: ~ UpEnumerator_instanciedDriverMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_driverInstanciationArgumentMap current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const ;
  public: class GGS_instanciedDriverMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instanciedDriverMap (const UpEnumerator_instanciedDriverMap &) = delete ;
  private: UpEnumerator_instanciedDriverMap & operator = (const UpEnumerator_instanciedDriverMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_instanciedDriverMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_instanciedDriverMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_instanciedDriverMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_instanciedDriverMap (void) ;

//--- Handle copy
  public: GGS_instanciedDriverMap (const GGS_instanciedDriverMap & inSource) ;
  public: GGS_instanciedDriverMap & operator = (const GGS_instanciedDriverMap & inSource) ;

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
  protected: void performInsert (const class GGS_instanciedDriverMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_instanciedDriverMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanciedDriverMap init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanciedDriverMap extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instanciedDriverMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_instanciedDriverMap class_func_mapWithMapToOverride (const class GGS_instanciedDriverMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_driverInstanciationArgumentMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverInstanciationArgumentMapForKey (class GGS_driverInstanciationArgumentMap constinArgument0,
                                                                                 class GGS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_driverInstanciationArgumentMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_hasKeyAtLevel (const class GGS_string & constinOperand0,
                                                                const class GGS_uint & constinOperand1
                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_keyList (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_stringset getter_keySet (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_levels (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_locationForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentMap getter_mDriverInstanciationArgumentMapForKey (const class GGS_string & constinOperand0,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instanciedDriverMap getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_instanciedDriverMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instanciedDriverMap ;
  friend class DownEnumerator_instanciedDriverMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instanciedDriverMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_instanciedDriverMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_driverInstanciationArgumentMap mProperty_mDriverInstanciationArgumentMap ;
  public: inline GGS_driverInstanciationArgumentMap readProperty_mDriverInstanciationArgumentMap (void) const {
    return mProperty_mDriverInstanciationArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instanciedDriverMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentMap (const GGS_driverInstanciationArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instanciedDriverMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap) ;

//--------------------------------- Copy constructor
  public: GGS_instanciedDriverMap_2E_element (const GGS_instanciedDriverMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instanciedDriverMap_2E_element & operator = (const GGS_instanciedDriverMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instanciedDriverMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_driverInstanciationArgumentMap & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instanciedDriverMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instanciedDriverMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_driverInstanciationArgumentMap & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: instanciedDriverMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_instanciedDriverMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_instanciedDriverMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_instanciedDriverMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_instanciedDriverMap_2E_element_3F_ (const GGS_instanciedDriverMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_instanciedDriverMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_instanciedDriverMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_instanciedDriverMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedRequiredDriver reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedRequiredDriver : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedRequiredDriver (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedRequiredDriver (const class cPtr_decoratedRequiredDriver * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedRequiredDriver init_21_ (const class GGS_lstring & inOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedRequiredDriver extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedRequiredDriver class_func_new (const class GGS_lstring & inOperand0,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedRequiredDriver & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedRequiredDriver class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedRequiredDriver : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedRequiredDriver_init_21_ (const class GGS_lstring & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mDriverName ;


//--- Default constructor
  public: cPtr_decoratedRequiredDriver (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedRequiredDriver (const GGS_lstring & in_mDriverName,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedRequiredDriver_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedRequiredDriver_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedRequiredDriver_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedRequiredDriver_2E_weak (const class GGS_decoratedRequiredDriver & inSource) ;

  public: GGS_decoratedRequiredDriver_2E_weak & operator = (const class GGS_decoratedRequiredDriver & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedRequiredDriver_2E_weak init_nil (void) {
    GGS_decoratedRequiredDriver_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedRequiredDriver bang_decoratedRequiredDriver_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedRequiredDriver unwrappedValue (void) const ;

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
  public: static GGS_decoratedRequiredDriver_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedRequiredDriver_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedRequiredDriver_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDriverName ;
  public: inline GGS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GGS_omnibusType mProperty_mType ;
  public: inline GGS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GGS_operandIRList mProperty_mInitialValueList ;
  public: inline GGS_operandIRList readProperty_mInitialValueList (void) const {
    return mProperty_mInitialValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMInitialValueList (const GGS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValueList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverListIR_2E_element (const GGS_lstring & in_mDriverName,
                                       const GGS_omnibusType & in_mType,
                                       const GGS_operandIRList & in_mInitialValueList) ;

//--------------------------------- Copy constructor
  public: GGS_driverListIR_2E_element (const GGS_driverListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverListIR_2E_element & operator = (const GGS_driverListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverListIR_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_omnibusType & inOperand1,
                                                               const class GGS_operandIRList & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverListIR_2E_element extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverListIR_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                   const class GGS_omnibusType & inOperand1,
                                                                   const class GGS_operandIRList & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const class GGS_driverListIR inObject,
                                             class GGS_string & io_ioLLVMcode,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmAttributeFunction (class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmBootRoutineNameFromDriver (const class GGS_lstring & constinArgument0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForGlobalVariable (const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmStartupRoutineNameFromDriver (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmTitleComment (const class GGS_string & constinArgument0,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListPropertyTypeAST_2E_function struct
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyTypeAST_2E_function : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mode mProperty_mode ;
  public: inline GGS_mode readProperty_mode (void) const {
    return mProperty_mode ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_formalArgs ;
  public: inline GGS_routineFormalArgumentListAST readProperty_formalArgs (void) const {
    return mProperty_formalArgs ;
  }

  public: GGS_lstring mProperty_returnType ;
  public: inline GGS_lstring readProperty_returnType (void) const {
    return mProperty_returnType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListPropertyTypeAST_2E_function (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mode = inValue ;
  }

  public: inline void setter_setFormalArgs (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_formalArgs = inValue ;
  }

  public: inline void setter_setReturnType (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_returnType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListPropertyTypeAST_2E_function (const GGS_mode & in_mode,
                                                     const GGS_routineFormalArgumentListAST & in_formalArgs,
                                                     const GGS_lstring & in_returnType) ;

//--------------------------------- Copy constructor
  public: GGS_staticListPropertyTypeAST_2E_function (const GGS_staticListPropertyTypeAST_2E_function & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticListPropertyTypeAST_2E_function & operator = (const GGS_staticListPropertyTypeAST_2E_function & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListPropertyTypeAST_2E_function init_21__21__21_ (const class GGS_mode & inOperand0,
                                                                             const class GGS_routineFormalArgumentListAST & inOperand1,
                                                                             const class GGS_lstring & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListPropertyTypeAST_2E_function extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListPropertyTypeAST_2E_function class_func_new (const class GGS_mode & inOperand0,
                                                                                 const class GGS_routineFormalArgumentListAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_function ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticListPropertyTypeAST.function? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyTypeAST_2E_function_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticListPropertyTypeAST_2E_function mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticListPropertyTypeAST_2E_function_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticListPropertyTypeAST_2E_function_3F_ (const GGS_staticListPropertyTypeAST_2E_function & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticListPropertyTypeAST_2E_function_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticListPropertyTypeAST_2E_function unwrappedValue (void) const {
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
  public: static GGS_staticListPropertyTypeAST_2E_function_3F_ extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_function_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListPropertyTypeAST_2E_valueType struct
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyTypeAST_2E_valueType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_type ;
  public: inline GGS_lstring readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListPropertyTypeAST_2E_valueType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListPropertyTypeAST_2E_valueType (const GGS_lstring & in_type) ;

//--------------------------------- Copy constructor
  public: GGS_staticListPropertyTypeAST_2E_valueType (const GGS_staticListPropertyTypeAST_2E_valueType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticListPropertyTypeAST_2E_valueType & operator = (const GGS_staticListPropertyTypeAST_2E_valueType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListPropertyTypeAST_2E_valueType init_21_ (const class GGS_lstring & inOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListPropertyTypeAST_2E_valueType extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListPropertyTypeAST_2E_valueType class_func_new (const class GGS_lstring & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_valueType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticListPropertyTypeAST.valueType? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyTypeAST_2E_valueType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticListPropertyTypeAST_2E_valueType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticListPropertyTypeAST_2E_valueType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticListPropertyTypeAST_2E_valueType_3F_ (const GGS_staticListPropertyTypeAST_2E_valueType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticListPropertyTypeAST_2E_valueType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticListPropertyTypeAST_2E_valueType unwrappedValue (void) const {
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
  public: static GGS_staticListPropertyTypeAST_2E_valueType_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyTypeAST_2E_valueType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListPropertyListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticListPropertyListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mPropertyName ;
  public: inline GGS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GGS_staticListPropertyTypeAST mProperty_mPropertyType ;
  public: inline GGS_staticListPropertyTypeAST readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListPropertyListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMPropertyType (const GGS_staticListPropertyTypeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListPropertyListAST_2E_element (const GGS_lstring & in_mPropertyName,
                                                    const GGS_staticListPropertyTypeAST & in_mPropertyType) ;

//--------------------------------- Copy constructor
  public: GGS_staticListPropertyListAST_2E_element (const GGS_staticListPropertyListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticListPropertyListAST_2E_element & operator = (const GGS_staticListPropertyListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListPropertyListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_staticListPropertyTypeAST & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListPropertyListAST_2E_element extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListPropertyListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                const class GGS_staticListPropertyTypeAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListPropertyListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListValueListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticListValueListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_extendStaticListElementAST mProperty_mElement ;
  public: inline GGS_extendStaticListElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

  public: GGS_location mProperty_mLocation ;
  public: inline GGS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListValueListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_extendStaticListElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

  public: inline void setter_setMLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListValueListAST_2E_element (const GGS_extendStaticListElementAST & in_mElement,
                                                 const GGS_location & in_mLocation) ;

//--------------------------------- Copy constructor
  public: GGS_staticListValueListAST_2E_element (const GGS_staticListValueListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticListValueListAST_2E_element & operator = (const GGS_staticListValueListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListValueListAST_2E_element init_21__21_ (const class GGS_extendStaticListElementAST & inOperand0,
                                                                     const class GGS_location & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListValueListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListValueListAST_2E_element class_func_new (const class GGS_extendStaticListElementAST & inOperand0,
                                                                             const class GGS_location & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListValueListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_staticListAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_staticListAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_staticListAST_2E_weak (const class GGS_staticListAST & inSource) ;

  public: GGS_staticListAST_2E_weak & operator = (const class GGS_staticListAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_staticListAST_2E_weak init_nil (void) {
    GGS_staticListAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_staticListAST bang_staticListAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_staticListAST unwrappedValue (void) const ;

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
  public: static GGS_staticListAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticListElementAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListElementAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_extendStaticListExpressionAST mProperty_mExpression ;
  public: inline GGS_extendStaticListExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GGS_location mProperty_mEndOfExpression ;
  public: inline GGS_location readProperty_mEndOfExpression (void) const {
    return mProperty_mEndOfExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListElementAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GGS_extendStaticListExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpression (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpression = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticListElementAST_2E_element (const GGS_extendStaticListExpressionAST & in_mExpression,
                                                     const GGS_location & in_mEndOfExpression) ;

//--------------------------------- Copy constructor
  public: GGS_extendStaticListElementAST_2E_element (const GGS_extendStaticListElementAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extendStaticListElementAST_2E_element & operator = (const GGS_extendStaticListElementAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListElementAST_2E_element init_21__21_ (const class GGS_extendStaticListExpressionAST & inOperand0,
                                                                         const class GGS_location & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListElementAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListElementAST_2E_element class_func_new (const class GGS_extendStaticListExpressionAST & inOperand0,
                                                                                 const class GGS_location & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListElementAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticListExpressionAST_2E_expression struct
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_expression : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_expressionAST mProperty_exp ;
  public: inline GGS_expressionAST readProperty_exp (void) const {
    return mProperty_exp ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_expression (void) ;

//--------------------------------- Property setters
  public: inline void setter_setExp (const GGS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_exp = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticListExpressionAST_2E_expression (const GGS_expressionAST & in_exp) ;

//--------------------------------- Copy constructor
  public: GGS_extendStaticListExpressionAST_2E_expression (const GGS_extendStaticListExpressionAST_2E_expression & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extendStaticListExpressionAST_2E_expression & operator = (const GGS_extendStaticListExpressionAST_2E_expression & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListExpressionAST_2E_expression init_21_ (const class GGS_expressionAST & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListExpressionAST_2E_expression extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListExpressionAST_2E_expression class_func_new (const class GGS_expressionAST & inOperand0,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extendStaticListExpressionAST.expression? optional
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_expression_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extendStaticListExpressionAST_2E_expression mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_expression_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extendStaticListExpressionAST_2E_expression_3F_ (const GGS_extendStaticListExpressionAST_2E_expression & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extendStaticListExpressionAST_2E_expression_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extendStaticListExpressionAST_2E_expression unwrappedValue (void) const {
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
  public: static GGS_extendStaticListExpressionAST_2E_expression_3F_ extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_expression_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticListExpressionAST_2E_function struct
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_function : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_functionName ;
  public: inline GGS_lstring readProperty_functionName (void) const {
    return mProperty_functionName ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_formalArgs ;
  public: inline GGS_routineFormalArgumentListAST readProperty_formalArgs (void) const {
    return mProperty_formalArgs ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_function (void) ;

//--------------------------------- Property setters
  public: inline void setter_setFunctionName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_functionName = inValue ;
  }

  public: inline void setter_setFormalArgs (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_formalArgs = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticListExpressionAST_2E_function (const GGS_lstring & in_functionName,
                                                         const GGS_routineFormalArgumentListAST & in_formalArgs) ;

//--------------------------------- Copy constructor
  public: GGS_extendStaticListExpressionAST_2E_function (const GGS_extendStaticListExpressionAST_2E_function & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extendStaticListExpressionAST_2E_function & operator = (const GGS_extendStaticListExpressionAST_2E_function & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticListExpressionAST_2E_function init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_routineFormalArgumentListAST & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticListExpressionAST_2E_function extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_extendStaticListExpressionAST_2E_function class_func_new (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_routineFormalArgumentListAST & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extendStaticListExpressionAST.function? optional
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticListExpressionAST_2E_function_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extendStaticListExpressionAST_2E_function mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extendStaticListExpressionAST_2E_function_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extendStaticListExpressionAST_2E_function_3F_ (const GGS_extendStaticListExpressionAST_2E_function & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extendStaticListExpressionAST_2E_function_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extendStaticListExpressionAST_2E_function unwrappedValue (void) const {
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
  public: static GGS_extendStaticListExpressionAST_2E_function_3F_ extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListInitializationMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticListInitializationMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_stringlist mProperty_mInitializationList ;
  public: inline GGS_stringlist readProperty_mInitializationList (void) const {
    return mProperty_mInitializationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticListInitializationMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitializationList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitializationList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticListInitializationMap_2E_element (const GGS_lstring & in_lkey,
                                                      const GGS_stringlist & in_mInitializationList) ;

//--------------------------------- Copy constructor
  public: GGS_staticListInitializationMap_2E_element (const GGS_staticListInitializationMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticListInitializationMap_2E_element & operator = (const GGS_staticListInitializationMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListInitializationMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_stringlist & inOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListInitializationMap_2E_element extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListInitializationMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                  const class GGS_stringlist & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticListInitializationMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticListInitializationMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticListInitializationMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticListInitializationMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticListInitializationMap_2E_element_3F_ (const GGS_staticListInitializationMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticListInitializationMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticListInitializationMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_staticListInitializationMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedStaticList reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedStaticList : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedStaticList (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedStaticList (const class cPtr_decoratedStaticList * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mStaticListName (void) const ;
  public: void setProperty_mStaticListName (const GGS_lstring & inValue) ;

  public: class GGS_staticListValueListAST readProperty_mValueList (void) const ;
  public: void setProperty_mValueList (const GGS_staticListValueListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedStaticList init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_staticListValueListAST & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedStaticList extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedStaticList class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_staticListValueListAST & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedStaticList & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedStaticList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedStaticList class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedStaticList : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedStaticList_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_staticListValueListAST & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mStaticListName ;
  public: GGS_staticListValueListAST mProperty_mValueList ;


//--- Default constructor
  public: cPtr_decoratedStaticList (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedStaticList (const GGS_lstring & in_mStaticListName,
                                    const GGS_staticListValueListAST & in_mValueList,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedStaticList_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedStaticList_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedStaticList_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedStaticList_2E_weak (const class GGS_decoratedStaticList & inSource) ;

  public: GGS_decoratedStaticList_2E_weak & operator = (const class GGS_decoratedStaticList & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedStaticList_2E_weak init_nil (void) {
    GGS_decoratedStaticList_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedStaticList bang_decoratedStaticList_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedStaticList unwrappedValue (void) const ;

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
  public: static GGS_decoratedStaticList_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedStaticList_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedStaticList_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const class GGS_staticListInitializationMap inObject,
                                                 const class GGS_staticListInvokedFunctionSetMap constin_inUsefulStaticArrayMap,
                                                 class GGS_string & io_ioLLVMcode,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmNameForStaticListElementType (const class GGS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineTypedSignature_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineTypedSignature_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;
  public: inline GGS_procFormalArgumentPassingMode readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mTypeProxy ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GGS_lstring mProperty_mFormalArgumentName ;
  public: inline GGS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineTypedSignature_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GGS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMTypeProxy (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineTypedSignature_2E_element (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                const GGS_lstring & in_mSelector,
                                                const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                const GGS_lstring & in_mFormalArgumentName) ;

//--------------------------------- Copy constructor
  public: GGS_routineTypedSignature_2E_element (const GGS_routineTypedSignature_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineTypedSignature_2E_element & operator = (const GGS_routineTypedSignature_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineTypedSignature_2E_element init_21__21__21__21_ (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_lstring & inOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineTypedSignature_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineTypedSignature_2E_element class_func_new (const class GGS_procFormalArgumentPassingMode & inOperand0,
                                                                            const class GGS_lstring & inOperand1,
                                                                            const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const class GGS_lstring & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_routineTypedSignature_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineTypedSignature_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListIndirectRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_staticListIndirectRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_staticListIndirectRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_staticListIndirectRoutineIR (const class cPtr_staticListIndirectRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mStaticListElementType (void) const ;
  public: void setProperty_mStaticListElementType (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_routineTypedSignature readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineTypedSignature & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const ;
  public: void setProperty_mReturnTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_uint readProperty_mPropertyIndex (void) const ;
  public: void setProperty_mPropertyIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListIndirectRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                          const class GGS_bool & inOperand1,
                                                                                                          const class GGS_bool & inOperand2,
                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                          const class GGS_routineTypedSignature & inOperand4,
                                                                                                          const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                          const class GGS_uint & inOperand6,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListIndirectRoutineIR extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListIndirectRoutineIR class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_bool & inOperand1,
                                                                       const class GGS_bool & inOperand2,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                       const class GGS_routineTypedSignature & inOperand4,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                       const class GGS_uint & inOperand6,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListIndirectRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @staticListIndirectRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_staticListIndirectRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                    const class GGS_bool & inOperand1,
                                                                                                    const class GGS_bool & inOperand2,
                                                                                                    const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                    const class GGS_routineTypedSignature & inOperand4,
                                                                                                    const class GGS_unifiedTypeMapEntry & inOperand5,
                                                                                                    const class GGS_uint & inOperand6,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mStaticListElementType ;
  public: GGS_routineTypedSignature mProperty_mFormalArgumentListForGeneration ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: GGS_uint mProperty_mPropertyIndex ;


//--- Default constructor
  public: cPtr_staticListIndirectRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticListIndirectRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused,
                                            const GGS_unifiedTypeMapEntry & in_mStaticListElementType,
                                            const GGS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                            const GGS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                            const GGS_uint & in_mPropertyIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListIndirectRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_staticListIndirectRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_staticListIndirectRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_staticListIndirectRoutineIR_2E_weak (const class GGS_staticListIndirectRoutineIR & inSource) ;

  public: GGS_staticListIndirectRoutineIR_2E_weak & operator = (const class GGS_staticListIndirectRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_staticListIndirectRoutineIR_2E_weak init_nil (void) {
    GGS_staticListIndirectRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_staticListIndirectRoutineIR bang_staticListIndirectRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_staticListIndirectRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_staticListIndirectRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListIndirectRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListIndirectRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSetupListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_lstringlist mProperty_mDependanceList ;
  public: inline GGS_lstringlist readProperty_mDependanceList (void) const {
    return mProperty_mDependanceList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskSetupListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMDependanceList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependanceList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskSetupListAST_2E_element (const GGS_lstring & in_mName,
                                           const GGS_lstringlist & in_mDependanceList) ;

//--------------------------------- Copy constructor
  public: GGS_taskSetupListAST_2E_element (const GGS_taskSetupListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskSetupListAST_2E_element & operator = (const GGS_taskSetupListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSetupListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_lstringlist & inOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSetupListAST_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSetupListAST_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lstringlist & inOperand1,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_guardedCommandAST mProperty_mGuardedCommand ;
  public: inline GGS_guardedCommandAST readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

  public: GGS_instructionListAST mProperty_mInstructionList ;
  public: inline GGS_instructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GGS_location mProperty_mEndOfBranch ;
  public: inline GGS_location readProperty_mEndOfBranch (void) const {
    return mProperty_mEndOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_syncInstructionBranchListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GGS_guardedCommandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

  public: inline void setter_setMInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_syncInstructionBranchListAST_2E_element (const GGS_guardedCommandAST & in_mGuardedCommand,
                                                       const GGS_instructionListAST & in_mInstructionList,
                                                       const GGS_location & in_mEndOfBranch) ;

//--------------------------------- Copy constructor
  public: GGS_syncInstructionBranchListAST_2E_element (const GGS_syncInstructionBranchListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_syncInstructionBranchListAST_2E_element & operator = (const GGS_syncInstructionBranchListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListAST_2E_element init_21__21__21_ (const class GGS_guardedCommandAST & inOperand0,
                                                                               const class GGS_instructionListAST & inOperand1,
                                                                               const class GGS_location & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListAST_2E_element extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionBranchListAST_2E_element class_func_new (const class GGS_guardedCommandAST & inOperand0,
                                                                                   const class GGS_instructionListAST & inOperand1,
                                                                                   const class GGS_location & inOperand2,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GGS_taskListAST inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GGS_instructionListAST inObject,
                                                                class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const class GGS_taskListAST inObject,
                                     class GGS_semanticContext & io_ioContext,
                                     class GGS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                     class GGS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                     class GGS_routineListIR & io_ioRoutineListIR,
                                     class GGS_staticEntityMap & io_ioStaticEntityMap,
                                     class GGS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineAttributes boolset
//--------------------------------------------------------------------------------------------------

class GGS_routineAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GGS_routineAttributes (void) ;

//--------------------------------- Private constructor
  private: GGS_routineAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineAttributes init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineAttributes extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_routineAttributes class_func_isGuard (LOCATION_ARGS) ;

  public: static class GGS_routineAttributes class_func_mutatingRoutine (LOCATION_ARGS) ;

//--------------------------------- &= operator (with expression)
  public: VIRTUAL_IN_DEBUG void andAssignOperation (const GGS_routineAttributes inOperand,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- |= operator (with expression)
  public: VIRTUAL_IN_DEBUG void orAssignOperation (const GGS_routineAttributes inOperand,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ^= operator (with expression)
  public: VIRTUAL_IN_DEBUG void xorAssignOperation (const GGS_routineAttributes inOperand,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- -= operator (with expression)
  public: VIRTUAL_IN_DEBUG void minusAssignOperation (const GGS_routineAttributes inOperand,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_and (const GGS_routineAttributes & inOperand
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_or (const GGS_routineAttributes & inOperand
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_xor (const GGS_routineAttributes & inOperand
                                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GGS_routineAttributes substract_operation (const GGS_routineAttributes & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_contains (const class GGS_routineAttributes & constinOperand0
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineAttributes ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskListDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedTaskListDeclaration (const class cPtr_decoratedTaskListDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_decoratedTaskList readProperty_mTaskList (void) const ;
  public: void setProperty_mTaskList (const GGS_decoratedTaskList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskListDeclaration init_21_ (const class GGS_decoratedTaskList & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskListDeclaration extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskListDeclaration class_func_new (const class GGS_decoratedTaskList & inOperand0,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_decoratedTaskList final {
  public: DownEnumerator_decoratedTaskList (const class GGS_decoratedTaskList & inList) ;

  public: ~ DownEnumerator_decoratedTaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedTaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_decoratedTaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_decoratedTaskList (const DownEnumerator_decoratedTaskList &) = delete ;
  private: DownEnumerator_decoratedTaskList & operator = (const DownEnumerator_decoratedTaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_decoratedTaskList final {
  public: UpEnumerator_decoratedTaskList (const class GGS_decoratedTaskList & inList)  ;

  public: ~ UpEnumerator_decoratedTaskList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_decoratedTaskList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_decoratedTaskList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_decoratedTaskList (const UpEnumerator_decoratedTaskList &) = delete ;
  private: UpEnumerator_decoratedTaskList & operator = (const UpEnumerator_decoratedTaskList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @decoratedTaskList list
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_decoratedTaskList_2E_element> mArray ;

//--- Default constructor
  public: GGS_decoratedTaskList (void) ;

//--- Destructor
  public: virtual ~ GGS_decoratedTaskList (void) = default ;

//--- Copy
  public: GGS_decoratedTaskList (const GGS_decoratedTaskList &) = default ;
  public: GGS_decoratedTaskList & operator = (const GGS_decoratedTaskList &) = default ;

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
  public : inline GenericArray <GGS_decoratedTaskList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_decoratedTaskList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_decoratedTaskList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTaskName,
                                                 const class GGS_lbigint & in_mStackSize,
                                                 const class GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const class GGS_location & in_mEndOfTaskDeclaration,
                                                 const class GGS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskList init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskList extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_decoratedTaskList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                       const class GGS_lbigint & inOperand1,
                                                                       const class GGS_taskSetupListAST & inOperand2,
                                                                       const class GGS_taskSetupListAST & inOperand3,
                                                                       const class GGS_taskSetupListAST & inOperand4,
                                                                       const class GGS_location & inOperand5,
                                                                       const class GGS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_decoratedTaskList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_lbigint & inOperand1,
                                                    const class GGS_taskSetupListAST & inOperand2,
                                                    const class GGS_taskSetupListAST & inOperand3,
                                                    const class GGS_taskSetupListAST & inOperand4,
                                                    const class GGS_location & inOperand5,
                                                    const class GGS_bool & inOperand6
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_decoratedTaskList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_decoratedTaskList add_operation (const GGS_decoratedTaskList & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lbigint constinArgument1,
                                               class GGS_taskSetupListAST constinArgument2,
                                               class GGS_taskSetupListAST constinArgument3,
                                               class GGS_taskSetupListAST constinArgument4,
                                               class GGS_location constinArgument5,
                                               class GGS_bool constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lbigint constinArgument1,
                                                      class GGS_taskSetupListAST constinArgument2,
                                                      class GGS_taskSetupListAST constinArgument3,
                                                      class GGS_taskSetupListAST constinArgument4,
                                                      class GGS_location constinArgument5,
                                                      class GGS_bool constinArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lbigint & outArgument1,
                                                 class GGS_taskSetupListAST & outArgument2,
                                                 class GGS_taskSetupListAST & outArgument3,
                                                 class GGS_taskSetupListAST & outArgument4,
                                                 class GGS_location & outArgument5,
                                                 class GGS_bool & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lbigint & outArgument1,
                                                class GGS_taskSetupListAST & outArgument2,
                                                class GGS_taskSetupListAST & outArgument3,
                                                class GGS_taskSetupListAST & outArgument4,
                                                class GGS_location & outArgument5,
                                                class GGS_bool & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lbigint & outArgument1,
                                                      class GGS_taskSetupListAST & outArgument2,
                                                      class GGS_taskSetupListAST & outArgument3,
                                                      class GGS_taskSetupListAST & outArgument4,
                                                      class GGS_location & outArgument5,
                                                      class GGS_bool & outArgument6,
                                                      class GGS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoStartAtIndex (class GGS_bool constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfTaskDeclarationAtIndex (class GGS_location constinArgument0,
                                                                        class GGS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStackSizeAtIndex (class GGS_lbigint constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskActivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskDeactivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskSetupListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                                    class GGS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lbigint & outArgument1,
                                              class GGS_taskSetupListAST & outArgument2,
                                              class GGS_taskSetupListAST & outArgument3,
                                              class GGS_taskSetupListAST & outArgument4,
                                              class GGS_location & outArgument5,
                                              class GGS_bool & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lbigint & outArgument1,
                                             class GGS_taskSetupListAST & outArgument2,
                                             class GGS_taskSetupListAST & outArgument3,
                                             class GGS_taskSetupListAST & outArgument4,
                                             class GGS_location & outArgument5,
                                             class GGS_bool & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mAutoStartAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_location getter_mEndOfTaskDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lbigint getter_mStackSizeAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskSetupListAST getter_mTaskActivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskSetupListAST getter_mTaskDeactivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mTaskNameAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedTaskList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedTaskList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_decoratedTaskList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_decoratedTaskList ;
  friend class DownEnumerator_decoratedTaskList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedTaskListDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedTaskListDeclaration_init_21_ (const class GGS_decoratedTaskList & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_decoratedTaskList mProperty_mTaskList ;


//--- Default constructor
  public: cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskActivateFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_taskActivateFunctionIR (const class cPtr_taskActivateFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mAssemblerTaskName (void) const ;
  public: void setProperty_mAssemblerTaskName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mActivateServiceInvocationName (void) const ;
  public: void setProperty_mActivateServiceInvocationName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mTaskIndex (void) const ;
  public: void setProperty_mTaskIndex (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskActivateFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                 const class GGS_bool & inOperand1,
                                                                                                 const class GGS_bool & inOperand2,
                                                                                                 const class GGS_string & inOperand3,
                                                                                                 const class GGS_string & inOperand4,
                                                                                                 const class GGS_uint & inOperand5,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskActivateFunctionIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskActivateFunctionIR class_func_new (const class GGS_lstring & inOperand0,
                                                                  const class GGS_bool & inOperand1,
                                                                  const class GGS_bool & inOperand2,
                                                                  const class GGS_string & inOperand3,
                                                                  const class GGS_string & inOperand4,
                                                                  const class GGS_uint & inOperand5,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskActivateFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @taskActivateFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_taskActivateFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_string & inOperand3,
                                                                                           const class GGS_string & inOperand4,
                                                                                           const class GGS_uint & inOperand5,
                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mAssemblerTaskName ;
  public: GGS_string mProperty_mActivateServiceInvocationName ;
  public: GGS_uint mProperty_mTaskIndex ;


//--- Default constructor
  public: cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_taskActivateFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                       const GGS_bool & in_isRequired,
                                       const GGS_bool & in_warnsIfUnused,
                                       const GGS_string & in_mAssemblerTaskName,
                                       const GGS_string & in_mActivateServiceInvocationName,
                                       const GGS_uint & in_mTaskIndex,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForActivateTask (class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForServiceCall (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_routineMangledNameFromAST (const class GGS_string & constinArgument0,
                                                      const class GGS_lstring & constinArgument1,
                                                      const class GGS_routineFormalArgumentListAST & constinArgument2,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

extern BoolCommandLineOption gOption_omnibus_5F_options_doNotDetectRecursiveCalls ;

extern BoolCommandLineOption gOption_omnibus_5F_options_noPanicGeneration ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitDeclarationDependencyGraphFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitRoutineInvocationGraphFile ;

extern BoolCommandLineOption gOption_omnibus_5F_options_emitTypeMap ;

extern BoolCommandLineOption gOption_omnibus_5F_options_taskStrictPriorityOrder ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationS ;

extern BoolCommandLineOption gOption_omnibus_5F_options_listEmbeddedSampleFiles ;

extern BoolCommandLineOption gOption_omnibus_5F_options_listTargets ;

extern BoolCommandLineOption gOption_omnibus_5F_options_noDeadCodeElimination ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimization_31_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimization_32_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_optimizationZ_33_ ;

extern BoolCommandLineOption gOption_omnibus_5F_options_printPasses ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

extern StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedSampleFile ;

extern StringCommandLineOption gOption_omnibus_5F_options_extractEmbeddedTargets ;

extern StringCommandLineOption gOption_omnibus_5F_options_useDirAsTargetDir ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

extern StringListCommandLineOption gOption_omnibus_5F_options_pathList ;

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithoutArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithoutArgument (class GGS_routineMapForContext & ioObject,
                                                 const class GGS_string constin_inOmnibusTypeDescriptionName,
                                                 const class GGS_string constin_inLLVMBaseTypeName,
                                                 const class GGS_lstring constin_inMethodName,
                                                 const class GGS_mode constin_inMode,
                                                 const class GGS_unifiedTypeMapEntry constin_inResultType,
                                                 class GGS_lstring & out_outRoutineLLVMName,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertTask'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (class GGS_universalValuedObjectMap & ioObject,
                                 const class GGS_lstring constin_inTaskName,
                                 const class GGS_omnibusType constin_inTaskType,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTaskName ;
  public: inline GGS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_lbigint mProperty_mStackSize ;
  public: inline GGS_lbigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskSetupListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskSetupListAST (void) const {
    return mProperty_mTaskSetupListAST ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskActivateListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskActivateListAST (void) const {
    return mProperty_mTaskActivateListAST ;
  }

  public: GGS_taskSetupListAST mProperty_mTaskDeactivateListAST ;
  public: inline GGS_taskSetupListAST readProperty_mTaskDeactivateListAST (void) const {
    return mProperty_mTaskDeactivateListAST ;
  }

  public: GGS_location mProperty_mEndOfTaskDeclaration ;
  public: inline GGS_location readProperty_mEndOfTaskDeclaration (void) const {
    return mProperty_mEndOfTaskDeclaration ;
  }

  public: GGS_bool mProperty_mAutoStart ;
  public: inline GGS_bool readProperty_mAutoStart (void) const {
    return mProperty_mAutoStart ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_decoratedTaskList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMTaskSetupListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskSetupListAST = inValue ;
  }

  public: inline void setter_setMTaskActivateListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskActivateListAST = inValue ;
  }

  public: inline void setter_setMTaskDeactivateListAST (const GGS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskDeactivateListAST = inValue ;
  }

  public: inline void setter_setMEndOfTaskDeclaration (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfTaskDeclaration = inValue ;
  }

  public: inline void setter_setMAutoStart (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoStart = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_decoratedTaskList_2E_element (const GGS_lstring & in_mTaskName,
                                            const GGS_lbigint & in_mStackSize,
                                            const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                            const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                            const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                            const GGS_location & in_mEndOfTaskDeclaration,
                                            const GGS_bool & in_mAutoStart) ;

//--------------------------------- Copy constructor
  public: GGS_decoratedTaskList_2E_element (const GGS_decoratedTaskList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_decoratedTaskList_2E_element & operator = (const GGS_decoratedTaskList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedTaskList_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lbigint & inOperand1,
                                                                                    const class GGS_taskSetupListAST & inOperand2,
                                                                                    const class GGS_taskSetupListAST & inOperand3,
                                                                                    const class GGS_taskSetupListAST & inOperand4,
                                                                                    const class GGS_location & inOperand5,
                                                                                    const class GGS_bool & inOperand6,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedTaskList_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lbigint & inOperand1,
                                                                        const class GGS_taskSetupListAST & inOperand2,
                                                                        const class GGS_taskSetupListAST & inOperand3,
                                                                        const class GGS_taskSetupListAST & inOperand4,
                                                                        const class GGS_location & inOperand5,
                                                                        const class GGS_bool & inOperand6,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedTaskListDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedTaskListDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedTaskListDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedTaskListDeclaration_2E_weak (const class GGS_decoratedTaskListDeclaration & inSource) ;

  public: GGS_decoratedTaskListDeclaration_2E_weak & operator = (const class GGS_decoratedTaskListDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedTaskListDeclaration_2E_weak init_nil (void) {
    GGS_decoratedTaskListDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedTaskListDeclaration bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedTaskListDeclaration unwrappedValue (void) const ;

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
  public: static GGS_decoratedTaskListDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedTaskListDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mTaskType ;
  public: inline GGS_omnibusType readProperty_mTaskType (void) const {
    return mProperty_mTaskType ;
  }

  public: GGS_uint mProperty_mPriority ;
  public: inline GGS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GGS_bigint mProperty_mStackSize ;
  public: inline GGS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: inline GGS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: inline GGS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GGS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: inline GGS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GGS_bool mProperty_mActivate ;
  public: inline GGS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTaskType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskType = inValue ;
  }

  public: inline void setter_setMPriority (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskMapIR_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_omnibusType & in_mTaskType,
                                    const GGS_uint & in_mPriority,
                                    const GGS_bigint & in_mStackSize,
                                    const GGS_stringlist & in_mSetupOrderedList,
                                    const GGS_stringlist & in_mActivateOrderedList,
                                    const GGS_stringlist & in_mDeactivateOrderedList,
                                    const GGS_uint & in_mTaskNameStringIndex,
                                    const GGS_bool & in_mActivate) ;

//--------------------------------- Copy constructor
  public: GGS_taskMapIR_2E_element (const GGS_taskMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskMapIR_2E_element & operator = (const GGS_taskMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskMapIR_2E_element init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskMapIR_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskMapIR_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_uint & inOperand2,
                                                                const class GGS_bigint & inOperand3,
                                                                const class GGS_stringlist & inOperand4,
                                                                const class GGS_stringlist & inOperand5,
                                                                const class GGS_stringlist & inOperand6,
                                                                const class GGS_uint & inOperand7,
                                                                const class GGS_bool & inOperand8,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: taskMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_taskMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_taskMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_taskMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_taskMapIR_2E_element_3F_ (const GGS_taskMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_taskMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_taskMapIR_2E_element unwrappedValue (void) const {
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
  public: static GGS_taskMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSortedListIR sorted list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_taskSortedListIR final {
//--- Constructor
  public: DownEnumerator_taskSortedListIR (const class GGS_taskSortedListIR & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }
  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mActivate (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_taskSortedListIR_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_taskSortedListIR_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_taskSortedListIR (const DownEnumerator_taskSortedListIR &) = delete ;
  private: DownEnumerator_taskSortedListIR & operator = (const DownEnumerator_taskSortedListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_taskSortedListIR final {
//--- Constructor
  public: UpEnumerator_taskSortedListIR (const class GGS_taskSortedListIR & inEnumeratedObject) ;

//--- Accessors
  public: inline bool hasCurrentObject (void) const { return mIndex < mElementArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }
  public: class GGS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GGS_bool current_mActivate (LOCATION_ARGS) const ;

//--- Current element access
  public: class GGS_taskSortedListIR_2E_element current (LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <GGS_taskSortedListIR_2E_element> mElementArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_taskSortedListIR (const UpEnumerator_taskSortedListIR &) = delete ;
  private: UpEnumerator_taskSortedListIR & operator = (const UpEnumerator_taskSortedListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSortedListIR sorted list
//--------------------------------------------------------------------------------------------------

class GGS_taskSortedListIR final : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_taskSortedListIR_2E_element> mSharedArray ;

//--- Default constructor
  public: GGS_taskSortedListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_taskSortedListIR (void) = default ;

//--- Handle copy
  public: GGS_taskSortedListIR (const GGS_taskSortedListIR &) = default ;
  public: GGS_taskSortedListIR & operator = (const GGS_taskSortedListIR &) = default ;

//--- Is valid
  public: inline bool isValid (void) const override { return mSharedArray.isAllocated () ; }

//--- Drop
  public: inline virtual void drop (void) override { mSharedArray.removeAll () ; }

//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Count
  public: inline int32_t count (void) const { return mSharedArray.count () ; }
 
//--- sortedElementArray
  public : inline GenericArray <GGS_taskSortedListIR_2E_element> sortedElementArray (void) const {
    return mSharedArray ;
  }

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSortedListIR init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSortedListIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSortedListIR class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GGS_taskSortedListIR class_func_sortedListWithValue (const class GGS_string & inOperand0,
                                                                            const class GGS_uint & inOperand1,
                                                                            const class GGS_bigint & inOperand2,
                                                                            const class GGS_stringlist & inOperand3,
                                                                            const class GGS_stringlist & inOperand4,
                                                                            const class GGS_stringlist & inOperand5,
                                                                            const class GGS_uint & inOperand6,
                                                                            const class GGS_bool & inOperand7
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_taskSortedListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_uint & inOperand1,
                                                    const class GGS_bigint & inOperand2,
                                                    const class GGS_stringlist & inOperand3,
                                                    const class GGS_stringlist & inOperand4,
                                                    const class GGS_stringlist & inOperand5,
                                                    const class GGS_uint & inOperand6,
                                                    const class GGS_bool & inOperand7
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_taskSortedListIR_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GGS_string inArgument0,
                                               class GGS_uint inArgument1,
                                               class GGS_bigint inArgument2,
                                               class GGS_stringlist inArgument3,
                                               class GGS_stringlist inArgument4,
                                               class GGS_stringlist inArgument5,
                                               class GGS_uint inArgument6,
                                               class GGS_bool inArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GGS_string & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_bigint & outArgument2,
                                                    class GGS_stringlist & outArgument3,
                                                    class GGS_stringlist & outArgument4,
                                                    class GGS_stringlist & outArgument5,
                                                    class GGS_uint & outArgument6,
                                                    class GGS_bool & outArgument7,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GGS_string & outArgument0,
                                                    class GGS_uint & outArgument1,
                                                    class GGS_bigint & outArgument2,
                                                    class GGS_stringlist & outArgument3,
                                                    class GGS_stringlist & outArgument4,
                                                    class GGS_stringlist & outArgument5,
                                                    class GGS_uint & outArgument6,
                                                    class GGS_bool & outArgument7,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_bigint & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_stringlist & outArgument5,
                                                 class GGS_uint & outArgument6,
                                                 class GGS_bool & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_bigint & outArgument2,
                                                 class GGS_stringlist & outArgument3,
                                                 class GGS_stringlist & outArgument4,
                                                 class GGS_stringlist & outArgument5,
                                                 class GGS_uint & outArgument6,
                                                 class GGS_bool & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_taskSortedListIR ;
  friend class DownEnumerator_taskSortedListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSortedListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskSortedListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mTaskName ;
  public: inline GGS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_uint mProperty_mPriority ;
  public: inline GGS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GGS_bigint mProperty_mStackSize ;
  public: inline GGS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GGS_stringlist mProperty_mSetupOrderedList ;
  public: inline GGS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GGS_stringlist mProperty_mActivateOrderedList ;
  public: inline GGS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GGS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GGS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GGS_uint mProperty_mTaskNameStringIndex ;
  public: inline GGS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GGS_bool mProperty_mActivate ;
  public: inline GGS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_taskSortedListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMPriority (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GGS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_taskSortedListIR_2E_element (const GGS_string & in_mTaskName,
                                           const GGS_uint & in_mPriority,
                                           const GGS_bigint & in_mStackSize,
                                           const GGS_stringlist & in_mSetupOrderedList,
                                           const GGS_stringlist & in_mActivateOrderedList,
                                           const GGS_stringlist & in_mDeactivateOrderedList,
                                           const GGS_uint & in_mTaskNameStringIndex,
                                           const GGS_bool & in_mActivate) ;

//--------------------------------- Copy constructor
  public: GGS_taskSortedListIR_2E_element (const GGS_taskSortedListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskSortedListIR_2E_element & operator = (const GGS_taskSortedListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSortedListIR_2E_element init_21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_uint & inOperand1,
                                                                                       const class GGS_bigint & inOperand2,
                                                                                       const class GGS_stringlist & inOperand3,
                                                                                       const class GGS_stringlist & inOperand4,
                                                                                       const class GGS_stringlist & inOperand5,
                                                                                       const class GGS_uint & inOperand6,
                                                                                       const class GGS_bool & inOperand7,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSortedListIR_2E_element extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSortedListIR_2E_element class_func_new (const class GGS_string & inOperand0,
                                                                       const class GGS_uint & inOperand1,
                                                                       const class GGS_bigint & inOperand2,
                                                                       const class GGS_stringlist & inOperand3,
                                                                       const class GGS_stringlist & inOperand4,
                                                                       const class GGS_stringlist & inOperand5,
                                                                       const class GGS_uint & inOperand6,
                                                                       const class GGS_bool & inOperand7,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const class GGS_taskMapIR inObject,
                                   class GGS_string & io_ioLLVMcode,
                                   const class GGS_generationContext constin_inGenerationContext,
                                   class GGS_generationAdds & io_ioGenerationAdds,
                                   class GGS_primitiveAndServiceIRlist & io_ioServiceList,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_activateNameForTaskType (const class GGS_string & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_deactivateNameForTaskType (const class GGS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_literalStringName (const class GGS_uint & constinArgument0,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForFunction (const class GGS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSelf (class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForServiceImplementation (const class GGS_string & constinArgument0,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmSeparatorLine (class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_mainRoutineNameForTask (const class GGS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_setupNameForTaskType (const class GGS_string & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_stackAddressForTask (const class GGS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_stackNameForTask (const class GGS_string & constinArgument0,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmValue' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmValue (const class GGS_objectIR & inObject,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primitiveAndServiceIRlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_primitiveAndServiceIRlist final {
  public: DownEnumerator_primitiveAndServiceIRlist (const class GGS_primitiveAndServiceIRlist & inList) ;

  public: ~ DownEnumerator_primitiveAndServiceIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasReturnValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primitiveAndServiceIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_primitiveAndServiceIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_primitiveAndServiceIRlist (const DownEnumerator_primitiveAndServiceIRlist &) = delete ;
  private: DownEnumerator_primitiveAndServiceIRlist & operator = (const DownEnumerator_primitiveAndServiceIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_primitiveAndServiceIRlist final {
  public: UpEnumerator_primitiveAndServiceIRlist (const class GGS_primitiveAndServiceIRlist & inList)  ;

  public: ~ UpEnumerator_primitiveAndServiceIRlist (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mCallName (LOCATION_ARGS) const ;
  public: class GGS_string current_mImplementationName (LOCATION_ARGS) const ;
  public: class GGS_bool current_mHasReturnValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primitiveAndServiceIRlist_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_primitiveAndServiceIRlist_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_primitiveAndServiceIRlist (const UpEnumerator_primitiveAndServiceIRlist &) = delete ;
  private: UpEnumerator_primitiveAndServiceIRlist & operator = (const UpEnumerator_primitiveAndServiceIRlist &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @primitiveAndServiceIRlist list
//--------------------------------------------------------------------------------------------------

class GGS_primitiveAndServiceIRlist : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_primitiveAndServiceIRlist_2E_element> mArray ;

//--- Default constructor
  public: GGS_primitiveAndServiceIRlist (void) ;

//--- Destructor
  public: virtual ~ GGS_primitiveAndServiceIRlist (void) = default ;

//--- Copy
  public: GGS_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist &) = default ;
  public: GGS_primitiveAndServiceIRlist & operator = (const GGS_primitiveAndServiceIRlist &) = default ;

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
  public : inline GenericArray <GGS_primitiveAndServiceIRlist_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_primitiveAndServiceIRlist subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mCallName,
                                                 const class GGS_string & in_mImplementationName,
                                                 const class GGS_bool & in_mHasReturnValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primitiveAndServiceIRlist init (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primitiveAndServiceIRlist extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primitiveAndServiceIRlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_primitiveAndServiceIRlist class_func_listWithValue (const class GGS_string & inOperand0,
                                                                               const class GGS_string & inOperand1,
                                                                               const class GGS_bool & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_primitiveAndServiceIRlist inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_string & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_primitiveAndServiceIRlist_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_primitiveAndServiceIRlist add_operation (const GGS_primitiveAndServiceIRlist & inOperand,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_string constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_string constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_string & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_string & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_string & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCallNameAtIndex (class GGS_string constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasReturnValueAtIndex (class GGS_bool constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementationNameAtIndex (class GGS_string constinArgument0,
                                                                      class GGS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_string & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_string & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mCallNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mHasReturnValueAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mImplementationNameAtIndex (const class GGS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_primitiveAndServiceIRlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_primitiveAndServiceIRlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_primitiveAndServiceIRlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_primitiveAndServiceIRlist ;
  friend class DownEnumerator_primitiveAndServiceIRlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generationAdds struct
//--------------------------------------------------------------------------------------------------

class GGS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_mUniqueIndex ;
  public: inline GGS_uint readProperty_mUniqueIndex (void) const {
    return mProperty_mUniqueIndex ;
  }

  public: GGS_stringset mProperty_mExternFunctionDeclarationSet ;
  public: inline GGS_stringset readProperty_mExternFunctionDeclarationSet (void) const {
    return mProperty_mExternFunctionDeclarationSet ;
  }

  public: GGS_staticEntityMap mProperty_mStaticEntityMap ;
  public: inline GGS_staticEntityMap readProperty_mStaticEntityMap (void) const {
    return mProperty_mStaticEntityMap ;
  }

  public: GGS_bool mProperty_mUsesGuards ;
  public: inline GGS_bool readProperty_mUsesGuards (void) const {
    return mProperty_mUsesGuards ;
  }

  public: GGS_bool mProperty_mNeedsDynamicMemoryAllocation ;
  public: inline GGS_bool readProperty_mNeedsDynamicMemoryAllocation (void) const {
    return mProperty_mNeedsDynamicMemoryAllocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationAdds (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUniqueIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUniqueIndex = inValue ;
  }

  public: inline void setter_setMExternFunctionDeclarationSet (const GGS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternFunctionDeclarationSet = inValue ;
  }

  public: inline void setter_setMStaticEntityMap (const GGS_staticEntityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticEntityMap = inValue ;
  }

  public: inline void setter_setMUsesGuards (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUsesGuards = inValue ;
  }

  public: inline void setter_setMNeedsDynamicMemoryAllocation (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsDynamicMemoryAllocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationAdds (const GGS_uint & in_mUniqueIndex,
                              const GGS_stringset & in_mExternFunctionDeclarationSet,
                              const GGS_staticEntityMap & in_mStaticEntityMap,
                              const GGS_bool & in_mUsesGuards,
                              const GGS_bool & in_mNeedsDynamicMemoryAllocation) ;

//--------------------------------- Copy constructor
  public: GGS_generationAdds (const GGS_generationAdds & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generationAdds & operator = (const GGS_generationAdds & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationAdds init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationAdds extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generationAdds class_func_new (Compiler * inCompiler
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationAdds ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @generationContext struct
//--------------------------------------------------------------------------------------------------

class GGS_generationContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_omnibusType mProperty_mPanicCodeLLVMType ;
  public: inline GGS_omnibusType readProperty_mPanicCodeLLVMType (void) const {
    return mProperty_mPanicCodeLLVMType ;
  }

  public: GGS_omnibusType mProperty_mPanicLineLLVMType ;
  public: inline GGS_omnibusType readProperty_mPanicLineLLVMType (void) const {
    return mProperty_mPanicLineLLVMType ;
  }

  public: GGS_string mProperty_mNopInstructionInLLVM ;
  public: inline GGS_string readProperty_mNopInstructionInLLVM (void) const {
    return mProperty_mNopInstructionInLLVM ;
  }

  public: GGS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GGS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GGS_availableInterruptMap mProperty_mAvailableInterruptMap ;
  public: inline GGS_availableInterruptMap readProperty_mAvailableInterruptMap (void) const {
    return mProperty_mAvailableInterruptMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_generationContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPanicCodeLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicCodeLLVMType = inValue ;
  }

  public: inline void setter_setMPanicLineLLVMType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLineLLVMType = inValue ;
  }

  public: inline void setter_setMNopInstructionInLLVM (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNopInstructionInLLVM = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GGS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMAvailableInterruptMap (const GGS_availableInterruptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAvailableInterruptMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_generationContext (const GGS_omnibusType & in_mPanicCodeLLVMType,
                                 const GGS_omnibusType & in_mPanicLineLLVMType,
                                 const GGS_string & in_mNopInstructionInLLVM,
                                 const GGS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                 const GGS_availableInterruptMap & in_mAvailableInterruptMap) ;

//--------------------------------- Copy constructor
  public: GGS_generationContext (const GGS_generationContext & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_generationContext & operator = (const GGS_generationContext & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_generationContext init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                 const class GGS_omnibusType & inOperand1,
                                                                 const class GGS_string & inOperand2,
                                                                 const class GGS_globalTaskVariableList & inOperand3,
                                                                 const class GGS_availableInterruptMap & inOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_generationContext extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_generationContext class_func_new (const class GGS_omnibusType & inOperand0,
                                                             const class GGS_omnibusType & inOperand1,
                                                             const class GGS_string & inOperand2,
                                                             const class GGS_globalTaskVariableList & inOperand3,
                                                             const class GGS_availableInterruptMap & inOperand4,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationContext ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskActivateFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskActivateFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskActivateFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskActivateFunctionIR_2E_weak (const class GGS_taskActivateFunctionIR & inSource) ;

  public: GGS_taskActivateFunctionIR_2E_weak & operator = (const class GGS_taskActivateFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_taskActivateFunctionIR_2E_weak init_nil (void) {
    GGS_taskActivateFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_taskActivateFunctionIR bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_taskActivateFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_taskActivateFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskActivateFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSetupDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_taskSetupDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_taskSetupDeclarationAST_2E_weak (const class GGS_taskSetupDeclarationAST & inSource) ;

  public: GGS_taskSetupDeclarationAST_2E_weak & operator = (const class GGS_taskSetupDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_taskSetupDeclarationAST_2E_weak init_nil (void) {
    GGS_taskSetupDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_taskSetupDeclarationAST bang_taskSetupDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_taskSetupDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_taskSetupDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSetupDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_taskSetupDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2E_weak ;

