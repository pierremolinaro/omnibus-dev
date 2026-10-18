#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @userLLVMTypeDefinitionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_userLLVMTypeDefinitionIR : public AbstractStrongPtrClass {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void userLLVMTypeDefinitionIR_init_21_ (const class GGS_string & inOperand0,
                                                  Compiler * inCompiler) ;


//--- Extension proc generateLLVMType
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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@userLLVMTypeDefinitionIR generateLLVMType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateLLVMType (class cPtr_userLLVMTypeDefinitionIR * inObject,
                                           class GGS_string & io_ioLLVMcode,
                                           class Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @userLLVMTypeDefinitionListIR list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_userLLVMTypeDefinitionListIR final {
  public: DownEnumerator_userLLVMTypeDefinitionListIR (const class GGS_userLLVMTypeDefinitionListIR & inList) ;

  public: ~ DownEnumerator_userLLVMTypeDefinitionListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_userLLVMTypeDefinitionIR current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_userLLVMTypeDefinitionListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_userLLVMTypeDefinitionListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_userLLVMTypeDefinitionListIR (const DownEnumerator_userLLVMTypeDefinitionListIR &) = delete ;
  private: DownEnumerator_userLLVMTypeDefinitionListIR & operator = (const DownEnumerator_userLLVMTypeDefinitionListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_userLLVMTypeDefinitionListIR final {
  public: UpEnumerator_userLLVMTypeDefinitionListIR (const class GGS_userLLVMTypeDefinitionListIR & inList)  ;

  public: ~ UpEnumerator_userLLVMTypeDefinitionListIR (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_userLLVMTypeDefinitionIR current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_userLLVMTypeDefinitionListIR_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_userLLVMTypeDefinitionListIR_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_userLLVMTypeDefinitionListIR (const UpEnumerator_userLLVMTypeDefinitionListIR &) = delete ;
  private: UpEnumerator_userLLVMTypeDefinitionListIR & operator = (const UpEnumerator_userLLVMTypeDefinitionListIR &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @userLLVMTypeDefinitionListIR list
//--------------------------------------------------------------------------------------------------

class GGS_userLLVMTypeDefinitionListIR : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_userLLVMTypeDefinitionListIR_2E_element> mArray ;

//--- Default constructor
  public: GGS_userLLVMTypeDefinitionListIR (void) ;

//--- Destructor
  public: virtual ~ GGS_userLLVMTypeDefinitionListIR (void) = default ;

//--- Copy
  public: GGS_userLLVMTypeDefinitionListIR (const GGS_userLLVMTypeDefinitionListIR &) = default ;
  public: GGS_userLLVMTypeDefinitionListIR & operator = (const GGS_userLLVMTypeDefinitionListIR &) = default ;

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
  public : inline GenericArray <GGS_userLLVMTypeDefinitionListIR_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_userLLVMTypeDefinitionListIR subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_userLLVMTypeDefinitionListIR (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: static class GGS_userLLVMTypeDefinitionListIR class_func_listWithValue (const class GGS_userLLVMTypeDefinitionIR & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_userLLVMTypeDefinitionListIR inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_userLLVMTypeDefinitionIR & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_userLLVMTypeDefinitionListIR_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_userLLVMTypeDefinitionListIR add_operation (const GGS_userLLVMTypeDefinitionListIR & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_userLLVMTypeDefinitionIR constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_userLLVMTypeDefinitionIR constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMTypeAtIndex (class GGS_userLLVMTypeDefinitionIR constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_userLLVMTypeDefinitionIR & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_userLLVMTypeDefinitionIR getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_userLLVMTypeDefinitionListIR getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_userLLVMTypeDefinitionListIR getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_userLLVMTypeDefinitionListIR getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_userLLVMTypeDefinitionListIR ;
  friend class DownEnumerator_userLLVMTypeDefinitionListIR ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMTypeDefinitionListIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_externFunctionDeclarationListAST final {
  public: DownEnumerator_externFunctionDeclarationListAST (const class GGS_externFunctionDeclarationListAST & inList) ;

  public: ~ DownEnumerator_externFunctionDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mExternProcedureName (LOCATION_ARGS) const ;
  public: class GGS_mode current_mMode (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public: class GGS_routineFormalArgumentListAST current_mProcFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReturnTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mRoutineNameForGeneration (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externFunctionDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externFunctionDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_externFunctionDeclarationListAST (const DownEnumerator_externFunctionDeclarationListAST &) = delete ;
  private: DownEnumerator_externFunctionDeclarationListAST & operator = (const DownEnumerator_externFunctionDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_externFunctionDeclarationListAST final {
  public: UpEnumerator_externFunctionDeclarationListAST (const class GGS_externFunctionDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_externFunctionDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mExternProcedureName (LOCATION_ARGS) const ;
  public: class GGS_mode current_mMode (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mAttributeList (LOCATION_ARGS) const ;
  public: class GGS_routineFormalArgumentListAST current_mProcFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mReturnTypeName (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mRoutineNameForGeneration (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_externFunctionDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_externFunctionDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_externFunctionDeclarationListAST (const UpEnumerator_externFunctionDeclarationListAST &) = delete ;
  private: UpEnumerator_externFunctionDeclarationListAST & operator = (const UpEnumerator_externFunctionDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @externFunctionDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_externFunctionDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_externFunctionDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_externFunctionDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_externFunctionDeclarationListAST (const GGS_externFunctionDeclarationListAST &) = default ;
  public: GGS_externFunctionDeclarationListAST & operator = (const GGS_externFunctionDeclarationListAST &) = default ;

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
  public : inline GenericArray <GGS_externFunctionDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_externFunctionDeclarationListAST subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_externFunctionDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mExternProcedureName,
                                                 const class GGS_mode & in_mMode,
                                                 const class GGS_lstringlist & in_mAttributeList,
                                                 const class GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                 const class GGS_lstring & in_mReturnTypeName,
                                                 const class GGS_lstring & in_mRoutineNameForGeneration,
                                                 const class GGS_location & in_mEndOfProcLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionDeclarationListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionDeclarationListAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externFunctionDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_mode & inOperand1,
                                                                                      const class GGS_lstringlist & inOperand2,
                                                                                      const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                      const class GGS_lstring & inOperand4,
                                                                                      const class GGS_lstring & inOperand5,
                                                                                      const class GGS_location & inOperand6
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_externFunctionDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_mode & inOperand1,
                                   const class GGS_lstringlist & inOperand2,
                                   const class GGS_routineFormalArgumentListAST & inOperand3,
                                   const class GGS_lstring & inOperand4,
                                   const class GGS_lstring & inOperand5,
                                   const class GGS_location & inOperand6
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_externFunctionDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_externFunctionDeclarationListAST add_operation (const GGS_externFunctionDeclarationListAST & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_mode constinArgument1,
                              class GGS_lstringlist constinArgument2,
                              class GGS_routineFormalArgumentListAST constinArgument3,
                              class GGS_lstring constinArgument4,
                              class GGS_lstring constinArgument5,
                              class GGS_location constinArgument6,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_mode constinArgument1,
                                     class GGS_lstringlist constinArgument2,
                                     class GGS_routineFormalArgumentListAST constinArgument3,
                                     class GGS_lstring constinArgument4,
                                     class GGS_lstring constinArgument5,
                                     class GGS_location constinArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_mode & outArgument1,
                                class GGS_lstringlist & outArgument2,
                                class GGS_routineFormalArgumentListAST & outArgument3,
                                class GGS_lstring & outArgument4,
                                class GGS_lstring & outArgument5,
                                class GGS_location & outArgument6,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_mode & outArgument1,
                               class GGS_lstringlist & outArgument2,
                               class GGS_routineFormalArgumentListAST & outArgument3,
                               class GGS_lstring & outArgument4,
                               class GGS_lstring & outArgument5,
                               class GGS_location & outArgument6,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_mode & outArgument1,
                                     class GGS_lstringlist & outArgument2,
                                     class GGS_routineFormalArgumentListAST & outArgument3,
                                     class GGS_lstring & outArgument4,
                                     class GGS_lstring & outArgument5,
                                     class GGS_location & outArgument6,
                                     class GGS_uint constinArgument7,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAttributeListAtIndex (class GGS_lstringlist constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfProcLocationAtIndex (class GGS_location constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMExternProcedureNameAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMModeAtIndex (class GGS_mode constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMProcFormalArgumentListAtIndex (class GGS_routineFormalArgumentListAST constinArgument0,
                                                         class GGS_uint constinArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public: void setter_setMReturnTypeNameAtIndex (class GGS_lstring constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMRoutineNameForGenerationAtIndex (class GGS_lstring constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_mode & outArgument1,
                             class GGS_lstringlist & outArgument2,
                             class GGS_routineFormalArgumentListAST & outArgument3,
                             class GGS_lstring & outArgument4,
                             class GGS_lstring & outArgument5,
                             class GGS_location & outArgument6,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_mode & outArgument1,
                            class GGS_lstringlist & outArgument2,
                            class GGS_routineFormalArgumentListAST & outArgument3,
                            class GGS_lstring & outArgument4,
                            class GGS_lstring & outArgument5,
                            class GGS_location & outArgument6,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mAttributeListAtIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfProcLocationAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mExternProcedureNameAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_mode getter_mModeAtIndex (const class GGS_uint & constinOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineFormalArgumentListAST getter_mProcFormalArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mReturnTypeNameAtIndex (const class GGS_uint & constinOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mRoutineNameForGenerationAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_externFunctionDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_externFunctionDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_externFunctionDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_externFunctionDeclarationListAST ;
  friend class DownEnumerator_externFunctionDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externFunctionDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externFunctionDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mExternProcedureName ;
  public: inline GGS_lstring readProperty_mExternProcedureName (void) const {
    return mProperty_mExternProcedureName ;
  }

  public: GGS_mode mProperty_mMode ;
  public: inline GGS_mode readProperty_mMode (void) const {
    return mProperty_mMode ;
  }

  public: GGS_lstringlist mProperty_mAttributeList ;
  public: inline GGS_lstringlist readProperty_mAttributeList (void) const {
    return mProperty_mAttributeList ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_mProcFormalArgumentList ;
  public: inline GGS_routineFormalArgumentListAST readProperty_mProcFormalArgumentList (void) const {
    return mProperty_mProcFormalArgumentList ;
  }

  public: GGS_lstring mProperty_mReturnTypeName ;
  public: inline GGS_lstring readProperty_mReturnTypeName (void) const {
    return mProperty_mReturnTypeName ;
  }

  public: GGS_lstring mProperty_mRoutineNameForGeneration ;
  public: inline GGS_lstring readProperty_mRoutineNameForGeneration (void) const {
    return mProperty_mRoutineNameForGeneration ;
  }

  public: GGS_location mProperty_mEndOfProcLocation ;
  public: inline GGS_location readProperty_mEndOfProcLocation (void) const {
    return mProperty_mEndOfProcLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externFunctionDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExternProcedureName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternProcedureName = inValue ;
  }

  public: inline void setter_setMMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMode = inValue ;
  }

  public: inline void setter_setMAttributeList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAttributeList = inValue ;
  }

  public: inline void setter_setMProcFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mProcFormalArgumentList = inValue ;
  }

  public: inline void setter_setMReturnTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnTypeName = inValue ;
  }

  public: inline void setter_setMRoutineNameForGeneration (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRoutineNameForGeneration = inValue ;
  }

  public: inline void setter_setMEndOfProcLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProcLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externFunctionDeclarationListAST_2E_element (const GGS_lstring & in_mExternProcedureName,
                                                           const GGS_mode & in_mMode,
                                                           const GGS_lstringlist & in_mAttributeList,
                                                           const GGS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                           const GGS_lstring & in_mReturnTypeName,
                                                           const GGS_lstring & in_mRoutineNameForGeneration,
                                                           const GGS_location & in_mEndOfProcLocation) ;

//--------------------------------- Copy constructor
  public: GGS_externFunctionDeclarationListAST_2E_element (const GGS_externFunctionDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externFunctionDeclarationListAST_2E_element & operator = (const GGS_externFunctionDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externFunctionDeclarationListAST_2E_element init_21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                                   const class GGS_mode & inOperand1,
                                                                                                   const class GGS_lstringlist & inOperand2,
                                                                                                   const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                                   const class GGS_lstring & inOperand4,
                                                                                                   const class GGS_lstring & inOperand5,
                                                                                                   const class GGS_location & inOperand6,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externFunctionDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externFunctionDeclarationListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GGS_externFunctionDeclarationListAST inObject,
                                                 class GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @semanticTypePrecedenceGraph graph
//--------------------------------------------------------------------------------------------------

class GGS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public: GGS_semanticTypePrecedenceGraph (void) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_semanticTypePrecedenceGraph init (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_semanticTypePrecedenceGraph extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_addNode (class GGS_lstring inArgument0,
                               class GGS_abstractDeclarationAST inArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_circularities (class GGS_declarationListAST & outArgument0,
                                     class GGS_lstringlist & outArgument1
                                     COMMA_LOCATION_ARGS) const ;

  public: void method_depthFirstTopologicalSort (class GGS_declarationListAST & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 class GGS_declarationListAST & outArgument2,
                                                 class GGS_lstringlist & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoPredecessor (class GGS_declarationListAST & outArgument0,
                                              class GGS_lstringlist & outArgument1
                                              COMMA_LOCATION_ARGS) const ;

  public: void method_nodesWithNoSuccessor (class GGS_declarationListAST & outArgument0,
                                            class GGS_lstringlist & outArgument1
                                            COMMA_LOCATION_ARGS) const ;

  public: void method_topologicalSort (class GGS_declarationListAST & outArgument0,
                                       class GGS_lstringlist & outArgument1,
                                       class GGS_declarationListAST & outArgument2,
                                       class GGS_lstringlist & outArgument3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_lstringlist getter_accessibleNodesFrom (const class GGS_lstringlist & constinOperand0,
                                                            const class GGS_stringset & constinOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_declarationListAST getter_nodeList (LOCATION_ARGS) const ;

  public: class GGS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public: class GGS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GGS_lstringlist & constinOperand0,
                                                                          const class GGS_stringset & constinOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externFunctionDeclarationListAST enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GGS_externFunctionDeclarationListAST inObject,
                                               class GGS_semanticContext & io_ioContext,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externFunctionDeclarationListAST.element enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GGS_externFunctionDeclarationListAST_2E_element inObject,
                                               class GGS_semanticContext & io_ioContext,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externFunctionDeclarationListAST externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GGS_externFunctionDeclarationListAST inObject,
                                                      const class GGS_semanticContext constin_inContext,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externFunctionDeclarationListAST.element externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GGS_externFunctionDeclarationListAST_2E_element inObject,
                                                      const class GGS_semanticContext constin_inContext,
                                                      class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GGS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_unifiedTypeMapElementClass (const class cPtr_unifiedTypeMapElementClass * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mTypeName (void) const ;
  public: void setProperty_mTypeName (const GGS_lstring & inValue) ;

  public: class GGS_typeDefinition readProperty_mDefinition (void) const ;
  public: void setProperty_mDefinition (const GGS_typeDefinition & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapElementClass init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_typeDefinition & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapElementClass extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMapElementClass? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapElementClass_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMapElementClass mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapElementClass_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMapElementClass_3F_ (const GGS_unifiedTypeMapElementClass & inSource) ;

//--------------------------------- Constructor from weak type
  public: GGS_unifiedTypeMapElementClass_3F_ (const class GGS_unifiedTypeMapElementClass_2E_weak & inSource) ;
//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMapElementClass_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_unifiedTypeMapElementClass unwrappedValue (void) const {
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
  public: static GGS_unifiedTypeMapElementClass_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapElementClass_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @unifiedTypeMapEntry_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_unifiedTypeMapElementClass_3F_ mProperty_weakElement ;
  public: inline GGS_unifiedTypeMapElementClass_3F_ readProperty_weakElement (void) const {
    return mProperty_weakElement ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setWeakElement (const GGS_unifiedTypeMapElementClass_3F_ & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_weakElement = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapElementClass_3F_ & in_weakElement) ;

//--------------------------------- Copy constructor
  public: GGS_unifiedTypeMapEntry_2E_element (const GGS_unifiedTypeMapEntry_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_unifiedTypeMapEntry_2E_element & operator = (const GGS_unifiedTypeMapEntry_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_unifiedTypeMapEntry_2E_element init_21_ (const class GGS_unifiedTypeMapElementClass_3F_ & inOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_unifiedTypeMapEntry_2E_element extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry_2E_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: unifiedTypeMapEntry.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_unifiedTypeMapEntry_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_unifiedTypeMapEntry_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_unifiedTypeMapEntry_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_unifiedTypeMapEntry_2E_element_3F_ (const GGS_unifiedTypeMapEntry_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_unifiedTypeMapEntry_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

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

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_unifiedTypeMapEntry_2E_element_3F_ & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externRoutineIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_externRoutineIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_externRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_externRoutineIR (const class cPtr_externRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) ;

  public: class GGS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;
  public: void setProperty_mReturnType (const GGS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_bool & inOperand1,
                                                                                      const class GGS_bool & inOperand2,
                                                                                      const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                      const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externRoutineIR extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externRoutineIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @externRoutineIR class
//--------------------------------------------------------------------------------------------------

class cPtr_externRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_bool & inOperand1,
                                                                                const class GGS_bool & inOperand2,
                                                                                const class GGS_routineFormalArgumentListIR & inOperand3,
                                                                                const class GGS_unifiedTypeMapEntry & inOperand4,
                                                                                Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;


//--- Default constructor
  public: cPtr_externRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                const GGS_bool & in_isRequired,
                                const GGS_bool & in_warnsIfUnused,
                                const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                const GGS_unifiedTypeMapEntry & in_mReturnType,
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
// Phase 1: @externRoutineIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_externRoutineIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_externRoutineIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_externRoutineIR_2E_weak (const class GGS_externRoutineIR & inSource) ;

  public: GGS_externRoutineIR_2E_weak & operator = (const class GGS_externRoutineIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_externRoutineIR_2E_weak init_nil (void) {
    GGS_externRoutineIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_externRoutineIR bang_externRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_externRoutineIR unwrappedValue (void) const ;

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
  public: static GGS_externRoutineIR_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_externRoutineIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_externRoutineIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externRoutineIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @externProcedureMapIR_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureMapIR_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: inline GGS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const {
    return mProperty_mFormalArgumentListForGeneration ;
  }

  public: GGS_unifiedTypeMapEntry mProperty_mReturnType ;
  public: inline GGS_unifiedTypeMapEntry readProperty_mReturnType (void) const {
    return mProperty_mReturnType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_externProcedureMapIR_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentListForGeneration = inValue ;
  }

  public: inline void setter_setMReturnType (const GGS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_externProcedureMapIR_2E_element (const GGS_lstring & in_lkey,
                                               const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                               const GGS_unifiedTypeMapEntry & in_mReturnType) ;

//--------------------------------- Copy constructor
  public: GGS_externProcedureMapIR_2E_element (const GGS_externProcedureMapIR_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_externProcedureMapIR_2E_element & operator = (const GGS_externProcedureMapIR_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_externProcedureMapIR_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                       const class GGS_routineFormalArgumentListIR & inOperand1,
                                                                       const class GGS_unifiedTypeMapEntry & inOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_externProcedureMapIR_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: externProcedureMapIR.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_externProcedureMapIR_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_externProcedureMapIR_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_externProcedureMapIR_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_externProcedureMapIR_2E_element_3F_ (const GGS_externProcedureMapIR_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_externProcedureMapIR_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_externProcedureMapIR_2E_element unwrappedValue (void) const {
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
  public: static GGS_externProcedureMapIR_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@externProcedureMapIR llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GGS_externProcedureMapIR inObject,
                                              class GGS_string & io_ioLLVMcode,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendCopyFromReferences'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendCopyFromReferences (class GGS_instructionListIR & ioObject,
                                               const class GGS_assignmentOperatorMap constin_inAssignmentOperatorMap,
                                               class GGS_semanticTemporariesStruct & io_ioTemporaries,
                                               const class GGS_location constin_inErrorLocation,
                                               const class GGS_objectIR constin_inSourcePossibleReference,
                                               const class GGS_LValueRepresentation constin_inTargetReference,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @copyFromReferencesIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_copyFromReferencesIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_copyFromReferencesIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_copyFromReferencesIR (const class cPtr_copyFromReferencesIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_LValueRepresentation readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_LValueRepresentation & inValue) ;

  public: class GGS_string readProperty_mSourceLLVMName (void) const ;
  public: void setProperty_mSourceLLVMName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_copyFromReferencesIR init_21__21_ (const class GGS_LValueRepresentation & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_copyFromReferencesIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_copyFromReferencesIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @LValueRepresentation struct
//--------------------------------------------------------------------------------------------------

class GGS_LValueRepresentation : public AC_GALGAS_root {
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
  public: GGS_LValueRepresentation (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

  public: inline void setter_setLlvmName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_LValueRepresentation (const GGS_omnibusType & in_type,
                                    const GGS_string & in_llvmName) ;

//--------------------------------- Copy constructor
  public: GGS_LValueRepresentation (const GGS_LValueRepresentation & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_LValueRepresentation & operator = (const GGS_LValueRepresentation & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_LValueRepresentation init_21__21_ (const class GGS_omnibusType & inOperand0,
                                                        const class GGS_string & inOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_LValueRepresentation extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueRepresentation ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @copyFromReferencesIR class
//--------------------------------------------------------------------------------------------------

class cPtr_copyFromReferencesIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void copyFromReferencesIR_init_21__21_ (const class GGS_LValueRepresentation & inOperand0,
                                                  const class GGS_string & inOperand1,
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
  public: GGS_LValueRepresentation mProperty_mTarget ;
  public: GGS_string mProperty_mSourceLLVMName ;


//--- Default constructor
  public: cPtr_copyFromReferencesIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_copyFromReferencesIR (const GGS_LValueRepresentation & in_mTarget,
                                     const GGS_string & in_mSourceLLVMName,
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
//
//Function 'checkAssignmentCompatibility'
//
//--------------------------------------------------------------------------------------------------

class GGS_objectIR function_checkAssignmentCompatibility (const class GGS_assignmentOperatorMap & constinArgument0,
                                                          const class GGS_objectIR & constinArgument1,
                                                          const class GGS_omnibusType & constinArgument2,
                                                          const class GGS_location & constinArgument3,
                                                          const class GGS_bool & constinArgument4,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @copyFromReferencesIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_copyFromReferencesIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_copyFromReferencesIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_copyFromReferencesIR_2E_weak (const class GGS_copyFromReferencesIR & inSource) ;

  public: GGS_copyFromReferencesIR_2E_weak & operator = (const class GGS_copyFromReferencesIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_copyFromReferencesIR_2E_weak init_nil (void) {
    GGS_copyFromReferencesIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_copyFromReferencesIR bang_copyFromReferencesIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_copyFromReferencesIR unwrappedValue (void) const ;

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
  public: static GGS_copyFromReferencesIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_copyFromReferencesIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_copyFromReferencesIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_copyFromReferencesIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerDeclarationAST : public GGS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GGS_integerDeclarationAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_integerDeclarationAST (const class cPtr_integerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_bool readProperty_mIsSigned (void) const ;
  public: void setProperty_mIsSigned (const GGS_bool & inValue) ;

  public: class GGS_uint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GGS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerDeclarationAST init_21__21_ (const class GGS_bool & inOperand0,
                                                         const class GGS_uint & inOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerDeclarationAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerDeclarationAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @integerDeclarationAST class
//--------------------------------------------------------------------------------------------------

class cPtr_integerDeclarationAST : public cPtr_abstractDeclarationAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerDeclarationAST_init_21__21_ (const class GGS_bool & inOperand0,
                                                   const class GGS_uint & inOperand1,
                                                   Compiler * inCompiler) ;


//--- Extension func keyRepresentationForErrorSignaling
  public: virtual class GGS_string getter_keyRepresentationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func locationForErrorSignaling
  public: virtual class GGS_location getter_locationForErrorSignaling (Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Extension func typeName
  public: virtual class GGS_string getter_typeName (Compiler * COMMA_LOCATION_ARGS) const ;

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
  public: GGS_bool mProperty_mIsSigned ;
  public: GGS_uint mProperty_mSize ;


//--- Default constructor
  public: cPtr_integerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerDeclarationAST (const GGS_bool & in_mIsSigned,
                                      const GGS_uint & in_mSize,
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
// Phase 1: @integerDeclarationAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerDeclarationAST_2E_weak : public GGS_abstractDeclarationAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerDeclarationAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerDeclarationAST_2E_weak (const class GGS_integerDeclarationAST & inSource) ;

  public: GGS_integerDeclarationAST_2E_weak & operator = (const class GGS_integerDeclarationAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_integerDeclarationAST_2E_weak init_nil (void) {
    GGS_integerDeclarationAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_integerDeclarationAST bang_integerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_integerDeclarationAST unwrappedValue (void) const ;

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
  public: static GGS_integerDeclarationAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerDeclarationAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerDeclarationAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerDeclarationAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension func '@integerDeclarationAST typeName'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage init_21_ (const class GGS_string & inOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inlineInfix_integer_compileTimeInt_operatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_init_21_ (const class GGS_string & inOperand0,
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
  public: cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const GGS_string & in_mLLVMOperation,
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
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (const class GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) ;

  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak & operator = (const class GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak init_nil (void) {
    GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage bang_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage unwrappedValue (void) const ;

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
  public: static GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public GGS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMOperation (void) const ;
  public: void setProperty_mLLVMOperation (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage init_21_ (const class GGS_string & inOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @inlineInfix_compileTimeInt_integer_operatorUsage class
//--------------------------------------------------------------------------------------------------

class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public cPtr_omnibusInfixOperatorUsage {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_init_21_ (const class GGS_string & inOperand0,
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
  public: cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const GGS_string & in_mLLVMOperation,
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
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak : public GGS_omnibusInfixOperatorUsage_2E_weak {
//--------------------------------- Default constructor
  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (const class GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) ;

  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak & operator = (const class GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak init_nil (void) {
    GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage bang_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage unwrappedValue (void) const ;

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
  public: static GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @integerBuiltinFunctionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerBuiltinFunctionIR : public GGS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GGS_integerBuiltinFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_integerBuiltinFunctionIR (const class cPtr_integerBuiltinFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mLLVMTypeName (void) const ;
  public: void setProperty_mLLVMTypeName (const GGS_string & inValue) ;

  public: class GGS_string readProperty_mIntrinsicName (void) const ;
  public: void setProperty_mIntrinsicName (const GGS_string & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_integerBuiltinFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                               const class GGS_bool & inOperand1,
                                                                                               const class GGS_bool & inOperand2,
                                                                                               const class GGS_string & inOperand3,
                                                                                               const class GGS_string & inOperand4,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_integerBuiltinFunctionIR extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerBuiltinFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @integerBuiltinFunctionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_integerBuiltinFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void integerBuiltinFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GGS_lstring & inOperand0,
                                                                                         const class GGS_bool & inOperand1,
                                                                                         const class GGS_bool & inOperand2,
                                                                                         const class GGS_string & inOperand3,
                                                                                         const class GGS_string & inOperand4,
                                                                                         Compiler * inCompiler) ;


//--- Extension proc llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mLLVMTypeName ;
  public: GGS_string mProperty_mIntrinsicName ;


//--- Default constructor
  public: cPtr_integerBuiltinFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_integerBuiltinFunctionIR (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         const GGS_string & in_mLLVMTypeName,
                                         const GGS_string & in_mIntrinsicName,
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
// Phase 1: @integerBuiltinFunctionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_integerBuiltinFunctionIR_2E_weak : public GGS_abstractRoutineIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_integerBuiltinFunctionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_integerBuiltinFunctionIR_2E_weak (const class GGS_integerBuiltinFunctionIR & inSource) ;

  public: GGS_integerBuiltinFunctionIR_2E_weak & operator = (const class GGS_integerBuiltinFunctionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_integerBuiltinFunctionIR_2E_weak init_nil (void) {
    GGS_integerBuiltinFunctionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_integerBuiltinFunctionIR bang_integerBuiltinFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_integerBuiltinFunctionIR unwrappedValue (void) const ;

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
  public: static GGS_integerBuiltinFunctionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_integerBuiltinFunctionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_integerBuiltinFunctionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerBuiltinFunctionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreTemporaryReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreTemporaryReference (class GGS_instructionListIR & ioObject,
                                                    const class GGS_omnibusType constin_inTargetVarType,
                                                    const class GGS_string constin_inLLVMName,
                                                    const class GGS_objectIR constin_inSourceValue,
                                                    class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeFromTemporaryReferenceIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeFromTemporaryReferenceIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeFromTemporaryReferenceIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeFromTemporaryReferenceIR (const class cPtr_storeFromTemporaryReferenceIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMTargetVarName (void) const ;
  public: void setProperty_mLLVMTargetVarName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeFromTemporaryReferenceIR init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                                     const class GGS_string & inOperand1,
                                                                     const class GGS_objectIR & inOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeFromTemporaryReferenceIR extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeFromTemporaryReferenceIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeFromTemporaryReferenceIR class
//--------------------------------------------------------------------------------------------------

class cPtr_storeFromTemporaryReferenceIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeFromTemporaryReferenceIR_init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mTargetVarType ;
  public: GGS_string mProperty_mLLVMTargetVarName ;
  public: GGS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeFromTemporaryReferenceIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeFromTemporaryReferenceIR (const GGS_omnibusType & in_mTargetVarType,
                                              const GGS_string & in_mLLVMTargetVarName,
                                              const GGS_objectIR & in_mSourceValue,
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
// Phase 1: @storeFromTemporaryReferenceIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeFromTemporaryReferenceIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeFromTemporaryReferenceIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeFromTemporaryReferenceIR_2E_weak (const class GGS_storeFromTemporaryReferenceIR & inSource) ;

  public: GGS_storeFromTemporaryReferenceIR_2E_weak & operator = (const class GGS_storeFromTemporaryReferenceIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeFromTemporaryReferenceIR_2E_weak init_nil (void) {
    GGS_storeFromTemporaryReferenceIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeFromTemporaryReferenceIR bang_storeFromTemporaryReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_storeFromTemporaryReferenceIR unwrappedValue (void) const ;

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
  public: static GGS_storeFromTemporaryReferenceIR_2E_weak extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeFromTemporaryReferenceIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeFromTemporaryReferenceIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR_2E_weak ;

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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
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
  public: virtual AbstractPtrClass * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

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
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
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
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getComputedPropertyValueIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum primaryInExpressionAccessAST
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_property,
    enum_integerSlice,
    enum_arrayAccess,
    enum_funcCall
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_property (class GGS_lstring & out_name) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_integerSlice (class GGS_lbigint & out_low,
                                                                     class GGS_lbigint & out_high) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_arrayAccess (class GGS_expressionAST & out_index,
                                                                    class GGS_location & out_endOfIndex,
                                                                    class GGS_bool & out_checkIndexExpression) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_funcCall (class GGS_lstring & out_methodName,
                                                                 class GGS_effectiveArgumentListAST & out_arguments,
                                                                 class GGS_location & out_endOfArguments) const ;

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
  public: static GGS_primaryInExpressionAccessAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessAST class_func_arrayAccess (const class GGS_expressionAST & inOperand0,
                                                                                const class GGS_location & inOperand1,
                                                                                const class GGS_bool & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

  public: static class GGS_primaryInExpressionAccessAST class_func_funcCall (const class GGS_lstring & inOperand0,
                                                                             const class GGS_effectiveArgumentListAST & inOperand1,
                                                                             const class GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

  public: static class GGS_primaryInExpressionAccessAST class_func_integerSlice (const class GGS_lbigint & inOperand0,
                                                                                 const class GGS_lbigint & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

  public: static class GGS_primaryInExpressionAccessAST class_func_property (const class GGS_lstring & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractArrayAccess (class GGS_expressionAST & outArgument0,
                                          class GGS_location & outArgument1,
                                          class GGS_bool & outArgument2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractFuncCall (class GGS_lstring & outArgument0,
                                       class GGS_effectiveArgumentListAST & outArgument1,
                                       class GGS_location & outArgument2,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

  public: void method_extractIntegerSlice (class GGS_lbigint & outArgument0,
                                           class GGS_lbigint & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

  public: void method_extractProperty (class GGS_lstring & outArgument0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ getter_getArrayAccess (LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ getter_getFuncCall (LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ getter_getIntegerSlice (LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessAST_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isFuncCall (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIntegerSlice (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_arrayAccess struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_arrayAccess : public AC_GALGAS_root {
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

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (void) ;

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

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_expressionAST & in_index,
                                                           const GGS_location & in_endOfIndex,
                                                           const GGS_bool & in_checkIndexExpression) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess & operator = (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess init_21__21__21_ (const class GGS_expressionAST & inOperand0,
                                                                                   const class GGS_location & inOperand1,
                                                                                   const class GGS_bool & inOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.arrayAccess? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_arrayAccess mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ (const GGS_primaryInExpressionAccessAST_2E_arrayAccess & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_arrayAccess unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_arrayAccess_3F_ ;

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
  public: GGS_effectiveArgumentListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_effectiveArgumentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_effectiveArgumentPassingModeAST & inOperand0,
                                   const class GGS_lstring & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_effectiveArgumentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_effectiveArgumentListAST add_operation (const GGS_effectiveArgumentListAST & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                              class GGS_lstring constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
                                     class GGS_lstring constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                class GGS_lstring & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                               class GGS_lstring & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                                     class GGS_lstring & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEffectiveParameterKindAtIndex (class GGS_effectiveArgumentPassingModeAST constinArgument0,
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
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_effectiveArgumentPassingModeAST & outArgument0,
                            class GGS_lstring & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentPassingModeAST getter_mEffectiveParameterKindAtIndex (const class GGS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mSelectorAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_effectiveArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_effectiveArgumentListAST ;
  friend class DownEnumerator_effectiveArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_funcCall struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_funcCall : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_methodName ;
  public: inline GGS_lstring readProperty_methodName (void) const {
    return mProperty_methodName ;
  }

  public: GGS_effectiveArgumentListAST mProperty_arguments ;
  public: inline GGS_effectiveArgumentListAST readProperty_arguments (void) const {
    return mProperty_arguments ;
  }

  public: GGS_location mProperty_endOfArguments ;
  public: inline GGS_location readProperty_endOfArguments (void) const {
    return mProperty_endOfArguments ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMethodName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_methodName = inValue ;
  }

  public: inline void setter_setArguments (const GGS_effectiveArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_arguments = inValue ;
  }

  public: inline void setter_setEndOfArguments (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_endOfArguments = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_lstring & in_methodName,
                                                        const GGS_effectiveArgumentListAST & in_arguments,
                                                        const GGS_location & in_endOfArguments) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_funcCall & operator = (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                const class GGS_effectiveArgumentListAST & inOperand1,
                                                                                const class GGS_location & inOperand2,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.funcCall? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_funcCall mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ (const GGS_primaryInExpressionAccessAST_2E_funcCall & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_funcCall unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_funcCall_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_funcCall_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_integerSlice struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_integerSlice : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lbigint mProperty_low ;
  public: inline GGS_lbigint readProperty_low (void) const {
    return mProperty_low ;
  }

  public: GGS_lbigint mProperty_high ;
  public: inline GGS_lbigint readProperty_high (void) const {
    return mProperty_high ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLow (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_low = inValue ;
  }

  public: inline void setter_setHigh (const GGS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_high = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_lbigint & in_low,
                                                            const GGS_lbigint & in_high) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice & operator = (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice init_21__21_ (const class GGS_lbigint & inOperand0,
                                                                                const class GGS_lbigint & inOperand1,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.integerSlice? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_integerSlice mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ (const GGS_primaryInExpressionAccessAST_2E_integerSlice & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_integerSlice unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_integerSlice_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_integerSlice_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessAST_2E_property struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_property : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_name ;
  public: inline GGS_lstring readProperty_name (void) const {
    return mProperty_name ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (void) ;

//--------------------------------- Property setters
  public: inline void setter_setName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_name = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (const GGS_lstring & in_name) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessAST_2E_property (const GGS_primaryInExpressionAccessAST_2E_property & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessAST_2E_property & operator = (const GGS_primaryInExpressionAccessAST_2E_property & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessAST_2E_property init_21_ (const class GGS_lstring & inOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessAST_2E_property extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property ;

//--------------------------------------------------------------------------------------------------
// Phase 1: primaryInExpressionAccessAST.property? optional
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessAST_2E_property_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_primaryInExpressionAccessAST_2E_property mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessAST_2E_property_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_primaryInExpressionAccessAST_2E_property_3F_ (const GGS_primaryInExpressionAccessAST_2E_property & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_primaryInExpressionAccessAST_2E_property_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_primaryInExpressionAccessAST_2E_property unwrappedValue (void) const {
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
  public: static GGS_primaryInExpressionAccessAST_2E_property_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessAST_2E_property_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_primaryInExpressionAccessListAST final {
  public: DownEnumerator_primaryInExpressionAccessListAST (const class GGS_primaryInExpressionAccessListAST & inList) ;

  public: ~ DownEnumerator_primaryInExpressionAccessListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_primaryInExpressionAccessAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primaryInExpressionAccessListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_primaryInExpressionAccessListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_primaryInExpressionAccessListAST (const DownEnumerator_primaryInExpressionAccessListAST &) = delete ;
  private: DownEnumerator_primaryInExpressionAccessListAST & operator = (const DownEnumerator_primaryInExpressionAccessListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_primaryInExpressionAccessListAST final {
  public: UpEnumerator_primaryInExpressionAccessListAST (const class GGS_primaryInExpressionAccessListAST & inList)  ;

  public: ~ UpEnumerator_primaryInExpressionAccessListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_primaryInExpressionAccessAST current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_primaryInExpressionAccessListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_primaryInExpressionAccessListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_primaryInExpressionAccessListAST (const UpEnumerator_primaryInExpressionAccessListAST &) = delete ;
  private: UpEnumerator_primaryInExpressionAccessListAST & operator = (const UpEnumerator_primaryInExpressionAccessListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @primaryInExpressionAccessListAST list
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_primaryInExpressionAccessListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_primaryInExpressionAccessListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_primaryInExpressionAccessListAST (void) = default ;

//--- Copy
  public: GGS_primaryInExpressionAccessListAST (const GGS_primaryInExpressionAccessListAST &) = default ;
  public: GGS_primaryInExpressionAccessListAST & operator = (const GGS_primaryInExpressionAccessListAST &) = default ;

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
  public : inline GenericArray <GGS_primaryInExpressionAccessListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_primaryInExpressionAccessListAST subList (const int32_t inStart,
                                                         const int32_t inLength,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_primaryInExpressionAccessListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_primaryInExpressionAccessAST & in_mAccess
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessListAST init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessListAST extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAccessListAST class_func_listWithValue (const class GGS_primaryInExpressionAccessAST & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_primaryInExpressionAccessListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_primaryInExpressionAccessAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_primaryInExpressionAccessListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_primaryInExpressionAccessListAST add_operation (const GGS_primaryInExpressionAccessListAST & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_primaryInExpressionAccessAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_primaryInExpressionAccessAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_primaryInExpressionAccessAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_primaryInExpressionAccessAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_primaryInExpressionAccessAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAccessAtIndex (class GGS_primaryInExpressionAccessAST constinArgument0,
                                         class GGS_uint constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_primaryInExpressionAccessAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_primaryInExpressionAccessAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessAST getter_mAccessAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_primaryInExpressionAccessListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_primaryInExpressionAccessListAST ;
  friend class DownEnumerator_primaryInExpressionAccessListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAccessListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAccessListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_primaryInExpressionAccessAST mProperty_mAccess ;
  public: inline GGS_primaryInExpressionAccessAST readProperty_mAccess (void) const {
    return mProperty_mAccess ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAccess (const GGS_primaryInExpressionAccessAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccess = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessAST & in_mAccess) ;

//--------------------------------- Copy constructor
  public: GGS_primaryInExpressionAccessListAST_2E_element (const GGS_primaryInExpressionAccessListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_primaryInExpressionAccessListAST_2E_element & operator = (const GGS_primaryInExpressionAccessListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAccessListAST_2E_element init_21_ (const class GGS_primaryInExpressionAccessAST & inOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAccessListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @primaryInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_primaryInExpressionAST (const class cPtr_primaryInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mReceiverName (void) const ;
  public: void setProperty_mReceiverName (const GGS_lstring & inValue) ;

  public: class GGS_primaryInExpressionAccessListAST readProperty_mAccessList (void) const ;
  public: void setProperty_mAccessList (const GGS_primaryInExpressionAccessListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_primaryInExpressionAST init_21__21_ (const class GGS_lstring & inOperand0,
                                                          const class GGS_primaryInExpressionAccessListAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_primaryInExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primaryInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @primaryInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_primaryInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void primaryInExpressionAST_init_21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_primaryInExpressionAccessListAST & inOperand1,
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

//--- Extension proc analyzePrimaryExpressionNoSelf
  public: virtual void method_analyzePrimaryExpressionNoSelf (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inOptionalTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc analyzePrimaryExpressionWithSelf
  public: virtual void method_analyzePrimaryExpressionWithSelf (const class GGS_omnibusType arg_inSelfType,
           const class GGS_routineAttributes arg_inRoutineAttributes,
           const class GGS_omnibusType arg_inOptionalTargetType,
           const class GGS_semanticContext arg_inContext,
           const class GGS_mode arg_inMode,
           class GGS_semanticTemporariesStruct & arg_ioTemporaries,
           class GGS_staticEntityMap & arg_ioStaticEntityMap,
           class GGS_universalValuedObjectMap & arg_ioUniversalMap,
           class GGS_allocaList & arg_ioAllocaList,
           class GGS_instructionListIR & arg_ioInstructionGenerationList,
           class GGS_objectIR & arg_outResult,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension proc noteExpressionTypesInPrecedenceGraph
  public: virtual void method_noteExpressionTypesInPrecedenceGraph (class GGS_semanticTypePrecedenceGraph & arg_ioGraph,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mReceiverName ;
  public: GGS_primaryInExpressionAccessListAST mProperty_mAccessList ;


//--- Default constructor
  public: cPtr_primaryInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_primaryInExpressionAST (const GGS_lstring & in_mReceiverName,
                                       const GGS_primaryInExpressionAccessListAST & in_mAccessList,
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
// Phase 1: @primaryInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_primaryInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_primaryInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_primaryInExpressionAST_2E_weak (const class GGS_primaryInExpressionAST & inSource) ;

  public: GGS_primaryInExpressionAST_2E_weak & operator = (const class GGS_primaryInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_primaryInExpressionAST_2E_weak init_nil (void) {
    GGS_primaryInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_primaryInExpressionAST bang_primaryInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_primaryInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_primaryInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_primaryInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_primaryInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primaryInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreIndirectVolatileRegister'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreIndirectVolatileRegister (class GGS_instructionListIR & ioObject,
                                                          const class GGS_omnibusType constin_inTargetVarType,
                                                          const class GGS_string constin_inLLVMName,
                                                          const class GGS_objectIR constin_inSourceValue,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeIndirectVolatileIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeIndirectVolatileIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeIndirectVolatileIR (const class cPtr_storeIndirectVolatileIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_omnibusType readProperty_mTargetVarType (void) const ;
  public: void setProperty_mTargetVarType (const GGS_omnibusType & inValue) ;

  public: class GGS_string readProperty_mLLVMName (void) const ;
  public: void setProperty_mLLVMName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mSourceValue (void) const ;
  public: void setProperty_mSourceValue (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeIndirectVolatileIR init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                               const class GGS_string & inOperand1,
                                                               const class GGS_objectIR & inOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeIndirectVolatileIR extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeIndirectVolatileIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

class cPtr_storeIndirectVolatileIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeIndirectVolatileIR_init_21__21__21_ (const class GGS_omnibusType & inOperand0,
                                                         const class GGS_string & inOperand1,
                                                         const class GGS_objectIR & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_omnibusType mProperty_mTargetVarType ;
  public: GGS_string mProperty_mLLVMName ;
  public: GGS_objectIR mProperty_mSourceValue ;


//--- Default constructor
  public: cPtr_storeIndirectVolatileIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeIndirectVolatileIR (const GGS_omnibusType & in_mTargetVarType,
                                        const GGS_string & in_mLLVMName,
                                        const GGS_objectIR & in_mSourceValue,
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
// Phase 1: @storeIndirectVolatileIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeIndirectVolatileIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_storeIndirectVolatileIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_storeIndirectVolatileIR_2E_weak (const class GGS_storeIndirectVolatileIR & inSource) ;

  public: GGS_storeIndirectVolatileIR_2E_weak & operator = (const class GGS_storeIndirectVolatileIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_storeIndirectVolatileIR_2E_weak init_nil (void) {
    GGS_storeIndirectVolatileIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_storeIndirectVolatileIR bang_storeIndirectVolatileIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_storeIndirectVolatileIR unwrappedValue (void) const ;

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
  public: static GGS_storeIndirectVolatileIR_2E_weak extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_storeIndirectVolatileIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeIndirectVolatileIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @staticListValueListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_staticListValueListAST final {
  public: DownEnumerator_staticListValueListAST (const class GGS_staticListValueListAST & inList) ;

  public: ~ DownEnumerator_staticListValueListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_extendStaticListElementAST current_mElement (LOCATION_ARGS) const ;
  public: class GGS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticListValueListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_staticListValueListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_staticListValueListAST (const DownEnumerator_staticListValueListAST &) = delete ;
  private: DownEnumerator_staticListValueListAST & operator = (const DownEnumerator_staticListValueListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_staticListValueListAST final {
  public: UpEnumerator_staticListValueListAST (const class GGS_staticListValueListAST & inList)  ;

  public: ~ UpEnumerator_staticListValueListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_extendStaticListElementAST current_mElement (LOCATION_ARGS) const ;
  public: class GGS_location current_mLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_staticListValueListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_staticListValueListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_staticListValueListAST (const UpEnumerator_staticListValueListAST &) = delete ;
  private: UpEnumerator_staticListValueListAST & operator = (const UpEnumerator_staticListValueListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @staticListValueListAST list
//--------------------------------------------------------------------------------------------------

class GGS_staticListValueListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_staticListValueListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_staticListValueListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_staticListValueListAST (void) = default ;

//--- Copy
  public: GGS_staticListValueListAST (const GGS_staticListValueListAST &) = default ;
  public: GGS_staticListValueListAST & operator = (const GGS_staticListValueListAST &) = default ;

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
  public : inline GenericArray <GGS_staticListValueListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_staticListValueListAST subList (const int32_t inStart,
                                               const int32_t inLength,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_staticListValueListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_extendStaticListElementAST & in_mElement,
                                                 const class GGS_location & in_mLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_staticListValueListAST init (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_staticListValueListAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_staticListValueListAST class_func_listWithValue (const class GGS_extendStaticListElementAST & inOperand0,
                                                                            const class GGS_location & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_staticListValueListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_extendStaticListElementAST & inOperand0,
                                   const class GGS_location & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_staticListValueListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_staticListValueListAST add_operation (const GGS_staticListValueListAST & inOperand,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_extendStaticListElementAST constinArgument0,
                              class GGS_location constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_extendStaticListElementAST constinArgument0,
                                     class GGS_location constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_extendStaticListElementAST & outArgument0,
                                class GGS_location & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_extendStaticListElementAST & outArgument0,
                               class GGS_location & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_extendStaticListElementAST & outArgument0,
                                     class GGS_location & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMElementAtIndex (class GGS_extendStaticListElementAST constinArgument0,
                                          class GGS_uint constinArgument1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

  public: void setter_setMLocationAtIndex (class GGS_location constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_extendStaticListElementAST & outArgument0,
                             class GGS_location & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_extendStaticListElementAST & outArgument0,
                            class GGS_location & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_extendStaticListElementAST getter_mElementAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mLocationAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_staticListValueListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListValueListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListValueListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_staticListValueListAST ;
  friend class DownEnumerator_staticListValueListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticListValueListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticArrayDeclarationDictAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticArrayDeclarationDictAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_key ;
  public: inline GGS_string readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GGS_staticListValueListAST mProperty_mStaticList ;
  public: inline GGS_staticListValueListAST readProperty_mStaticList (void) const {
    return mProperty_mStaticList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setMStaticList (const GGS_staticListValueListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element (const GGS_string & in_key,
                                                              const GGS_staticListValueListAST & in_mStaticList) ;

//--------------------------------- Copy constructor
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element & operator = (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticArrayDeclarationDictAST_2E_element init_21__21_ (const class GGS_string & inOperand0,
                                                                                  const class GGS_staticListValueListAST & inOperand1,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticArrayDeclarationDictAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: extendStaticArrayDeclarationDictAST.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_extendStaticArrayDeclarationDictAST_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_extendStaticArrayDeclarationDictAST_2E_element unwrappedValue (void) const {
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
  public: static GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticArrayDeclarationDictAST dictionary enumerator
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericDictionary.h"

//--------------------------------------------------------------------------------------------------

class DownEnumerator_extendStaticArrayDeclarationDictAST final {
  public: DownEnumerator_extendStaticArrayDeclarationDictAST (const class GGS_extendStaticArrayDeclarationDictAST & inOperand) ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;

  public: class GGS_staticListValueListAST current_mStaticList (UNUSED_LOCATION_ARGS) const ;


//--- Current element access
  public: class GGS_extendStaticArrayDeclarationDictAST_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extendStaticArrayDeclarationDictAST_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: DownEnumerator_extendStaticArrayDeclarationDictAST (const DownEnumerator_extendStaticArrayDeclarationDictAST &) = delete ;
  private: DownEnumerator_extendStaticArrayDeclarationDictAST & operator = (const DownEnumerator_extendStaticArrayDeclarationDictAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_extendStaticArrayDeclarationDictAST final {
  public: UpEnumerator_extendStaticArrayDeclarationDictAST (const class GGS_extendStaticArrayDeclarationDictAST & inOperand)  ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: class GGS_string current_key (UNUSED_LOCATION_ARGS) const ;
  public: class GGS_staticListValueListAST current_mStaticList (UNUSED_LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_extendStaticArrayDeclarationDictAST_2E_element current (UNUSED_LOCATION_ARGS) const ;

//--- Private properties
  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_extendStaticArrayDeclarationDictAST_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

//--- No copy
  private: UpEnumerator_extendStaticArrayDeclarationDictAST (const UpEnumerator_extendStaticArrayDeclarationDictAST &) = delete ;
  private: UpEnumerator_extendStaticArrayDeclarationDictAST & operator = (const UpEnumerator_extendStaticArrayDeclarationDictAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @extendStaticArrayDeclarationDictAST dict
//--------------------------------------------------------------------------------------------------

class GGS_extendStaticArrayDeclarationDictAST final : public GenericDictionary <GGS_string, GGS_extendStaticArrayDeclarationDictAST_2E_element> {

//--------------------------------- Virtual destructor
  public: virtual ~ GGS_extendStaticArrayDeclarationDictAST (void) = default ;

//--------------------------------- Build
  protected: static GGS_extendStaticArrayDeclarationDictAST builtDictionary (LOCATION_ARGS) ;

//--------------------------------- Implementation of reader 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_extendStaticArrayDeclarationDictAST init (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_extendStaticArrayDeclarationDictAST extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_string & inOperand0,
                                   const class GGS_staticListValueListAST & inOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_extendStaticArrayDeclarationDictAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: void setter_insert (class GGS_string constinArgument0,
                              class GGS_staticListValueListAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_string constinArgument0,
                                 class GGS_staticListValueListAST & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMStaticListForKey (class GGS_staticListValueListAST constinArgument0,
                                            class GGS_string constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_string constinArgument0,
                                 class GGS_staticListValueListAST & outArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_hasKey (const class GGS_string & constinOperand0
                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_staticListValueListAST getter_mStaticListForKey (const class GGS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_extendStaticArrayDeclarationDictAST_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_extendStaticArrayDeclarationDictAST ;
  friend class DownEnumerator_extendStaticArrayDeclarationDictAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extendStaticArrayDeclarationDictAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @requiredFunctionDeclarationListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_requiredFunctionDeclarationListAST final {
  public: DownEnumerator_requiredFunctionDeclarationListAST (const class GGS_requiredFunctionDeclarationListAST & inList) ;

  public: ~ DownEnumerator_requiredFunctionDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_mode current_mExecutionMode (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExported (LOCATION_ARGS) const ;
  public: class GGS_routineFormalArgumentListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_requiredFunctionDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_requiredFunctionDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_requiredFunctionDeclarationListAST (const DownEnumerator_requiredFunctionDeclarationListAST &) = delete ;
  private: DownEnumerator_requiredFunctionDeclarationListAST & operator = (const DownEnumerator_requiredFunctionDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_requiredFunctionDeclarationListAST final {
  public: UpEnumerator_requiredFunctionDeclarationListAST (const class GGS_requiredFunctionDeclarationListAST & inList)  ;

  public: ~ UpEnumerator_requiredFunctionDeclarationListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_mode current_mExecutionMode (LOCATION_ARGS) const ;
  public: class GGS_bool current_mIsExported (LOCATION_ARGS) const ;
  public: class GGS_routineFormalArgumentListAST current_mFormalArgumentList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfProcLocation (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_requiredFunctionDeclarationListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_requiredFunctionDeclarationListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_requiredFunctionDeclarationListAST (const UpEnumerator_requiredFunctionDeclarationListAST &) = delete ;
  private: UpEnumerator_requiredFunctionDeclarationListAST & operator = (const UpEnumerator_requiredFunctionDeclarationListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @requiredFunctionDeclarationListAST list
//--------------------------------------------------------------------------------------------------

class GGS_requiredFunctionDeclarationListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_requiredFunctionDeclarationListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_requiredFunctionDeclarationListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_requiredFunctionDeclarationListAST (void) = default ;

//--- Copy
  public: GGS_requiredFunctionDeclarationListAST (const GGS_requiredFunctionDeclarationListAST &) = default ;
  public: GGS_requiredFunctionDeclarationListAST & operator = (const GGS_requiredFunctionDeclarationListAST &) = default ;

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
  public : inline GenericArray <GGS_requiredFunctionDeclarationListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_requiredFunctionDeclarationListAST subList (const int32_t inStart,
                                                           const int32_t inLength,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_requiredFunctionDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_mode & in_mExecutionMode,
                                                 const class GGS_bool & in_mIsExported,
                                                 const class GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                 const class GGS_location & in_mEndOfProcLocation
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_requiredFunctionDeclarationListAST init (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_requiredFunctionDeclarationListAST extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_requiredFunctionDeclarationListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                        const class GGS_mode & inOperand1,
                                                                                        const class GGS_bool & inOperand2,
                                                                                        const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                        const class GGS_location & inOperand4
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_requiredFunctionDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_mode & inOperand1,
                                   const class GGS_bool & inOperand2,
                                   const class GGS_routineFormalArgumentListAST & inOperand3,
                                   const class GGS_location & inOperand4
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_requiredFunctionDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_requiredFunctionDeclarationListAST add_operation (const GGS_requiredFunctionDeclarationListAST & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_mode constinArgument1,
                              class GGS_bool constinArgument2,
                              class GGS_routineFormalArgumentListAST constinArgument3,
                              class GGS_location constinArgument4,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_mode constinArgument1,
                                     class GGS_bool constinArgument2,
                                     class GGS_routineFormalArgumentListAST constinArgument3,
                                     class GGS_location constinArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_mode & outArgument1,
                                class GGS_bool & outArgument2,
                                class GGS_routineFormalArgumentListAST & outArgument3,
                                class GGS_location & outArgument4,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_mode & outArgument1,
                               class GGS_bool & outArgument2,
                               class GGS_routineFormalArgumentListAST & outArgument3,
                               class GGS_location & outArgument4,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_mode & outArgument1,
                                     class GGS_bool & outArgument2,
                                     class GGS_routineFormalArgumentListAST & outArgument3,
                                     class GGS_location & outArgument4,
                                     class GGS_uint constinArgument5,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfProcLocationAtIndex (class GGS_location constinArgument0,
                                                    class GGS_uint constinArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: void setter_setMExecutionModeAtIndex (class GGS_mode constinArgument0,
                                                class GGS_uint constinArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: void setter_setMFormalArgumentListAtIndex (class GGS_routineFormalArgumentListAST constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMIsExportedAtIndex (class GGS_bool constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_mode & outArgument1,
                             class GGS_bool & outArgument2,
                             class GGS_routineFormalArgumentListAST & outArgument3,
                             class GGS_location & outArgument4,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_mode & outArgument1,
                            class GGS_bool & outArgument2,
                            class GGS_routineFormalArgumentListAST & outArgument3,
                            class GGS_location & outArgument4,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfProcLocationAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_mode getter_mExecutionModeAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_routineFormalArgumentListAST getter_mFormalArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_bool getter_mIsExportedAtIndex (const class GGS_uint & constinOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_requiredFunctionDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_requiredFunctionDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_requiredFunctionDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_requiredFunctionDeclarationListAST ;
  friend class DownEnumerator_requiredFunctionDeclarationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @requiredFunctionDeclarationListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_requiredFunctionDeclarationListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mName ;
  public: inline GGS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GGS_mode mProperty_mExecutionMode ;
  public: inline GGS_mode readProperty_mExecutionMode (void) const {
    return mProperty_mExecutionMode ;
  }

  public: GGS_bool mProperty_mIsExported ;
  public: inline GGS_bool readProperty_mIsExported (void) const {
    return mProperty_mIsExported ;
  }

  public: GGS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;
  public: inline GGS_routineFormalArgumentListAST readProperty_mFormalArgumentList (void) const {
    return mProperty_mFormalArgumentList ;
  }

  public: GGS_location mProperty_mEndOfProcLocation ;
  public: inline GGS_location readProperty_mEndOfProcLocation (void) const {
    return mProperty_mEndOfProcLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_requiredFunctionDeclarationListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMExecutionMode (const GGS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExecutionMode = inValue ;
  }

  public: inline void setter_setMIsExported (const GGS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsExported = inValue ;
  }

  public: inline void setter_setMFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentList = inValue ;
  }

  public: inline void setter_setMEndOfProcLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfProcLocation = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_requiredFunctionDeclarationListAST_2E_element (const GGS_lstring & in_mName,
                                                             const GGS_mode & in_mExecutionMode,
                                                             const GGS_bool & in_mIsExported,
                                                             const GGS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                             const GGS_location & in_mEndOfProcLocation) ;

//--------------------------------- Copy constructor
  public: GGS_requiredFunctionDeclarationListAST_2E_element (const GGS_requiredFunctionDeclarationListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_requiredFunctionDeclarationListAST_2E_element & operator = (const GGS_requiredFunctionDeclarationListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_requiredFunctionDeclarationListAST_2E_element init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                             const class GGS_mode & inOperand1,
                                                                                             const class GGS_bool & inOperand2,
                                                                                             const class GGS_routineFormalArgumentListAST & inOperand3,
                                                                                             const class GGS_location & inOperand4,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_requiredFunctionDeclarationListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_taskListAST final {
  public: DownEnumerator_taskListAST (const class GGS_taskListAST & inList) ;

  public: ~ DownEnumerator_taskListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mLowerPriorityTaskList (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_syncInstructionBranchListAST current_mGuardedCommandList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_taskListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_taskListAST (const DownEnumerator_taskListAST &) = delete ;
  private: DownEnumerator_taskListAST & operator = (const DownEnumerator_taskListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_taskListAST final {
  public: UpEnumerator_taskListAST (const class GGS_taskListAST & inList)  ;

  public: ~ UpEnumerator_taskListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mLowerPriorityTaskList (LOCATION_ARGS) const ;
  public: class GGS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GGS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GGS_syncInstructionBranchListAST current_mGuardedCommandList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GGS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_taskListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_taskListAST (const UpEnumerator_taskListAST &) = delete ;
  private: UpEnumerator_taskListAST & operator = (const UpEnumerator_taskListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @taskListAST list
//--------------------------------------------------------------------------------------------------

class GGS_taskListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_taskListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_taskListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_taskListAST (void) = default ;

//--- Copy
  public: GGS_taskListAST (const GGS_taskListAST &) = default ;
  public: GGS_taskListAST & operator = (const GGS_taskListAST &) = default ;

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
  public : inline GenericArray <GGS_taskListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_taskListAST subList (const int32_t inStart,
                                    const int32_t inLength,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_taskListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mTaskName,
                                                 const class GGS_lstringlist & in_mLowerPriorityTaskList,
                                                 const class GGS_lbigint & in_mStackSize,
                                                 const class GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const class GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const class GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                 const class GGS_location & in_mEndOfTaskDeclaration,
                                                 const class GGS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskListAST init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskListAST extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                 const class GGS_lstringlist & inOperand1,
                                                                 const class GGS_lbigint & inOperand2,
                                                                 const class GGS_taskSetupListAST & inOperand3,
                                                                 const class GGS_taskSetupListAST & inOperand4,
                                                                 const class GGS_taskSetupListAST & inOperand5,
                                                                 const class GGS_syncInstructionBranchListAST & inOperand6,
                                                                 const class GGS_location & inOperand7,
                                                                 const class GGS_bool & inOperand8
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_taskListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstringlist & inOperand1,
                                   const class GGS_lbigint & inOperand2,
                                   const class GGS_taskSetupListAST & inOperand3,
                                   const class GGS_taskSetupListAST & inOperand4,
                                   const class GGS_taskSetupListAST & inOperand5,
                                   const class GGS_syncInstructionBranchListAST & inOperand6,
                                   const class GGS_location & inOperand7,
                                   const class GGS_bool & inOperand8
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_taskListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_taskListAST add_operation (const GGS_taskListAST & inOperand,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              class GGS_lbigint constinArgument2,
                              class GGS_taskSetupListAST constinArgument3,
                              class GGS_taskSetupListAST constinArgument4,
                              class GGS_taskSetupListAST constinArgument5,
                              class GGS_syncInstructionBranchListAST constinArgument6,
                              class GGS_location constinArgument7,
                              class GGS_bool constinArgument8,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstringlist constinArgument1,
                                     class GGS_lbigint constinArgument2,
                                     class GGS_taskSetupListAST constinArgument3,
                                     class GGS_taskSetupListAST constinArgument4,
                                     class GGS_taskSetupListAST constinArgument5,
                                     class GGS_syncInstructionBranchListAST constinArgument6,
                                     class GGS_location constinArgument7,
                                     class GGS_bool constinArgument8,
                                     class GGS_uint constinArgument9,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstringlist & outArgument1,
                                class GGS_lbigint & outArgument2,
                                class GGS_taskSetupListAST & outArgument3,
                                class GGS_taskSetupListAST & outArgument4,
                                class GGS_taskSetupListAST & outArgument5,
                                class GGS_syncInstructionBranchListAST & outArgument6,
                                class GGS_location & outArgument7,
                                class GGS_bool & outArgument8,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstringlist & outArgument1,
                               class GGS_lbigint & outArgument2,
                               class GGS_taskSetupListAST & outArgument3,
                               class GGS_taskSetupListAST & outArgument4,
                               class GGS_taskSetupListAST & outArgument5,
                               class GGS_syncInstructionBranchListAST & outArgument6,
                               class GGS_location & outArgument7,
                               class GGS_bool & outArgument8,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstringlist & outArgument1,
                                     class GGS_lbigint & outArgument2,
                                     class GGS_taskSetupListAST & outArgument3,
                                     class GGS_taskSetupListAST & outArgument4,
                                     class GGS_taskSetupListAST & outArgument5,
                                     class GGS_syncInstructionBranchListAST & outArgument6,
                                     class GGS_location & outArgument7,
                                     class GGS_bool & outArgument8,
                                     class GGS_uint constinArgument9,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAutoStartAtIndex (class GGS_bool constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfTaskDeclarationAtIndex (class GGS_location constinArgument0,
                                                       class GGS_uint constinArgument1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public: void setter_setMGuardedCommandListAtIndex (class GGS_syncInstructionBranchListAST constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMLowerPriorityTaskListAtIndex (class GGS_lstringlist constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMStackSizeAtIndex (class GGS_lbigint constinArgument0,
                                            class GGS_uint constinArgument1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskActivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskDeactivateListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskNameAtIndex (class GGS_lstring constinArgument0,
                                           class GGS_uint constinArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

  public: void setter_setMTaskSetupListASTAtIndex (class GGS_taskSetupListAST constinArgument0,
                                                   class GGS_uint constinArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstringlist & outArgument1,
                             class GGS_lbigint & outArgument2,
                             class GGS_taskSetupListAST & outArgument3,
                             class GGS_taskSetupListAST & outArgument4,
                             class GGS_taskSetupListAST & outArgument5,
                             class GGS_syncInstructionBranchListAST & outArgument6,
                             class GGS_location & outArgument7,
                             class GGS_bool & outArgument8,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstringlist & outArgument1,
                            class GGS_lbigint & outArgument2,
                            class GGS_taskSetupListAST & outArgument3,
                            class GGS_taskSetupListAST & outArgument4,
                            class GGS_taskSetupListAST & outArgument5,
                            class GGS_syncInstructionBranchListAST & outArgument6,
                            class GGS_location & outArgument7,
                            class GGS_bool & outArgument8,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_bool getter_mAutoStartAtIndex (const class GGS_uint & constinOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfTaskDeclarationAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListAST getter_mGuardedCommandListAtIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mLowerPriorityTaskListAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_lbigint getter_mStackSizeAtIndex (const class GGS_uint & constinOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_mTaskActivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_mTaskDeactivateListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mTaskNameAtIndex (const class GGS_uint & constinOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_taskListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_taskListAST ;
  friend class DownEnumerator_taskListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @syncInstructionBranchListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_syncInstructionBranchListAST final {
  public: DownEnumerator_syncInstructionBranchListAST (const class GGS_syncInstructionBranchListAST & inList) ;

  public: ~ DownEnumerator_syncInstructionBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandAST current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syncInstructionBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_syncInstructionBranchListAST (const DownEnumerator_syncInstructionBranchListAST &) = delete ;
  private: DownEnumerator_syncInstructionBranchListAST & operator = (const DownEnumerator_syncInstructionBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_syncInstructionBranchListAST final {
  public: UpEnumerator_syncInstructionBranchListAST (const class GGS_syncInstructionBranchListAST & inList)  ;

  public: ~ UpEnumerator_syncInstructionBranchListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_guardedCommandAST current_mGuardedCommand (LOCATION_ARGS) const ;
  public: class GGS_instructionListAST current_mInstructionList (LOCATION_ARGS) const ;
  public: class GGS_location current_mEndOfBranch (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_syncInstructionBranchListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_syncInstructionBranchListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_syncInstructionBranchListAST (const UpEnumerator_syncInstructionBranchListAST &) = delete ;
  private: UpEnumerator_syncInstructionBranchListAST & operator = (const UpEnumerator_syncInstructionBranchListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @syncInstructionBranchListAST list
//--------------------------------------------------------------------------------------------------

class GGS_syncInstructionBranchListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_syncInstructionBranchListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_syncInstructionBranchListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_syncInstructionBranchListAST (void) = default ;

//--- Copy
  public: GGS_syncInstructionBranchListAST (const GGS_syncInstructionBranchListAST &) = default ;
  public: GGS_syncInstructionBranchListAST & operator = (const GGS_syncInstructionBranchListAST &) = default ;

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
  public : inline GenericArray <GGS_syncInstructionBranchListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_syncInstructionBranchListAST subList (const int32_t inStart,
                                                     const int32_t inLength,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_syncInstructionBranchListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_guardedCommandAST & in_mGuardedCommand,
                                                 const class GGS_instructionListAST & in_mInstructionList,
                                                 const class GGS_location & in_mEndOfBranch
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_syncInstructionBranchListAST init (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_syncInstructionBranchListAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_syncInstructionBranchListAST class_func_listWithValue (const class GGS_guardedCommandAST & inOperand0,
                                                                                  const class GGS_instructionListAST & inOperand1,
                                                                                  const class GGS_location & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_syncInstructionBranchListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_guardedCommandAST & inOperand0,
                                   const class GGS_instructionListAST & inOperand1,
                                   const class GGS_location & inOperand2
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_syncInstructionBranchListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_syncInstructionBranchListAST add_operation (const GGS_syncInstructionBranchListAST & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_guardedCommandAST constinArgument0,
                              class GGS_instructionListAST constinArgument1,
                              class GGS_location constinArgument2,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_guardedCommandAST constinArgument0,
                                     class GGS_instructionListAST constinArgument1,
                                     class GGS_location constinArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_guardedCommandAST & outArgument0,
                                class GGS_instructionListAST & outArgument1,
                                class GGS_location & outArgument2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_guardedCommandAST & outArgument0,
                               class GGS_instructionListAST & outArgument1,
                               class GGS_location & outArgument2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_guardedCommandAST & outArgument0,
                                     class GGS_instructionListAST & outArgument1,
                                     class GGS_location & outArgument2,
                                     class GGS_uint constinArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMEndOfBranchAtIndex (class GGS_location constinArgument0,
                                              class GGS_uint constinArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

  public: void setter_setMGuardedCommandAtIndex (class GGS_guardedCommandAST constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMInstructionListAtIndex (class GGS_instructionListAST constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_guardedCommandAST & outArgument0,
                             class GGS_instructionListAST & outArgument1,
                             class GGS_location & outArgument2,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_guardedCommandAST & outArgument0,
                            class GGS_instructionListAST & outArgument1,
                            class GGS_location & outArgument2,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_location getter_mEndOfBranchAtIndex (const class GGS_uint & constinOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: class GGS_guardedCommandAST getter_mGuardedCommandAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_instructionListAST getter_mInstructionListAtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_syncInstructionBranchListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_syncInstructionBranchListAST ;
  friend class DownEnumerator_syncInstructionBranchListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskSetupListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_taskSetupListAST final {
  public: DownEnumerator_taskSetupListAST (const class GGS_taskSetupListAST & inList) ;

  public: ~ DownEnumerator_taskSetupListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mDependanceList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskSetupListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_taskSetupListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_taskSetupListAST (const DownEnumerator_taskSetupListAST &) = delete ;
  private: DownEnumerator_taskSetupListAST & operator = (const DownEnumerator_taskSetupListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_taskSetupListAST final {
  public: UpEnumerator_taskSetupListAST (const class GGS_taskSetupListAST & inList)  ;

  public: ~ UpEnumerator_taskSetupListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_lstring current_mName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mDependanceList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_taskSetupListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_taskSetupListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_taskSetupListAST (const UpEnumerator_taskSetupListAST &) = delete ;
  private: UpEnumerator_taskSetupListAST & operator = (const UpEnumerator_taskSetupListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @taskSetupListAST list
//--------------------------------------------------------------------------------------------------

class GGS_taskSetupListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_taskSetupListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_taskSetupListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_taskSetupListAST (void) = default ;

//--- Copy
  public: GGS_taskSetupListAST (const GGS_taskSetupListAST &) = default ;
  public: GGS_taskSetupListAST & operator = (const GGS_taskSetupListAST &) = default ;

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
  public : inline GenericArray <GGS_taskSetupListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_taskSetupListAST subList (const int32_t inStart,
                                         const int32_t inLength,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_taskSetupListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mName,
                                                 const class GGS_lstringlist & in_mDependanceList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskSetupListAST init (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskSetupListAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_taskSetupListAST class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstringlist & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_taskSetupListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_lstringlist & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_taskSetupListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_taskSetupListAST add_operation (const GGS_taskSetupListAST & inOperand,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_lstringlist constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_lstringlist & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_lstringlist & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_lstringlist & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDependanceListAtIndex (class GGS_lstringlist constinArgument0,
                                                 class GGS_uint constinArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMNameAtIndex (class GGS_lstring constinArgument0,
                                       class GGS_uint constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_lstringlist & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_lstringlist & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mDependanceListAtIndex (const class GGS_uint & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mNameAtIndex (const class GGS_uint & constinOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public: class GGS_taskSetupListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_taskSetupListAST ;
  friend class DownEnumerator_taskSetupListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSetupListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @taskListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_taskListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mTaskName ;
  public: inline GGS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GGS_lstringlist mProperty_mLowerPriorityTaskList ;
  public: inline GGS_lstringlist readProperty_mLowerPriorityTaskList (void) const {
    return mProperty_mLowerPriorityTaskList ;
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

  public: GGS_syncInstructionBranchListAST mProperty_mGuardedCommandList ;
  public: inline GGS_syncInstructionBranchListAST readProperty_mGuardedCommandList (void) const {
    return mProperty_mGuardedCommandList ;
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
  public: GGS_taskListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMLowerPriorityTaskList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLowerPriorityTaskList = inValue ;
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

  public: inline void setter_setMGuardedCommandList (const GGS_syncInstructionBranchListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommandList = inValue ;
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
  public: GGS_taskListAST_2E_element (const GGS_lstring & in_mTaskName,
                                      const GGS_lstringlist & in_mLowerPriorityTaskList,
                                      const GGS_lbigint & in_mStackSize,
                                      const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                      const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                      const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                      const GGS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                      const GGS_location & in_mEndOfTaskDeclaration,
                                      const GGS_bool & in_mAutoStart) ;

//--------------------------------- Copy constructor
  public: GGS_taskListAST_2E_element (const GGS_taskListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_taskListAST_2E_element & operator = (const GGS_taskListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_taskListAST_2E_element init_21__21__21__21__21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstringlist & inOperand1,
                                                                                      const class GGS_lbigint & inOperand2,
                                                                                      const class GGS_taskSetupListAST & inOperand3,
                                                                                      const class GGS_taskSetupListAST & inOperand4,
                                                                                      const class GGS_taskSetupListAST & inOperand5,
                                                                                      const class GGS_syncInstructionBranchListAST & inOperand6,
                                                                                      const class GGS_location & inOperand7,
                                                                                      const class GGS_bool & inOperand8,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_taskListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkTargetListAST list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_checkTargetListAST final {
  public: DownEnumerator_checkTargetListAST (const class GGS_checkTargetListAST & inList) ;

  public: ~ DownEnumerator_checkTargetListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mTargetConstructLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mAcceptedTargetList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkTargetListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_checkTargetListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_checkTargetListAST (const DownEnumerator_checkTargetListAST &) = delete ;
  private: DownEnumerator_checkTargetListAST & operator = (const DownEnumerator_checkTargetListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_checkTargetListAST final {
  public: UpEnumerator_checkTargetListAST (const class GGS_checkTargetListAST & inList)  ;

  public: ~ UpEnumerator_checkTargetListAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: inline uint32_t index (void) { return uint32_t (mIndex) ; }

  public: class GGS_location current_mTargetConstructLocation (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mAcceptedTargetList (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_checkTargetListAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <GGS_checkTargetListAST_2E_element> mArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_checkTargetListAST (const UpEnumerator_checkTargetListAST &) = delete ;
  private: UpEnumerator_checkTargetListAST & operator = (const UpEnumerator_checkTargetListAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------
// @checkTargetListAST list
//--------------------------------------------------------------------------------------------------

class GGS_checkTargetListAST : public AC_GALGAS_root {
//--- Private property
  private: GenericArray <GGS_checkTargetListAST_2E_element> mArray ;

//--- Default constructor
  public: GGS_checkTargetListAST (void) ;

//--- Destructor
  public: virtual ~ GGS_checkTargetListAST (void) = default ;

//--- Copy
  public: GGS_checkTargetListAST (const GGS_checkTargetListAST &) = default ;
  public: GGS_checkTargetListAST & operator = (const GGS_checkTargetListAST &) = default ;

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
  public : inline GenericArray <GGS_checkTargetListAST_2E_element> sortedElementArray (void) const {
    return mArray ;
  }

//--- subList
  private: GGS_checkTargetListAST subList (const int32_t inStart,
                                           const int32_t inLength,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;


//--- List constructor for graph
  public: GGS_checkTargetListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const class GGS_location & in_mTargetConstructLocation,
                                                 const class GGS_lstringlist & in_mAcceptedTargetList
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkTargetListAST init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkTargetListAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_checkTargetListAST class_func_listWithValue (const class GGS_location & inOperand0,
                                                                        const class GGS_lstringlist & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: void plusAssignOperation (const GGS_checkTargetListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_location & inOperand0,
                                   const class GGS_lstringlist & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_checkTargetListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_checkTargetListAST add_operation (const GGS_checkTargetListAST & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_location constinArgument0,
                              class GGS_lstringlist constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_location constinArgument0,
                                     class GGS_lstringlist constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_location & outArgument0,
                                class GGS_lstringlist & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_location & outArgument0,
                               class GGS_lstringlist & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_location & outArgument0,
                                     class GGS_lstringlist & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMAcceptedTargetListAtIndex (class GGS_lstringlist constinArgument0,
                                                     class GGS_uint constinArgument1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMTargetConstructLocationAtIndex (class GGS_location constinArgument0,
                                                          class GGS_uint constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_location & outArgument0,
                             class GGS_lstringlist & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_location & outArgument0,
                            class GGS_lstringlist & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_lstringlist getter_mAcceptedTargetListAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: class GGS_location getter_mTargetConstructLocationAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_checkTargetListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_checkTargetListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_checkTargetListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_checkTargetListAST ;
  friend class DownEnumerator_checkTargetListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkTargetListAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @checkTargetListAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_checkTargetListAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_location mProperty_mTargetConstructLocation ;
  public: inline GGS_location readProperty_mTargetConstructLocation (void) const {
    return mProperty_mTargetConstructLocation ;
  }

  public: GGS_lstringlist mProperty_mAcceptedTargetList ;
  public: inline GGS_lstringlist readProperty_mAcceptedTargetList (void) const {
    return mProperty_mAcceptedTargetList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_checkTargetListAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTargetConstructLocation (const GGS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTargetConstructLocation = inValue ;
  }

  public: inline void setter_setMAcceptedTargetList (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAcceptedTargetList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_checkTargetListAST_2E_element (const GGS_location & in_mTargetConstructLocation,
                                             const GGS_lstringlist & in_mAcceptedTargetList) ;

//--------------------------------- Copy constructor
  public: GGS_checkTargetListAST_2E_element (const GGS_checkTargetListAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_checkTargetListAST_2E_element & operator = (const GGS_checkTargetListAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_checkTargetListAST_2E_element init_21__21_ (const class GGS_location & inOperand0,
                                                                 const class GGS_lstringlist & inOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_checkTargetListAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkTargetListAST_2E_element ;

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
  public: GGS_driverDeclarationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_driverDeclarationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_driverDeclarationAST & inOperand0
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_driverDeclarationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_driverDeclarationListAST add_operation (const GGS_driverDeclarationListAST & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_driverDeclarationAST constinArgument0,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_driverDeclarationAST constinArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_driverDeclarationAST & outArgument0,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_driverDeclarationAST & outArgument0,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_driverDeclarationAST & outArgument0,
                                     class GGS_uint constinArgument1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDriverAtIndex (class GGS_driverDeclarationAST constinArgument0,
                                         class GGS_uint constinArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_driverDeclarationAST & outArgument0,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_driverDeclarationAST & outArgument0,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_driverDeclarationAST getter_mDriverAtIndex (const class GGS_uint & constinOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_driverDeclarationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverDeclarationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverDeclarationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2E_element ;

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
  public: GGS_driverInstanciationListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_driverInstanciationListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_driverInstanciationArgumentListAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_driverInstanciationListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_driverInstanciationListAST add_operation (const GGS_driverInstanciationListAST & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: void setter_append (class GGS_lstring constinArgument0,
                              class GGS_driverInstanciationArgumentListAST constinArgument1,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

  public: void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                     class GGS_driverInstanciationArgumentListAST constinArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_popFirst (class GGS_lstring & outArgument0,
                                class GGS_driverInstanciationArgumentListAST & outArgument1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void setter_popLast (class GGS_lstring & outArgument0,
                               class GGS_driverInstanciationArgumentListAST & outArgument1,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

  public: void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                     class GGS_driverInstanciationArgumentListAST & outArgument1,
                                     class GGS_uint constinArgument2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

  public: void setter_setMDriverInstanciationArgumentListAtIndex (class GGS_driverInstanciationArgumentListAST constinArgument0,
                                                                  class GGS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: void setter_setMDriverNameAtIndex (class GGS_lstring constinArgument0,
                                             class GGS_uint constinArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_first (class GGS_lstring & outArgument0,
                             class GGS_driverInstanciationArgumentListAST & outArgument1,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const ;

  public: void method_last (class GGS_lstring & outArgument0,
                            class GGS_driverInstanciationArgumentListAST & outArgument1,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_uint getter_count (LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentListAST getter_mDriverInstanciationArgumentListAtIndex (const class GGS_uint & constinOperand0,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_lstring getter_mDriverNameAtIndex (const class GGS_uint & constinOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public: class GGS_range getter_range (LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverInstanciationListAST ;
  friend class DownEnumerator_driverInstanciationListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST ;

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
  public: GGS_driverInstanciationArgumentListAST (const CollectionElementArray & inSharedArray) ;

//--- Element constructor
  public: static void makeAttributesFromObjects (CollectionElement & outAttributes,
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
  public: void plusAssignOperation (const GGS_driverInstanciationArgumentListAST inOperand,
                                    class Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: void addAssignOperation (const class GGS_lstring & inOperand0,
                                   const class GGS_expressionAST & inOperand1
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- ++= operator, collection value
  public: void plusPlusAssignOperation (const GGS_driverInstanciationArgumentListAST_2E_element & inOperand
                                        COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: GGS_driverInstanciationArgumentListAST add_operation (const GGS_driverInstanciationArgumentListAST & inOperand,
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

  public: class GGS_driverInstanciationArgumentListAST getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentListAST getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: class GGS_driverInstanciationArgumentListAST getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_driverInstanciationArgumentListAST ;
  friend class DownEnumerator_driverInstanciationArgumentListAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterUserAccesMapAST map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_controlRegisterUserAccesMapAST final {

  public: DownEnumerator_controlRegisterUserAccesMapAST (const class GGS_controlRegisterUserAccesMapAST & inMap) ;

  public: ~ DownEnumerator_controlRegisterUserAccesMapAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_controlRegisterUserAccesMapAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterUserAccesMapAST_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_controlRegisterUserAccesMapAST (const DownEnumerator_controlRegisterUserAccesMapAST &) = delete ;
  private: DownEnumerator_controlRegisterUserAccesMapAST & operator = (const DownEnumerator_controlRegisterUserAccesMapAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_controlRegisterUserAccesMapAST final {
  public: UpEnumerator_controlRegisterUserAccesMapAST (const class GGS_controlRegisterUserAccesMapAST & inMap)  ;

  public: ~ UpEnumerator_controlRegisterUserAccesMapAST (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_controlRegisterUserAccesMapAST_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterUserAccesMapAST_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_controlRegisterUserAccesMapAST (const UpEnumerator_controlRegisterUserAccesMapAST &) = delete ;
  private: UpEnumerator_controlRegisterUserAccesMapAST & operator = (const UpEnumerator_controlRegisterUserAccesMapAST &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterUserAccesMapAST : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_controlRegisterUserAccesMapAST_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_controlRegisterUserAccesMapAST (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_controlRegisterUserAccesMapAST (void) ;

//--- Handle copy
  public: GGS_controlRegisterUserAccesMapAST (const GGS_controlRegisterUserAccesMapAST & inSource) ;
  public: GGS_controlRegisterUserAccesMapAST & operator = (const GGS_controlRegisterUserAccesMapAST & inSource) ;

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
  protected: void performInsert (const class GGS_controlRegisterUserAccesMapAST_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_controlRegisterUserAccesMapAST_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_controlRegisterUserAccesMapAST_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterUserAccesMapAST init (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterUserAccesMapAST extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_controlRegisterUserAccesMapAST class_func_mapWithMapToOverride (const class GGS_controlRegisterUserAccesMapAST & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_removeKey (class GGS_lstring constinArgument0,
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

  public: class GGS_controlRegisterUserAccesMapAST getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_controlRegisterUserAccesMapAST_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_controlRegisterUserAccesMapAST ;
  friend class DownEnumerator_controlRegisterUserAccesMapAST ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterUserAccesMapAST_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterUserAccesMapAST_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterUserAccesMapAST_2E_element & operator = (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterUserAccesMapAST_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterUserAccesMapAST_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: controlRegisterUserAccesMapAST.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterUserAccesMapAST_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_controlRegisterUserAccesMapAST_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_controlRegisterUserAccesMapAST_2E_element_3F_ (const GGS_controlRegisterUserAccesMapAST_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_controlRegisterUserAccesMapAST_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_controlRegisterUserAccesMapAST_2E_element unwrappedValue (void) const {
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
  public: static GGS_controlRegisterUserAccesMapAST_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

class GGS_location callExtensionGetter_locationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@abstractDeclarationAST enterExtension'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterExtension (class cPtr_abstractDeclarationAST * inObject,
                                         class GGS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         class GGS_abstractDeclarationAST & out_outNewDeclaration,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitbandInstructionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionAST : public GGS_instructionAST {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitbandInstructionAST (const class cPtr_bitbandInstructionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_controlRegisterLValueAST readProperty_mControlRegisterLValue (void) const ;
  public: void setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) ;

  public: class GGS_expressionAST readProperty_mBitExpression (void) const ;
  public: void setProperty_mBitExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mBitExpressionLocation (void) const ;
  public: void setProperty_mBitExpressionLocation (const GGS_location & inValue) ;

  public: class GGS_expressionAST readProperty_mSourceExpression (void) const ;
  public: void setProperty_mSourceExpression (const GGS_expressionAST & inValue) ;

  public: class GGS_location readProperty_mSourceExpressionLocation (void) const ;
  public: void setProperty_mSourceExpressionLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitbandInstructionAST init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                         const class GGS_controlRegisterLValueAST & inOperand1,
                                                                         const class GGS_expressionAST & inOperand2,
                                                                         const class GGS_location & inOperand3,
                                                                         const class GGS_expressionAST & inOperand4,
                                                                         const class GGS_location & inOperand5,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitbandInstructionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionAST ;

//--------------------------------------------------------------------------------------------------
//   enum registerGroupIndexAST
//--------------------------------------------------------------------------------------------------

class GGS_registerGroupIndexAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_registerGroupIndexAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noIndex,
    enum_index
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_index (class GGS_expressionAST & out_index,
                                                              class GGS_location & out_endOfIndex,
                                                              class GGS_bool & out_checkIndexExpression) const ;

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
  public: static GGS_registerGroupIndexAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerGroupIndexAST class_func_index (const class GGS_expressionAST & inOperand0,
                                                                   const class GGS_location & inOperand1,
                                                                   const class GGS_bool & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

  public: static class GGS_registerGroupIndexAST class_func_noIndex (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractIndex (class GGS_expressionAST & outArgument0,
                                    class GGS_location & outArgument1,
                                    class GGS_bool & outArgument2,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_registerGroupIndexAST_2E_index_3F_ getter_getIndex (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIndex (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoIndex (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST ;

//--------------------------------------------------------------------------------------------------
//   enum registerIndexAST
//--------------------------------------------------------------------------------------------------

class GGS_registerIndexAST : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_registerIndexAST (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_noIndex,
    enum_index
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_index (class GGS_expressionAST & out_index,
                                                              class GGS_location & out_endOfIndex,
                                                              class GGS_bool & out_checkIndexExpression) const ;

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
  public: static GGS_registerIndexAST extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_registerIndexAST class_func_index (const class GGS_expressionAST & inOperand0,
                                                              const class GGS_location & inOperand1,
                                                              const class GGS_bool & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

  public: static class GGS_registerIndexAST class_func_noIndex (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractIndex (class GGS_expressionAST & outArgument0,
                                    class GGS_location & outArgument1,
                                    class GGS_bool & outArgument2,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_registerIndexAST_2E_index_3F_ getter_getIndex (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isIndex (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoIndex (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @controlRegisterLValueAST struct
//--------------------------------------------------------------------------------------------------

class GGS_controlRegisterLValueAST : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mRegisterGroupName ;
  public: inline GGS_lstring readProperty_mRegisterGroupName (void) const {
    return mProperty_mRegisterGroupName ;
  }

  public: GGS_registerGroupIndexAST mProperty_mGroupIndex ;
  public: inline GGS_registerGroupIndexAST readProperty_mGroupIndex (void) const {
    return mProperty_mGroupIndex ;
  }

  public: GGS_lstring mProperty_mRegisterName ;
  public: inline GGS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GGS_registerIndexAST mProperty_mRegisterIndex ;
  public: inline GGS_registerIndexAST readProperty_mRegisterIndex (void) const {
    return mProperty_mRegisterIndex ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_controlRegisterLValueAST (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterGroupName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterGroupName = inValue ;
  }

  public: inline void setter_setMGroupIndex (const GGS_registerGroupIndexAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupIndex = inValue ;
  }

  public: inline void setter_setMRegisterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterName = inValue ;
  }

  public: inline void setter_setMRegisterIndex (const GGS_registerIndexAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterIndex = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_controlRegisterLValueAST (const GGS_lstring & in_mRegisterGroupName,
                                        const GGS_registerGroupIndexAST & in_mGroupIndex,
                                        const GGS_lstring & in_mRegisterName,
                                        const GGS_registerIndexAST & in_mRegisterIndex) ;

//--------------------------------- Copy constructor
  public: GGS_controlRegisterLValueAST (const GGS_controlRegisterLValueAST & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_controlRegisterLValueAST & operator = (const GGS_controlRegisterLValueAST & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_controlRegisterLValueAST init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_registerGroupIndexAST & inOperand1,
                                                                    const class GGS_lstring & inOperand2,
                                                                    const class GGS_registerIndexAST & inOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_controlRegisterLValueAST extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controlRegisterLValueAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitbandInstructionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_bitbandInstructionAST : public cPtr_instructionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitbandInstructionAST_init_21__21__21__21__21__21_ (const class GGS_location & inOperand0,
                                                                   const class GGS_controlRegisterLValueAST & inOperand1,
                                                                   const class GGS_expressionAST & inOperand2,
                                                                   const class GGS_location & inOperand3,
                                                                   const class GGS_expressionAST & inOperand4,
                                                                   const class GGS_location & inOperand5,
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
  public: GGS_expressionAST mProperty_mBitExpression ;
  public: GGS_location mProperty_mBitExpressionLocation ;
  public: GGS_expressionAST mProperty_mSourceExpression ;
  public: GGS_location mProperty_mSourceExpressionLocation ;


//--- Default constructor
  public: cPtr_bitbandInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitbandInstructionAST (const GGS_location & in_mInstructionLocation,
                                      const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                      const GGS_expressionAST & in_mBitExpression,
                                      const GGS_location & in_mBitExpressionLocation,
                                      const GGS_expressionAST & in_mSourceExpression,
                                      const GGS_location & in_mSourceExpressionLocation,
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
// Phase 1: @bitbandInstructionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionAST_2E_weak : public GGS_instructionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitbandInstructionAST_2E_weak (const class GGS_bitbandInstructionAST & inSource) ;

  public: GGS_bitbandInstructionAST_2E_weak & operator = (const class GGS_bitbandInstructionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitbandInstructionAST_2E_weak init_nil (void) {
    GGS_bitbandInstructionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitbandInstructionAST bang_bitbandInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitbandInstructionAST unwrappedValue (void) const ;

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
  public: static GGS_bitbandInstructionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bitbandInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_bitbandInstructionIR (const class cPtr_bitbandInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_string readProperty_mRegisterAddressLLVMname (void) const ;
  public: void setProperty_mRegisterAddressLLVMname (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mBitExpressionOperand (void) const ;
  public: void setProperty_mBitExpressionOperand (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mSourceExpressionOperand (void) const ;
  public: void setProperty_mSourceExpressionOperand (const GGS_objectIR & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterBaseAddress (void) const ;
  public: void setProperty_mBitbandRegisterBaseAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterRelocationAddress (void) const ;
  public: void setProperty_mBitbandRegisterRelocationAddress (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterOffsetMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterOffsetMultiplier (const GGS_bigint & inValue) ;

  public: class GGS_bigint readProperty_mBitbandRegisterBitMultiplier (void) const ;
  public: void setProperty_mBitbandRegisterBitMultiplier (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bitbandInstructionIR init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                            const class GGS_objectIR & inOperand1,
                                                                            const class GGS_objectIR & inOperand2,
                                                                            const class GGS_bigint & inOperand3,
                                                                            const class GGS_bigint & inOperand4,
                                                                            const class GGS_bigint & inOperand5,
                                                                            const class GGS_bigint & inOperand6,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bitbandInstructionIR extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @bitbandInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_bitbandInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void bitbandInstructionIR_init_21__21__21__21__21__21__21_ (const class GGS_string & inOperand0,
                                                                      const class GGS_objectIR & inOperand1,
                                                                      const class GGS_objectIR & inOperand2,
                                                                      const class GGS_bigint & inOperand3,
                                                                      const class GGS_bigint & inOperand4,
                                                                      const class GGS_bigint & inOperand5,
                                                                      const class GGS_bigint & inOperand6,
                                                                      Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_string mProperty_mRegisterAddressLLVMname ;
  public: GGS_objectIR mProperty_mBitExpressionOperand ;
  public: GGS_objectIR mProperty_mSourceExpressionOperand ;
  public: GGS_bigint mProperty_mBitbandRegisterBaseAddress ;
  public: GGS_bigint mProperty_mBitbandRegisterRelocationAddress ;
  public: GGS_bigint mProperty_mBitbandRegisterOffsetMultiplier ;
  public: GGS_bigint mProperty_mBitbandRegisterBitMultiplier ;


//--- Default constructor
  public: cPtr_bitbandInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_bitbandInstructionIR (const GGS_string & in_mRegisterAddressLLVMname,
                                     const GGS_objectIR & in_mBitExpressionOperand,
                                     const GGS_objectIR & in_mSourceExpressionOperand,
                                     const GGS_bigint & in_mBitbandRegisterBaseAddress,
                                     const GGS_bigint & in_mBitbandRegisterRelocationAddress,
                                     const GGS_bigint & in_mBitbandRegisterOffsetMultiplier,
                                     const GGS_bigint & in_mBitbandRegisterBitMultiplier,
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
// Phase 1: @bitbandInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_bitbandInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_bitbandInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_bitbandInstructionIR_2E_weak (const class GGS_bitbandInstructionIR & inSource) ;

  public: GGS_bitbandInstructionIR_2E_weak & operator = (const class GGS_bitbandInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_bitbandInstructionIR_2E_weak init_nil (void) {
    GGS_bitbandInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_bitbandInstructionIR bang_bitbandInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_bitbandInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_bitbandInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bitbandInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_bitbandInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitbandInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addressofExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_addressofExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addressofExpressionAST (const class cPtr_addressofExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_LValueAST readProperty_mLValue (void) const ;
  public: void setProperty_mLValue (const GGS_LValueAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addressofExpressionAST init_21_ (const class GGS_LValueAST & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofExpressionAST extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofExpressionAST ;

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

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_LValueOperandAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: void method_extractArrayAccess (class GGS_expressionAST & outArgument0,
                                          class GGS_location & outArgument1,
                                          class GGS_bool & outArgument2,
                                          class GGS_LValueOperandAST & outArgument3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

  public: void method_extractProperty (class GGS_lstring & outArgument0,
                                       class GGS_LValueOperandAST & outArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_LValueOperandAST_2E_arrayAccess_3F_ getter_getArrayAccess (LOCATION_ARGS) const ;

  public: class GGS_LValueOperandAST_2E_property_3F_ getter_getProperty (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isArrayAccess (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNoOperand (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isProperty (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueOperandAST ;

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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_LValueAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @addressofExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_addressofExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addressofExpressionAST_init_21_ (const class GGS_LValueAST & inOperand0,
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
  public: cPtr_addressofExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addressofExpressionAST (const GGS_LValueAST & in_mLValue,
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
// Phase 1: @addressofExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofExpressionAST_2E_weak (const class GGS_addressofExpressionAST & inSource) ;

  public: GGS_addressofExpressionAST_2E_weak & operator = (const class GGS_addressofExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addressofExpressionAST_2E_weak init_nil (void) {
    GGS_addressofExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addressofExpressionAST bang_addressofExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addressofExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_addressofExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @addressofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofInstructionIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_addressofInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_addressofInstructionIR (const class cPtr_addressofInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTarget (void) const ;
  public: void setProperty_mTarget (const GGS_objectIR & inValue) ;

  public: class GGS_LValueRepresentation readProperty_mLValue (void) const ;
  public: void setProperty_mLValue (const GGS_LValueRepresentation & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_addressofInstructionIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                          const class GGS_LValueRepresentation & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_addressofInstructionIR extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @addressofInstructionIR class
//--------------------------------------------------------------------------------------------------

class cPtr_addressofInstructionIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void addressofInstructionIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                                    const class GGS_LValueRepresentation & inOperand1,
                                                    Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mTarget ;
  public: GGS_LValueRepresentation mProperty_mLValue ;


//--- Default constructor
  public: cPtr_addressofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_addressofInstructionIR (const GGS_objectIR & in_mTarget,
                                       const GGS_LValueRepresentation & in_mLValue,
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
// Phase 1: @addressofInstructionIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_addressofInstructionIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_addressofInstructionIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_addressofInstructionIR_2E_weak (const class GGS_addressofInstructionIR & inSource) ;

  public: GGS_addressofInstructionIR_2E_weak & operator = (const class GGS_addressofInstructionIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_addressofInstructionIR_2E_weak init_nil (void) {
    GGS_addressofInstructionIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_addressofInstructionIR bang_addressofInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_addressofInstructionIR unwrappedValue (void) const ;

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
  public: static GGS_addressofInstructionIR_2E_weak extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_addressofInstructionIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_addressofInstructionIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addressofInstructionIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendLoadFromReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendLoadFromReference (class GGS_instructionListIR & ioObject,
                                              const class GGS_objectIR constin_inTargetValue,
                                              const class GGS_string constin_inLLVMName,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE omnibus_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_omnibus_5F_lexique : public cToken {
  public: BigSigned mLexicalAttribute_bigInteger ;
  public: String mLexicalAttribute_tokenString ;

  public: cTokenFor_omnibus_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_omnibus_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_omnibus_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_omnibus_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static proc
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_omnibus_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken__40_attribute = 2 ;
  public: static const int32_t kToken_integer = 3 ;
  public: static const int32_t kToken__22_string_22_ = 4 ;
  public: static const int32_t kToken_comment = 5 ;
  public: static const int32_t kToken_commentMark = 6 ;
  public: static const int32_t kToken__3F_selector_3A_ = 7 ;
  public: static const int32_t kToken__3F__21_selector_3A_ = 8 ;
  public: static const int32_t kToken__21_selector_3A_ = 9 ;
  public: static const int32_t kToken__21__3F_selector_3A_ = 10 ;
  public: static const int32_t kToken__24_type = 11 ;
  public: static const int32_t kToken__A9_group = 12 ;
  public: static const int32_t kToken_addressof = 13 ;
  public: static const int32_t kToken_assert = 14 ;
  public: static const int32_t kToken_boot = 15 ;
  public: static const int32_t kToken_case = 16 ;
  public: static const int32_t kToken_convert = 17 ;
  public: static const int32_t kToken_ctAssert = 18 ;
  public: static const int32_t kToken_compiletime = 19 ;
  public: static const int32_t kToken_driver = 20 ;
  public: static const int32_t kToken_else = 21 ;
  public: static const int32_t kToken_enum = 22 ;
  public: static const int32_t kToken_event = 23 ;
  public: static const int32_t kToken_extend = 24 ;
  public: static const int32_t kToken_extern = 25 ;
  public: static const int32_t kToken_for = 26 ;
  public: static const int32_t kToken_func = 27 ;
  public: static const int32_t kToken_guard = 28 ;
  public: static const int32_t kToken_if = 29 ;
  public: static const int32_t kToken_import = 30 ;
  public: static const int32_t kToken_in = 31 ;
  public: static const int32_t kToken_interrupt = 32 ;
  public: static const int32_t kToken_let = 33 ;
  public: static const int32_t kToken_llvm = 34 ;
  public: static const int32_t kToken_no = 35 ;
  public: static const int32_t kToken_not = 36 ;
  public: static const int32_t kToken_opaque = 37 ;
  public: static const int32_t kToken_option = 38 ;
  public: static const int32_t kToken_panic = 39 ;
  public: static const int32_t kToken_primitive = 40 ;
  public: static const int32_t kToken_public = 41 ;
  public: static const int32_t kToken_registers = 42 ;
  public: static const int32_t kToken_required = 43 ;
  public: static const int32_t kToken_safe = 44 ;
  public: static const int32_t kToken_section = 45 ;
  public: static const int32_t kToken_self = 46 ;
  public: static const int32_t kToken_service = 47 ;
  public: static const int32_t kToken_sizeof = 48 ;
  public: static const int32_t kToken_startup = 49 ;
  public: static const int32_t kToken_struct = 50 ;
  public: static const int32_t kToken_staticArray = 51 ;
  public: static const int32_t kToken_switch = 52 ;
  public: static const int32_t kToken_sync = 53 ;
  public: static const int32_t kToken_target = 54 ;
  public: static const int32_t kToken_task = 55 ;
  public: static const int32_t kToken_truncate = 56 ;
  public: static const int32_t kToken_typealias = 57 ;
  public: static const int32_t kToken_var = 58 ;
  public: static const int32_t kToken_until = 59 ;
  public: static const int32_t kToken_user = 60 ;
  public: static const int32_t kToken_where = 61 ;
  public: static const int32_t kToken_when = 62 ;
  public: static const int32_t kToken_while = 63 ;
  public: static const int32_t kToken_yes = 64 ;
  public: static const int32_t kToken__3A_ = 65 ;
  public: static const int32_t kToken__2E_ = 66 ;
  public: static const int32_t kToken__2C_ = 67 ;
  public: static const int32_t kToken__7B_ = 68 ;
  public: static const int32_t kToken__7D_ = 69 ;
  public: static const int32_t kToken__3D_ = 70 ;
  public: static const int32_t kToken__28_ = 71 ;
  public: static const int32_t kToken__29_ = 72 ;
  public: static const int32_t kToken__5F_ = 73 ;
  public: static const int32_t kToken__3D__3D_ = 74 ;
  public: static const int32_t kToken__2260_ = 75 ;
  public: static const int32_t kToken__3C_ = 76 ;
  public: static const int32_t kToken__2264_ = 77 ;
  public: static const int32_t kToken__3E_ = 78 ;
  public: static const int32_t kToken__2265_ = 79 ;
  public: static const int32_t kToken__5B_ = 80 ;
  public: static const int32_t kToken__5D_ = 81 ;
  public: static const int32_t kToken__5D__21_ = 82 ;
  public: static const int32_t kToken__3C__3C_ = 83 ;
  public: static const int32_t kToken__3E__3E_ = 84 ;
  public: static const int32_t kToken__7E_ = 85 ;
  public: static const int32_t kToken__7C__7C_ = 86 ;
  public: static const int32_t kToken__26__26_ = 87 ;
  public: static const int32_t kToken__2D__3E_ = 88 ;
  public: static const int32_t kToken__2E__2E__3C_ = 89 ;
  public: static const int32_t kToken__2E__2E__2E_ = 90 ;
  public: static const int32_t kToken__7C_ = 91 ;
  public: static const int32_t kToken__7C__3D_ = 92 ;
  public: static const int32_t kToken__26_ = 93 ;
  public: static const int32_t kToken__26__3D_ = 94 ;
  public: static const int32_t kToken__5E_ = 95 ;
  public: static const int32_t kToken__5E__3D_ = 96 ;
  public: static const int32_t kToken__2B_ = 97 ;
  public: static const int32_t kToken__2B__25_ = 98 ;
  public: static const int32_t kToken__2B__3D_ = 99 ;
  public: static const int32_t kToken__2B__25__3D_ = 100 ;
  public: static const int32_t kToken__2D_ = 101 ;
  public: static const int32_t kToken__2D__25_ = 102 ;
  public: static const int32_t kToken__2D__3D_ = 103 ;
  public: static const int32_t kToken__2D__25__3D_ = 104 ;
  public: static const int32_t kToken__2A_ = 105 ;
  public: static const int32_t kToken__2A__25_ = 106 ;
  public: static const int32_t kToken__2A__3D_ = 107 ;
  public: static const int32_t kToken__2A__25__3D_ = 108 ;
  public: static const int32_t kToken__2F_ = 109 ;
  public: static const int32_t kToken__21__2F_ = 110 ;
  public: static const int32_t kToken__2F__3D_ = 111 ;
  public: static const int32_t kToken__21__2F__3D_ = 112 ;
  public: static const int32_t kToken__25_ = 113 ;
  public: static const int32_t kToken__21__25_ = 114 ;
  public: static const int32_t kToken__25__3D_ = 115 ;
  public: static const int32_t kToken__21__25__3D_ = 116 ;
  public: static const int32_t kToken__3C__3C__3D_ = 117 ;
  public: static const int32_t kToken__3E__3E__3D_ = 118 ;

//--- Key words table 'keyWordList'
  public: static int32_t search_into_keyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;


//--- Assign from attribute
  public: GGS_lbigint synthetizedAttribute_bigInteger (void) const ;
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;


//--- Attribute access
  public: BigSigned attributeValue_bigInteger (void) const ;
  public: String attributeValue_tokenString (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_omnibus_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 118 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_omnibus_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR testArrayIndex'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_testArrayIndex (class GGS_instructionListIR & ioObject,
                                     const class GGS_objectIR constin_inIndex,
                                     const class GGS_location constin_inErrorLocation,
                                     const class GGS_bigint constin_inSize,
                                     class GGS_bool & out_outGeneratePanicInstruction,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @testArrayIndexIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_testArrayIndexIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_testArrayIndexIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_testArrayIndexIR (const class cPtr_testArrayIndexIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mIndex (void) const ;
  public: void setProperty_mIndex (const GGS_objectIR & inValue) ;

  public: class GGS_location readProperty_mErrorLocation (void) const ;
  public: void setProperty_mErrorLocation (const GGS_location & inValue) ;

  public: class GGS_bigint readProperty_mSize (void) const ;
  public: void setProperty_mSize (const GGS_bigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_testArrayIndexIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                        const class GGS_location & inOperand1,
                                                        const class GGS_bigint & inOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_testArrayIndexIR extractObject (const GGS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testArrayIndexIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testArrayIndexIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @testArrayIndexIR class
//--------------------------------------------------------------------------------------------------

class cPtr_testArrayIndexIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void testArrayIndexIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                  const class GGS_location & inOperand1,
                                                  const class GGS_bigint & inOperand2,
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
  public: GGS_objectIR mProperty_mIndex ;
  public: GGS_location mProperty_mErrorLocation ;
  public: GGS_bigint mProperty_mSize ;


//--- Default constructor
  public: cPtr_testArrayIndexIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_testArrayIndexIR (const GGS_objectIR & in_mIndex,
                                 const GGS_location & in_mErrorLocation,
                                 const GGS_bigint & in_mSize,
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
// Phase 1: @testArrayIndexIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_testArrayIndexIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_testArrayIndexIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_testArrayIndexIR_2E_weak (const class GGS_testArrayIndexIR & inSource) ;

  public: GGS_testArrayIndexIR_2E_weak & operator = (const class GGS_testArrayIndexIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_testArrayIndexIR_2E_weak init_nil (void) {
    GGS_testArrayIndexIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_testArrayIndexIR bang_testArrayIndexIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_testArrayIndexIR unwrappedValue (void) const ;

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
  public: static GGS_testArrayIndexIR_2E_weak extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_testArrayIndexIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_testArrayIndexIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testArrayIndexIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @literalStringInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringInExpressionAST : public GGS_expressionAST {
//--------------------------------- Default constructor
  public: GGS_literalStringInExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_literalStringInExpressionAST (const class cPtr_literalStringInExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLiteralString (void) const ;
  public: void setProperty_mLiteralString (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_literalStringInExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_literalStringInExpressionAST extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringInExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @literalStringInExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_literalStringInExpressionAST : public cPtr_expressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void literalStringInExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
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
  public: GGS_lstring mProperty_mLiteralString ;


//--- Default constructor
  public: cPtr_literalStringInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_literalStringInExpressionAST (const GGS_lstring & in_mLiteralString,
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
// Phase 1: @literalStringInExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_literalStringInExpressionAST_2E_weak : public GGS_expressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_literalStringInExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_literalStringInExpressionAST_2E_weak (const class GGS_literalStringInExpressionAST & inSource) ;

  public: GGS_literalStringInExpressionAST_2E_weak & operator = (const class GGS_literalStringInExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_literalStringInExpressionAST_2E_weak init_nil (void) {
    GGS_literalStringInExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_literalStringInExpressionAST bang_literalStringInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_literalStringInExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_literalStringInExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_literalStringInExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_literalStringInExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendBoolToUInt'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendBoolToUInt (class GGS_instructionListIR & ioObject,
                                       const class GGS_objectIR constin_inUIntResult,
                                       const class GGS_objectIR constin_inBoolSource,
                                       class Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @boolToUIntIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolToUIntIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_boolToUIntIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_boolToUIntIR (const class cPtr_boolToUIntIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mUIntResult (void) const ;
  public: void setProperty_mUIntResult (const GGS_objectIR & inValue) ;

  public: class GGS_objectIR readProperty_mBoolSource (void) const ;
  public: void setProperty_mBoolSource (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_boolToUIntIR init_21__21_ (const class GGS_objectIR & inOperand0,
                                                const class GGS_objectIR & inOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_boolToUIntIR extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolToUIntIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolToUIntIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @boolToUIntIR class
//--------------------------------------------------------------------------------------------------

class cPtr_boolToUIntIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void boolToUIntIR_init_21__21_ (const class GGS_objectIR & inOperand0,
                                          const class GGS_objectIR & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension proc llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GGS_string & arg_ioLLVMcode,
           const class GGS_generationContext arg_inGenerationContext,
           class GGS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_objectIR mProperty_mUIntResult ;
  public: GGS_objectIR mProperty_mBoolSource ;


//--- Default constructor
  public: cPtr_boolToUIntIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_boolToUIntIR (const GGS_objectIR & in_mUIntResult,
                             const GGS_objectIR & in_mBoolSource,
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
// Phase 1: @boolToUIntIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_boolToUIntIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_boolToUIntIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_boolToUIntIR_2E_weak (const class GGS_boolToUIntIR & inSource) ;

  public: GGS_boolToUIntIR_2E_weak & operator = (const class GGS_boolToUIntIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_boolToUIntIR_2E_weak init_nil (void) {
    GGS_boolToUIntIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_boolToUIntIR bang_boolToUIntIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_boolToUIntIR unwrappedValue (void) const ;

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
  public: static GGS_boolToUIntIR_2E_weak extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_boolToUIntIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_boolToUIntIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolToUIntIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendShortCircuitAndOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendShortCircuitAndOperation (class GGS_instructionListIR & ioObject,
                                                     const class GGS_objectIR constin_inTargetOperand,
                                                     const class GGS_string constin_inLeftOperandLLVMName,
                                                     const class GGS_instructionListIR constin_inLeftInstructionList,
                                                     const class GGS_string constin_inRightOperandLLVMName,
                                                     const class GGS_instructionListIR constin_inRightInstructionList,
                                                     const class GGS_location constin_inLocation,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @shortCircuitAndOperationIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_shortCircuitAndOperationIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_shortCircuitAndOperationIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_shortCircuitAndOperationIR (const class cPtr_shortCircuitAndOperationIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mTargetOperand (void) const ;
  public: void setProperty_mTargetOperand (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLeftOperandLLVMName (void) const ;
  public: void setProperty_mLeftOperandLLVMName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mLeftInstructionList (void) const ;
  public: void setProperty_mLeftInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_string readProperty_mRightOperandLLVMName (void) const ;
  public: void setProperty_mRightOperandLLVMName (const GGS_string & inValue) ;

  public: class GGS_instructionListIR readProperty_mRightInstructionList (void) const ;
  public: void setProperty_mRightInstructionList (const GGS_instructionListIR & inValue) ;

  public: class GGS_location readProperty_mLocation (void) const ;
  public: void setProperty_mLocation (const GGS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_shortCircuitAndOperationIR init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                              const class GGS_string & inOperand1,
                                                                              const class GGS_instructionListIR & inOperand2,
                                                                              const class GGS_string & inOperand3,
                                                                              const class GGS_instructionListIR & inOperand4,
                                                                              const class GGS_location & inOperand5,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_shortCircuitAndOperationIR extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_shortCircuitAndOperationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @shortCircuitAndOperationIR class
//--------------------------------------------------------------------------------------------------

class cPtr_shortCircuitAndOperationIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void shortCircuitAndOperationIR_init_21__21__21__21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                        const class GGS_string & inOperand1,
                                                                        const class GGS_instructionListIR & inOperand2,
                                                                        const class GGS_string & inOperand3,
                                                                        const class GGS_instructionListIR & inOperand4,
                                                                        const class GGS_location & inOperand5,
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
  public: GGS_objectIR mProperty_mTargetOperand ;
  public: GGS_string mProperty_mLeftOperandLLVMName ;
  public: GGS_instructionListIR mProperty_mLeftInstructionList ;
  public: GGS_string mProperty_mRightOperandLLVMName ;
  public: GGS_instructionListIR mProperty_mRightInstructionList ;
  public: GGS_location mProperty_mLocation ;


//--- Default constructor
  public: cPtr_shortCircuitAndOperationIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_shortCircuitAndOperationIR (const GGS_objectIR & in_mTargetOperand,
                                           const GGS_string & in_mLeftOperandLLVMName,
                                           const GGS_instructionListIR & in_mLeftInstructionList,
                                           const GGS_string & in_mRightOperandLLVMName,
                                           const GGS_instructionListIR & in_mRightInstructionList,
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
// Phase 1: @shortCircuitAndOperationIR_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_shortCircuitAndOperationIR_2E_weak : public GGS_abstractInstructionIR_2E_weak {
//--------------------------------- Default constructor
  public: GGS_shortCircuitAndOperationIR_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_shortCircuitAndOperationIR_2E_weak (const class GGS_shortCircuitAndOperationIR & inSource) ;

  public: GGS_shortCircuitAndOperationIR_2E_weak & operator = (const class GGS_shortCircuitAndOperationIR & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_shortCircuitAndOperationIR_2E_weak init_nil (void) {
    GGS_shortCircuitAndOperationIR_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_shortCircuitAndOperationIR bang_shortCircuitAndOperationIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_shortCircuitAndOperationIR unwrappedValue (void) const ;

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
  public: static GGS_shortCircuitAndOperationIR_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_shortCircuitAndOperationIR_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_shortCircuitAndOperationIR_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_shortCircuitAndOperationIR_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctExpressionAST_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_ctExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctExpressionAST_2E_weak (const class GGS_ctExpressionAST & inSource) ;

  public: GGS_ctExpressionAST_2E_weak & operator = (const class GGS_ctExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctExpressionAST_2E_weak init_nil (void) {
    GGS_ctExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctExpressionAST bang_ctExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum compileTimeInfixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

class GGS_compileTimeInfixOperatorEnumeration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_compileTimeInfixOperatorEnumeration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_lessThan,
    enum_bitWiseAndOp,
    enum_bitWiseOrOp,
    enum_bitWiseXorOp,
    enum_addOp,
    enum_subOp,
    enum_mulOp,
    enum_divOp,
    enum_modOp,
    enum_divNoOvf,
    enum_moduloNoOvf,
    enum_leftShift,
    enum_rightShift
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
  public: static GGS_compileTimeInfixOperatorEnumeration extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_addOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_bitWiseAndOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_bitWiseOrOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_bitWiseXorOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_divNoOvf (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_divOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_leftShift (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_lessThan (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_modOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_moduloNoOvf (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_mulOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_rightShift (LOCATION_ARGS) ;

  public: static class GGS_compileTimeInfixOperatorEnumeration class_func_subOp (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimeInfixOperatorEnumeration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isAddOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBitWiseAndOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBitWiseOrOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isBitWiseXorOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDivNoOvf (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isDivOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLeftShift (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isLessThan (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isModOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isModuloNoOvf (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isMulOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isRightShift (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isSubOp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorEnumeration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctInfixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctInfixExpressionAST : public GGS_ctExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ctInfixExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctInfixExpressionAST (const class cPtr_ctInfixExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_ctExpressionAST readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_ctExpressionAST & inValue) ;

  public: class GGS_location readProperty_mOperatorLocation (void) const ;
  public: void setProperty_mOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_compileTimeInfixOperatorEnumeration readProperty_mInfixOperator (void) const ;
  public: void setProperty_mInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctInfixExpressionAST init_21__21__21__21_ (const class GGS_ctExpressionAST & inOperand0,
                                                                const class GGS_location & inOperand1,
                                                                const class GGS_compileTimeInfixOperatorEnumeration & inOperand2,
                                                                const class GGS_ctExpressionAST & inOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctInfixExpressionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctInfixExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ctInfixExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ctInfixExpressionAST : public cPtr_ctExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ctInfixExpressionAST_init_21__21__21__21_ (const class GGS_ctExpressionAST & inOperand0,
                                                          const class GGS_location & inOperand1,
                                                          const class GGS_compileTimeInfixOperatorEnumeration & inOperand2,
                                                          const class GGS_ctExpressionAST & inOperand3,
                                                          Compiler * inCompiler) ;


//--- Extension proc checkCompileTimeExpression
  public: virtual void method_checkCompileTimeExpression (const class GGS_ctCheckMap arg_inMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc computeCompileTimeExpression
  public: virtual void method_computeCompileTimeExpression (const class GGS_ctMap arg_inMap,
           class GGS_bigint & arg_outValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_ctExpressionAST mProperty_mLeftExpression ;
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_compileTimeInfixOperatorEnumeration mProperty_mInfixOperator ;
  public: GGS_ctExpressionAST mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_ctInfixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ctInfixExpressionAST (const GGS_ctExpressionAST & in_mLeftExpression,
                                     const GGS_location & in_mOperatorLocation,
                                     const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                     const GGS_ctExpressionAST & in_mRightExpression,
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
// Phase 1: @ctInfixExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctInfixExpressionAST_2E_weak : public GGS_ctExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ctInfixExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctInfixExpressionAST_2E_weak (const class GGS_ctInfixExpressionAST & inSource) ;

  public: GGS_ctInfixExpressionAST_2E_weak & operator = (const class GGS_ctInfixExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctInfixExpressionAST_2E_weak init_nil (void) {
    GGS_ctInfixExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctInfixExpressionAST bang_ctInfixExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctInfixExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctInfixExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctInfixExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctInfixExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctInfixExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum compileTimePrefixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

class GGS_compileTimePrefixOperatorEnumeration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_compileTimePrefixOperatorEnumeration (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_notOp,
    enum_minusOp
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
  public: static GGS_compileTimePrefixOperatorEnumeration extractObject (const GGS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_compileTimePrefixOperatorEnumeration class_func_minusOp (LOCATION_ARGS) ;

  public: static class GGS_compileTimePrefixOperatorEnumeration class_func_notOp (LOCATION_ARGS) ;

//--------------------------------- Implementation of func 'description'
  public: void description (String & ioString,
                            const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_compileTimePrefixOperatorEnumeration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: class GGS_bool getter_isMinusOp (LOCATION_ARGS) const ;

  public: class GGS_bool getter_isNotOp (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorEnumeration ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctPrefixExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctPrefixExpressionAST : public GGS_ctExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ctPrefixExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctPrefixExpressionAST (const class cPtr_ctPrefixExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_location readProperty_mOperatorLocation (void) const ;
  public: void setProperty_mOperatorLocation (const GGS_location & inValue) ;

  public: class GGS_compileTimePrefixOperatorEnumeration readProperty_mPrefixOperator (void) const ;
  public: void setProperty_mPrefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inValue) ;

  public: class GGS_ctExpressionAST readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_ctExpressionAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctPrefixExpressionAST init_21__21__21_ (const class GGS_location & inOperand0,
                                                             const class GGS_compileTimePrefixOperatorEnumeration & inOperand1,
                                                             const class GGS_ctExpressionAST & inOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctPrefixExpressionAST extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctPrefixExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ctPrefixExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ctPrefixExpressionAST : public cPtr_ctExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ctPrefixExpressionAST_init_21__21__21_ (const class GGS_location & inOperand0,
                                                       const class GGS_compileTimePrefixOperatorEnumeration & inOperand1,
                                                       const class GGS_ctExpressionAST & inOperand2,
                                                       Compiler * inCompiler) ;


//--- Extension proc checkCompileTimeExpression
  public: virtual void method_checkCompileTimeExpression (const class GGS_ctCheckMap arg_inMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc computeCompileTimeExpression
  public: virtual void method_computeCompileTimeExpression (const class GGS_ctMap arg_inMap,
           class GGS_bigint & arg_outValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_location mProperty_mOperatorLocation ;
  public: GGS_compileTimePrefixOperatorEnumeration mProperty_mPrefixOperator ;
  public: GGS_ctExpressionAST mProperty_mExpression ;


//--- Default constructor
  public: cPtr_ctPrefixExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ctPrefixExpressionAST (const GGS_location & in_mOperatorLocation,
                                      const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
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
// Phase 1: @ctPrefixExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctPrefixExpressionAST_2E_weak : public GGS_ctExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ctPrefixExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctPrefixExpressionAST_2E_weak (const class GGS_ctPrefixExpressionAST & inSource) ;

  public: GGS_ctPrefixExpressionAST_2E_weak & operator = (const class GGS_ctPrefixExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctPrefixExpressionAST_2E_weak init_nil (void) {
    GGS_ctPrefixExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctPrefixExpressionAST bang_ctPrefixExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctPrefixExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctPrefixExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctPrefixExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctPrefixExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctPrefixExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctTrueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctTrueExpressionAST : public GGS_ctExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ctTrueExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctTrueExpressionAST (const class cPtr_ctTrueExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctTrueExpressionAST init (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctTrueExpressionAST extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctTrueExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ctTrueExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ctTrueExpressionAST : public cPtr_ctExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ctTrueExpressionAST_init (Compiler * inCompiler) ;


//--- Extension proc checkCompileTimeExpression
  public: virtual void method_checkCompileTimeExpression (const class GGS_ctCheckMap arg_inMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc computeCompileTimeExpression
  public: virtual void method_computeCompileTimeExpression (const class GGS_ctMap arg_inMap,
           class GGS_bigint & arg_outValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_ctTrueExpressionAST (Compiler * inCompiler
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
// Phase 1: @ctTrueExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctTrueExpressionAST_2E_weak : public GGS_ctExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ctTrueExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctTrueExpressionAST_2E_weak (const class GGS_ctTrueExpressionAST & inSource) ;

  public: GGS_ctTrueExpressionAST_2E_weak & operator = (const class GGS_ctTrueExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctTrueExpressionAST_2E_weak init_nil (void) {
    GGS_ctTrueExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctTrueExpressionAST bang_ctTrueExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctTrueExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctTrueExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctTrueExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctTrueExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctTrueExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctFalseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctFalseExpressionAST : public GGS_ctExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ctFalseExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctFalseExpressionAST (const class cPtr_ctFalseExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctFalseExpressionAST init (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctFalseExpressionAST extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctFalseExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ctFalseExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ctFalseExpressionAST : public cPtr_ctExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ctFalseExpressionAST_init (Compiler * inCompiler) ;


//--- Extension proc checkCompileTimeExpression
  public: virtual void method_checkCompileTimeExpression (const class GGS_ctCheckMap arg_inMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc computeCompileTimeExpression
  public: virtual void method_computeCompileTimeExpression (const class GGS_ctMap arg_inMap,
           class GGS_bigint & arg_outValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties



//--- Constructor
  public: cPtr_ctFalseExpressionAST (Compiler * inCompiler
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
// Phase 1: @ctFalseExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctFalseExpressionAST_2E_weak : public GGS_ctExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ctFalseExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctFalseExpressionAST_2E_weak (const class GGS_ctFalseExpressionAST & inSource) ;

  public: GGS_ctFalseExpressionAST_2E_weak & operator = (const class GGS_ctFalseExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctFalseExpressionAST_2E_weak init_nil (void) {
    GGS_ctFalseExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctFalseExpressionAST bang_ctFalseExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctFalseExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctFalseExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctFalseExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctFalseExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctFalseExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctIntExpressionAST : public GGS_ctExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ctIntExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctIntExpressionAST (const class cPtr_ctIntExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lbigint readProperty_mValue (void) const ;
  public: void setProperty_mValue (const GGS_lbigint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctIntExpressionAST init_21_ (const class GGS_lbigint & inOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctIntExpressionAST extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctIntExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIntExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ctIntExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ctIntExpressionAST : public cPtr_ctExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ctIntExpressionAST_init_21_ (const class GGS_lbigint & inOperand0,
                                            Compiler * inCompiler) ;


//--- Extension proc checkCompileTimeExpression
  public: virtual void method_checkCompileTimeExpression (const class GGS_ctCheckMap arg_inMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc computeCompileTimeExpression
  public: virtual void method_computeCompileTimeExpression (const class GGS_ctMap arg_inMap,
           class GGS_bigint & arg_outValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lbigint mProperty_mValue ;


//--- Default constructor
  public: cPtr_ctIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ctIntExpressionAST (const GGS_lbigint & in_mValue,
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
// Phase 1: @ctIntExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctIntExpressionAST_2E_weak : public GGS_ctExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ctIntExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctIntExpressionAST_2E_weak (const class GGS_ctIntExpressionAST & inSource) ;

  public: GGS_ctIntExpressionAST_2E_weak & operator = (const class GGS_ctIntExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctIntExpressionAST_2E_weak init_nil (void) {
    GGS_ctIntExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctIntExpressionAST bang_ctIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctIntExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctIntExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctIntExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctIntExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIntExpressionAST_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctIdentifierExpressionAST reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctIdentifierExpressionAST : public GGS_ctExpressionAST {
//--------------------------------- Default constructor
  public: GGS_ctIdentifierExpressionAST (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_ctIdentifierExpressionAST (const class cPtr_ctIdentifierExpressionAST * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mIdentifier (void) const ;
  public: void setProperty_mIdentifier (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctIdentifierExpressionAST init_21_ (const class GGS_lstring & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctIdentifierExpressionAST extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctIdentifierExpressionAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @ctIdentifierExpressionAST class
//--------------------------------------------------------------------------------------------------

class cPtr_ctIdentifierExpressionAST : public cPtr_ctExpressionAST {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void ctIdentifierExpressionAST_init_21_ (const class GGS_lstring & inOperand0,
                                                   Compiler * inCompiler) ;


//--- Extension proc checkCompileTimeExpression
  public: virtual void method_checkCompileTimeExpression (const class GGS_ctCheckMap arg_inMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension proc computeCompileTimeExpression
  public: virtual void method_computeCompileTimeExpression (const class GGS_ctMap arg_inMap,
           class GGS_bigint & arg_outValue,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mIdentifier ;


//--- Default constructor
  public: cPtr_ctIdentifierExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_ctIdentifierExpressionAST (const GGS_lstring & in_mIdentifier,
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
// Phase 1: @ctIdentifierExpressionAST_2E_weak weak reference class
//--------------------------------------------------------------------------------------------------

class GGS_ctIdentifierExpressionAST_2E_weak : public GGS_ctExpressionAST_2E_weak {
//--------------------------------- Default constructor
  public: GGS_ctIdentifierExpressionAST_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_ctIdentifierExpressionAST_2E_weak (const class GGS_ctIdentifierExpressionAST & inSource) ;

  public: GGS_ctIdentifierExpressionAST_2E_weak & operator = (const class GGS_ctIdentifierExpressionAST & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_ctIdentifierExpressionAST_2E_weak init_nil (void) {
    GGS_ctIdentifierExpressionAST_2E_weak result ;
    macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_ctIdentifierExpressionAST bang_ctIdentifierExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: GGS_ctIdentifierExpressionAST unwrappedValue (void) const ;

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
  public: static GGS_ctIdentifierExpressionAST_2E_weak extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctIdentifierExpressionAST_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_ctIdentifierExpressionAST_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST_2E_weak ;

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
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
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

  public: class GGS_ctCheckMap getter_overriddenMap (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_ctCheckMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ctCheckMap ;
  friend class DownEnumerator_ctCheckMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctCheckMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ctCheckMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ctCheckMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ctCheckMap_2E_element (const GGS_lstring & in_lkey) ;

//--------------------------------- Copy constructor
  public: GGS_ctCheckMap_2E_element (const GGS_ctCheckMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ctCheckMap_2E_element & operator = (const GGS_ctCheckMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctCheckMap_2E_element init_21_ (const class GGS_lstring & inOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctCheckMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ctCheckMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_ctCheckMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ctCheckMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ctCheckMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ctCheckMap_2E_element_3F_ (const GGS_ctCheckMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ctCheckMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ctCheckMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_ctCheckMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctCheckMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@ctExpressionAST checkCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkCompileTimeExpression (class cPtr_ctExpressionAST * inObject,
                                                     const class GGS_ctCheckMap constin_inMap,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctMap map
//--------------------------------------------------------------------------------------------------

#include "SharedGenericPtrWithValueSemantics.h"

template <typename INFO> class GenericMapRoot ;

//--------------------------------------------------------------------------------------------------

class DownEnumerator_ctMap final {

  public: DownEnumerator_ctMap (const class GGS_ctMap & inMap) ;

  public: ~ DownEnumerator_ctMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex >= 0 ; }

  public: inline void gotoNextObject (void) { mIndex -= 1 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;

  public: class GGS_bigint current_mValue (LOCATION_ARGS) const ;

  public: class GGS_ctMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: DownEnumerator_ctMap (const DownEnumerator_ctMap &) = delete ;
  private: DownEnumerator_ctMap & operator = (const DownEnumerator_ctMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_ctMap final {
  public: UpEnumerator_ctMap (const class GGS_ctMap & inMap)  ;

  public: ~ UpEnumerator_ctMap (void) = default ;

  public: inline bool hasCurrentObject (void) const { return mIndex < mInfoArray.count () ; }

  public: inline void gotoNextObject (void) { mIndex += 1 ; }

  public: inline void rewind (void) { mIndex = 0 ; }

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_bigint current_mValue (LOCATION_ARGS) const ;
  public: class GGS_ctMap_2E_element current (LOCATION_ARGS) const ;

  private: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>> mInfoArray ;
  private: int32_t mIndex ;

  private: UpEnumerator_ctMap (const UpEnumerator_ctMap &) = delete ;
  private: UpEnumerator_ctMap & operator = (const UpEnumerator_ctMap &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

class GGS_ctMap : public AC_GALGAS_root {

//--- Private property
  private: OptionalSharedRef <GenericMapRoot <GGS_ctMap_2E_element>> mSharedRoot ;

//--- Default constructor
  public: GGS_ctMap (void) ;

//--- Virtual destructor
  public: virtual ~ GGS_ctMap (void) ;

//--- Handle copy
  public: GGS_ctMap (const GGS_ctMap & inSource) ;
  public: GGS_ctMap & operator = (const GGS_ctMap & inSource) ;

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
  protected: void performInsert (const class GGS_ctMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;
 
//--- infoForKey
  protected: const SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element> infoForKey (const String & inKey) const ;
 
//--- Count
  public: int32_t count (void) const ;
 
//--- sortedInfoArray
  protected: GenericArray <SharedGenericPtrWithValueSemantics <GGS_ctMap_2E_element>> sortedInfoArray (void) const ;

//--- findNearestKey
  protected: void findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctMap init (Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctMap extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ctMap class_func_mapWithMapToOverride (const class GGS_ctMap & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters
  public: void setter_insertKey (class GGS_lstring constinArgument0,
                                 class GGS_bigint constinArgument1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void setter_setMValueForKey (class GGS_bigint constinArgument0,
                                       class GGS_string constinArgument1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: void method_searchKey (class GGS_lstring constinArgument0,
                                 class GGS_bigint & outArgument1,
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

  public: class GGS_bigint getter_mValueForKey (const class GGS_string & constinOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public: class GGS_ctMap getter_overriddenMap (Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: class GGS_ctMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;



//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend
  friend class UpEnumerator_ctMap ;
  friend class DownEnumerator_ctMap ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctMap ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ctMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_ctMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_bigint mProperty_mValue ;
  public: inline GGS_bigint readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ctMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMValue (const GGS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ctMap_2E_element (const GGS_lstring & in_lkey,
                                const GGS_bigint & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_ctMap_2E_element (const GGS_ctMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ctMap_2E_element & operator = (const GGS_ctMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ctMap_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                    const class GGS_bigint & inOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ctMap_2E_element extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctMap_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: ctMap.element? optional
//--------------------------------------------------------------------------------------------------

class GGS_ctMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_ctMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_ctMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_ctMap_2E_element_3F_ (const GGS_ctMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_ctMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_ctMap_2E_element unwrappedValue (void) const {
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
  public: static GGS_ctMap_2E_element_3F_ extractObject (const GGS_object & inObject,
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

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ctMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@ctExpressionAST computeCompileTimeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeCompileTimeExpression (class cPtr_ctExpressionAST * inObject,
                                                       const class GGS_ctMap constin_inMap,
                                                       class GGS_bigint & out_outValue,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@instructionListIR appendStoreComputedPropertyValue'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendStoreComputedPropertyValue (class GGS_instructionListIR & ioObject,
                                                       const class GGS_objectIR constin_inReceiverIR,
                                                       const class GGS_string constin_inLLVMSetterName,
                                                       const class GGS_objectIR constin_inValueIR,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @storeComputedPropertyValueIR reference class
//--------------------------------------------------------------------------------------------------

class GGS_storeComputedPropertyValueIR : public GGS_abstractInstructionIR {
//--------------------------------- Default constructor
  public: GGS_storeComputedPropertyValueIR (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_storeComputedPropertyValueIR (const class cPtr_storeComputedPropertyValueIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_objectIR readProperty_mReceiverIR (void) const ;
  public: void setProperty_mReceiverIR (const GGS_objectIR & inValue) ;

  public: class GGS_string readProperty_mLLVMSetterName (void) const ;
  public: void setProperty_mLLVMSetterName (const GGS_string & inValue) ;

  public: class GGS_objectIR readProperty_mValueIR (void) const ;
  public: void setProperty_mValueIR (const GGS_objectIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_storeComputedPropertyValueIR init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                                    const class GGS_string & inOperand1,
                                                                    const class GGS_objectIR & inOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_storeComputedPropertyValueIR extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_storeComputedPropertyValueIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts


//--------------------------------- Introspection
  public: const GALGAS_TypeDescriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_storeComputedPropertyValueIR ;

//--------------------------------------------------------------------------------------------------
// Phase 2: pointer class for @storeComputedPropertyValueIR class
//--------------------------------------------------------------------------------------------------

class cPtr_storeComputedPropertyValueIR : public cPtr_abstractInstructionIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void storeComputedPropertyValueIR_init_21__21__21_ (const class GGS_objectIR & inOperand0,
                                                              const class GGS_string & inOperand1,
                                                              const class GGS_objectIR & inOperand2,
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
  public: GGS_objectIR mProperty_mReceiverIR ;
  public: GGS_string mProperty_mLLVMSetterName ;
  public: GGS_objectIR mProperty_mValueIR ;


//--- Default constructor
  public: cPtr_storeComputedPropertyValueIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_storeComputedPropertyValueIR (const GGS_objectIR & in_mReceiverIR,
                                             const GGS_string & in_mLLVMSetterName,
                                             const GGS_objectIR & in_mValueIR,
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

