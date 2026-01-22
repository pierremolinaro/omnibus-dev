#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
// Phase 1: @omnibusInfixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperatorUsage_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_omnibusInfixOperatorUsage_2E_weak (const class GGS_omnibusInfixOperatorUsage & inSource) ;

  public: GGS_omnibusInfixOperatorUsage_2E_weak & operator = (const class GGS_omnibusInfixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_omnibusInfixOperatorUsage_2E_weak init_nil (void) {
    GGS_omnibusInfixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_omnibusInfixOperatorUsage bang_omnibusInfixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_omnibusInfixOperatorUsage unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@omnibusInfixOperatorUsage generateCode'
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
// Phase 1: @allocaList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_allocaList final {
  public: DownEnumerator_allocaList (const class GGS_allocaList & inList) ;

  public: ~ DownEnumerator_allocaList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_allocaList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_allocaList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_allocaList (const DownEnumerator_allocaList &) = delete ;
  private: DownEnumerator_allocaList & operator = (const DownEnumerator_allocaList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_allocaList final {
  public: UpEnumerator_allocaList (const class GGS_allocaList & inList)  ;

  public: ~ UpEnumerator_allocaList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GGS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_allocaList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_allocaList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_allocaList (const UpEnumerator_allocaList &) = delete ;
  private: UpEnumerator_allocaList & operator = (const UpEnumerator_allocaList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @allocaList list
//--------------------------------------------------------------------------------------------------

class GGS_allocaList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_allocaList_2E_element> mArray ;

//--- Default constructor
  public: GGS_allocaList (void) ;

//--- Destructor
  public: virtual ~ GGS_allocaList (void) = default ;

//--- Copy
  public: GGS_allocaList (const GGS_allocaList &) = default ;
  public: GGS_allocaList & operator = (const GGS_allocaList &) = default ;

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
  public : inline GenericArray <GGS_allocaList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_allocaList subList (const int32_t inStart,
                                   const int32_t inLength,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mVarLLVMName,
                                                 const class GGS_omnibusType & in_mLLVMType,
                                                 const class GGS_bool & in_mFormalInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_allocaList init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_allocaList extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_allocaList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                const class GGS_omnibusType & inOperand1,
                                                                const class GGS_bool & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_allocaList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_omnibusType & inOperand1,
                                                    const class GGS_bool & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_allocaList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_allocaList add_operation (const GGS_allocaList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_omnibusType constinArgument1,
                                               class GGS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_omnibusType constinArgument1,
                                                      class GGS_bool constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_omnibusType & outArgument1,
                                                 class GGS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_omnibusType & outArgument1,
                                                class GGS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_omnibusType & outArgument1,
                                                      class GGS_bool & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalInputArgumentAtIndex (class GGS_bool constinArgument0,
                                                                       class GGS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLLVMTypeAtIndex (class GGS_omnibusType constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarLLVMNameAtIndex (class GGS_string constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_omnibusType & outArgument1,
                                              class GGS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_omnibusType & outArgument1,
                                             class GGS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_mFormalInputArgumentAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mLLVMTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mVarLLVMNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_allocaList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_allocaList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_allocaList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_allocaList ;
  friend class DownEnumerator_allocaList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_allocaList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_instructionListIR final {
  public: DownEnumerator_instructionListIR (const class GGS_instructionListIR & inList) ;

  public: ~ DownEnumerator_instructionListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_instructionListIR (const DownEnumerator_instructionListIR &) = delete ;
  private: DownEnumerator_instructionListIR & operator = (const DownEnumerator_instructionListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_instructionListIR final {
  public: UpEnumerator_instructionListIR (const class GGS_instructionListIR & inList)  ;

  public: ~ UpEnumerator_instructionListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_instructionListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_instructionListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_instructionListIR (const UpEnumerator_instructionListIR &) = delete ;
  private: UpEnumerator_instructionListIR & operator = (const UpEnumerator_instructionListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @instructionListIR list
//--------------------------------------------------------------------------------------------------

class GGS_instructionListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_instructionListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_instructionListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_instructionListIR (void) = default ;

//--- Copy
  public: GGS_instructionListIR (const GGS_instructionListIR &) = default ;
  public: GGS_instructionListIR & operator = (const GGS_instructionListIR &) = default ;

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
  public : inline GenericArray <GGS_instructionListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_instructionListIR subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_instructionListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractInstructionIR & in_mInstructionGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListIR init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListIR extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionListIR class_func_listWithValue (const class GGS_abstractInstructionIR & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_instructionListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_instructionListIR_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_instructionListIR add_operation (const GGS_instructionListIR & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractInstructionIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractInstructionIR constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractInstructionIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractInstructionIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractInstructionIR & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationAtIndex (class GGS_abstractInstructionIR constinArgument0,
                                                                         class GGS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractInstructionIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractInstructionIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractInstructionIR getter_mInstructionGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_instructionListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_instructionListIR ;
  friend class DownEnumerator_instructionListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticTemporariesStruct struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_semanticTemporariesStruct (const GGS_uint & in_mTemporaryIndex,
                                         const GGS_panicRoutinePriorityMap & in_mPanicSetupRoutinePriorityMap,
                                         const GGS_panicRoutinePriorityMap & in_mPanicLoopRoutinePriorityMap,
                                         const GGS_staticListInvokedFunctionSetMap & in_mStaticArrayMapForTemporaries,
                                         const GGS_stringset & in_mInitializedDriverSet) ;

//--------------------------------- Copy constructor
  public: GGS_semanticTemporariesStruct (const GGS_semanticTemporariesStruct & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_semanticTemporariesStruct & operator = (const GGS_semanticTemporariesStruct & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTemporariesStruct ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@infixOperatorMap generateInfixOperatorCode'
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
//   enum omnibusInfixOperator
//--------------------------------------------------------------------------------------------------

class GGS_omnibusInfixOperator : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_omnibusInfixOperator (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_lessThan,
    enum_infEqual,
    enum_bitWiseAndOp,
    enum_bitWiseOrOp,
    enum_bitWiseXorOp,
    enum_addOp,
    enum_addOpNoOvf,
    enum_subOp,
    enum_subOpNoOvf,
    enum_mulOp,
    enum_mulOpNoOvf,
    enum_divOp,
    enum_divOpNoOvf,
    enum_modOp,
    enum_modOpNoOvf,
    enum_leftShiftOp,
    enum_rightShiftOp
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
  public: static GGS_omnibusInfixOperator extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_omnibusInfixOperator class_func_addOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_addOpNoOvf (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_bitWiseAndOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_bitWiseOrOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_bitWiseXorOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_divOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_divOpNoOvf (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_infEqual (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_leftShiftOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_lessThan (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_modOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_modOpNoOvf (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_mulOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_mulOpNoOvf (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_rightShiftOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_subOp (LOCATION_ARGS) ;

  public: static class GGS_omnibusInfixOperator class_func_subOpNoOvf (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAddOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAddOpNoOvf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBitWiseAndOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBitWiseOrOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBitWiseXorOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDivOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDivOpNoOvf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInfEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLeftShiftOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLessThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isModOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isModOpNoOvf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMulOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isMulOpNoOvf (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRightShiftOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSubOp (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSubOpNoOvf (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusInfixOperator ;

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
//
//Extension getter '@objectIR type' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType extensionGetter_type (const class GGS_objectIR & inObject,
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: GGS_string mProperty_mLLVMOperation ;


//--- Default constructor
  public: cPtr_inlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfixOperatorUsage (const GGS_string & in_mLLVMOperation,
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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_driverDeclarationListAST final {
  public: DownEnumerator_driverDeclarationListAST (const class GGS_driverDeclarationListAST & inList) ;

  public: ~ DownEnumerator_driverDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_driverDeclarationAST current_mDriver (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_driverDeclarationListAST (const DownEnumerator_driverDeclarationListAST &) = delete ;
  private: DownEnumerator_driverDeclarationListAST & operator = (const DownEnumerator_driverDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_driverDeclarationListAST final {
  public: UpEnumerator_driverDeclarationListAST (const class GGS_driverDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_driverDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_driverDeclarationAST current_mDriver (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_driverDeclarationListAST (const UpEnumerator_driverDeclarationListAST &) = delete ;
  private: UpEnumerator_driverDeclarationListAST & operator = (const UpEnumerator_driverDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @driverDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_driverDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_driverDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_driverDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_driverDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_driverDeclarationListAST (const GGS_driverDeclarationListAST &) = default ;
  public: GGS_driverDeclarationListAST & operator = (const GGS_driverDeclarationListAST &) = default ;

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
  public : inline GenericArray <GGS_driverDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_driverDeclarationListAST subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_driverDeclarationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_driverDeclarationAST & in_mDriver
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverDeclarationListAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverDeclarationListAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverDeclarationListAST class_func_listWithValue (const class GGS_driverDeclarationAST & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_driverDeclarationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_driverDeclarationAST & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_driverDeclarationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_driverDeclarationListAST add_operation (const GGS_driverDeclarationListAST & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_driverDeclarationAST constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_driverDeclarationAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_driverDeclarationAST & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_driverDeclarationAST & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_driverDeclarationAST & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverAtIndex (class GGS_driverDeclarationAST constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_driverDeclarationAST & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_driverDeclarationAST & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverDeclarationAST getter_mDriverAtIndex (const class GGS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverDeclarationListAST ;
  friend class DownEnumerator_driverDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverDeclarationAST struct
//--------------------------------------------------------------------------------------------------

class GGS_driverDeclarationAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDriverName ;
  public: inline GGS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GGS_lstringlist mProperty_mDriverDependanceList ;
  public: inline GGS_lstringlist readProperty_mDriverDependanceList (void) const {
    return mProperty_mDriverDependanceList ;
  }

  public: GGS_structurePropertyListAST mProperty_mPropertyListAST ;
  public: inline GGS_structurePropertyListAST readProperty_mPropertyListAST (void) const {
    return mProperty_mPropertyListAST ;
  }

  public: GGS_location mProperty_mBootLocation ;
  public: inline GGS_location readProperty_mBootLocation (void) const {
    return mProperty_mBootLocation ;
  }

  public: GGS_instructionListAST mProperty_mBootInstructionList ;
  public: inline GGS_instructionListAST readProperty_mBootInstructionList (void) const {
    return mProperty_mBootInstructionList ;
  }

  public: GGS_location mProperty_mBootEndLocation ;
  public: inline GGS_location readProperty_mBootEndLocation (void) const {
    return mProperty_mBootEndLocation ;
  }

  public: GGS_location mProperty_mStartupLocation ;
  public: inline GGS_location readProperty_mStartupLocation (void) const {
    return mProperty_mStartupLocation ;
  }

  public: GGS_instructionListAST mProperty_mStartupInstructionList ;
  public: inline GGS_instructionListAST readProperty_mStartupInstructionList (void) const {
    return mProperty_mStartupInstructionList ;
  }

  public: GGS_location mProperty_mStartupEndLocation ;
  public: inline GGS_location readProperty_mStartupEndLocation (void) const {
    return mProperty_mStartupEndLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverDeclarationAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMDriverDependanceList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverDependanceList = inValue ;
  }

  public: inline void setter_setMPropertyListAST (const GGS_structurePropertyListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyListAST = inValue ;
  }

  public: inline void setter_setMBootLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBootLocation = inValue ;
  }

  public: inline void setter_setMBootInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBootInstructionList = inValue ;
  }

  public: inline void setter_setMBootEndLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBootEndLocation = inValue ;
  }

  public: inline void setter_setMStartupLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartupLocation = inValue ;
  }

  public: inline void setter_setMStartupInstructionList (const GGS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartupInstructionList = inValue ;
  }

  public: inline void setter_setMStartupEndLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStartupEndLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverDeclarationAST (const GGS_lstring & in_mDriverName,
                                    const GGS_lstringlist & in_mDriverDependanceList,
                                    const GGS_structurePropertyListAST & in_mPropertyListAST,
                                    const GGS_location & in_mBootLocation,
                                    const GGS_instructionListAST & in_mBootInstructionList,
                                    const GGS_location & in_mBootEndLocation,
                                    const GGS_location & in_mStartupLocation,
                                    const GGS_instructionListAST & in_mStartupInstructionList,
                                    const GGS_location & in_mStartupEndLocation) ;

//--------------------------------- Copy constructor
  public: GGS_driverDeclarationAST (const GGS_driverDeclarationAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverDeclarationAST & operator = (const GGS_driverDeclarationAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverDeclarationAST init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                    const class GGS_lstringlist & inOperand1,
                                                                                    const class GGS_structurePropertyListAST & inOperand2,
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
  public: static GGS_driverDeclarationAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_driverDeclarationAST mProperty_mDriver ;
  public: inline GGS_driverDeclarationAST readProperty_mDriver (void) const {
    return mProperty_mDriver ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriver (const GGS_driverDeclarationAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriver = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverDeclarationListAST_2E_element (const GGS_driverDeclarationAST & in_mDriver) ;

//--------------------------------- Copy constructor
  public: GGS_driverDeclarationListAST_2E_element (const GGS_driverDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverDeclarationListAST_2E_element & operator = (const GGS_driverDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverDeclarationListAST_2E_element init_21_ (const class GGS_driverDeclarationAST & inOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationArgumentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_driverInstanciationArgumentListAST final {
  public: DownEnumerator_driverInstanciationArgumentListAST (const class GGS_driverInstanciationArgumentListAST & inList) ;

  public: ~ DownEnumerator_driverInstanciationArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverInstanciationArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverInstanciationArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_driverInstanciationArgumentListAST (const DownEnumerator_driverInstanciationArgumentListAST &) = delete ;
  private: DownEnumerator_driverInstanciationArgumentListAST & operator = (const DownEnumerator_driverInstanciationArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_driverInstanciationArgumentListAST final {
  public: UpEnumerator_driverInstanciationArgumentListAST (const class GGS_driverInstanciationArgumentListAST & inList)  ;

  public: ~ UpEnumerator_driverInstanciationArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
  public: class GGS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverInstanciationArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverInstanciationArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_driverInstanciationArgumentListAST (const UpEnumerator_driverInstanciationArgumentListAST &) = delete ;
  private: UpEnumerator_driverInstanciationArgumentListAST & operator = (const UpEnumerator_driverInstanciationArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @driverInstanciationArgumentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationArgumentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_driverInstanciationArgumentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_driverInstanciationArgumentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_driverInstanciationArgumentListAST (void) = default ;

//--- Copy
  public: GGS_driverInstanciationArgumentListAST (const GGS_driverInstanciationArgumentListAST &) = default ;
  public: GGS_driverInstanciationArgumentListAST & operator = (const GGS_driverInstanciationArgumentListAST &) = default ;

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
  public : inline GenericArray <GGS_driverInstanciationArgumentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_driverInstanciationArgumentListAST subList (const int32_t inStart,
                                                           const int32_t inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_driverInstanciationArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSelector,
                                                 const class GGS_expressionAST & in_mExpression
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationArgumentListAST init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationArgumentListAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationArgumentListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_expressionAST & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_driverInstanciationArgumentListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_expressionAST & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_driverInstanciationArgumentListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_driverInstanciationArgumentListAST add_operation (const GGS_driverInstanciationArgumentListAST & inOperand,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_expressionAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_expressionAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_expressionAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_expressionAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_expressionAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionAtIndex (class GGS_expressionAST constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_expressionAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_expressionAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_expressionAST getter_mExpressionAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverInstanciationArgumentListAST ;
  friend class DownEnumerator_driverInstanciationArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @expressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_expressionAST : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void expressionAST_init (Compiler * inCompiler) ;


//--- Extension method addDependenceEdgeForStaticExpression
  public: virtual void method_addDependenceEdgeForStaticExpression (const class GGS_lstring arg_inConstantName,
           class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method analyzeExpression
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
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_expressionAST (Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

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
// Phase 1: @driverInstanciationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_driverInstanciationListAST final {
  public: DownEnumerator_driverInstanciationListAST (const class GGS_driverInstanciationListAST & inList) ;

  public: ~ DownEnumerator_driverInstanciationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public: class GGS_driverInstanciationArgumentListAST current_mDriverInstanciationArgumentList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverInstanciationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverInstanciationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_driverInstanciationListAST (const DownEnumerator_driverInstanciationListAST &) = delete ;
  private: DownEnumerator_driverInstanciationListAST & operator = (const DownEnumerator_driverInstanciationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_driverInstanciationListAST final {
  public: UpEnumerator_driverInstanciationListAST (const class GGS_driverInstanciationListAST & inList)  ;

  public: ~ UpEnumerator_driverInstanciationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public: class GGS_driverInstanciationArgumentListAST current_mDriverInstanciationArgumentList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverInstanciationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverInstanciationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_driverInstanciationListAST (const UpEnumerator_driverInstanciationListAST &) = delete ;
  private: UpEnumerator_driverInstanciationListAST & operator = (const UpEnumerator_driverInstanciationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @driverInstanciationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_driverInstanciationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_driverInstanciationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_driverInstanciationListAST (void) = default ;

//--- Copy
  public: GGS_driverInstanciationListAST (const GGS_driverInstanciationListAST &) = default ;
  public: GGS_driverInstanciationListAST & operator = (const GGS_driverInstanciationListAST &) = default ;

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
  public : inline GenericArray <GGS_driverInstanciationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_driverInstanciationListAST subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_driverInstanciationListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mDriverName,
                                                 const class GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationListAST init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationListAST extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_driverInstanciationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                const class GGS_driverInstanciationArgumentListAST & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_driverInstanciationListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_driverInstanciationArgumentListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_driverInstanciationListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_driverInstanciationListAST add_operation (const GGS_driverInstanciationListAST & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_driverInstanciationArgumentListAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_driverInstanciationArgumentListAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_driverInstanciationArgumentListAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_driverInstanciationArgumentListAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_driverInstanciationArgumentListAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverInstanciationArgumentListAtIndex (class GGS_driverInstanciationArgumentListAST constinArgument0,
                                                                                   class GGS_uint constinArgument1,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_driverInstanciationArgumentListAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_driverInstanciationArgumentListAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationArgumentListAST getter_mDriverInstanciationArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDriverNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_driverInstanciationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverInstanciationListAST ;
  friend class DownEnumerator_driverInstanciationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @driverInstanciationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_driverInstanciationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDriverName ;
  public: inline GGS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GGS_driverInstanciationArgumentListAST mProperty_mDriverInstanciationArgumentList ;
  public: inline GGS_driverInstanciationArgumentListAST readProperty_mDriverInstanciationArgumentList (void) const {
    return mProperty_mDriverInstanciationArgumentList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_driverInstanciationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentList (const GGS_driverInstanciationArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_driverInstanciationListAST_2E_element (const GGS_lstring & in_mDriverName,
                                                     const GGS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList) ;

//--------------------------------- Copy constructor
  public: GGS_driverInstanciationListAST_2E_element (const GGS_driverInstanciationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_driverInstanciationListAST_2E_element & operator = (const GGS_driverInstanciationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_driverInstanciationListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_driverInstanciationArgumentListAST & inOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_driverInstanciationListAST_2E_element extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2E_element ;

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
// Phase 1: @driverListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_driverListIR final {
  public: DownEnumerator_driverListIR (const class GGS_driverListIR & inList) ;

  public: ~ DownEnumerator_driverListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_operandIRList current_mInitialValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_driverListIR (const DownEnumerator_driverListIR &) = delete ;
  private: DownEnumerator_driverListIR & operator = (const DownEnumerator_driverListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_driverListIR final {
  public: UpEnumerator_driverListIR (const class GGS_driverListIR & inList)  ;

  public: ~ UpEnumerator_driverListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mDriverName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mType (LOCATION_ARGS) const ;
  public: class GGS_operandIRList current_mInitialValueList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_driverListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_driverListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_driverListIR (const UpEnumerator_driverListIR &) = delete ;
  private: UpEnumerator_driverListIR & operator = (const UpEnumerator_driverListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @driverListIR list
//--------------------------------------------------------------------------------------------------

class GGS_driverListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_driverListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_driverListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_driverListIR (void) = default ;

//--- Copy
  public: GGS_driverListIR (const GGS_driverListIR &) = default ;
  public: GGS_driverListIR & operator = (const GGS_driverListIR &) = default ;

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
  public : inline GenericArray <GGS_driverListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_driverListIR subList (const int32_t inStart,
                                     const int32_t inLength,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_driverListIR (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_driverListIR class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                  const class GGS_omnibusType & inOperand1,
                                                                  const class GGS_operandIRList & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_driverListIR inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_omnibusType & inOperand1,
                                                    const class GGS_operandIRList & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_driverListIR_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDriverNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_operandIRList getter_mInitialValueListAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverListIR ;
  friend class DownEnumerator_driverListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverListIR ;

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
// Phase 1: @operandIRList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_operandIRList_2E_element (const GGS_objectIR & in_mOperand) ;

//--------------------------------- Copy constructor
  public: GGS_operandIRList_2E_element (const GGS_operandIRList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_operandIRList_2E_element & operator = (const GGS_operandIRList_2E_element & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_operandIRList_2E_element ;

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
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GGS_lstring function_llvmBootRoutineNameFromDriver (const class GGS_lstring & constinArgument0,
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
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeDynamicArrayDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeDynamicArrayDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_typeDynamicArrayDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_typeDynamicArrayDeclarationAST (const class cPtr_typeDynamicArrayDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mDynamicArrayTypeName (void) const ;
  public: void setProperty_mDynamicArrayTypeName (const GGS_lstring & inValue) ;

  public: class GGS_lstring readProperty_mElementTypeName (void) const ;
  public: void setProperty_mElementTypeName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_typeDynamicArrayDeclarationAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_typeDynamicArrayDeclarationAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeDynamicArrayDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @typeDynamicArrayDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_typeDynamicArrayDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void typeDynamicArrayDeclarationAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_lstring & inOperand1,
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
  public: GGS_lstring mProperty_mDynamicArrayTypeName ;
  public: GGS_lstring mProperty_mElementTypeName ;


//--- Default constructor
  public: cPtr_typeDynamicArrayDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_typeDynamicArrayDeclarationAST (const GGS_lstring & in_mDynamicArrayTypeName,
                                               const GGS_lstring & in_mElementTypeName,
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
// Phase 1: @typeDynamicArrayDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_typeDynamicArrayDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_typeDynamicArrayDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_typeDynamicArrayDeclarationAST_2E_weak (const class GGS_typeDynamicArrayDeclarationAST & inSource) ;

  public: GGS_typeDynamicArrayDeclarationAST_2E_weak & operator = (const class GGS_typeDynamicArrayDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_typeDynamicArrayDeclarationAST_2E_weak init_nil (void) {
    GGS_typeDynamicArrayDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_typeDynamicArrayDeclarationAST bang_typeDynamicArrayDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_typeDynamicArrayDeclarationAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayRemoveAllFunctionIR reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayRemoveAllFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayRemoveAllFunctionIR class
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
                                            const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @dynArrayRemoveAllFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayRemoveAllFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak (const class GGS_dynArrayRemoveAllFunctionIR & inSource) ;

  public: GGS_dynArrayRemoveAllFunctionIR_2E_weak & operator = (const class GGS_dynArrayRemoveAllFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayRemoveAllFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayRemoveAllFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayRemoveAllFunctionIR bang_dynArrayRemoveAllFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayRemoveAllFunctionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayLengthFunctionIR reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayLengthFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayLengthFunctionIR class
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
                                         const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @dynArrayLengthFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayLengthFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayLengthFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayLengthFunctionIR_2E_weak (const class GGS_dynArrayLengthFunctionIR & inSource) ;

  public: GGS_dynArrayLengthFunctionIR_2E_weak & operator = (const class GGS_dynArrayLengthFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayLengthFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayLengthFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayLengthFunctionIR bang_dynArrayLengthFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayLengthFunctionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayAppendFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayAppendFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayAppendFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayAppendFunctionIR (const class cPtr_dynArrayAppendFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mArrayTypeProxy (void) const ;
  public: void setProperty_mArrayTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mElementTypeProxy (void) const ;
  public: void setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

  public: class GGS_string readProperty_mInsertFunctionMangledName (void) const ;
  public: void setProperty_mInsertFunctionMangledName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayAppendFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_bool & inOperand1,
                                                                                                   const class GGS_bool & inOperand2,
                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                                   const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                                   const class GGS_string & inOperand5,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayAppendFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayAppendFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayAppendFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayAppendFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayAppendFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_bool & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                             const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                             const class GGS_string & inOperand5,
                                                                                             Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mArrayTypeProxy ;
  public: GGS_unifiedTypeMapEntry mProperty_mElementTypeProxy ;
  public: GGS_string mProperty_mInsertFunctionMangledName ;


//--- Default constructor
  public: cPtr_dynArrayAppendFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayAppendFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         const GGS_unifiedTypeMapEntry & in_mArrayTypeProxy,
                                         const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
                                         const GGS_string & in_mInsertFunctionMangledName,
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
// Phase 1: @dynArrayAppendFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayAppendFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayAppendFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayAppendFunctionIR_2E_weak (const class GGS_dynArrayAppendFunctionIR & inSource) ;

  public: GGS_dynArrayAppendFunctionIR_2E_weak & operator = (const class GGS_dynArrayAppendFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayAppendFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayAppendFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayAppendFunctionIR bang_dynArrayAppendFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayAppendFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynArrayAppendFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayAppendFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayAppendFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynArrayInsertFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayInsertFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynArrayInsertFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynArrayInsertFunctionIR (const class cPtr_dynArrayInsertFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_unifiedTypeMapEntry readProperty_mElementTypeProxy (void) const ;
  public: void setProperty_mElementTypeProxy (const GGS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynArrayInsertFunctionIR init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                           const class GGS_bool & inOperand1,
                                                                                           const class GGS_bool & inOperand2,
                                                                                           const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynArrayInsertFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayInsertFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynArrayInsertFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynArrayInsertFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynArrayInsertFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const class GGS_lstring & inOperand0,
                                                                                     const class GGS_bool & inOperand1,
                                                                                     const class GGS_bool & inOperand2,
                                                                                     const class GGS_unifiedTypeMapEntry & inOperand3,
                                                                                     Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_unifiedTypeMapEntry mProperty_mElementTypeProxy ;


//--- Default constructor
  public: cPtr_dynArrayInsertFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynArrayInsertFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         const GGS_unifiedTypeMapEntry & in_mElementTypeProxy,
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
// Phase 1: @dynArrayInsertFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynArrayInsertFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynArrayInsertFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynArrayInsertFunctionIR_2E_weak (const class GGS_dynArrayInsertFunctionIR & inSource) ;

  public: GGS_dynArrayInsertFunctionIR_2E_weak & operator = (const class GGS_dynArrayInsertFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynArrayInsertFunctionIR_2E_weak init_nil (void) {
    GGS_dynArrayInsertFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynArrayInsertFunctionIR bang_dynArrayInsertFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynArrayInsertFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynArrayInsertFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynArrayInsertFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynArrayInsertFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractAssignmentOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractAssignmentOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractAssignmentOperatorUsage (const class cPtr_abstractAssignmentOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractAssignmentOperatorUsage init (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractAssignmentOperatorUsage extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractAssignmentOperatorUsage class
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



//--- Constructor
  public: cPtr_abstractAssignmentOperatorUsage (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractAssignmentOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractAssignmentOperatorUsage_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractAssignmentOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractAssignmentOperatorUsage_2E_weak (const class GGS_abstractAssignmentOperatorUsage & inSource) ;

  public: GGS_abstractAssignmentOperatorUsage_2E_weak & operator = (const class GGS_abstractAssignmentOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractAssignmentOperatorUsage_2E_weak init_nil (void) {
    GGS_abstractAssignmentOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractAssignmentOperatorUsage bang_abstractAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractAssignmentOperatorUsage unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynamicArrayTypeAssignGenericFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR (const class cPtr_dynamicArrayTypeAssignGenericFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dynamicArrayTypeAssignGenericFunctionIR init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
                                                                                                      const class GGS_bool & inOperand1,
                                                                                                      const class GGS_bool & inOperand2,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dynamicArrayTypeAssignGenericFunctionIR extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @dynamicArrayTypeAssignGenericFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_dynamicArrayTypeAssignGenericFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void dynamicArrayTypeAssignGenericFunctionIR_init_21__21_isRequired_21_warnsIfUnused (const class GGS_lstring & inOperand0,
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
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dynamicArrayTypeAssignGenericFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                                        const GGS_bool & in_isRequired,
                                                        const GGS_bool & in_warnsIfUnused,
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
// Phase 1: @dynamicArrayTypeAssignGenericFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (const class GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) ;

  public: GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & operator = (const class GGS_dynamicArrayTypeAssignGenericFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak init_nil (void) {
    GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR bang_dynamicArrayTypeAssignGenericFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_dynamicArrayTypeAssignGenericFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolTypeAST reference class
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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolTypeAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolTypeAST class
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



//--- Constructor
  public: cPtr_boolTypeAST (Compiler * inCompiler
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
// Phase 1: @boolTypeAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolTypeAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolTypeAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolTypeAST_2E_weak (const class GGS_boolTypeAST & inSource) ;

  public: GGS_boolTypeAST_2E_weak & operator = (const class GGS_boolTypeAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolTypeAST_2E_weak init_nil (void) {
    GGS_boolTypeAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolTypeAST bang_boolTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolTypeAST unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolTypeAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractImplicitConverterToBoolean : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractImplicitConverterToBoolean (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractImplicitConverterToBoolean (const class cPtr_abstractImplicitConverterToBoolean * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractImplicitConverterToBoolean init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractImplicitConverterToBoolean extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractImplicitConverterToBoolean class
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



//--- Constructor
  public: cPtr_abstractImplicitConverterToBoolean (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractImplicitConverterToBoolean_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractImplicitConverterToBoolean_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractImplicitConverterToBoolean_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractImplicitConverterToBoolean_2E_weak (const class GGS_abstractImplicitConverterToBoolean & inSource) ;

  public: GGS_abstractImplicitConverterToBoolean_2E_weak & operator = (const class GGS_abstractImplicitConverterToBoolean & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractImplicitConverterToBoolean_2E_weak init_nil (void) {
    GGS_abstractImplicitConverterToBoolean_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractImplicitConverterToBoolean bang_abstractImplicitConverterToBoolean_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractImplicitConverterToBoolean unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorUsage : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_prefixOperatorUsage (const class cPtr_prefixOperatorUsage * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_prefixOperatorUsage init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_prefixOperatorUsage extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_prefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @prefixOperatorUsage class
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



//--- Constructor
  public: cPtr_prefixOperatorUsage (Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @prefixOperatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_prefixOperatorUsage_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_prefixOperatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_prefixOperatorUsage_2E_weak (const class GGS_prefixOperatorUsage & inSource) ;

  public: GGS_prefixOperatorUsage_2E_weak & operator = (const class GGS_prefixOperatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_prefixOperatorUsage_2E_weak init_nil (void) {
    GGS_prefixOperatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_prefixOperatorUsage bang_prefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_prefixOperatorUsage unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum valuedObject
//--------------------------------------------------------------------------------------------------

class GGS_valuedObject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_valuedObject (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_driver,
    enum_task,
    enum_globalConstant,
    enum_localConstant,
    enum_localVariable,
    enum_globalSyncInstance
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_driver (class GGS_omnibusType & out_type,
                                                               class GGS_bool & out_instancied) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_task (class GGS_omnibusType & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_globalConstant (class GGS_objectIR & out_objectIR) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_localConstant (class GGS_omnibusType & out_type,
                                                                      class GGS_lstring & out_omnibusName,
                                                                      class GGS_bool & out_isFormalInputArgument) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_localVariable (class GGS_omnibusType & out_type,
                                                                      class GGS_lstring & out_omnibusName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_globalSyncInstance (class GGS_omnibusType & out_type,
                                                                           class GGS_lstring & out_omnibusName) const ;

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
  public: static GGS_valuedObject extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObject class_func_driver (const class GGS_omnibusType & inOperand0,
                                                           const class GGS_bool & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_globalConstant (const class GGS_objectIR & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_globalSyncInstance (const class GGS_omnibusType & inOperand0,
                                                                       const class GGS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_localConstant (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_lstring & inOperand1,
                                                                  const class GGS_bool & inOperand2
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_localVariable (const class GGS_omnibusType & inOperand0,
                                                                  const class GGS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public: static class GGS_valuedObject class_func_task (const class GGS_omnibusType & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractDriver (class GGS_omnibusType & outArgument0,
                                                      class GGS_bool & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractGlobalConstant (class GGS_objectIR & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractGlobalSyncInstance (class GGS_omnibusType & outArgument0,
                                                                  class GGS_lstring & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLocalConstant (class GGS_omnibusType & outArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class GGS_bool & outArgument2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLocalVariable (class GGS_omnibusType & outArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractTask (class GGS_omnibusType & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_driver_3F_ getter_getDriver (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_globalConstant_3F_ getter_getGlobalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_globalSyncInstance_3F_ getter_getGlobalSyncInstance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_localConstant_3F_ getter_getLocalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_localVariable_3F_ getter_getLocalVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_valuedObject_2E_task_3F_ getter_getTask (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDriver (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGlobalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGlobalSyncInstance (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLocalConstant (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLocalVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isTask (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObject ;

//--------------------------------------------------------------------------------------------------
//   enum valuedObjectState
//--------------------------------------------------------------------------------------------------

class GGS_valuedObjectState : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_valuedObjectState (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noValue,
    enum_hasUnreadValue,
    enum_hasReadValue
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
  public: static GGS_valuedObjectState extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_valuedObjectState class_func_hasReadValue (LOCATION_ARGS) ;

  public: static class GGS_valuedObjectState class_func_hasUnreadValue (LOCATION_ARGS) ;

  public: static class GGS_valuedObjectState class_func_noValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_valuedObjectState & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasReadValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isHasUnreadValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoValue (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_valuedObjectState ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @flatValuedObjectMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_valuedObjectState mProperty_mObjectState ;
  public: inline GGS_valuedObjectState readProperty_mObjectState (void) const {
    return mProperty_mObjectState ;
  }

  public: GGS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public: inline GGS_bool readProperty_mObjectShouldBeValuedAtEndOfScope (void) const {
    return mProperty_mObjectShouldBeValuedAtEndOfScope ;
  }

  public: GGS_valuedObject mProperty_mValuedObject ;
  public: inline GGS_valuedObject readProperty_mValuedObject (void) const {
    return mProperty_mValuedObject ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMObjectState (const GGS_valuedObjectState & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectState = inValue ;
  }

  public: inline void setter_setMObjectShouldBeValuedAtEndOfScope (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mObjectShouldBeValuedAtEndOfScope = inValue ;
  }

  public: inline void setter_setMValuedObject (const GGS_valuedObject & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValuedObject = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_flatValuedObjectMap_2E_element (const GGS_lstring & in_lkey,
                                              const GGS_valuedObjectState & in_mObjectState,
                                              const GGS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                              const GGS_valuedObject & in_mValuedObject) ;

//--------------------------------- Copy constructor
  public: GGS_flatValuedObjectMap_2E_element (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_flatValuedObjectMap_2E_element & operator = (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_flatValuedObjectMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                          const class GGS_valuedObjectState & inOperand1,
                                                                          const class GGS_bool & inOperand2,
                                                                          const class GGS_valuedObject & inOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_flatValuedObjectMap_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: flatValuedObjectMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_flatValuedObjectMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_flatValuedObjectMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_flatValuedObjectMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_flatValuedObjectMap_2E_element_3F_ (const GGS_flatValuedObjectMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_flatValuedObjectMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_flatValuedObjectMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_flatValuedObjectMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2E_element_3F_ ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRepeatScope (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSelectScope (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GGS_valuedObjectState constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_valuedObjectState & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_valuedObjectState getter_mStateForKey (const class GGS_string & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_referenceStateMap getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_referenceStateMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_scopeStack_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum LValueOperandAST
//--------------------------------------------------------------------------------------------------

class GGS_LValueOperandAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_LValueOperandAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noOperand,
    enum_property,
    enum_arrayAccess
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_property (class GGS_lstring & out_name,
                                                                 class GGS_LValueOperandAST & out_next) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayAccess (class GGS_expressionAST & out_index,
                                                                    class GGS_location & out_endOfIndex,
                                                                    class GGS_bool & out_checkIndexExpression,
                                                                    class GGS_LValueOperandAST & out_next) const ;

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
  public: static GGS_LValueOperandAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_LValueOperandAST class_func_arrayAccess (const class GGS_expressionAST & inOperand0,
                                                                    const class GGS_location & inOperand1,
                                                                    const class GGS_bool & inOperand2,
                                                                    const class GGS_LValueOperandAST & inOperand3
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_LValueOperandAST class_func_noOperand (LOCATION_ARGS) ;

  public: static class GGS_LValueOperandAST class_func_property (const class GGS_lstring & inOperand0,
                                                                 const class GGS_LValueOperandAST & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractArrayAccess (class GGS_expressionAST & outArgument0,
                                                           class GGS_location & outArgument1,
                                                           class GGS_bool & outArgument2,
                                                           class GGS_LValueOperandAST & outArgument3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractProperty (class GGS_lstring & outArgument0,
                                                        class GGS_LValueOperandAST & outArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_LValueOperandAST_2E_arrayAccess_3F_ getter_getArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_LValueOperandAST_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNoOperand (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_arrayAccess & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST_2E_property & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_referenceStateMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@valuedObjectState string' (as function)
//
//--------------------------------------------------------------------------------------------------

class GGS_string extensionGetter_string (const class GGS_valuedObjectState & inObject,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

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

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractString (class GGS_string & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractSymbol (class GGS_lstring & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractType (class GGS_lstring & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElement_2E_string_3F_ getter_getString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElement_2E_symbol_3F_ getter_getSymbol (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElement_2E_type_3F_ getter_getType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isString (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isSymbol (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElement_2E_string struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_string : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_string ;
  public: inline GGS_string readProperty_string (void) const {
    return mProperty_string ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_string (void) ;

//--------------------------------- Property setters
  public: inline void setter_setString (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_string = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElement_2E_string (const GGS_string & in_string) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElement_2E_string (const GGS_llvmGenerationInstructionElement_2E_string & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElement_2E_string & operator = (const GGS_llvmGenerationInstructionElement_2E_string & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElement_2E_string init_21_ (const class GGS_string & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_string extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmGenerationInstructionElement.string? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_string_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmGenerationInstructionElement_2E_string mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_string_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmGenerationInstructionElement_2E_string_3F_ (const GGS_llvmGenerationInstructionElement_2E_string & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmGenerationInstructionElement_2E_string_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmGenerationInstructionElement_2E_string unwrappedValue (void) const {
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
  public: static GGS_llvmGenerationInstructionElement_2E_string_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_string_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElement_2E_symbol struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_symbol : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElement_2E_symbol & operator = (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElement_2E_symbol init_21_ (const class GGS_lstring & inOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_symbol extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmGenerationInstructionElement.symbol? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_symbol_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmGenerationInstructionElement_2E_symbol mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmGenerationInstructionElement_2E_symbol_3F_ (const GGS_llvmGenerationInstructionElement_2E_symbol & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmGenerationInstructionElement_2E_symbol_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmGenerationInstructionElement_2E_symbol unwrappedValue (void) const {
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
  public: static GGS_llvmGenerationInstructionElement_2E_symbol_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_symbol_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElement_2E_type struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_type : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_type (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElement_2E_type (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElement_2E_type (const GGS_llvmGenerationInstructionElement_2E_type & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElement_2E_type & operator = (const GGS_llvmGenerationInstructionElement_2E_type & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElement_2E_type init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElement_2E_type extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type ;

//--------------------------------------------------------------------------------------------------
// Phase 1: llvmGenerationInstructionElement.type? optional
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElement_2E_type_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_llvmGenerationInstructionElement_2E_type mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElement_2E_type_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_llvmGenerationInstructionElement_2E_type_3F_ (const GGS_llvmGenerationInstructionElement_2E_type & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_llvmGenerationInstructionElement_2E_type_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_llvmGenerationInstructionElement_2E_type unwrappedValue (void) const {
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
  public: static GGS_llvmGenerationInstructionElement_2E_type_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElement_2E_type_3F_ ;

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
  public: GGS_llvmGenerationInstructionElementList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_llvmGenerationInstructionElementList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_llvmGenerationInstructionElement & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_llvmGenerationInstructionElementList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_llvmGenerationInstructionElementList add_operation (const GGS_llvmGenerationInstructionElementList & inOperand,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_llvmGenerationInstructionElement constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_llvmGenerationInstructionElement constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_llvmGenerationInstructionElement & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_llvmGenerationInstructionElement & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_llvmGenerationInstructionElement & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMElementAtIndex (class GGS_llvmGenerationInstructionElement constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_llvmGenerationInstructionElement & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_llvmGenerationInstructionElement & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElementList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElementList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionElementList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_llvmGenerationInstructionElementList ;
  friend class DownEnumerator_llvmGenerationInstructionElementList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionElementList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionElementList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_llvmGenerationInstructionElement mProperty_mElement ;
  public: inline GGS_llvmGenerationInstructionElement readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionElementList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GGS_llvmGenerationInstructionElement & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionElementList_2E_element (const GGS_llvmGenerationInstructionElement & in_mElement) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionElementList_2E_element (const GGS_llvmGenerationInstructionElementList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionElementList_2E_element & operator = (const GGS_llvmGenerationInstructionElementList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionElementList_2E_element init_21_ (const class GGS_llvmGenerationInstructionElement & inOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionElementList_2E_element extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionElementList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractLLVMInstruction reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractLLVMInstruction : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractLLVMInstruction (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractLLVMInstruction (const class cPtr_abstractLLVMInstruction * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractLLVMInstruction init (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractLLVMInstruction extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractLLVMInstruction & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractLLVMInstruction class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractLLVMInstruction : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractLLVMInstruction_init (Compiler * inCompiler) ;


//--- Extension method checkInstructionList
  public: virtual void method_checkInstructionList (class GGS_ctCheckMap & arg_ioMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Extension method generateIRCode
  public: virtual void method_generateIRCode (class GGS_assignmentGenerationVarMap & arg_ioVarMap,
           class GGS_assignmentGenerationVarMap & arg_ioTypeMap,
           class GGS_stringlist & arg_ioInstructionAsStringListIR,
           class GGS_uint & arg_ioTemporaryIndex,
           class GGS_allocaList & arg_ioAllocaList,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractLLVMInstruction (Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLLVMInstruction_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction ;

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


//--- Extension method checkInstructionList
  public: virtual void method_checkInstructionList (class GGS_ctCheckMap & arg_ioMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateIRCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstruction_2E_weak ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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


//--- Extension method checkInstructionList
  public: virtual void method_checkInstructionList (class GGS_ctCheckMap & arg_ioMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method generateIRCode
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
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override ;

} ;

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
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmVarInstruction_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_llvmGenerationInstructionList final {
  public: DownEnumerator_llvmGenerationInstructionList (const class GGS_llvmGenerationInstructionList & inList) ;

  public: ~ DownEnumerator_llvmGenerationInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractLLVMInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmGenerationInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_llvmGenerationInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_llvmGenerationInstructionList (const DownEnumerator_llvmGenerationInstructionList &) = delete ;
  private: DownEnumerator_llvmGenerationInstructionList & operator = (const DownEnumerator_llvmGenerationInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_llvmGenerationInstructionList final {
  public: UpEnumerator_llvmGenerationInstructionList (const class GGS_llvmGenerationInstructionList & inList)  ;

  public: ~ UpEnumerator_llvmGenerationInstructionList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_abstractLLVMInstruction current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmGenerationInstructionList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_llvmGenerationInstructionList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_llvmGenerationInstructionList (const UpEnumerator_llvmGenerationInstructionList &) = delete ;
  private: UpEnumerator_llvmGenerationInstructionList & operator = (const UpEnumerator_llvmGenerationInstructionList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @llvmGenerationInstructionList list
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_llvmGenerationInstructionList_2E_element> mArray ;

//--- Default constructor
  public: GGS_llvmGenerationInstructionList (void) ;

//--- Destructor
  public: virtual ~ GGS_llvmGenerationInstructionList (void) = default ;

//--- Copy
  public: GGS_llvmGenerationInstructionList (const GGS_llvmGenerationInstructionList &) = default ;
  public: GGS_llvmGenerationInstructionList & operator = (const GGS_llvmGenerationInstructionList &) = default ;

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
  public : inline GenericArray <GGS_llvmGenerationInstructionList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_llvmGenerationInstructionList subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_llvmGenerationInstructionList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractLLVMInstruction & in_mInstruction
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionList init (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionList extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_llvmGenerationInstructionList class_func_listWithValue (const class GGS_abstractLLVMInstruction & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_llvmGenerationInstructionList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_abstractLLVMInstruction & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_llvmGenerationInstructionList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_llvmGenerationInstructionList add_operation (const GGS_llvmGenerationInstructionList & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractLLVMInstruction constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractLLVMInstruction constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractLLVMInstruction & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractLLVMInstruction & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractLLVMInstruction & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GGS_abstractLLVMInstruction constinArgument0,
                                                               class GGS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractLLVMInstruction & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractLLVMInstruction & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_abstractLLVMInstruction getter_mInstructionAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmGenerationInstructionList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_llvmGenerationInstructionList ;
  friend class DownEnumerator_llvmGenerationInstructionList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmGenerationInstructionList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_llvmGenerationInstructionList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractLLVMInstruction mProperty_mInstruction ;
  public: inline GGS_abstractLLVMInstruction readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_llvmGenerationInstructionList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GGS_abstractLLVMInstruction & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_llvmGenerationInstructionList_2E_element (const GGS_abstractLLVMInstruction & in_mInstruction) ;

//--------------------------------- Copy constructor
  public: GGS_llvmGenerationInstructionList_2E_element (const GGS_llvmGenerationInstructionList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_llvmGenerationInstructionList_2E_element & operator = (const GGS_llvmGenerationInstructionList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_llvmGenerationInstructionList_2E_element init_21_ (const class GGS_abstractLLVMInstruction & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_llvmGenerationInstructionList_2E_element extractObject (const GGS_object & inObject,
                                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmGenerationInstructionList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@llvmGenerationInstructionList appendReturn'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendReturn (class GGS_llvmGenerationInstructionList & ioObject,
                                   const class GGS_lstring constin_inReturnType,
                                   const class GGS_lstring constin_inReturnValue,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList checkInstructionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkInstructionList (const class GGS_llvmGenerationInstructionList inObject,
                                           const class GGS_ctCheckMap constin_inMap,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctCheckMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_ctCheckMap final {

  public: DownEnumerator_ctCheckMap (const class GGS_ctCheckMap & inMap) ;

  public: ~ DownEnumerator_ctCheckMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_ctCheckMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ctCheckMap (const DownEnumerator_ctCheckMap &) = delete ;
  private: DownEnumerator_ctCheckMap & operator = (const DownEnumerator_ctCheckMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ctCheckMap final {
  public: UpEnumerator_ctCheckMap (const class GGS_ctCheckMap & inMap)  ;

  public: ~ UpEnumerator_ctCheckMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_ctCheckMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ctCheckMap (const UpEnumerator_ctCheckMap &) = delete ;
  private: UpEnumerator_ctCheckMap & operator = (const UpEnumerator_ctCheckMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_ctCheckMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_ctCheckMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_ctCheckMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_ctCheckMap (void) ;

//--- Handle copy
  public: GGS_ctCheckMap (const GGS_ctCheckMap & inSource) ;
  public: GGS_ctCheckMap & operator = (const GGS_ctCheckMap & inSource) ;

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
  protected: void performInsert (const class GGS_ctCheckMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctCheckMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctCheckMap init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctCheckMap extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctCheckMap class_func_mapWithMapToOverride (const class GGS_ctCheckMap & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
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

  public: VIRTUAL_IN_DEBUG class GGS_ctCheckMap getter_overriddenMap (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_ctCheckMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ctCheckMap ;
  friend class DownEnumerator_ctCheckMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLLVMInstruction checkInstructionList'
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
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_string constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GGS_string constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_string & outArgument1,
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

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mValueForKey (const class GGS_string & constinOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_assignmentGenerationVarMap getter_overriddenMap (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_assignmentGenerationVarMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@llvmGenerationInstructionList generateIRCode'
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
//Abstract extension method '@abstractLLVMInstruction generateIRCode'
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
// Phase 1: @literalStringDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_literalStringDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalStringDeclarationAST (const class cPtr_literalStringDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalStringDeclarationAST init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringDeclarationAST extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalStringDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringDeclarationAST_init (Compiler * inCompiler) ;


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



//--- Constructor
  public: cPtr_literalStringDeclarationAST (Compiler * inCompiler
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
// Phase 1: @literalStringDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalStringDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalStringDeclarationAST_2E_weak (const class GGS_literalStringDeclarationAST & inSource) ;

  public: GGS_literalStringDeclarationAST_2E_weak & operator = (const class GGS_literalStringDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalStringDeclarationAST_2E_weak init_nil (void) {
    GGS_literalStringDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalStringDeclarationAST bang_literalStringDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalStringDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_literalStringDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalStringDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @subscript_2E_staticSubscript struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_subscript_2E_staticSubscript (const GGS_omnibusType & in_elementType,
                                            const GGS_bigint & in_size) ;

//--------------------------------- Copy constructor
  public: GGS_subscript_2E_staticSubscript (const GGS_subscript_2E_staticSubscript & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_subscript_2E_staticSubscript & operator = (const GGS_subscript_2E_staticSubscript & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscript_2E_staticSubscript ;

//--------------------------------------------------------------------------------------------------
// Phase 1: subscript.staticSubscript? optional
//--------------------------------------------------------------------------------------------------

class GGS_subscript_2E_staticSubscript_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_subscript_2E_staticSubscript mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_subscript_2E_staticSubscript_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_subscript_2E_staticSubscript_3F_ (const GGS_subscript_2E_staticSubscript & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_subscript_2E_staticSubscript_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscript_2E_staticSubscript_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_dynamicArrayType struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_dynamicArrayType (const GGS_omnibusType & in_elementType) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_dynamicArrayType (const GGS_typeKind_2E_dynamicArrayType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_dynamicArrayType & operator = (const GGS_typeKind_2E_dynamicArrayType & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.dynamicArrayType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_dynamicArrayType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_dynamicArrayType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_dynamicArrayType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_dynamicArrayType_3F_ (const GGS_typeKind_2E_dynamicArrayType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_dynamicArrayType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_dynamicArrayType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_dynamicArrayType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_enumeration struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_enumeration (const GGS_uint & in_bitCount) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_enumeration (const GGS_typeKind_2E_enumeration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_enumeration & operator = (const GGS_typeKind_2E_enumeration & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.enumeration? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_enumeration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_enumeration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_enumeration_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_enumeration_3F_ (const GGS_typeKind_2E_enumeration & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_enumeration_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_enumeration_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumeration_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_function struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_function (const GGS_mode & in_mode,
                                    const GGS_routineTypedSignature & in_signature,
                                    const GGS_unifiedTypeMapEntry & in_returnTypeProxy) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_function (const GGS_typeKind_2E_function & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_function & operator = (const GGS_typeKind_2E_function & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_function ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.function? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_function_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_function mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_function_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_function_3F_ (const GGS_typeKind_2E_function & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_function_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_function_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_function_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctExpressionAST : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_ctExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctExpressionAST (const class cPtr_ctExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctExpressionAST init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctExpressionAST extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @genericFormalParameterList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_genericFormalParameterList final {
  public: DownEnumerator_genericFormalParameterList (const class GGS_genericFormalParameterList & inList) ;

  public: ~ DownEnumerator_genericFormalParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_genericFormalParameter current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_genericFormalParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_genericFormalParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_genericFormalParameterList (const DownEnumerator_genericFormalParameterList &) = delete ;
  private: DownEnumerator_genericFormalParameterList & operator = (const DownEnumerator_genericFormalParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_genericFormalParameterList final {
  public: UpEnumerator_genericFormalParameterList (const class GGS_genericFormalParameterList & inList)  ;

  public: ~ UpEnumerator_genericFormalParameterList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_genericFormalParameter current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_genericFormalParameterList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_genericFormalParameterList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_genericFormalParameterList (const UpEnumerator_genericFormalParameterList &) = delete ;
  private: UpEnumerator_genericFormalParameterList & operator = (const UpEnumerator_genericFormalParameterList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @genericFormalParameterList list
//--------------------------------------------------------------------------------------------------

class GGS_genericFormalParameterList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_genericFormalParameterList_2E_element> mArray ;

//--- Default constructor
  public: GGS_genericFormalParameterList (void) ;

//--- Destructor
  public: virtual ~ GGS_genericFormalParameterList (void) = default ;

//--- Copy
  public: GGS_genericFormalParameterList (const GGS_genericFormalParameterList &) = default ;
  public: GGS_genericFormalParameterList & operator = (const GGS_genericFormalParameterList &) = default ;

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
  public : inline GenericArray <GGS_genericFormalParameterList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_genericFormalParameterList subList (const int32_t inStart,
                                                   const int32_t inLength,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_genericFormalParameterList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_genericFormalParameter & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_genericFormalParameterList init (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_genericFormalParameterList extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_genericFormalParameterList class_func_listWithValue (const class GGS_genericFormalParameter & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_genericFormalParameterList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_genericFormalParameter & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_genericFormalParameterList_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_genericFormalParameterList add_operation (const GGS_genericFormalParameterList & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_genericFormalParameterList & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_genericFormalParameter constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_genericFormalParameter constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_genericFormalParameter & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_genericFormalParameter & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_genericFormalParameter & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GGS_genericFormalParameter constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_genericFormalParameter & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_genericFormalParameter & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_genericFormalParameter getter_mParameterAtIndex (const class GGS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_genericFormalParameterList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_genericFormalParameterList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_genericFormalParameterList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_genericFormalParameterList ;
  friend class DownEnumerator_genericFormalParameterList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericFormalParameterList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @llvmStringDefinition list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_llvmStringDefinition final {
  public: DownEnumerator_llvmStringDefinition (const class GGS_llvmStringDefinition & inList) ;

  public: ~ DownEnumerator_llvmStringDefinition (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_llvmStringDefinitionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmStringDefinition_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_llvmStringDefinition_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_llvmStringDefinition (const DownEnumerator_llvmStringDefinition &) = delete ;
  private: DownEnumerator_llvmStringDefinition & operator = (const DownEnumerator_llvmStringDefinition &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_llvmStringDefinition final {
  public: UpEnumerator_llvmStringDefinition (const class GGS_llvmStringDefinition & inList)  ;

  public: ~ UpEnumerator_llvmStringDefinition (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_llvmStringDefinitionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_llvmStringDefinition_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_llvmStringDefinition_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_llvmStringDefinition (const UpEnumerator_llvmStringDefinition &) = delete ;
  private: UpEnumerator_llvmStringDefinition & operator = (const UpEnumerator_llvmStringDefinition &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @llvmStringDefinition list
//--------------------------------------------------------------------------------------------------

class GGS_llvmStringDefinition : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_llvmStringDefinition_2E_element> mArray ;

//--- Default constructor
  public: GGS_llvmStringDefinition (void) ;

//--- Destructor
  public: virtual ~ GGS_llvmStringDefinition (void) = default ;

//--- Copy
  public: GGS_llvmStringDefinition (const GGS_llvmStringDefinition &) = default ;
  public: GGS_llvmStringDefinition & operator = (const GGS_llvmStringDefinition &) = default ;

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
  public : inline GenericArray <GGS_llvmStringDefinition_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_llvmStringDefinition subList (const int32_t inStart,
                                             const int32_t inLength,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_llvmStringDefinition class_func_listWithValue (const class GGS_llvmStringDefinitionElement & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_llvmStringDefinition inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_llvmStringDefinitionElement & inOperand0
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_llvmStringDefinition_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_llvmStringDefinition add_operation (const GGS_llvmStringDefinition & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_llvmStringDefinition & inOperand) const ;

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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_llvmStringDefinitionElement getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_llvmStringDefinition ;
  friend class DownEnumerator_llvmStringDefinition ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmStringDefinition ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_generic struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_generic (const GGS_genericFormalParameterList & in_parameters,
                                   const GGS_ctExpressionAST & in_whereClause,
                                   const GGS_llvmStringDefinition & in_llvmNativeTypeNameExpression) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_generic (const GGS_typeKind_2E_generic & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_generic & operator = (const GGS_typeKind_2E_generic & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_generic ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.generic? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_generic_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_generic mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_generic_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_generic_3F_ (const GGS_typeKind_2E_generic & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_generic_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_generic_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_generic_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_integer struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_integer (const GGS_bigint & in_min,
                                   const GGS_bigint & in_max,
                                   const GGS_bool & in_unsigned,
                                   const GGS_uint & in_bitCount) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_integer (const GGS_typeKind_2E_integer & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_integer & operator = (const GGS_typeKind_2E_integer & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_integer ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.integer? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_integer_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_integer mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_integer_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_integer_3F_ (const GGS_typeKind_2E_integer & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_integer_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_integer_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_integer_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_llvmType struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_llvmType (const GGS_bigint & in_bitSize) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_llvmType (const GGS_typeKind_2E_llvmType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_llvmType & operator = (const GGS_typeKind_2E_llvmType & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.llvmType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_llvmType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_llvmType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_llvmType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_llvmType_3F_ (const GGS_typeKind_2E_llvmType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_llvmType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_llvmType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_llvmType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_opaque struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_opaque (const GGS_bigint & in_bitCount) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_opaque (const GGS_typeKind_2E_opaque & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_opaque & operator = (const GGS_typeKind_2E_opaque & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.opaque? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_opaque_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_opaque mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_opaque_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_opaque_3F_ (const GGS_typeKind_2E_opaque & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_opaque_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_opaque_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_opaque_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_staticArrayType struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_staticArrayType (const GGS_omnibusType & in_elementType,
                                           const GGS_bigint & in_size) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_staticArrayType (const GGS_typeKind_2E_staticArrayType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_staticArrayType & operator = (const GGS_typeKind_2E_staticArrayType & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.staticArrayType? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_staticArrayType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_staticArrayType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_staticArrayType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_staticArrayType_3F_ (const GGS_typeKind_2E_staticArrayType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_staticArrayType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_staticArrayType_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_staticArrayType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @typeKind_2E_structure struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_typeKind_2E_structure (const GGS_propertyList & in_propertyList) ;

//--------------------------------- Copy constructor
  public: GGS_typeKind_2E_structure (const GGS_typeKind_2E_structure & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_typeKind_2E_structure & operator = (const GGS_typeKind_2E_structure & inSource) ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_structure ;

//--------------------------------------------------------------------------------------------------
// Phase 1: typeKind.structure? optional
//--------------------------------------------------------------------------------------------------

class GGS_typeKind_2E_structure_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_typeKind_2E_structure mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_typeKind_2E_structure_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_typeKind_2E_structure_3F_ (const GGS_typeKind_2E_structure & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_typeKind_2E_structure_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_typeKind_2E_structure_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_structure_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @omnibusType_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_omnibusType_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_omnibusType_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_omnibusType_2E_weak (const class GGS_omnibusType & inSource) ;

  public: GGS_omnibusType_2E_weak & operator = (const class GGS_omnibusType & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_omnibusType_2E_weak init_nil (void) {
    GGS_omnibusType_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_omnibusType bang_omnibusType_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_omnibusType unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_omnibusType_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arcAssignmentList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_arcAssignmentList final {
  public: DownEnumerator_arcAssignmentList (const class GGS_arcAssignmentList & inList) ;

  public: ~ DownEnumerator_arcAssignmentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mPropertyType (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mPropertyIndexPath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arcAssignmentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_arcAssignmentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_arcAssignmentList (const DownEnumerator_arcAssignmentList &) = delete ;
  private: DownEnumerator_arcAssignmentList & operator = (const DownEnumerator_arcAssignmentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_arcAssignmentList final {
  public: UpEnumerator_arcAssignmentList (const class GGS_arcAssignmentList & inList)  ;

  public: ~ UpEnumerator_arcAssignmentList (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_string current_mPropertyName (LOCATION_ARGS) const ;
  public: class GGS_omnibusType current_mPropertyType (LOCATION_ARGS) const ;
  public: class GGS_uintlist current_mPropertyIndexPath (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_arcAssignmentList_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_arcAssignmentList_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_arcAssignmentList (const UpEnumerator_arcAssignmentList &) = delete ;
  private: UpEnumerator_arcAssignmentList & operator = (const UpEnumerator_arcAssignmentList &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @arcAssignmentList list
//--------------------------------------------------------------------------------------------------

class GGS_arcAssignmentList : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_arcAssignmentList_2E_element> mArray ;

//--- Default constructor
  public: GGS_arcAssignmentList (void) ;

//--- Destructor
  public: virtual ~ GGS_arcAssignmentList (void) = default ;

//--- Copy
  public: GGS_arcAssignmentList (const GGS_arcAssignmentList &) = default ;
  public: GGS_arcAssignmentList & operator = (const GGS_arcAssignmentList &) = default ;

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
  public : inline GenericArray <GGS_arcAssignmentList_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_arcAssignmentList subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_arcAssignmentList (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
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
  public: static class GGS_arcAssignmentList class_func_listWithValue (const class GGS_string & inOperand0,
                                                                       const class GGS_omnibusType & inOperand1,
                                                                       const class GGS_uintlist & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_arcAssignmentList inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_string & inOperand0,
                                                    const class GGS_omnibusType & inOperand1,
                                                    const class GGS_uintlist & inOperand2
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_arcAssignmentList_2E_element & inOperand
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
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uintlist getter_mPropertyIndexPathAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mPropertyNameAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_omnibusType getter_mPropertyTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_arcAssignmentList ;
  friend class DownEnumerator_arcAssignmentList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arcAssignmentList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @arcAssignmentList_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_arcAssignmentList_2E_element (const GGS_string & in_mPropertyName,
                                            const GGS_omnibusType & in_mPropertyType,
                                            const GGS_uintlist & in_mPropertyIndexPath) ;

//--------------------------------- Copy constructor
  public: GGS_arcAssignmentList_2E_element (const GGS_arcAssignmentList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_arcAssignmentList_2E_element & operator = (const GGS_arcAssignmentList_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arcAssignmentList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMTypeDefinitionIR reference class
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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @userLLVMTypeDefinitionIR class
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
  public: cPtr_userLLVMTypeDefinitionIR (const GGS_string & in_mLLVMDefinedTypeName,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMTypeDefinitionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMTypeDefinitionIR_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_userLLVMTypeDefinitionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_userLLVMTypeDefinitionIR_2E_weak (const class GGS_userLLVMTypeDefinitionIR & inSource) ;

  public: GGS_userLLVMTypeDefinitionIR_2E_weak & operator = (const class GGS_userLLVMTypeDefinitionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_userLLVMTypeDefinitionIR_2E_weak init_nil (void) {
    GGS_userLLVMTypeDefinitionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_userLLVMTypeDefinitionIR bang_userLLVMTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_userLLVMTypeDefinitionIR unwrappedValue (void) const ;

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
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ;

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
// Phase 1: @userLLVMTypeDefinitionListIR_2E_element struct
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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_userLLVMTypeDefinitionListIR_2E_element (const GGS_userLLVMTypeDefinitionIR & in_mType) ;

//--------------------------------- Copy constructor
  public: GGS_userLLVMTypeDefinitionListIR_2E_element (const GGS_userLLVMTypeDefinitionListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_userLLVMTypeDefinitionListIR_2E_element & operator = (const GGS_userLLVMTypeDefinitionListIR_2E_element & inSource) ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractInstructionIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractInstructionIR (const class cPtr_abstractInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractInstructionIR init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractInstructionIR extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @abstractInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_abstractInstructionIR : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractInstructionIR_init (Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractInstructionIR (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionListIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_instructionListIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractInstructionIR mProperty_mInstructionGeneration ;
  public: inline GGS_abstractInstructionIR readProperty_mInstructionGeneration (void) const {
    return mProperty_mInstructionGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_instructionListIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionGeneration (const GGS_abstractInstructionIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGeneration = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_instructionListIR_2E_element (const GGS_abstractInstructionIR & in_mInstructionGeneration) ;

//--------------------------------- Copy constructor
  public: GGS_instructionListIR_2E_element (const GGS_instructionListIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_instructionListIR_2E_element & operator = (const GGS_instructionListIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_instructionListIR_2E_element init_21_ (const class GGS_abstractInstructionIR & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_instructionListIR_2E_element extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @abstractInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_abstractInstructionIR_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractInstructionIR_2E_weak (const class GGS_abstractInstructionIR & inSource) ;

  public: GGS_abstractInstructionIR_2E_weak & operator = (const class GGS_abstractInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractInstructionIR_2E_weak init_nil (void) {
    GGS_abstractInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractInstructionIR bang_abstractInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_abstractInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_abstractInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetComputedPropertyValue (class GGS_instructionListIR & ioObject,
                                                     class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                     const class GGS_objectIR constin_inReceiverIR,
                                                     const class GGS_string constin_inLLVMGetterName,
                                                     const class GGS_omnibusType constin_inResultType,
                                                     class GGS_objectIR & out_outResultValueIR,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getComputedPropertyValueIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getComputedPropertyValueIR (const class cPtr_getComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMGetterName (void) const ;
  public: void setProperty_mLLVMGetterName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mResultValueIR (void) const ;
  public: void setProperty_mResultValueIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getComputedPropertyValueIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                  const class GGS_string & inOperand1,
                                                                  const class GGS_objectIR & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getComputedPropertyValueIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getComputedPropertyValueIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                            const class GGS_string & inOperand1,
                                                            const class GGS_objectIR & inOperand2,
                                                            Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GGS_stringset & arg_ioInvokedRoutineSet,
           class GGS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mReceiverIR ;
  public: GGS_string mProperty_mLLVMGetterName ;
  public: GGS_objectIR mProperty_mResultValueIR ;


//--- Default constructor
  public: cPtr_getComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                           const GGS_string & in_mLLVMGetterName,
                                           const GGS_objectIR & in_mResultValueIR,
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
//Extension setter '@semanticTemporariesStruct newTempLLVMVar'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_newTempLLVMVar (class GGS_semanticTemporariesStruct & ioObject,
                                     class GGS_string & out_outTempLLVMVar,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getComputedPropertyValueIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getComputedPropertyValueIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getComputedPropertyValueIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getComputedPropertyValueIR_2E_weak (const class GGS_getComputedPropertyValueIR & inSource) ;

  public: GGS_getComputedPropertyValueIR_2E_weak & operator = (const class GGS_getComputedPropertyValueIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getComputedPropertyValueIR_2E_weak init_nil (void) {
    GGS_getComputedPropertyValueIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getComputedPropertyValueIR bang_getComputedPropertyValueIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getComputedPropertyValueIR unwrappedValue (void) const ;

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
  public: static GGS_getComputedPropertyValueIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getComputedPropertyValueIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getComputedPropertyValueIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (class GGS_instructionListIR & ioObject,
                                                              const class GGS_omnibusType constin_inType,
                                                              const class GGS_string constin_inLLVMName,
                                                              const class GGS_omnibusType constin_inElementType,
                                                              const class GGS_string constin_inElementLLVMName,
                                                              const class GGS_objectIR constin_inIndexIR,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @getUniversalArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalArrayElementReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_getUniversalArrayElementReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_getUniversalArrayElementReferenceIR (const class cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mType (void) const ;
  public: void setProperty_mType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_omnibusType readProperty_mElementType (void) const ;
  public: void setProperty_mElementType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mElementLLVMName (void) const ;
  public: void setProperty_mElementLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mIndexIR (void) const ;
  public: void setProperty_mIndexIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_getUniversalArrayElementReferenceIR init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                                   const class GGS_string & inOperand1,
                                                                                   const class GGS_omnibusType & inOperand2,
                                                                                   const class GGS_string & inOperand3,
                                                                                   const class GGS_objectIR & inOperand4,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_getUniversalArrayElementReferenceIR extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalArrayElementReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @getUniversalArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_getUniversalArrayElementReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void getUniversalArrayElementReferenceIR_init_21__21__21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                             const class GGS_string & inOperand1,
                                                                             const class GGS_omnibusType & inOperand2,
                                                                             const class GGS_string & inOperand3,
                                                                             const class GGS_objectIR & inOperand4,
                                                                             Compiler * inCompiler) ;


//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mType ;
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_omnibusType mProperty_mElementType ;
  public: GGS_string mProperty_mElementLLVMName ;
  public: GGS_objectIR mProperty_mIndexIR ;


//--- Default constructor
  public: cPtr_getUniversalArrayElementReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_getUniversalArrayElementReferenceIR (const GGS_omnibusType & in_mType,
                                                    const GGS_string & in_mLLVMName,
                                                    const GGS_omnibusType & in_mElementType,
                                                    const GGS_string & in_mElementLLVMName,
                                                    const GGS_objectIR & in_mIndexIR,
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
// Phase 1: @getUniversalArrayElementReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_getUniversalArrayElementReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_getUniversalArrayElementReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_getUniversalArrayElementReferenceIR_2E_weak (const class GGS_getUniversalArrayElementReferenceIR & inSource) ;

  public: GGS_getUniversalArrayElementReferenceIR_2E_weak & operator = (const class GGS_getUniversalArrayElementReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_getUniversalArrayElementReferenceIR_2E_weak init_nil (void) {
    GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_getUniversalArrayElementReferenceIR bang_getUniversalArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_getUniversalArrayElementReferenceIR unwrappedValue (void) const ;

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
  public: static GGS_getUniversalArrayElementReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_getUniversalArrayElementReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_getUniversalArrayElementReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceAssignmentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_sliceAssignmentListAST final {
  public: DownEnumerator_sliceAssignmentListAST (const class GGS_sliceAssignmentListAST & inList) ;

  public: ~ DownEnumerator_sliceAssignmentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceWidth (LOCATION_ARGS) const ;
  public: class GGS_sliceTargetAST current_mSliceKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sliceAssignmentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sliceAssignmentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_sliceAssignmentListAST (const DownEnumerator_sliceAssignmentListAST &) = delete ;
  private: DownEnumerator_sliceAssignmentListAST & operator = (const DownEnumerator_sliceAssignmentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_sliceAssignmentListAST final {
  public: UpEnumerator_sliceAssignmentListAST (const class GGS_sliceAssignmentListAST & inList)  ;

  public: ~ UpEnumerator_sliceAssignmentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mSliceWidth (LOCATION_ARGS) const ;
  public: class GGS_sliceTargetAST current_mSliceKind (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_sliceAssignmentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_sliceAssignmentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_sliceAssignmentListAST (const UpEnumerator_sliceAssignmentListAST &) = delete ;
  private: UpEnumerator_sliceAssignmentListAST & operator = (const UpEnumerator_sliceAssignmentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_sliceAssignmentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_sliceAssignmentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_sliceAssignmentListAST (void) = default ;

//--- Copy
  public: GGS_sliceAssignmentListAST (const GGS_sliceAssignmentListAST &) = default ;
  public: GGS_sliceAssignmentListAST & operator = (const GGS_sliceAssignmentListAST &) = default ;

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
  public : inline GenericArray <GGS_sliceAssignmentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_sliceAssignmentListAST subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_sliceAssignmentListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mSliceWidth,
                                                 const class GGS_sliceTargetAST & in_mSliceKind
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceAssignmentListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceAssignmentListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                            const class GGS_sliceTargetAST & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_sliceAssignmentListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_lstring & inOperand0,
                                                    const class GGS_sliceTargetAST & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_sliceAssignmentListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_sliceAssignmentListAST add_operation (const GGS_sliceAssignmentListAST & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_sliceTargetAST constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_sliceTargetAST constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_sliceTargetAST & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_sliceTargetAST & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_sliceTargetAST & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceKindAtIndex (class GGS_sliceTargetAST constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSliceWidthAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_sliceTargetAST & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_sliceTargetAST & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceTargetAST getter_mSliceKindAtIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSliceWidthAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceAssignmentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceAssignmentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceAssignmentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_sliceAssignmentListAST ;
  friend class DownEnumerator_sliceAssignmentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST ;

//--------------------------------------------------------------------------------------------------
//   enum sliceTargetAST
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_sliceTargetAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_discarded,
    enum_varDeclaration,
    enum_letDeclaration,
    enum_lValue
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_varDeclaration (class GGS_lstring & out_varName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_letDeclaration (class GGS_lstring & out_letName) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_lValue (class GGS_LValueAST & out_target) const ;

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
  public: static GGS_sliceTargetAST extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_sliceTargetAST class_func_discarded (LOCATION_ARGS) ;

  public: static class GGS_sliceTargetAST class_func_lValue (const class GGS_LValueAST & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_sliceTargetAST class_func_letDeclaration (const class GGS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_sliceTargetAST class_func_varDeclaration (const class GGS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractLValue (class GGS_LValueAST & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractLetDeclaration (class GGS_lstring & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractVarDeclaration (class GGS_lstring & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_sliceTargetAST_2E_lValue_3F_ getter_getLValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceTargetAST_2E_letDeclaration_3F_ getter_getLetDeclaration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_sliceTargetAST_2E_varDeclaration_3F_ getter_getVarDeclaration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isDiscarded (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLValue (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLetDeclaration (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isVarDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceAssignmentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceAssignmentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mSliceWidth ;
  public: inline GGS_lstring readProperty_mSliceWidth (void) const {
    return mProperty_mSliceWidth ;
  }

  public: GGS_sliceTargetAST mProperty_mSliceKind ;
  public: inline GGS_sliceTargetAST readProperty_mSliceKind (void) const {
    return mProperty_mSliceKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceAssignmentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSliceWidth (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceWidth = inValue ;
  }

  public: inline void setter_setMSliceKind (const GGS_sliceTargetAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSliceKind = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceAssignmentListAST_2E_element (const GGS_lstring & in_mSliceWidth,
                                                 const GGS_sliceTargetAST & in_mSliceKind) ;

//--------------------------------- Copy constructor
  public: GGS_sliceAssignmentListAST_2E_element (const GGS_sliceAssignmentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceAssignmentListAST_2E_element & operator = (const GGS_sliceAssignmentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceAssignmentListAST_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                     const class GGS_sliceTargetAST & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceAssignmentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @instructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_instructionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_instructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_instructionAST_2E_weak (const class GGS_instructionAST & inSource) ;

  public: GGS_instructionAST_2E_weak & operator = (const class GGS_instructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_instructionAST_2E_weak init_nil (void) {
    GGS_instructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_instructionAST bang_instructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_instructionAST unwrappedValue (void) const ;

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
  public: static GGS_instructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_instructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_instructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_instructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueAST struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mIdentifier ;
  public: inline GGS_lstring readProperty_mIdentifier (void) const {
    return mProperty_mIdentifier ;
  }

  public: GGS_LValueOperandAST mProperty_mOperand ;
  public: inline GGS_LValueOperandAST readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_LValueAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMIdentifier (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIdentifier = inValue ;
  }

  public: inline void setter_setMOperand (const GGS_LValueOperandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mOperand = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueAST (const GGS_lstring & in_mIdentifier,
                         const GGS_LValueOperandAST & in_mOperand) ;

//--------------------------------- Copy constructor
  public: GGS_LValueAST (const GGS_LValueAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueAST & operator = (const GGS_LValueAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueAST init_21__21_ (const class GGS_lstring & inOperand0,
                                             const class GGS_LValueOperandAST & inOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueAST extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceTargetAST_2E_lValue struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_lValue : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_LValueAST mProperty_target ;
  public: inline GGS_LValueAST readProperty_target (void) const {
    return mProperty_target ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_lValue (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTarget (const GGS_LValueAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_target = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_lValue (const GGS_LValueAST & in_target) ;

//--------------------------------- Copy constructor
  public: GGS_sliceTargetAST_2E_lValue (const GGS_sliceTargetAST_2E_lValue & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceTargetAST_2E_lValue & operator = (const GGS_sliceTargetAST_2E_lValue & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_lValue init_21_ (const class GGS_LValueAST & inOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_lValue extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceTargetAST.lValue? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_lValue_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_lValue mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_lValue_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceTargetAST_2E_lValue_3F_ (const GGS_sliceTargetAST_2E_lValue & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceTargetAST_2E_lValue_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_lValue unwrappedValue (void) const {
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
  public: static GGS_sliceTargetAST_2E_lValue_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_lValue_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceTargetAST_2E_letDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_letDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_letName ;
  public: inline GGS_lstring readProperty_letName (void) const {
    return mProperty_letName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLetName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_letName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (const GGS_lstring & in_letName) ;

//--------------------------------- Copy constructor
  public: GGS_sliceTargetAST_2E_letDeclaration (const GGS_sliceTargetAST_2E_letDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceTargetAST_2E_letDeclaration & operator = (const GGS_sliceTargetAST_2E_letDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_letDeclaration init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_letDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceTargetAST.letDeclaration? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_letDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_letDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_letDeclaration_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceTargetAST_2E_letDeclaration_3F_ (const GGS_sliceTargetAST_2E_letDeclaration & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceTargetAST_2E_letDeclaration_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_letDeclaration unwrappedValue (void) const {
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
  public: static GGS_sliceTargetAST_2E_letDeclaration_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_letDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @sliceTargetAST_2E_varDeclaration struct
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_varDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_varName ;
  public: inline GGS_lstring readProperty_varName (void) const {
    return mProperty_varName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (void) ;

//--------------------------------- Property setters
  public: inline void setter_setVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_varName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (const GGS_lstring & in_varName) ;

//--------------------------------- Copy constructor
  public: GGS_sliceTargetAST_2E_varDeclaration (const GGS_sliceTargetAST_2E_varDeclaration & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_sliceTargetAST_2E_varDeclaration & operator = (const GGS_sliceTargetAST_2E_varDeclaration & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_sliceTargetAST_2E_varDeclaration init_21_ (const class GGS_lstring & inOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_sliceTargetAST_2E_varDeclaration extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: sliceTargetAST.varDeclaration? optional
//--------------------------------------------------------------------------------------------------

class GGS_sliceTargetAST_2E_varDeclaration_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_sliceTargetAST_2E_varDeclaration mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_sliceTargetAST_2E_varDeclaration_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_sliceTargetAST_2E_varDeclaration_3F_ (const GGS_sliceTargetAST_2E_varDeclaration & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_sliceTargetAST_2E_varDeclaration_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_sliceTargetAST_2E_varDeclaration unwrappedValue (void) const {
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
  public: static GGS_sliceTargetAST_2E_varDeclaration_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sliceTargetAST_2E_varDeclaration_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_effectiveArgumentListAST final {
  public: DownEnumerator_effectiveArgumentListAST (const class GGS_effectiveArgumentListAST & inList) ;

  public: ~ DownEnumerator_effectiveArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterKind (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_effectiveArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_effectiveArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_effectiveArgumentListAST (const DownEnumerator_effectiveArgumentListAST &) = delete ;
  private: DownEnumerator_effectiveArgumentListAST & operator = (const DownEnumerator_effectiveArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_effectiveArgumentListAST final {
  public: UpEnumerator_effectiveArgumentListAST (const class GGS_effectiveArgumentListAST & inList)  ;

  public: ~ UpEnumerator_effectiveArgumentListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_effectiveArgumentPassingModeAST current_mEffectiveParameterKind (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mSelector (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_effectiveArgumentListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_effectiveArgumentListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_effectiveArgumentListAST (const UpEnumerator_effectiveArgumentListAST &) = delete ;
  private: UpEnumerator_effectiveArgumentListAST & operator = (const UpEnumerator_effectiveArgumentListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @effectiveArgumentListAST list
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_effectiveArgumentListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_effectiveArgumentListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_effectiveArgumentListAST (void) = default ;

//--- Copy
  public: GGS_effectiveArgumentListAST (const GGS_effectiveArgumentListAST &) = default ;
  public: GGS_effectiveArgumentListAST & operator = (const GGS_effectiveArgumentListAST &) = default ;

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
  public : inline GenericArray <GGS_effectiveArgumentListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_effectiveArgumentListAST subList (const int32_t inStart,
                                                 const int32_t inLength,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_effectiveArgumentListAST (const capCollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                 const class GGS_lstring & in_mSelector
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentListAST init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentListAST extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentListAST class_func_listWithValue (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                              const class GGS_lstring & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssignOperation (const GGS_effectiveArgumentListAST inOperand,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssignOperation (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                    const class GGS_lstring & inOperand1
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: VIRTUAL_IN_DEBUG void plusPlusAssignOperation (const GGS_effectiveArgumentListAST_2E_element & inOperand
                                                         COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_effectiveArgumentListAST add_operation (const GGS_effectiveArgumentListAST & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterKindAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                                                          class GGS_uint constinArgument1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSelectorAtIndex (class GGS_lstring constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST getter_mEffectiveParameterKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_range getter_range (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_effectiveArgumentListAST ;
  friend class DownEnumerator_effectiveArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ;

//--------------------------------------------------------------------------------------------------
//   enum effectiveArgumentPassingModeAST
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentPassingModeAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_effectiveArgumentPassingModeAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_input,
    enum_inputWithType,
    enum_output,
    enum_outputInput,
    enum_outputInputSelfVariable
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_input (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_inputWithType (class GGS_bool & out_constant,
                                                                      class GGS_lstring & out_typeName,
                                                                      class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_output (class GGS_expressionAST & out_exp,
                                                               class GGS_location & out_endOfExp) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_outputInput (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_outputInputSelfVariable (class GGS_lstring & out_name) const ;

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
  public: static GGS_effectiveArgumentPassingModeAST extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_effectiveArgumentPassingModeAST class_func_input (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_inputWithType (const class GGS_bool & inOperand0,
                                                                                     const class GGS_lstring & inOperand1,
                                                                                     const class GGS_lstring & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_output (const class GGS_expressionAST & inOperand0,
                                                                              const class GGS_location & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_outputInput (const class GGS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_effectiveArgumentPassingModeAST class_func_outputInputSelfVariable (const class GGS_lstring & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractInput (class GGS_lstring & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractInputWithType (class GGS_bool & outArgument0,
                                                             class GGS_lstring & outArgument1,
                                                             class GGS_lstring & outArgument2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOutput (class GGS_expressionAST & outArgument0,
                                                      class GGS_location & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOutputInput (class GGS_lstring & outArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractOutputInputSelfVariable (class GGS_lstring & outArgument0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST_2E_input_3F_ getter_getInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST_2E_inputWithType_3F_ getter_getInputWithType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST_2E_output_3F_ getter_getOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST_2E_outputInput_3F_ getter_getOutputInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_effectiveArgumentPassingModeAST_2E_outputInputSelfVariable_3F_ getter_getOutputInputSelfVariable (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isInputWithType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutputInput (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isOutputInputSelfVariable (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentPassingModeAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @effectiveArgumentListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_effectiveArgumentListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_effectiveArgumentPassingModeAST mProperty_mEffectiveParameterKind ;
  public: inline GGS_effectiveArgumentPassingModeAST readProperty_mEffectiveParameterKind (void) const {
    return mProperty_mEffectiveParameterKind ;
  }

  public: GGS_lstring mProperty_mSelector ;
  public: inline GGS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_effectiveArgumentListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMEffectiveParameterKind (const GGS_effectiveArgumentPassingModeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEffectiveParameterKind = inValue ;
  }

  public: inline void setter_setMSelector (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                   const GGS_lstring & in_mSelector) ;

//--------------------------------- Copy constructor
  public: GGS_effectiveArgumentListAST_2E_element (const GGS_effectiveArgumentListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_effectiveArgumentListAST_2E_element & operator = (const GGS_effectiveArgumentListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_effectiveArgumentListAST_2E_element init_21__21_ (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                                                       const class GGS_lstring & inOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_effectiveArgumentListAST_2E_element extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2E_element ;

