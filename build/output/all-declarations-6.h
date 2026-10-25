#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLLVMInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLLVMInstruction_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractLLVMInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractLLVMInstruction_2E_weak (const class GGS_abstractLLVMInstruction & inSource) ;

  public: GGS_abstractLLVMInstruction_2E_weak & operator = (const class GGS_abstractLLVMInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractLLVMInstruction_2E_weak init_nil (void) {
    GGS_abstractLLVMInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractLLVMInstruction bang_abstractLLVMInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractLLVMInstruction unwrappedValue (void) const ;

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
  public: static GGS_abstractLLVMInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractLLVMInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLLVMInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstruction_2E_weak : public GGS_abstractLLVMInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmGenerationInstruction_2E_weak (const class GGS_llvmGenerationInstruction & inSource) ;

  public: GGS_llvmGenerationInstruction_2E_weak & operator = (const class GGS_llvmGenerationInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmGenerationInstruction_2E_weak init_nil (void) {
    GGS_llvmGenerationInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmGenerationInstruction bang_llvmGenerationInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmGenerationInstruction unwrappedValue (void) const ;

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
  public: static GGS_llvmGenerationInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenerationInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmGenerationInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmVarInstruction_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmVarInstruction_2E_weak : public GGS_abstractLLVMInstruction_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmVarInstruction_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmVarInstruction_2E_weak (const class GGS_llvmVarInstruction & inSource) ;

  public: GGS_llvmVarInstruction_2E_weak & operator = (const class GGS_llvmVarInstruction & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmVarInstruction_2E_weak init_nil (void) {
    GGS_llvmVarInstruction_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmVarInstruction bang_llvmVarInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmVarInstruction unwrappedValue (void) const ;

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
  public: static GGS_llvmVarInstruction_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmVarInstruction_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmVarInstruction_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@llvmGenerationInstructionList appendReturn'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (class GGS_llvmGenerationInstructionList & ioObject,
                                   const class GGS_lstring constin_inReturnType,
                                   const class GGS_lstring constin_inReturnValue,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@llvmGenerationInstructionList checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const class GGS_llvmGenerationInstructionList inObject,
                                           const class GGS_ctCheckMap constin_inMap,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLLVMInstruction checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkInstructionList (class cPtr_abstractLLVMInstruction * inObject,
                                               class GGS_ctCheckMap & io_ioMap,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentGenerationVarMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_assignmentGenerationVarMap final {

  public: DownEnumerator_assignmentGenerationVarMap (const class GGS_assignmentGenerationVarMap & inMap) ;

  public: ~ DownEnumerator_assignmentGenerationVarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_string current_mValue (LOCATION_ARGS) const ;

  public: class GGS_assignmentGenerationVarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_assignmentGenerationVarMap (const DownEnumerator_assignmentGenerationVarMap &) = delete ;
  private: DownEnumerator_assignmentGenerationVarMap & operator = (const DownEnumerator_assignmentGenerationVarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_assignmentGenerationVarMap final {
  public: UpEnumerator_assignmentGenerationVarMap (const class GGS_assignmentGenerationVarMap & inMap)  ;

  public: ~ UpEnumerator_assignmentGenerationVarMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_string current_mValue (LOCATION_ARGS) const ;
  public: class GGS_assignmentGenerationVarMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_assignmentGenerationVarMap (const UpEnumerator_assignmentGenerationVarMap &) = delete ;
  private: UpEnumerator_assignmentGenerationVarMap & operator = (const UpEnumerator_assignmentGenerationVarMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_assignmentGenerationVarMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_assignmentGenerationVarMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_assignmentGenerationVarMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_assignmentGenerationVarMap (void) ;

//--- Handle copy
  public: GGS_assignmentGenerationVarMap (const GGS_assignmentGenerationVarMap & inSource) ;
  public: GGS_assignmentGenerationVarMap & operator = (const GGS_assignmentGenerationVarMap & inSource) ;

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
  protected: void performInsert (const class GGS_assignmentGenerationVarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_assignmentGenerationVarMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentGenerationVarMap init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentGenerationVarMap extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentGenerationVarMap class_func_mapWithMapToOverride (const class GGS_assignmentGenerationVarMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_string constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMValueForKey (class GGS_string constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_string & outArgument1,
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

  public: class GGS_string getter_mValueForKey (const class GGS_string & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_assignmentGenerationVarMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_assignmentGenerationVarMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_assignmentGenerationVarMap ;
  friend class DownEnumerator_assignmentGenerationVarMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @assignmentGenerationVarMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_assignmentGenerationVarMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_string mProperty_mValue ;
  public: inline GGS_string readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_assignmentGenerationVarMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_assignmentGenerationVarMap_2E_element (const GGS_lstring & in_lkey,
                                                     const GGS_string & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_assignmentGenerationVarMap_2E_element (const GGS_assignmentGenerationVarMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_assignmentGenerationVarMap_2E_element & operator = (const GGS_assignmentGenerationVarMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentGenerationVarMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_string & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentGenerationVarMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: assignmentGenerationVarMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_assignmentGenerationVarMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_assignmentGenerationVarMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_assignmentGenerationVarMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_assignmentGenerationVarMap_2E_element_3F_ (const GGS_assignmentGenerationVarMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_assignmentGenerationVarMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_assignmentGenerationVarMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_assignmentGenerationVarMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@llvmGenerationInstructionList generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateIRCode (const class GGS_llvmGenerationInstructionList inObject,
                                     const class GGS_assignmentGenerationVarMap constin_inVarMap,
                                     const class GGS_assignmentGenerationVarMap constin_inTypeMap,
                                     class GGS_stringlist & io_ioInstructionAsStringListIR,
                                     class GGS_uint & io_ioTemporaryIndex,
                                     class GGS_allocaList & io_ioAllocaList,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLLVMInstruction generateIRCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateIRCode (class cPtr_abstractLLVMInstruction * inObject,
                                         class GGS_assignmentGenerationVarMap & io_ioVarMap,
                                         class GGS_assignmentGenerationVarMap & io_ioTypeMap,
                                         class GGS_stringlist & io_ioInstructionAsStringListIR,
                                         class GGS_uint & io_ioTemporaryIndex,
                                         class GGS_allocaList & io_ioAllocaList,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendBinaryOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBinaryOperation (class GGS_instructionListIR & ioObject,
                                            const class GGS_objectIR constin_inTarget,
                                            const class GGS_omnibusType constin_inOperandType,
                                            const class GGS_location constin_inLocation,
                                            const class GGS_objectIR constin_inLeft,
                                            const class GGS_llvmBinaryOperation constin_inOperation,
                                            const class GGS_objectIR constin_inRight,
                                            class Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @binaryOperationIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperationIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_binaryOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_binaryOperationIR (const class cPtr_binaryOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mOperandType (void) const ;
  public: void setProperty_mOperandType (const GGS_omnibusType & inValue) ;

  public: class GGS_objectIR readProperty_mLeft (void) const ;
  public: void setProperty_mLeft (const GGS_objectIR & inValue) ;

  public: class GGS_llvmBinaryOperation readProperty_mOperation (void) const ;
  public: void setProperty_mOperation (const GGS_llvmBinaryOperation & inValue) ;

  public: class GGS_objectIR readProperty_mRight (void) const ;
  public: void setProperty_mRight (const GGS_objectIR & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_binaryOperationIR init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                     const class GGS_omnibusType & inOperand1,
                                                                     const class GGS_objectIR & inOperand2,
                                                                     const class GGS_llvmBinaryOperation & inOperand3,
                                                                     const class GGS_objectIR & inOperand4,
                                                                     const class GGS_location & inOperand5,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_binaryOperationIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @binaryOperationIR class
//--------------------------------------------------------------------------------------------------

class cPtr_binaryOperationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void binaryOperationIR_init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                               const class GGS_omnibusType & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               const class GGS_llvmBinaryOperation & inOperand3,
                                                               const class GGS_objectIR & inOperand4,
                                                               const class GGS_location & inOperand5,
                                                               Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc enterCodeForDivisionWithZeroDivisorPanic
  public: virtual void method_enterCodeForDivisionWithZeroDivisorPanic (const class GGS_string arg_inOperation,
           const class GGS_bigint arg_inPanicCode,
           class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc enterCodeForOverflowOperation
  public: virtual void method_enterCodeForOverflowOperation (const class GGS_string arg_inOperation,
           const class GGS_bigint arg_inPanicCode,
           class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_omnibusType mProperty_mOperandType ;
  public: GGS_objectIR mProperty_mLeft ;
  public: GGS_llvmBinaryOperation mProperty_mOperation ;
  public: GGS_objectIR mProperty_mRight ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_binaryOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_binaryOperationIR (const GGS_objectIR & in_mTarget,
                                  const GGS_omnibusType & in_mOperandType,
                                  const GGS_objectIR & in_mLeft,
                                  const GGS_llvmBinaryOperation & in_mOperation,
                                  const GGS_objectIR & in_mRight,
                                  const GGS_location & in_mLocation,
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
// Phase 1: @binaryOperationIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_binaryOperationIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_binaryOperationIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_binaryOperationIR_2E_weak (const class GGS_binaryOperationIR & inSource) ;

  public: GGS_binaryOperationIR_2E_weak & operator = (const class GGS_binaryOperationIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_binaryOperationIR_2E_weak init_nil (void) {
    GGS_binaryOperationIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_binaryOperationIR bang_binaryOperationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_binaryOperationIR unwrappedValue (void) const ;

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
  public: static GGS_binaryOperationIR_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_binaryOperationIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_binaryOperationIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperationIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @callInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_callInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_callInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_callInstructionAST_2E_weak (const class GGS_callInstructionAST & inSource) ;

  public: GGS_callInstructionAST_2E_weak & operator = (const class GGS_callInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_callInstructionAST_2E_weak init_nil (void) {
    GGS_callInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_callInstructionAST bang_callInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_callInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_callInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_callInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_callInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_callInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standAloneProcedureCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_standAloneProcedureCallInstructionAST_2E_weak : public GGS_callInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standAloneProcedureCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standAloneProcedureCallInstructionAST_2E_weak (const class GGS_standAloneProcedureCallInstructionAST & inSource) ;

  public: GGS_standAloneProcedureCallInstructionAST_2E_weak & operator = (const class GGS_standAloneProcedureCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_standAloneProcedureCallInstructionAST_2E_weak init_nil (void) {
    GGS_standAloneProcedureCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_standAloneProcedureCallInstructionAST bang_standAloneProcedureCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_standAloneProcedureCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_standAloneProcedureCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standAloneProcedureCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standAloneProcedureCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procedureCallInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_procedureCallInstructionAST_2E_weak : public GGS_callInstructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_procedureCallInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_procedureCallInstructionAST_2E_weak (const class GGS_procedureCallInstructionAST & inSource) ;

  public: GGS_procedureCallInstructionAST_2E_weak & operator = (const class GGS_procedureCallInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_procedureCallInstructionAST_2E_weak init_nil (void) {
    GGS_procedureCallInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_procedureCallInstructionAST bang_procedureCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_procedureCallInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_procedureCallInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procedureCallInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_procedureCallInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procedureCallInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@effectiveArgumentPassingModeAST passingModeForActualSelector' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_passingModeForActualSelector (const class GGS_effectiveArgumentPassingModeAST & inObject,
                                                               const class GGS_lstring & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procEffectiveParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_procEffectiveParameterList final {
  public: DownEnumerator_procEffectiveParameterList (const class GGS_procEffectiveParameterList & inList) ;

  public: ~ DownEnumerator_procEffectiveParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procEffectiveParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procEffectiveParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_procEffectiveParameterList (const DownEnumerator_procEffectiveParameterList &) = delete ;
  private: DownEnumerator_procEffectiveParameterList & operator = (const DownEnumerator_procEffectiveParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_procEffectiveParameterList final {
  public: UpEnumerator_procEffectiveParameterList (const class GGS_procEffectiveParameterList & inList)  ;

  public: ~ UpEnumerator_procEffectiveParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mParameterType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_procEffectiveParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_procEffectiveParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_procEffectiveParameterList (const UpEnumerator_procEffectiveParameterList &) = delete ;
  private: UpEnumerator_procEffectiveParameterList & operator = (const UpEnumerator_procEffectiveParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @procEffectiveParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_procEffectiveParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_procEffectiveParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_procEffectiveParameterList (void) = default ;

//--- Copy
  public: GGS_procEffectiveParameterList (const GGS_procEffectiveParameterList &) = default ;
  public: GGS_procEffectiveParameterList & operator = (const GGS_procEffectiveParameterList &) = default ;

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
  public : inline GenericArray <GGS_procEffectiveParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_procEffectiveParameterList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_procEffectiveParameterList (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                 const class GGS_lstring & in_mSelector,
                                                 const class GGS_omnibusType & in_mParameterType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procEffectiveParameterList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procEffectiveParameterList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procEffectiveParameterList class_func_listWithValue (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                const class GGS_lstring & inOperand1,
                                                                                const class GGS_omnibusType & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_procEffectiveParameterList inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                   const class GGS_lstring & inOperand1,
                                   const class GGS_omnibusType & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_procEffectiveParameterList_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_procEffectiveParameterList add_operation (const GGS_procEffectiveParameterList & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                              class GGS_lstring constinArgument1,
                              class GGS_omnibusType constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_omnibusType constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                class GGS_lstring & outArgument1,
                                class GGS_omnibusType & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                               class GGS_lstring & outArgument1,
                               class GGS_omnibusType & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_omnibusType & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEffectiveParameterPassingModeAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                                                class GGS_uint constinArgument1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMParameterTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMSelectorAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                             class GGS_lstring & outArgument1,
                             class GGS_omnibusType & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                            class GGS_lstring & outArgument1,
                            class GGS_omnibusType & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentPassingModeAST getter_mEffectiveParameterPassingModeAtIndex (const class GGS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_omnibusType getter_mParameterTypeAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_procEffectiveParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_procEffectiveParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_procEffectiveParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_procEffectiveParameterList ;
  friend class DownEnumerator_procEffectiveParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procEffectiveParameterList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterPassingMode ;
  public: inline GGS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterPassingMode (void) const {
    return mProperty_mEffectiveParameterPassingMode ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GGS_omnibusType mProperty_mParameterType ;
  public: inline GGS_omnibusType readProperty_mParameterType (void) const {
    return mProperty_mParameterType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_procEffectiveParameterList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterPassingMode (const GGS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMParameterType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_procEffectiveParameterList_2E_element (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                     const GGS_lstring & in_mSelector,
                                                     const GGS_omnibusType & in_mParameterType) ;

//--------------------------------- Copy constructor
  public: GGS_procEffectiveParameterList_2E_element (const GGS_procEffectiveParameterList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_procEffectiveParameterList_2E_element & operator = (const GGS_procEffectiveParameterList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procEffectiveParameterList_2E_element init_21__21__21_ (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                             const class GGS_lstring & inOperand1,
                                                                             const class GGS_omnibusType & inOperand2,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procEffectiveParameterList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum procEffectiveParameterPassingModeIR
//--------------------------------------------------------------------------------------------------

class GGS_procEffectiveParameterPassingModeIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_procEffectiveParameterPassingModeIR (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_input,
    enum_output,
    enum_outputInput
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
  public: static GGS_procEffectiveParameterPassingModeIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_procEffectiveParameterPassingModeIR class_func_input (LOCATION_ARGS) ;

  public: static class GGS_procEffectiveParameterPassingModeIR class_func_output (LOCATION_ARGS) ;

  public: static class GGS_procEffectiveParameterPassingModeIR class_func_outputInput (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isInput (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOutput (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isOutputInput (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @procCallEffectiveParameterListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_procCallEffectiveParameterListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_procEffectiveParameterPassingModeIR mProperty_mEffectiveParameterPassingMode ;
  public: inline GGS_procEffectiveParameterPassingModeIR readProperty_mEffectiveParameterPassingMode (void) const {
    return mProperty_mEffectiveParameterPassingMode ;
  }

  public: GGS_objectIR mProperty_mParameter ;
  public: inline GGS_objectIR readProperty_mParameter (void) const {
    return mProperty_mParameter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterPassingMode (const GGS_procEffectiveParameterPassingModeIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterPassingMode = inValue ;
  }

  public: inline void setter_setMParameter (const GGS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                           const GGS_objectIR & in_mParameter) ;

//--------------------------------- Copy constructor
  public: GGS_procCallEffectiveParameterListIR_2E_element (const GGS_procCallEffectiveParameterListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_procCallEffectiveParameterListIR_2E_element & operator = (const GGS_procCallEffectiveParameterListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_procCallEffectiveParameterListIR_2E_element init_21__21_ (const class GGS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                               const class GGS_objectIR & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_procCallEffectiveParameterListIR_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @infixOperatorMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_omnibusType mProperty_mResultType ;
  public: inline GGS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

  public: GGS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;
  public: inline GGS_omnibusInfixOperatorUsage readProperty_mOperatorUsage (void) const {
    return mProperty_mOperatorUsage ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_infixOperatorMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMResultType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

  public: inline void setter_setMOperatorUsage (const GGS_omnibusInfixOperatorUsage & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperatorUsage = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_infixOperatorMap_2E_element (const GGS_lstring & in_lkey,
                                           const GGS_omnibusType & in_mResultType,
                                           const GGS_omnibusInfixOperatorUsage & in_mOperatorUsage) ;

//--------------------------------- Copy constructor
  public: GGS_infixOperatorMap_2E_element (const GGS_infixOperatorMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_infixOperatorMap_2E_element & operator = (const GGS_infixOperatorMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_infixOperatorMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_omnibusType & inOperand1,
                                                                   const class GGS_omnibusInfixOperatorUsage & inOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_infixOperatorMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: infixOperatorMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_infixOperatorMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_infixOperatorMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_infixOperatorMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_infixOperatorMap_2E_element_3F_ (const GGS_infixOperatorMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_infixOperatorMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_infixOperatorMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_infixOperatorMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_infixOperatorMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@omnibusInfixOperatorUsage generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (class cPtr_omnibusInfixOperatorUsage * inObject,
                                       const class GGS_objectIR constin_inLeftOperand,
                                       const class GGS_location constin_inOperatorLocation,
                                       const class GGS_objectIR constin_inRightOperand,
                                       const class GGS_omnibusType constin_inResultType,
                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                       class GGS_allocaList & io_ioAllocaList,
                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                       class GGS_objectIR & out_outResultValue,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@infixOperatorMap generateInfixOperatorCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInfixOperatorCode (const class GGS_infixOperatorMap inObject,
                                                const class GGS_objectIR constin_inLeftOperand,
                                                const class GGS_omnibusInfixOperator constin_inInfixOperator,
                                                const class GGS_location constin_inOperatorLocation,
                                                const class GGS_objectIR constin_inRightOperand,
                                                class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                class GGS_allocaList & io_ioAllocaList,
                                                class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                class GGS_objectIR & out_outResultValue,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_infixOperatorMapKey (const class GGS_omnibusType & constinArgument0,
                                                const class GGS_omnibusInfixOperator & constinArgument1,
                                                const class GGS_location & constinArgument2,
                                                const class GGS_omnibusType & constinArgument3,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfixOperatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_inlineInfixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inlineInfixOperatorUsage (const class cPtr_inlineInfixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inlineInfixOperatorUsage init_21_ (const class GGS_string & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inlineInfixOperatorUsage extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfixOperatorUsage_init_21_ (const class GGS_string & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension proc generateCode
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
  public: GGS_string mProperty_mLLVMOperation ;


//--- Default constructor
  public: cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfixOperatorUsage (const GGS_string & in_mLLVMOperation,
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
// Phase 1: @inlineInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfixOperatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inlineInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inlineInfixOperatorUsage_2E_weak (const class GGS_inlineInfixOperatorUsage & inSource) ;

  public: GGS_inlineInfixOperatorUsage_2E_weak & operator = (const class GGS_inlineInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inlineInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_inlineInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inlineInfixOperatorUsage bang_inlineInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inlineInfixOperatorUsage unwrappedValue (void) const ;

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
  public: static GGS_inlineInfixOperatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfixOperatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfixOperatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeAliasDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeAliasDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeAliasDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeAliasDeclarationAST_2E_weak (const class GGS_typeAliasDeclarationAST & inSource) ;

  public: GGS_typeAliasDeclarationAST_2E_weak & operator = (const class GGS_typeAliasDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeAliasDeclarationAST_2E_weak init_nil (void) {
    GGS_typeAliasDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeAliasDeclarationAST bang_typeAliasDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeAliasDeclarationAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeAliasDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendShiftLeft'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShiftLeft (class GGS_instructionListIR & ioObject,
                                      const class GGS_objectIR constin_inResult,
                                      const class GGS_objectIR constin_inSource,
                                      const class GGS_uint constin_inShiftAmount,
                                      class Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @leftShiftIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_leftShiftIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_leftShiftIR (const class cPtr_leftShiftIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSource (void) const ;
  public: void setProperty_mSource (const GGS_objectIR & inValue) ;

  public: class GGS_uint readProperty_mShiftAmount (void) const ;
  public: void setProperty_mShiftAmount (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_leftShiftIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                   const class GGS_objectIR & inOperand1,
                                                   const class GGS_uint & inOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_leftShiftIR extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @leftShiftIR class
//--------------------------------------------------------------------------------------------------

class cPtr_leftShiftIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void leftShiftIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                             const class GGS_objectIR & inOperand1,
                                             const class GGS_uint & inOperand2,
                                             Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_objectIR mProperty_mSource ;
  public: GGS_uint mProperty_mShiftAmount ;


//--- Default constructor
  public: cPtr_leftShiftIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_leftShiftIR (const GGS_objectIR & in_mResult,
                            const GGS_objectIR & in_mSource,
                            const GGS_uint & in_mShiftAmount,
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
// Phase 1: @leftShiftIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_leftShiftIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_leftShiftIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_leftShiftIR_2E_weak (const class GGS_leftShiftIR & inSource) ;

  public: GGS_leftShiftIR_2E_weak & operator = (const class GGS_leftShiftIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_leftShiftIR_2E_weak init_nil (void) {
    GGS_leftShiftIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_leftShiftIR bang_leftShiftIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_leftShiftIR unwrappedValue (void) const ;

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
  public: static GGS_leftShiftIR_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_leftShiftIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_leftShiftIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeConvertToBooleanAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeConvertToBooleanAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeConvertToBooleanAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeConvertToBooleanAST_2E_weak (const class GGS_compileTimeConvertToBooleanAST & inSource) ;

  public: GGS_compileTimeConvertToBooleanAST_2E_weak & operator = (const class GGS_compileTimeConvertToBooleanAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeConvertToBooleanAST_2E_weak init_nil (void) {
    GGS_compileTimeConvertToBooleanAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeConvertToBooleanAST bang_compileTimeConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeConvertToBooleanAST unwrappedValue (void) const ;

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
  public: static GGS_compileTimeConvertToBooleanAST_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeConvertToBooleanAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeConvertToBooleanAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmConvertToBooleanAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmConvertToBooleanAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmConvertToBooleanAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmConvertToBooleanAST_2E_weak (const class GGS_llvmConvertToBooleanAST & inSource) ;

  public: GGS_llvmConvertToBooleanAST_2E_weak & operator = (const class GGS_llvmConvertToBooleanAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmConvertToBooleanAST_2E_weak init_nil (void) {
    GGS_llvmConvertToBooleanAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmConvertToBooleanAST bang_llvmConvertToBooleanAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmConvertToBooleanAST unwrappedValue (void) const ;

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
  public: static GGS_llvmConvertToBooleanAST_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmConvertToBooleanAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmConvertToBooleanAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitConversionToBooleanMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitConversionToBooleanMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_abstractImplicitConverterToBoolean mProperty_mConverter ;
  public: inline GGS_abstractImplicitConverterToBoolean readProperty_mConverter (void) const {
    return mProperty_mConverter ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitConversionToBooleanMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMConverter (const GGS_abstractImplicitConverterToBoolean & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConverter = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitConversionToBooleanMap_2E_element (const GGS_lstring & in_lkey,
                                                         const GGS_abstractImplicitConverterToBoolean & in_mConverter) ;

//--------------------------------- Copy constructor
  public: GGS_implicitConversionToBooleanMap_2E_element (const GGS_implicitConversionToBooleanMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitConversionToBooleanMap_2E_element & operator = (const GGS_implicitConversionToBooleanMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitConversionToBooleanMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                             const class GGS_abstractImplicitConverterToBoolean & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitConversionToBooleanMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: implicitConversionToBooleanMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_implicitConversionToBooleanMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitConversionToBooleanMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitConversionToBooleanMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_implicitConversionToBooleanMap_2E_element_3F_ (const GGS_implicitConversionToBooleanMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_implicitConversionToBooleanMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_implicitConversionToBooleanMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_implicitConversionToBooleanMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//   enum implicitBooleanConversionResult
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_compileTime,
    enum_llvmVariable
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_compileTime (class GGS_bool & out_value) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_llvmVariable (class GGS_string & out_name) const ;

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
  public: static GGS_implicitBooleanConversionResult extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_implicitBooleanConversionResult class_func_compileTime (const class GGS_bool & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_implicitBooleanConversionResult class_func_llvmVariable (const class GGS_string & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractCompileTime (class GGS_bool & outArgument0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractLlvmVariable (class GGS_string & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_implicitBooleanConversionResult_2E_compileTime_3F_ getter_getCompileTime (LOCATION_ARGS) const ;

  public: class GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ getter_getLlvmVariable (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isCompileTime (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLlvmVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitBooleanConversionResult_2E_compileTime struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_compileTime : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bool mProperty_value ;
  public: inline GGS_bool readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_bool & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitBooleanConversionResult_2E_compileTime & operator = (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitBooleanConversionResult_2E_compileTime init_21_ (const class GGS_bool & inOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitBooleanConversionResult_2E_compileTime extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime ;

//--------------------------------------------------------------------------------------------------
// Phase 1: implicitBooleanConversionResult.compileTime? optional
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_compileTime_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitBooleanConversionResult_2E_compileTime mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_implicitBooleanConversionResult_2E_compileTime_3F_ (const GGS_implicitBooleanConversionResult_2E_compileTime & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_implicitBooleanConversionResult_2E_compileTime_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_implicitBooleanConversionResult_2E_compileTime unwrappedValue (void) const {
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
  public: static GGS_implicitBooleanConversionResult_2E_compileTime_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_compileTime_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @implicitBooleanConversionResult_2E_llvmVariable struct
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_llvmVariable : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_name ;
  public: inline GGS_string readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_string & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable & operator = (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable init_21_ (const class GGS_string & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable ;

//--------------------------------------------------------------------------------------------------
// Phase 1: implicitBooleanConversionResult.llvmVariable? optional
//--------------------------------------------------------------------------------------------------

class GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_implicitBooleanConversionResult_2E_llvmVariable mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ (const GGS_implicitBooleanConversionResult_2E_llvmVariable & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_implicitBooleanConversionResult_2E_llvmVariable unwrappedValue (void) const {
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
  public: static GGS_implicitBooleanConversionResult_2E_llvmVariable_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitBooleanConversionResult_2E_llvmVariable_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@implicitBooleanConversionResult llvmName' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_llvmName (const class GGS_implicitBooleanConversionResult & inObject,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractImplicitConverterToBoolean generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateConvertToBooleanCode (class cPtr_abstractImplicitConverterToBoolean * inObject,
                                                       const class GGS_objectIR constin_inReceiverOperand,
                                                       const class GGS_location constin_inErrorLocation,
                                                       class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                       class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                       class GGS_allocaList & io_ioAllocaList,
                                                       class GGS_implicitBooleanConversionResult & out_outResult,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_compileTimeImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeImplicitConverterToBoolean (const class cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeImplicitConverterToBoolean init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_ctExpressionAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeImplicitConverterToBoolean_init_21__21_ (const class GGS_lstring & inOperand0,
                                                                   const class GGS_ctExpressionAST & inOperand1,
                                                                   Compiler * inCompiler) ;


//--- Extension proc generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_compileTimeImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
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
// Phase 1: @compileTimeImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak (const class GGS_compileTimeImplicitConverterToBoolean & inSource) ;

  public: GGS_compileTimeImplicitConverterToBoolean_2E_weak & operator = (const class GGS_compileTimeImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_compileTimeImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeImplicitConverterToBoolean bang_compileTimeImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_compileTimeImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_llvmImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_llvmImplicitConverterToBoolean (const class cPtr_llvmImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GGS_omnibusType & inValue) ;

  public: class GGS_llvmGenerationInstructionList readProperty_mInstructionList (void) const ;
  public: void setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmImplicitConverterToBoolean init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_omnibusType & inOperand1,
                                                                      const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @llvmImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_llvmImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void llvmImplicitConverterToBoolean_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_llvmGenerationInstructionList & inOperand2,
                                                                Compiler * inCompiler) ;


//--- Extension proc generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_omnibusType mProperty_mReceiverType ;
  public: GGS_llvmGenerationInstructionList mProperty_mInstructionList ;


//--- Default constructor
  public: cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_llvmImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                               const GGS_omnibusType & in_mReceiverType,
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
// Phase 1: @llvmImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_llvmImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_llvmImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_llvmImplicitConverterToBoolean_2E_weak (const class GGS_llvmImplicitConverterToBoolean & inSource) ;

  public: GGS_llvmImplicitConverterToBoolean_2E_weak & operator = (const class GGS_llvmImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_llvmImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_llvmImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_llvmImplicitConverterToBoolean bang_llvmImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_llvmImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_llvmImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@implicitConversionToBooleanMap generateConvertToBooleanCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateConvertToBooleanCode (const class GGS_implicitConversionToBooleanMap inObject,
                                                   const class GGS_objectIR constin_inReceiverOperand,
                                                   const class GGS_location constin_inErrorLocation,
                                                   class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                   class GGS_instructionListIR & io_ioInstructionGenerationList,
                                                   class GGS_allocaList & io_ioAllocaList,
                                                   class GGS_implicitBooleanConversionResult & out_outResult,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@mode string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_mode & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@mode isSafe' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_bool extensionGetter_isSafe (const class GGS_mode & inObject,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@mode routineLLVMDictionaryForFunction' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const class GGS_mode & inObject,
                                                                                const class GGS_string & constinArgument0,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_mode mProperty_key ;
  public: inline GGS_mode readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_string mProperty_llvmName ;
  public: inline GGS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_mode & in_key,
                                              const GGS_string & in_llvmName) ;

//--------------------------------- Copy constructor
  public: GGS_routineLLVMNameDict_2E_element (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_routineLLVMNameDict_2E_element & operator = (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineLLVMNameDict_2E_element init_21__21_ (const class GGS_mode & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineLLVMNameDict_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: routineLLVMNameDict.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_routineLLVMNameDict_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_routineLLVMNameDict_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_routineLLVMNameDict_2E_element_3F_ (const GGS_routineLLVMNameDict_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_routineLLVMNameDict_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_routineLLVMNameDict_2E_element unwrappedValue (void) const {
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
  public: static GGS_routineLLVMNameDict_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_routineLLVMNameDict final {
  public: DownEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_mode current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_routineLLVMNameDict (const DownEnumerator_routineLLVMNameDict &) = delete ;
  private: DownEnumerator_routineLLVMNameDict & operator = (const DownEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_routineLLVMNameDict final {
  public: UpEnumerator_routineLLVMNameDict (const class GGS_routineLLVMNameDict & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_mode current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_string current_llvmName (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_routineLLVMNameDict_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_routineLLVMNameDict_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_routineLLVMNameDict (const UpEnumerator_routineLLVMNameDict &) = delete ;
  private: UpEnumerator_routineLLVMNameDict & operator = (const UpEnumerator_routineLLVMNameDict &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @routineLLVMNameDict dict
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict final : public GenericDictionary <GGS_mode, GGS_routineLLVMNameDict_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_routineLLVMNameDict (void) = default ;

//--------------------------------- Build
  protected: static GGS_routineLLVMNameDict builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_routineLLVMNameDict init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_routineLLVMNameDict extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_mode & inOperand0,
                                   const class GGS_string & inOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_routineLLVMNameDict_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_mode constinArgument0,
                              class GGS_string constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_mode constinArgument0,
                                 class GGS_string & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setLlvmNameForKey (class GGS_string constinArgument0,
                                         class GGS_mode constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_mode constinArgument0,
                                 class GGS_string & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_mode & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_string getter_llvmNameForKey (const class GGS_mode & constinOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_routineLLVMNameDict_2E_element_3F_ readSubscript__3F_ (const class GGS_mode & in0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_routineLLVMNameDict ;
  friend class DownEnumerator_routineLLVMNameDict ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@mode routineLLVMDictionaryForSystemRoutine' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForSystemRoutine (const class GGS_mode & inObject,
                                                                                     const class GGS_string & constinArgument0,
                                                                                     const class GGS_string & constinArgument1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compiletimeBoolAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compiletimeBoolAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimeBoolAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compiletimeBoolAST class
//--------------------------------------------------------------------------------------------------

class cPtr_compiletimeBoolAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compiletimeBoolAST_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_compiletimeBoolAST (Compiler * inCompiler
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
// Phase 1: @compiletimeBoolAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compiletimeBoolAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compiletimeBoolAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compiletimeBoolAST_2E_weak (const class GGS_compiletimeBoolAST & inSource) ;

  public: GGS_compiletimeBoolAST_2E_weak & operator = (const class GGS_compiletimeBoolAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compiletimeBoolAST_2E_weak init_nil (void) {
    GGS_compiletimeBoolAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compiletimeBoolAST bang_compiletimeBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compiletimeBoolAST unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimeBoolAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeBoolImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolImplicitConverterToBoolean : public GGS_abstractImplicitConverterToBoolean {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeBoolImplicitConverterToBoolean (const class cPtr_compileTimeBoolImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeBoolImplicitConverterToBoolean init (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeBoolImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolImplicitConverterToBoolean_init (Compiler * inCompiler) ;


//--- Extension proc generateConvertToBooleanCode
  public: virtual void method_generateConvertToBooleanCode (const class GGS_objectIR arg_inReceiverOperand,
           const class GGS_location arg_inErrorLocation,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_implicitBooleanConversionResult & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_compileTimeBoolImplicitConverterToBoolean (Compiler * inCompiler
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
// Phase 1: @compileTimeBoolImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak : public GGS_abstractImplicitConverterToBoolean_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak (const class GGS_compileTimeBoolImplicitConverterToBoolean & inSource) ;

  public: GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak & operator = (const class GGS_compileTimeBoolImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolImplicitConverterToBoolean bang_compileTimeBoolImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeBoolImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: static GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolImplicitConverterToBoolean_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeBoolNotOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolNotOperator : public GGS_prefixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolNotOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeBoolNotOperator (const class cPtr_compileTimeBoolNotOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeBoolNotOperator init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolNotOperator extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolNotOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeBoolNotOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolNotOperator : public cPtr_prefixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolNotOperator_init (Compiler * inCompiler) ;


//--- Extension proc generateCode
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



//--- Constructor
  public: cPtr_compileTimeBoolNotOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeBoolNotOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolNotOperator_2E_weak : public GGS_prefixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolNotOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolNotOperator_2E_weak (const class GGS_compileTimeBoolNotOperator & inSource) ;

  public: GGS_compileTimeBoolNotOperator_2E_weak & operator = (const class GGS_compileTimeBoolNotOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeBoolNotOperator_2E_weak init_nil (void) {
    GGS_compileTimeBoolNotOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolNotOperator bang_compileTimeBoolNotOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeBoolNotOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeBoolNotOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolNotOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolNotOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolNotOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeBoolEqualOperator reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolEqualOperator : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolEqualOperator (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_compileTimeBoolEqualOperator (const class cPtr_compileTimeBoolEqualOperator * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_compileTimeBoolEqualOperator init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_compileTimeBoolEqualOperator extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolEqualOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeBoolEqualOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolEqualOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolEqualOperator_init (Compiler * inCompiler) ;


//--- Extension proc generateCode
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



//--- Constructor
  public: cPtr_compileTimeBoolEqualOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeBoolEqualOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolEqualOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolEqualOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolEqualOperator_2E_weak (const class GGS_compileTimeBoolEqualOperator & inSource) ;

  public: GGS_compileTimeBoolEqualOperator_2E_weak & operator = (const class GGS_compileTimeBoolEqualOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeBoolEqualOperator_2E_weak init_nil (void) {
    GGS_compileTimeBoolEqualOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolEqualOperator bang_compileTimeBoolEqualOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeBoolEqualOperator unwrappedValue (void) const ;

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
  public: static GGS_compileTimeBoolEqualOperator_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeBoolEqualOperator_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolEqualOperator_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolEqualOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeBoolXorOperator reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolXorOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeBoolXorOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolXorOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolXorOperator_init (Compiler * inCompiler) ;


//--- Extension proc generateCode
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



//--- Constructor
  public: cPtr_compileTimeBoolXorOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeBoolXorOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolXorOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolXorOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolXorOperator_2E_weak (const class GGS_compileTimeBoolXorOperator & inSource) ;

  public: GGS_compileTimeBoolXorOperator_2E_weak & operator = (const class GGS_compileTimeBoolXorOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeBoolXorOperator_2E_weak init_nil (void) {
    GGS_compileTimeBoolXorOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolXorOperator bang_compileTimeBoolXorOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeBoolXorOperator unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolXorOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @compileTimeBoolOrOperator reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeBoolOrOperator & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @compileTimeBoolOrOperator class
//--------------------------------------------------------------------------------------------------

class cPtr_compileTimeBoolOrOperator : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void compileTimeBoolOrOperator_init (Compiler * inCompiler) ;


//--- Extension proc generateCode
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



//--- Constructor
  public: cPtr_compileTimeBoolOrOperator (Compiler * inCompiler
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
// Phase 1: @compileTimeBoolOrOperator_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeBoolOrOperator_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_compileTimeBoolOrOperator_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_compileTimeBoolOrOperator_2E_weak (const class GGS_compileTimeBoolOrOperator & inSource) ;

  public: GGS_compileTimeBoolOrOperator_2E_weak & operator = (const class GGS_compileTimeBoolOrOperator & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_compileTimeBoolOrOperator_2E_weak init_nil (void) {
    GGS_compileTimeBoolOrOperator_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_compileTimeBoolOrOperator bang_compileTimeBoolOrOperator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_compileTimeBoolOrOperator unwrappedValue (void) const ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeBoolOrOperator_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractInstructionIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (class cPtr_abstractInstructionIR * inObject,
                                                  class GGS_stringset & io_ioInvokedRoutineSet,
                                                  class GGS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_instructionListListIR final {
  public: DownEnumerator_instructionListListIR (const class GGS_instructionListListIR & inList) ;

  public: ~ DownEnumerator_instructionListListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instructionListListIR (const DownEnumerator_instructionListListIR &) = delete ;
  private: DownEnumerator_instructionListListIR & operator = (const DownEnumerator_instructionListListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instructionListListIR final {
  public: UpEnumerator_instructionListListIR (const class GGS_instructionListListIR & inList)  ;

  public: ~ UpEnumerator_instructionListListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_instructionListIR current_mInstructionList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instructionListListIR (const UpEnumerator_instructionListListIR &) = delete ;
  private: UpEnumerator_instructionListListIR & operator = (const UpEnumerator_instructionListListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @instructionListListIR list
//--------------------------------------------------------------------------------------------------

class GGS_instructionListListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_instructionListListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_instructionListListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_instructionListListIR (void) = default ;

//--- Copy
  public: GGS_instructionListListIR (const GGS_instructionListListIR &) = default ;
  public: GGS_instructionListListIR & operator = (const GGS_instructionListListIR &) = default ;

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
  public : inline GenericArray <GGS_instructionListListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_instructionListListIR subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_instructionListListIR (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_instructionListIR & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListListIR init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListListIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionListListIR class_func_listWithValue (const class GGS_instructionListIR & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_instructionListListIR inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_instructionListIR & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_instructionListListIR_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_instructionListListIR add_operation (const GGS_instructionListListIR & inOperand,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_instructionListIR constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_instructionListIR constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_instructionListIR & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_instructionListIR & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_instructionListIR & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_instructionListIR constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_instructionListIR & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_instructionListIR & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_instructionListIR getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_instructionListListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_instructionListListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_instructionListListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instructionListListIR ;
  friend class DownEnumerator_instructionListListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_instructionListListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_instructionListIR mProperty_mInstructionList ;
  public: inline GGS_instructionListIR readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instructionListListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionList (const GGS_instructionListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instructionListListIR_2E_element (const GGS_instructionListIR & in_mInstructionList) ;

//--------------------------------- Copy constructor
  public: GGS_instructionListListIR_2E_element (const GGS_instructionListListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instructionListListIR_2E_element & operator = (const GGS_instructionListListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListListIR_2E_element init_21_ (const class GGS_instructionListIR & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListListIR_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @availableInterruptMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_availableInterruptMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_interruptionPanicCode mProperty_mInterruptionPanicCode ;
  public: inline GGS_interruptionPanicCode readProperty_mInterruptionPanicCode (void) const {
    return mProperty_mInterruptionPanicCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_availableInterruptMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInterruptionPanicCode (const GGS_interruptionPanicCode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptionPanicCode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_availableInterruptMap_2E_element (const GGS_lstring & in_lkey,
                                                const GGS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//--------------------------------- Copy constructor
  public: GGS_availableInterruptMap_2E_element (const GGS_availableInterruptMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_availableInterruptMap_2E_element & operator = (const GGS_availableInterruptMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_availableInterruptMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_interruptionPanicCode & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_availableInterruptMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: availableInterruptMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_availableInterruptMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_availableInterruptMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_availableInterruptMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_availableInterruptMap_2E_element_3F_ (const GGS_availableInterruptMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_availableInterruptMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_availableInterruptMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_availableInterruptMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_availableInterruptMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendEnterRegisterGroupSubscriptedAddress'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendEnterRegisterGroupSubscriptedAddress (class GGS_instructionListIR & ioObject,
                                                                 class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                                 class GGS_string & out_out_5F_llvmName,
                                                                 const class GGS_string constin_inGroupName,
                                                                 const class GGS_uint constin_inGroupSize,
                                                                 const class GGS_objectIR constin_inIndexIR,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enterRegisterGroupSubscriptedAddressIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_enterRegisterGroupSubscriptedAddressIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_enterRegisterGroupSubscriptedAddressIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enterRegisterGroupSubscriptedAddressIR (const class cPtr_enterRegisterGroupSubscriptedAddressIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mGroupName (void) const ;
  public: void setProperty_mGroupName (const GGS_string & inValue) ;

  public: class GGS_uint readProperty_mGroupSize (void) const ;
  public: void setProperty_mGroupSize (const GGS_uint & inValue) ;

  public: class GGS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enterRegisterGroupSubscriptedAddressIR init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_string & inOperand1,
                                                                                  const class GGS_uint & inOperand2,
                                                                                  const class GGS_objectIR & inOperand3,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enterRegisterGroupSubscriptedAddressIR extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enterRegisterGroupSubscriptedAddressIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enterRegisterGroupSubscriptedAddressIR class
//--------------------------------------------------------------------------------------------------

class cPtr_enterRegisterGroupSubscriptedAddressIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enterRegisterGroupSubscriptedAddressIR_init_21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_string & inOperand1,
                                                                            const class GGS_uint & inOperand2,
                                                                            const class GGS_objectIR & inOperand3,
                                                                            Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_string mProperty_mGroupName ;
  public: GGS_uint mProperty_mGroupSize ;
  public: GGS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_enterRegisterGroupSubscriptedAddressIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enterRegisterGroupSubscriptedAddressIR (const GGS_string & in_mLLVMName,
                                                       const GGS_string & in_mGroupName,
                                                       const GGS_uint & in_mGroupSize,
                                                       const GGS_objectIR & in_mIndexIR,
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
// Phase 1: @enterRegisterGroupSubscriptedAddressIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak (const class GGS_enterRegisterGroupSubscriptedAddressIR & inSource) ;

  public: GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak & operator = (const class GGS_enterRegisterGroupSubscriptedAddressIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak init_nil (void) {
    GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enterRegisterGroupSubscriptedAddressIR bang_enterRegisterGroupSubscriptedAddressIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enterRegisterGroupSubscriptedAddressIR unwrappedValue (void) const ;

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
  public: static GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enterRegisterGroupSubscriptedAddressIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enterRegisterGroupSubscriptedAddressIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @functionCallEffectiveParameterListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_functionCallEffectiveParameterListAST_2E_element : public AC_GALGAS_root {
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
  public: GGS_functionCallEffectiveParameterListAST_2E_element (void) ;

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
  public: GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_lstring & in_mSelector,
                                                                const GGS_expressionAST & in_mExpression) ;

//--------------------------------- Copy constructor
  public: GGS_functionCallEffectiveParameterListAST_2E_element (const GGS_functionCallEffectiveParameterListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_functionCallEffectiveParameterListAST_2E_element & operator = (const GGS_functionCallEffectiveParameterListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_functionCallEffectiveParameterListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_expressionAST & inOperand1,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_functionCallEffectiveParameterListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @constructorCallAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_constructorCallAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_constructorCallAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_constructorCallAST_2E_weak (const class GGS_constructorCallAST & inSource) ;

  public: GGS_constructorCallAST_2E_weak & operator = (const class GGS_constructorCallAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_constructorCallAST_2E_weak init_nil (void) {
    GGS_constructorCallAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_constructorCallAST bang_constructorCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_constructorCallAST unwrappedValue (void) const ;

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
  public: static GGS_constructorCallAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_constructorCallAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_constructorCallAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constructorCallAST_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticListExpressionAST_2E_function_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticlistMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_staticlistMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_propertyList mProperty_mStaticListPropertyList ;
  public: inline GGS_propertyList readProperty_mStaticListPropertyList (void) const {
    return mProperty_mStaticListPropertyList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_staticlistMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMStaticListPropertyList (const GGS_propertyList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticListPropertyList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_staticlistMap_2E_element (const GGS_lstring & in_lkey,
                                        const GGS_propertyList & in_mStaticListPropertyList) ;

//--------------------------------- Copy constructor
  public: GGS_staticlistMap_2E_element (const GGS_staticlistMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_staticlistMap_2E_element & operator = (const GGS_staticlistMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticlistMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_propertyList & inOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticlistMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: staticlistMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_staticlistMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_staticlistMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_staticlistMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_staticlistMap_2E_element_3F_ (const GGS_staticlistMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_staticlistMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_staticlistMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_staticlistMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticlistMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListInitializationMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_staticListInitializationMap final {

  public: DownEnumerator_staticListInitializationMap (const class GGS_staticListInitializationMap & inMap) ;

  public: ~ DownEnumerator_staticListInitializationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_stringlist current_mInitializationList (LOCATION_ARGS) const ;

  public: class GGS_staticListInitializationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_staticListInitializationMap (const DownEnumerator_staticListInitializationMap &) = delete ;
  private: DownEnumerator_staticListInitializationMap & operator = (const DownEnumerator_staticListInitializationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_staticListInitializationMap final {
  public: UpEnumerator_staticListInitializationMap (const class GGS_staticListInitializationMap & inMap)  ;

  public: ~ UpEnumerator_staticListInitializationMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_stringlist current_mInitializationList (LOCATION_ARGS) const ;
  public: class GGS_staticListInitializationMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_staticListInitializationMap (const UpEnumerator_staticListInitializationMap &) = delete ;
  private: UpEnumerator_staticListInitializationMap & operator = (const UpEnumerator_staticListInitializationMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_staticListInitializationMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_staticListInitializationMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_staticListInitializationMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_staticListInitializationMap (void) ;

//--- Handle copy
  public: GGS_staticListInitializationMap (const GGS_staticListInitializationMap & inSource) ;
  public: GGS_staticListInitializationMap & operator = (const GGS_staticListInitializationMap & inSource) ;

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
  protected: void performInsert (const class GGS_staticListInitializationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_staticListInitializationMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

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
  public: static class GGS_staticListInitializationMap class_func_mapWithMapToOverride (const class GGS_staticListInitializationMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_stringlist constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInitializationListForKey (class GGS_stringlist constinArgument0,
                                                    class GGS_string constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
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

  public: class GGS_stringlist getter_mInitializationListForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListInitializationMap getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_staticListInitializationMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_staticListInitializationMap ;
  friend class DownEnumerator_staticListInitializationMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListInitializationMap ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedStaticList & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension proc semanticAnalysis
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedStaticList_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@staticListInitializationMap generateLLVMForStaticLists'
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_staticListIndirectRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension proc llvmCodeGeneration
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationConstantList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_enumerationConstantList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mConstantName ;
  public: inline GGS_lstring readProperty_mConstantName (void) const {
    return mProperty_mConstantName ;
  }

  public: GGS_bigint mProperty_mConstantValue ;
  public: inline GGS_bigint readProperty_mConstantValue (void) const {
    return mProperty_mConstantValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_enumerationConstantList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMConstantName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantName = inValue ;
  }

  public: inline void setter_setMConstantValue (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mConstantValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_enumerationConstantList_2E_element (const GGS_lstring & in_mConstantName,
                                                  const GGS_bigint & in_mConstantValue) ;

//--------------------------------- Copy constructor
  public: GGS_enumerationConstantList_2E_element (const GGS_enumerationConstantList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_enumerationConstantList_2E_element & operator = (const GGS_enumerationConstantList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumerationConstantList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_bigint & inOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumerationConstantList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationConstantList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumerationDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumerationDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumerationDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumerationDeclarationAST_2E_weak (const class GGS_enumerationDeclarationAST & inSource) ;

  public: GGS_enumerationDeclarationAST_2E_weak & operator = (const class GGS_enumerationDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumerationDeclarationAST_2E_weak init_nil (void) {
    GGS_enumerationDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumerationDeclarationAST bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumerationDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_enumerationDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumerationDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @enumToUintRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumToUintRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_enumToUintRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_enumToUintRoutineIR (const class cPtr_enumToUintRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mEnumerationLLVMTypeName (void) const ;
  public: void setProperty_mEnumerationLLVMTypeName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_enumToUintRoutineIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_bool & inOperand2,
                                                                                      const class GGS_string & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_enumToUintRoutineIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumToUintRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @enumToUintRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_enumToUintRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void enumToUintRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_string & inOperand3,
                                                                                Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mEnumerationLLVMTypeName ;


//--- Default constructor
  public: cPtr_enumToUintRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_enumToUintRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                    const GGS_bool & in_isRequired,
                                    const GGS_bool & in_warnsIfUnused,
                                    const GGS_string & in_mEnumerationLLVMTypeName,
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
// Phase 1: @enumToUintRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_enumToUintRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_enumToUintRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_enumToUintRoutineIR_2E_weak (const class GGS_enumToUintRoutineIR & inSource) ;

  public: GGS_enumToUintRoutineIR_2E_weak & operator = (const class GGS_enumToUintRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_enumToUintRoutineIR_2E_weak init_nil (void) {
    GGS_enumToUintRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_enumToUintRoutineIR bang_enumToUintRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_enumToUintRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_enumToUintRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_enumToUintRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_enumToUintRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumToUintRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension mutating proc '@instructionListIR appendNOP'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendNOP (class GGS_instructionListIR & ioObject,
                                class Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @nopIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_nopIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_nopIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_nopIR (const class cPtr_nopIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_nopIR init (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_nopIR extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nopIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nopIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @nopIR class
//--------------------------------------------------------------------------------------------------

class cPtr_nopIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void nopIR_init (Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_nopIR (Compiler * inCompiler
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
// Phase 1: @nopIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_nopIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_nopIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_nopIR_2E_weak (const class GGS_nopIR & inSource) ;

  public: GGS_nopIR_2E_weak & operator = (const class GGS_nopIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_nopIR_2E_weak init_nil (void) {
    GGS_nopIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_nopIR bang_nopIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_nopIR unwrappedValue (void) const ;

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
  public: static GGS_nopIR_2E_weak extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_nopIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_nopIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nopIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionAST_2E_weak (const class GGS_forInstructionAST & inSource) ;

  public: GGS_forInstructionAST_2E_weak & operator = (const class GGS_forInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionAST_2E_weak init_nil (void) {
    GGS_forInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionAST bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_forInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionOnArrayIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnArrayIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnArrayIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionOnArrayIR (const class cPtr_forInstructionOnArrayIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mEnumeratedValueName (void) const ;
  public: void setProperty_mEnumeratedValueName (const GGS_string & inValue) ;

  public: class GGS_lstring readProperty_mIteratedObjectName (void) const ;
  public: void setProperty_mIteratedObjectName (const GGS_lstring & inValue) ;

  public: class GGS_objectIR readProperty_mIteratedObject (void) const ;
  public: void setProperty_mIteratedObject (const GGS_objectIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mWhileInstructionList (void) const ;
  public: void setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_string readProperty_mWhileExpressionBooleanResult_5F_llvmName (void) const ;
  public: void setProperty_mWhileExpressionBooleanResult_5F_llvmName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_uint readProperty_mArraySize (void) const ;
  public: void setProperty_mArraySize (const GGS_uint & inValue) ;

  public: class GGS_stringset readProperty_mInvokedFunctionSet (void) const ;
  public: void setProperty_mInvokedFunctionSet (const GGS_stringset & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionOnArrayIR init_21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_lstring & inOperand1,
                                                                                       const class GGS_objectIR & inOperand2,
                                                                                       const class GGS_instructionListIR & inOperand3,
                                                                                       const class GGS_string & inOperand4,
                                                                                       const class GGS_instructionListIR & inOperand5,
                                                                                       const class GGS_omnibusType & inOperand6,
                                                                                       const class GGS_uint & inOperand7,
                                                                                       const class GGS_stringset & inOperand8,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionOnArrayIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnArrayIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionOnArrayIR class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionOnArrayIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionOnArrayIR_init_21__21__21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                 const class GGS_lstring & inOperand1,
                                                                                 const class GGS_objectIR & inOperand2,
                                                                                 const class GGS_instructionListIR & inOperand3,
                                                                                 const class GGS_string & inOperand4,
                                                                                 const class GGS_instructionListIR & inOperand5,
                                                                                 const class GGS_omnibusType & inOperand6,
                                                                                 const class GGS_uint & inOperand7,
                                                                                 const class GGS_stringset & inOperand8,
                                                                                 Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mEnumeratedValueName ;
  public: GGS_lstring mProperty_mIteratedObjectName ;
  public: GGS_objectIR mProperty_mIteratedObject ;
  public: GGS_instructionListIR mProperty_mWhileInstructionList ;
  public: GGS_string mProperty_mWhileExpressionBooleanResult_5F_llvmName ;
  public: GGS_instructionListIR mProperty_mDoInstructionList ;
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_uint mProperty_mArraySize ;
  public: GGS_stringset mProperty_mInvokedFunctionSet ;


//--- Default constructor
  public: cPtr_forInstructionOnArrayIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionOnArrayIR (const GGS_string & in_mEnumeratedValueName,
                                        const GGS_lstring & in_mIteratedObjectName,
                                        const GGS_objectIR & in_mIteratedObject,
                                        const GGS_instructionListIR & in_mWhileInstructionList,
                                        const GGS_string & in_mWhileExpressionBooleanResult_5F_llvmName,
                                        const GGS_instructionListIR & in_mDoInstructionList,
                                        const GGS_omnibusType & in_mElementType,
                                        const GGS_uint & in_mArraySize,
                                        const GGS_stringset & in_mInvokedFunctionSet,
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
// Phase 1: @forInstructionOnArrayIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnArrayIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnArrayIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionOnArrayIR_2E_weak (const class GGS_forInstructionOnArrayIR & inSource) ;

  public: GGS_forInstructionOnArrayIR_2E_weak & operator = (const class GGS_forInstructionOnArrayIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionOnArrayIR_2E_weak init_nil (void) {
    GGS_forInstructionOnArrayIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionOnArrayIR bang_forInstructionOnArrayIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionOnArrayIR unwrappedValue (void) const ;

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
  public: static GGS_forInstructionOnArrayIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionOnArrayIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnArrayIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnArrayIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @forInstructionOnLiteralStringIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnLiteralStringIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnLiteralStringIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forInstructionOnLiteralStringIR (const class cPtr_forInstructionOnLiteralStringIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_string & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

  public: class GGS_objectIR readProperty_mStringElementIteratedObject (void) const ;
  public: void setProperty_mStringElementIteratedObject (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mLiteralStringType (void) const ;
  public: void setProperty_mLiteralStringType (const GGS_omnibusType & inValue) ;

  public: class GGS_instructionListIR readProperty_mWhileInstructionList (void) const ;
  public: void setProperty_mWhileInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_objectIR readProperty_mWhileExpressionResult (void) const ;
  public: void setProperty_mWhileExpressionResult (const GGS_objectIR & inValue) ;

  public: class GGS_instructionListIR readProperty_mDoInstructionList (void) const ;
  public: void setProperty_mDoInstructionList (const GGS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forInstructionOnLiteralStringIR init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                       const class GGS_location & inOperand1,
                                                                                       const class GGS_objectIR & inOperand2,
                                                                                       const class GGS_omnibusType & inOperand3,
                                                                                       const class GGS_instructionListIR & inOperand4,
                                                                                       const class GGS_objectIR & inOperand5,
                                                                                       const class GGS_instructionListIR & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forInstructionOnLiteralStringIR extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnLiteralStringIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @forInstructionOnLiteralStringIR class
//--------------------------------------------------------------------------------------------------

class cPtr_forInstructionOnLiteralStringIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void forInstructionOnLiteralStringIR_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                                 const class GGS_location & inOperand1,
                                                                                 const class GGS_objectIR & inOperand2,
                                                                                 const class GGS_omnibusType & inOperand3,
                                                                                 const class GGS_instructionListIR & inOperand4,
                                                                                 const class GGS_objectIR & inOperand5,
                                                                                 const class GGS_instructionListIR & inOperand6,
                                                                                 Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mVarName ;
  public: GGS_location mProperty_mLocation ;
  public: GGS_objectIR mProperty_mStringElementIteratedObject ;
  public: GGS_omnibusType mProperty_mLiteralStringType ;
  public: GGS_instructionListIR mProperty_mWhileInstructionList ;
  public: GGS_objectIR mProperty_mWhileExpressionResult ;
  public: GGS_instructionListIR mProperty_mDoInstructionList ;


//--- Default constructor
  public: cPtr_forInstructionOnLiteralStringIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forInstructionOnLiteralStringIR (const GGS_string & in_mVarName,
                                                const GGS_location & in_mLocation,
                                                const GGS_objectIR & in_mStringElementIteratedObject,
                                                const GGS_omnibusType & in_mLiteralStringType,
                                                const GGS_instructionListIR & in_mWhileInstructionList,
                                                const GGS_objectIR & in_mWhileExpressionResult,
                                                const GGS_instructionListIR & in_mDoInstructionList,
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
// Phase 1: @forInstructionOnLiteralStringIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_forInstructionOnLiteralStringIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forInstructionOnLiteralStringIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forInstructionOnLiteralStringIR_2E_weak (const class GGS_forInstructionOnLiteralStringIR & inSource) ;

  public: GGS_forInstructionOnLiteralStringIR_2E_weak & operator = (const class GGS_forInstructionOnLiteralStringIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forInstructionOnLiteralStringIR_2E_weak init_nil (void) {
    GGS_forInstructionOnLiteralStringIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forInstructionOnLiteralStringIR bang_forInstructionOnLiteralStringIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_forInstructionOnLiteralStringIR unwrappedValue (void) const ;

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
  public: static GGS_forInstructionOnLiteralStringIR_2E_weak extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forInstructionOnLiteralStringIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forInstructionOnLiteralStringIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneRoutineCallIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_standaloneRoutineCallIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_standaloneRoutineCallIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_standaloneRoutineCallIR (const class cPtr_standaloneRoutineCallIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mResult (void) const ;
  public: void setProperty_mResult (const GGS_objectIR & inValue) ;

  public: class GGS_lstring readProperty_mFunctionMangledName (void) const ;
  public: void setProperty_mFunctionMangledName (const GGS_lstring & inValue) ;

  public: class GGS_string readProperty_mFunctionNameForGeneration (void) const ;
  public: void setProperty_mFunctionNameForGeneration (const GGS_string & inValue) ;

  public: class GGS_procCallEffectiveParameterListIR readProperty_mArgumentList (void) const ;
  public: void setProperty_mArgumentList (const GGS_procCallEffectiveParameterListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_standaloneRoutineCallIR init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                   const class GGS_lstring & inOperand1,
                                                                   const class GGS_string & inOperand2,
                                                                   const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_standaloneRoutineCallIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneRoutineCallIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @standaloneRoutineCallIR class
//--------------------------------------------------------------------------------------------------

class cPtr_standaloneRoutineCallIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void standaloneRoutineCallIR_init_21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                             const class GGS_lstring & inOperand1,
                                                             const class GGS_string & inOperand2,
                                                             const class GGS_procCallEffectiveParameterListIR & inOperand3,
                                                             Compiler * inCompiler) ;


//--- Extension proc enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mResult ;
  public: GGS_lstring mProperty_mFunctionMangledName ;
  public: GGS_string mProperty_mFunctionNameForGeneration ;
  public: GGS_procCallEffectiveParameterListIR mProperty_mArgumentList ;


//--- Default constructor
  public: cPtr_standaloneRoutineCallIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_standaloneRoutineCallIR (const GGS_objectIR & in_mResult,
                                        const GGS_lstring & in_mFunctionMangledName,
                                        const GGS_string & in_mFunctionNameForGeneration,
                                        const GGS_procCallEffectiveParameterListIR & in_mArgumentList,
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
// Phase 1: @standaloneRoutineCallIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_standaloneRoutineCallIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standaloneRoutineCallIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standaloneRoutineCallIR_2E_weak (const class GGS_standaloneRoutineCallIR & inSource) ;

  public: GGS_standaloneRoutineCallIR_2E_weak & operator = (const class GGS_standaloneRoutineCallIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_standaloneRoutineCallIR_2E_weak init_nil (void) {
    GGS_standaloneRoutineCallIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_standaloneRoutineCallIR bang_standaloneRoutineCallIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_standaloneRoutineCallIR unwrappedValue (void) const ;

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
  public: static GGS_standaloneRoutineCallIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standaloneRoutineCallIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneRoutineCallIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @isrDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_isrDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_isrDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_isrDeclarationAST_2E_weak (const class GGS_isrDeclarationAST & inSource) ;

  public: GGS_isrDeclarationAST_2E_weak & operator = (const class GGS_isrDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_isrDeclarationAST_2E_weak init_nil (void) {
    GGS_isrDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_isrDeclarationAST bang_isrDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_isrDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_isrDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_isrDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_isrDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @decoratedISRDeclaration reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedISRDeclaration : public GGS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GGS_decoratedISRDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_decoratedISRDeclaration (const class cPtr_decoratedISRDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mISRName (void) const ;
  public: void setProperty_mISRName (const GGS_lstring & inValue) ;

  public: class GGS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GGS_mode & inValue) ;

  public: class GGS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_decoratedISRDeclaration init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                               const class GGS_mode & inOperand1,
                                                               const class GGS_lstring & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_decoratedISRDeclaration extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedISRDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @decoratedISRDeclaration class
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedISRDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedISRDeclaration_init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                         const class GGS_mode & inOperand1,
                                                         const class GGS_lstring & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension proc semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GGS_semanticContext arg_inContext,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mISRName ;
  public: GGS_mode mProperty_mMode ;
  public: GGS_lstring mProperty_mDriverName ;


//--- Default constructor
  public: cPtr_decoratedISRDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedISRDeclaration (const GGS_lstring & in_mISRName,
                                        const GGS_mode & in_mMode,
                                        const GGS_lstring & in_mDriverName,
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
// Phase 1: @decoratedISRDeclaration_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_decoratedISRDeclaration_2E_weak : public GGS_abstractDecoratedDeclaration_2E_weak {
//--------------------------------- Default constructor
  public: GGS_decoratedISRDeclaration_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_decoratedISRDeclaration_2E_weak (const class GGS_decoratedISRDeclaration & inSource) ;

  public: GGS_decoratedISRDeclaration_2E_weak & operator = (const class GGS_decoratedISRDeclaration & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_decoratedISRDeclaration_2E_weak init_nil (void) {
    GGS_decoratedISRDeclaration_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_decoratedISRDeclaration bang_decoratedISRDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_decoratedISRDeclaration unwrappedValue (void) const ;

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
  public: static GGS_decoratedISRDeclaration_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_decoratedISRDeclaration_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_decoratedISRDeclaration_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@interruptMapIR interruptCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_interruptCodeGeneration (const class GGS_interruptMapIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              class GGS_string & io_ioAScode,
                                              const class GGS_string constin_inUndefinedInterruptString,
                                              const class GGS_string constin_inXTRInterruptHandlerString,
                                              const class GGS_generationContext constin_inGenerationContext,
                                              class GGS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//--------------------------------------------------------------------------------------------------

class GGS_string function_llvmNameForSectionInterrupt (const class GGS_string & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmNameForServiceInterrupt (const class GGS_lstring & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofExpressionAST_2E_weak (const class GGS_sizeofExpressionAST & inSource) ;

  public: GGS_sizeofExpressionAST_2E_weak & operator = (const class GGS_sizeofExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sizeofExpressionAST_2E_weak init_nil (void) {
    GGS_sizeofExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sizeofExpressionAST bang_sizeofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sizeofExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_sizeofExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofTypeAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofTypeAST_2E_weak (const class GGS_sizeofTypeAST & inSource) ;

  public: GGS_sizeofTypeAST_2E_weak & operator = (const class GGS_sizeofTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sizeofTypeAST_2E_weak init_nil (void) {
    GGS_sizeofTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sizeofTypeAST bang_sizeofTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sizeofTypeAST unwrappedValue (void) const ;

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
  public: static GGS_sizeofTypeAST_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofTypeAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofTypeAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sizeofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_sizeofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_sizeofInstructionIR (const class cPtr_sizeofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_omnibusType readProperty_mSourceType (void) const ;
  public: void setProperty_mSourceType (const GGS_omnibusType & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sizeofInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                       const class GGS_omnibusType & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sizeofInstructionIR extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @sizeofInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_sizeofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void sizeofInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                 const class GGS_omnibusType & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_omnibusType mProperty_mSourceType ;


//--- Default constructor
  public: cPtr_sizeofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_sizeofInstructionIR (const GGS_objectIR & in_mTarget,
                                    const GGS_omnibusType & in_mSourceType,
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
// Phase 1: @sizeofInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_sizeofInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_sizeofInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_sizeofInstructionIR_2E_weak (const class GGS_sizeofInstructionIR & inSource) ;

  public: GGS_sizeofInstructionIR_2E_weak & operator = (const class GGS_sizeofInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_sizeofInstructionIR_2E_weak init_nil (void) {
    GGS_sizeofInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_sizeofInstructionIR bang_sizeofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_sizeofInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_sizeofInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sizeofInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_sizeofInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sizeofInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @standaloneFunctionInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_standaloneFunctionInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_standaloneFunctionInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_standaloneFunctionInExpressionAST_2E_weak (const class GGS_standaloneFunctionInExpressionAST & inSource) ;

  public: GGS_standaloneFunctionInExpressionAST_2E_weak & operator = (const class GGS_standaloneFunctionInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_standaloneFunctionInExpressionAST_2E_weak init_nil (void) {
    GGS_standaloneFunctionInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_standaloneFunctionInExpressionAST bang_standaloneFunctionInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_standaloneFunctionInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_standaloneFunctionInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_standaloneFunctionInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_standaloneFunctionInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptionPanicCode_2E_code struct
//--------------------------------------------------------------------------------------------------

class GGS_interruptionPanicCode_2E_code : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_value ;
  public: inline GGS_lbigint readProperty_value (void) const {
    return mProperty_value ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_interruptionPanicCode_2E_code (void) ;

//--------------------------------- Property setters
  public: inline void setter_setValue (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_value = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_interruptionPanicCode_2E_code (const GGS_lbigint & in_value) ;

//--------------------------------- Copy constructor
  public: GGS_interruptionPanicCode_2E_code (const GGS_interruptionPanicCode_2E_code & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_interruptionPanicCode_2E_code & operator = (const GGS_interruptionPanicCode_2E_code & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptionPanicCode_2E_code init_21_ (const class GGS_lbigint & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptionPanicCode_2E_code extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code ;

//--------------------------------------------------------------------------------------------------
// Phase 1: interruptionPanicCode.code? optional
//--------------------------------------------------------------------------------------------------

class GGS_interruptionPanicCode_2E_code_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_interruptionPanicCode_2E_code mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_interruptionPanicCode_2E_code_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_interruptionPanicCode_2E_code_3F_ (const GGS_interruptionPanicCode_2E_code & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_interruptionPanicCode_2E_code_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_interruptionPanicCode_2E_code unwrappedValue (void) const {
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
  public: static GGS_interruptionPanicCode_2E_code_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionPanicCode_2E_code_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @interruptionConfigurationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_interruptionConfigurationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mInterruptName ;
  public: inline GGS_lstring readProperty_mInterruptName (void) const {
    return mProperty_mInterruptName ;
  }

  public: GGS_interruptionPanicCode mProperty_mInterruptionPanicCode ;
  public: inline GGS_interruptionPanicCode readProperty_mInterruptionPanicCode (void) const {
    return mProperty_mInterruptionPanicCode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_interruptionConfigurationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInterruptName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptName = inValue ;
  }

  public: inline void setter_setMInterruptionPanicCode (const GGS_interruptionPanicCode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInterruptionPanicCode = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_interruptionConfigurationList_2E_element (const GGS_lstring & in_mInterruptName,
                                                        const GGS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//--------------------------------- Copy constructor
  public: GGS_interruptionConfigurationList_2E_element (const GGS_interruptionConfigurationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_interruptionConfigurationList_2E_element & operator = (const GGS_interruptionConfigurationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_interruptionConfigurationList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                            const class GGS_interruptionPanicCode & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_interruptionConfigurationList_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @configurationDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_configurationDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_configurationDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_configurationDeclarationAST_2E_weak (const class GGS_configurationDeclarationAST & inSource) ;

  public: GGS_configurationDeclarationAST_2E_weak & operator = (const class GGS_configurationDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_configurationDeclarationAST_2E_weak init_nil (void) {
    GGS_configurationDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_configurationDeclarationAST bang_configurationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_configurationDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_configurationDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_configurationDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_configurationDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configurationDeclarationAST_2E_weak ;

