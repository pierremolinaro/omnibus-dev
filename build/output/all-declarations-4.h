#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanciedDriverMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_instanciedDriverMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_instanciedDriverMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_instanciedDriverMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_instanciedDriverMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_instanciedDriverMap (const GALGAS_instanciedDriverMap & inSource) ;
  public: GALGAS_instanciedDriverMap & operator = (const GALGAS_instanciedDriverMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instanciedDriverMap extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instanciedDriverMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_instanciedDriverMap class_func_mapWithMapToOverride (const class GALGAS_instanciedDriverMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_driverInstanciationArgumentMap & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_instanciedDriverMap add_operation (const GALGAS_instanciedDriverMap & inOperand,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_driverInstanciationArgumentMap constinArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverInstanciationArgumentMapForKey (class GALGAS_driverInstanciationArgumentMap constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_driverInstanciationArgumentMap & outArgument1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentMap getter_mDriverInstanciationArgumentMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instanciedDriverMap getter_overriddenMap (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_driverInstanciationArgumentMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_instanciedDriverMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_instanciedDriverMap ;
 
} ; // End of GALGAS_instanciedDriverMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_instanciedDriverMap : public cGenericAbstractEnumerator {
  public: cEnumerator_instanciedDriverMap (const GALGAS_instanciedDriverMap & inEnumeratedObject,
                                           const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_driverInstanciationArgumentMap current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instanciedDriverMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@instanciedDriverMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_instanciedDriverMap : public cMapElement {
//--- Map attributes
  public: GALGAS_driverInstanciationArgumentMap mProperty_mDriverInstanciationArgumentMap ;

//--- Constructor
  public: cMapElement_instanciedDriverMap (const GALGAS_lstring & inKey,
                                           const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instanciedDriverMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instanciedDriverMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_driverInstanciationArgumentMap mProperty_mDriverInstanciationArgumentMap ;
  public: inline GALGAS_driverInstanciationArgumentMap readProperty_mDriverInstanciationArgumentMap (void) const {
    return mProperty_mDriverInstanciationArgumentMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_instanciedDriverMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_instanciedDriverMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_instanciedDriverMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_instanciedDriverMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_driverInstanciationArgumentMap & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instanciedDriverMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instanciedDriverMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_driverInstanciationArgumentMap & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_instanciedDriverMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instanciedDriverMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRequiredDriver reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedRequiredDriver : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedRequiredDriver (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedRequiredDriver (const class cPtr_decoratedRequiredDriver * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GALGAS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedRequiredDriver init_21_ (const class GALGAS_lstring & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRequiredDriver extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedRequiredDriver class_func_new (const class GALGAS_lstring & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedRequiredDriver & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedRequiredDriver class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedRequiredDriver class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedRequiredDriver : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedRequiredDriver_init_21_ (const class GALGAS_lstring & inOperand0,
                                                 Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mDriverName ;


//--- Default constructor
  public: cPtr_decoratedRequiredDriver (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedRequiredDriver (const GALGAS_lstring & in_mDriverName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedRequiredDriver_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedRequiredDriver_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedRequiredDriver_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedRequiredDriver_2D_weak (const class GALGAS_decoratedRequiredDriver & inSource) ;

  public: GALGAS_decoratedRequiredDriver_2D_weak & operator = (const class GALGAS_decoratedRequiredDriver & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedRequiredDriver bang_decoratedRequiredDriver_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedRequiredDriver_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedRequiredDriver_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedRequiredDriver_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedRequiredDriver_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRequiredDriver_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @driverListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_driverListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDriverName ;
  public: inline GALGAS_lstring readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_operandIRList mProperty_mInitialValueList ;
  public: inline GALGAS_operandIRList readProperty_mInitialValueList (void) const {
    return mProperty_mInitialValueList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_driverListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDriverName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMInitialValueList (const GALGAS_operandIRList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValueList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_driverListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_driverListIR_2D_element (const GALGAS_lstring & in_mDriverName,
                                          const GALGAS_omnibusType & in_mType,
                                          const GALGAS_operandIRList & in_mInitialValueList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_driverListIR_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_omnibusType & inOperand1,
                                                                  const class GALGAS_operandIRList & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_driverListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_driverListIR_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_omnibusType & inOperand1,
                                                                      const class GALGAS_operandIRList & inOperand2,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_driverListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_driverListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const class GALGAS_driverListIR inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             class Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmAttributeFunction'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmAttributeFunction (class Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmBootRoutineNameFromDriver (const class GALGAS_lstring & constinArgument0,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForGlobalVariable (const class GALGAS_string & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const class GALGAS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmTitleComment (const class GALGAS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListPropertyListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListPropertyListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mPropertyName ;
  public: inline GALGAS_lstring readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_staticListPropertyTypeAST mProperty_mPropertyType ;
  public: inline GALGAS_staticListPropertyTypeAST readProperty_mPropertyType (void) const {
    return mProperty_mPropertyType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_staticListPropertyListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMPropertyType (const GALGAS_staticListPropertyTypeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_staticListPropertyListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListPropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_staticListPropertyTypeAST & in_mPropertyType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticListPropertyListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_staticListPropertyTypeAST & inOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListPropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListPropertyListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_staticListPropertyTypeAST & inOperand1,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticListPropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListPropertyListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListValueListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListValueListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_extendStaticListElementAST mProperty_mElement ;
  public: inline GALGAS_extendStaticListElementAST readProperty_mElement (void) const {
    return mProperty_mElement ;
  }

  public: GALGAS_location mProperty_mLocation ;
  public: inline GALGAS_location readProperty_mLocation (void) const {
    return mProperty_mLocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_staticListValueListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_extendStaticListElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

  public: inline void setter_setMLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_staticListValueListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListValueListAST_2D_element (const GALGAS_extendStaticListElementAST & in_mElement,
                                                    const GALGAS_location & in_mLocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticListValueListAST_2D_element init_21__21_ (const class GALGAS_extendStaticListElementAST & inOperand0,
                                                                        const class GALGAS_location & inOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListValueListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListValueListAST_2D_element class_func_new (const class GALGAS_extendStaticListElementAST & inOperand0,
                                                                                const class GALGAS_location & inOperand1,
                                                                                class Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticListValueListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListValueListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_staticListAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_staticListAST_2D_weak (const class GALGAS_staticListAST & inSource) ;

  public: GALGAS_staticListAST_2D_weak & operator = (const class GALGAS_staticListAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_staticListAST bang_staticListAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticListAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @extendStaticListElementAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_extendStaticListElementAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_extendStaticListExpressionAST mProperty_mExpression ;
  public: inline GALGAS_extendStaticListExpressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

  public: GALGAS_location mProperty_mEndOfExpression ;
  public: inline GALGAS_location readProperty_mEndOfExpression (void) const {
    return mProperty_mEndOfExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_extendStaticListElementAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_extendStaticListExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpression (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpression = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_extendStaticListElementAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_extendStaticListElementAST_2D_element (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpression) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_extendStaticListElementAST_2D_element init_21__21_ (const class GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                            const class GALGAS_location & inOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_extendStaticListElementAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_extendStaticListElementAST_2D_element class_func_new (const class GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                    const class GALGAS_location & inOperand1,
                                                                                    class Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_extendStaticListElementAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_extendStaticListElementAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInitializationMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListInitializationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_stringlist mProperty_mInitializationList ;
  public: inline GALGAS_stringlist readProperty_mInitializationList (void) const {
    return mProperty_mInitializationList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_staticListInitializationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitializationList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitializationList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_staticListInitializationMap_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListInitializationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_stringlist & in_mInitializationList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticListInitializationMap_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_stringlist & inOperand1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInitializationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListInitializationMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_stringlist & inOperand1,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticListInitializationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListInitializationMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedStaticList reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedStaticList : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedStaticList (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedStaticList (const class cPtr_decoratedStaticList * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mStaticListName (void) const ;
  public: void setProperty_mStaticListName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_staticListValueListAST readProperty_mValueList (void) const ;
  public: void setProperty_mValueList (const GALGAS_staticListValueListAST & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedStaticList init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_staticListValueListAST & inOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedStaticList extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedStaticList class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_staticListValueListAST & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedStaticList & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedStaticList class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedStaticList class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedStaticList : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedStaticList_init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                 const class GALGAS_staticListValueListAST & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mStaticListName ;
  public: GALGAS_staticListValueListAST mProperty_mValueList ;


//--- Default constructor
  public: cPtr_decoratedStaticList (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedStaticList (const GALGAS_lstring & in_mStaticListName,
                                    const GALGAS_staticListValueListAST & in_mValueList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedStaticList_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedStaticList_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedStaticList_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedStaticList_2D_weak (const class GALGAS_decoratedStaticList & inSource) ;

  public: GALGAS_decoratedStaticList_2D_weak & operator = (const class GALGAS_decoratedStaticList & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedStaticList bang_decoratedStaticList_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedStaticList_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedStaticList_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedStaticList_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedStaticList_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedStaticList_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const class GALGAS_staticListInitializationMap inObject,
                                                 const class GALGAS_staticListInvokedFunctionSetMap constin_inUsefulStaticArrayMap,
                                                 class GALGAS_string & io_ioLLVMcode,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmNameForStaticListElementType (const class GALGAS_lstring & constinArgument0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineTypedSignature_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineTypedSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_procFormalArgumentPassingMode readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mTypeProxy ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineTypedSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineTypedSignature_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                   const GALGAS_lstring & in_mSelector,
                                                   const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                   const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineTypedSignature_2D_element init_21__21__21__21_ (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineTypedSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineTypedSignature_2D_element class_func_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineTypedSignature_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListIndirectRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListIndirectRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_staticListIndirectRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_staticListIndirectRoutineIR (const class cPtr_staticListIndirectRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_unifiedTypeMapEntry readProperty_mStaticListElementType (void) const ;
  public: void setProperty_mStaticListElementType (const GALGAS_unifiedTypeMapEntry & inValue) ;

  public: class GALGAS_routineTypedSignature readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GALGAS_routineTypedSignature & inValue) ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const ;
  public: void setProperty_mReturnTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) ;

  public: class GALGAS_uint readProperty_mPropertyIndex (void) const ;
  public: void setProperty_mPropertyIndex (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_staticListIndirectRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                             const class GALGAS_bool & inOperand1,
                                                                                                             const class GALGAS_bool & inOperand2,
                                                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                             const class GALGAS_routineTypedSignature & inOperand4,
                                                                                                             const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                             const class GALGAS_uint & inOperand6,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListIndirectRoutineIR extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListIndirectRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                          const class GALGAS_routineTypedSignature & inOperand4,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                          const class GALGAS_uint & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticListIndirectRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListIndirectRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @staticListIndirectRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_staticListIndirectRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void staticListIndirectRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                                    const class GALGAS_routineTypedSignature & inOperand4,
                                                                                                    const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                    const class GALGAS_uint & inOperand6,
                                                                                                    Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_unifiedTypeMapEntry mProperty_mStaticListElementType ;
  public: GALGAS_routineTypedSignature mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;
  public: GALGAS_uint mProperty_mPropertyIndex ;


//--- Default constructor
  public: cPtr_staticListIndirectRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_staticListIndirectRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused,
                                            const GALGAS_unifiedTypeMapEntry & in_mStaticListElementType,
                                            const GALGAS_routineTypedSignature & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                            const GALGAS_uint & in_mPropertyIndex
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListIndirectRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_staticListIndirectRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_staticListIndirectRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_staticListIndirectRoutineIR_2D_weak (const class GALGAS_staticListIndirectRoutineIR & inSource) ;

  public: GALGAS_staticListIndirectRoutineIR_2D_weak & operator = (const class GALGAS_staticListIndirectRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_staticListIndirectRoutineIR bang_staticListIndirectRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListIndirectRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_staticListIndirectRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_staticListIndirectRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_staticListIndirectRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListIndirectRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSetupListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskSetupListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mName ;
  public: inline GALGAS_lstring readProperty_mName (void) const {
    return mProperty_mName ;
  }

  public: GALGAS_lstringlist mProperty_mDependanceList ;
  public: inline GALGAS_lstringlist readProperty_mDependanceList (void) const {
    return mProperty_mDependanceList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_taskSetupListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMDependanceList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependanceList = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_taskSetupListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_taskSetupListAST_2D_element (const GALGAS_lstring & in_mName,
                                              const GALGAS_lstringlist & in_mDependanceList) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_taskSetupListAST_2D_element init_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstringlist & inOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskSetupListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskSetupListAST_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstringlist & inOperand1,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_taskSetupListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskSetupListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @syncInstructionBranchListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_syncInstructionBranchListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_guardedCommandAST mProperty_mGuardedCommand ;
  public: inline GALGAS_guardedCommandAST readProperty_mGuardedCommand (void) const {
    return mProperty_mGuardedCommand ;
  }

  public: GALGAS_instructionListAST mProperty_mInstructionList ;
  public: inline GALGAS_instructionListAST readProperty_mInstructionList (void) const {
    return mProperty_mInstructionList ;
  }

  public: GALGAS_location mProperty_mEndOfBranch ;
  public: inline GALGAS_location readProperty_mEndOfBranch (void) const {
    return mProperty_mEndOfBranch ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_syncInstructionBranchListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGuardedCommand (const GALGAS_guardedCommandAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGuardedCommand = inValue ;
  }

  public: inline void setter_setMInstructionList (const GALGAS_instructionListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionList = inValue ;
  }

  public: inline void setter_setMEndOfBranch (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfBranch = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_syncInstructionBranchListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_syncInstructionBranchListAST_2D_element (const GALGAS_guardedCommandAST & in_mGuardedCommand,
                                                          const GALGAS_instructionListAST & in_mInstructionList,
                                                          const GALGAS_location & in_mEndOfBranch) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_syncInstructionBranchListAST_2D_element init_21__21__21_ (const class GALGAS_guardedCommandAST & inOperand0,
                                                                                  const class GALGAS_instructionListAST & inOperand1,
                                                                                  const class GALGAS_location & inOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_syncInstructionBranchListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_syncInstructionBranchListAST_2D_element class_func_new (const class GALGAS_guardedCommandAST & inOperand0,
                                                                                      const class GALGAS_instructionListAST & inOperand1,
                                                                                      const class GALGAS_location & inOperand2,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_syncInstructionBranchListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_syncInstructionBranchListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syncInstructionBranchListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_taskListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@instructionListAST noteInstructionListTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteInstructionListTypesInPrecedenceGraph (const class GALGAS_instructionListAST inObject,
                                                                class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const class GALGAS_taskListAST inObject,
                                     class GALGAS_semanticContext & io_ioContext,
                                     class GALGAS_declarationDecorationList & io_ioDecoratedDeclarationList,
                                     class GALGAS_decoratedRegularRoutineList & io_ioDecoratedRoutineList,
                                     class GALGAS_routineListIR & io_ioRoutineListIR,
                                     class GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                     class GALGAS_userLLVMTypeDefinitionListIR & io_ioUserLLVMTypeDefinitionListIR,
                                     class Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineAttributes boolset
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private: uint64_t mFlags ;
  private: bool mIsValid ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }

//--------------------------------- Default constructor
  public: GALGAS_routineAttributes (void) ;

//--------------------------------- Private constructor
  private: GALGAS_routineAttributes (const uint64_t inFlags) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineAttributes extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineAttributes class_func_all (LOCATION_ARGS) ;

  public: static class GALGAS_routineAttributes class_func_guard (LOCATION_ARGS) ;

  public: static class GALGAS_routineAttributes class_func_mutatingRoutine (LOCATION_ARGS) ;

  public: static class GALGAS_routineAttributes class_func_none (LOCATION_ARGS) ;

//--------------------------------- & operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineAttributes operator_and (const GALGAS_routineAttributes & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineAttributes operator_or (const GALGAS_routineAttributes & inOperand
                                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineAttributes operator_xor (const GALGAS_routineAttributes & inOperand
                                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineAttributes substract_operation (const GALGAS_routineAttributes & inOperand,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineAttributes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_all (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_guard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mutatingRoutine (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_none (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineAttributes class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAttributes ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskListDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedTaskListDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedTaskListDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedTaskListDeclaration (const class cPtr_decoratedTaskListDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_decoratedTaskList readProperty_mTaskList (void) const ;
  public: void setProperty_mTaskList (const GALGAS_decoratedTaskList & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedTaskListDeclaration init_21_ (const class GALGAS_decoratedTaskList & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedTaskListDeclaration extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedTaskListDeclaration class_func_new (const class GALGAS_decoratedTaskList & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedTaskListDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedTaskListDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedTaskList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_decoratedTaskList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_decoratedTaskList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mTaskName,
                                                 const class GALGAS_lbigint & in_mStackSize,
                                                 const class GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                 const class GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                 const class GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                 const class GALGAS_location & in_mEndOfTaskDeclaration,
                                                 const class GALGAS_bool & in_mAutoStart
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedTaskList extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedTaskList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_decoratedTaskList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lbigint & inOperand1,
                                                                          const class GALGAS_taskSetupListAST & inOperand2,
                                                                          const class GALGAS_taskSetupListAST & inOperand3,
                                                                          const class GALGAS_taskSetupListAST & inOperand4,
                                                                          const class GALGAS_location & inOperand5,
                                                                          const class GALGAS_bool & inOperand6
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_decoratedTaskList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lbigint & inOperand1,
                                                     const class GALGAS_taskSetupListAST & inOperand2,
                                                     const class GALGAS_taskSetupListAST & inOperand3,
                                                     const class GALGAS_taskSetupListAST & inOperand4,
                                                     const class GALGAS_location & inOperand5,
                                                     const class GALGAS_bool & inOperand6
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_decoratedTaskList add_operation (const GALGAS_decoratedTaskList & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lbigint constinArgument1,
                                               class GALGAS_taskSetupListAST constinArgument2,
                                               class GALGAS_taskSetupListAST constinArgument3,
                                               class GALGAS_taskSetupListAST constinArgument4,
                                               class GALGAS_location constinArgument5,
                                               class GALGAS_bool constinArgument6,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lbigint constinArgument1,
                                                      class GALGAS_taskSetupListAST constinArgument2,
                                                      class GALGAS_taskSetupListAST constinArgument3,
                                                      class GALGAS_taskSetupListAST constinArgument4,
                                                      class GALGAS_location constinArgument5,
                                                      class GALGAS_bool constinArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lbigint & outArgument1,
                                                 class GALGAS_taskSetupListAST & outArgument2,
                                                 class GALGAS_taskSetupListAST & outArgument3,
                                                 class GALGAS_taskSetupListAST & outArgument4,
                                                 class GALGAS_location & outArgument5,
                                                 class GALGAS_bool & outArgument6,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lbigint & outArgument1,
                                                class GALGAS_taskSetupListAST & outArgument2,
                                                class GALGAS_taskSetupListAST & outArgument3,
                                                class GALGAS_taskSetupListAST & outArgument4,
                                                class GALGAS_location & outArgument5,
                                                class GALGAS_bool & outArgument6,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lbigint & outArgument1,
                                                      class GALGAS_taskSetupListAST & outArgument2,
                                                      class GALGAS_taskSetupListAST & outArgument3,
                                                      class GALGAS_taskSetupListAST & outArgument4,
                                                      class GALGAS_location & outArgument5,
                                                      class GALGAS_bool & outArgument6,
                                                      class GALGAS_uint constinArgument7,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAutoStartAtIndex (class GALGAS_bool constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEndOfTaskDeclarationAtIndex (class GALGAS_location constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMStackSizeAtIndex (class GALGAS_lbigint constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskActivateListASTAtIndex (class GALGAS_taskSetupListAST constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskDeactivateListASTAtIndex (class GALGAS_taskSetupListAST constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskNameAtIndex (class GALGAS_lstring constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTaskSetupListASTAtIndex (class GALGAS_taskSetupListAST constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lbigint & outArgument1,
                                              class GALGAS_taskSetupListAST & outArgument2,
                                              class GALGAS_taskSetupListAST & outArgument3,
                                              class GALGAS_taskSetupListAST & outArgument4,
                                              class GALGAS_location & outArgument5,
                                              class GALGAS_bool & outArgument6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lbigint & outArgument1,
                                             class GALGAS_taskSetupListAST & outArgument2,
                                             class GALGAS_taskSetupListAST & outArgument3,
                                             class GALGAS_taskSetupListAST & outArgument4,
                                             class GALGAS_location & outArgument5,
                                             class GALGAS_bool & outArgument6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAutoStartAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSizeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskActivateListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskDeactivateListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskSetupListASTAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_decoratedTaskList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_decoratedTaskList ;
 
} ; // End of GALGAS_decoratedTaskList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_decoratedTaskList : public cGenericAbstractEnumerator {
  public: cEnumerator_decoratedTaskList (const GALGAS_decoratedTaskList & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mTaskName (LOCATION_ARGS) const ;
  public: class GALGAS_lbigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GALGAS_taskSetupListAST current_mTaskSetupListAST (LOCATION_ARGS) const ;
  public: class GALGAS_taskSetupListAST current_mTaskActivateListAST (LOCATION_ARGS) const ;
  public: class GALGAS_taskSetupListAST current_mTaskDeactivateListAST (LOCATION_ARGS) const ;
  public: class GALGAS_location current_mEndOfTaskDeclaration (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mAutoStart (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_decoratedTaskList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedTaskListDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedTaskListDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedTaskListDeclaration_init_21_ (const class GALGAS_decoratedTaskList & inOperand0,
                                                      Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_decoratedTaskList mProperty_mTaskList ;


//--- Default constructor
  public: cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedTaskListDeclaration (const GALGAS_decoratedTaskList & in_mTaskList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskActivateFunctionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskActivateFunctionIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_taskActivateFunctionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_taskActivateFunctionIR (const class cPtr_taskActivateFunctionIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mAssemblerTaskName (void) const ;
  public: void setProperty_mAssemblerTaskName (const GALGAS_string & inValue) ;

  public: class GALGAS_string readProperty_mActivateServiceInvocationName (void) const ;
  public: void setProperty_mActivateServiceInvocationName (const GALGAS_string & inValue) ;

  public: class GALGAS_uint readProperty_mTaskIndex (void) const ;
  public: void setProperty_mTaskIndex (const GALGAS_uint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_taskActivateFunctionIR init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                    const class GALGAS_string & inOperand3,
                                                                                                    const class GALGAS_string & inOperand4,
                                                                                                    const class GALGAS_uint & inOperand5,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskActivateFunctionIR extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskActivateFunctionIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_bool & inOperand2,
                                                                     const class GALGAS_string & inOperand3,
                                                                     const class GALGAS_string & inOperand4,
                                                                     const class GALGAS_uint & inOperand5
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_taskActivateFunctionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskActivateFunctionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @taskActivateFunctionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_taskActivateFunctionIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void taskActivateFunctionIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1,
                                                                                           const class GALGAS_bool & inOperand2,
                                                                                           const class GALGAS_string & inOperand3,
                                                                                           const class GALGAS_string & inOperand4,
                                                                                           const class GALGAS_uint & inOperand5,
                                                                                           Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mAssemblerTaskName ;
  public: GALGAS_string mProperty_mActivateServiceInvocationName ;
  public: GALGAS_uint mProperty_mTaskIndex ;


//--- Default constructor
  public: cPtr_taskActivateFunctionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_taskActivateFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                       const GALGAS_bool & in_isRequired,
                                       const GALGAS_bool & in_warnsIfUnused,
                                       const GALGAS_string & in_mAssemblerTaskName,
                                       const GALGAS_string & in_mActivateServiceInvocationName,
                                       const GALGAS_uint & in_mTaskIndex
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForActivateTask (class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceCall'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForServiceCall (const class GALGAS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskLoopFunction'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForTaskLoopFunction (class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_routineMangledNameFromAST (const class GALGAS_string & constinArgument0,
                                                         const class GALGAS_lstring & constinArgument1,
                                                         const class GALGAS_routineFormalArgumentListAST & constinArgument2,
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

void extensionSetter_addFunctionWithoutArgument (class GALGAS_routineMapForContext & ioObject,
                                                 const class GALGAS_string constin_inOmnibusTypeDescriptionName,
                                                 const class GALGAS_string constin_inLLVMBaseTypeName,
                                                 const class GALGAS_lstring constin_inMethodName,
                                                 const class GALGAS_mode constin_inMode,
                                                 const class GALGAS_unifiedTypeMapEntry constin_inResultType,
                                                 class GALGAS_lstring & out_outRoutineLLVMName,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@universalValuedObjectMap insertTask'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertTask (class GALGAS_universalValuedObjectMap & ioObject,
                                 const class GALGAS_lstring constin_inTaskName,
                                 const class GALGAS_omnibusType constin_inTaskType,
                                 class Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedTaskList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mTaskName ;
  public: inline GALGAS_lstring readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GALGAS_lbigint mProperty_mStackSize ;
  public: inline GALGAS_lbigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GALGAS_taskSetupListAST mProperty_mTaskSetupListAST ;
  public: inline GALGAS_taskSetupListAST readProperty_mTaskSetupListAST (void) const {
    return mProperty_mTaskSetupListAST ;
  }

  public: GALGAS_taskSetupListAST mProperty_mTaskActivateListAST ;
  public: inline GALGAS_taskSetupListAST readProperty_mTaskActivateListAST (void) const {
    return mProperty_mTaskActivateListAST ;
  }

  public: GALGAS_taskSetupListAST mProperty_mTaskDeactivateListAST ;
  public: inline GALGAS_taskSetupListAST readProperty_mTaskDeactivateListAST (void) const {
    return mProperty_mTaskDeactivateListAST ;
  }

  public: GALGAS_location mProperty_mEndOfTaskDeclaration ;
  public: inline GALGAS_location readProperty_mEndOfTaskDeclaration (void) const {
    return mProperty_mEndOfTaskDeclaration ;
  }

  public: GALGAS_bool mProperty_mAutoStart ;
  public: inline GALGAS_bool readProperty_mAutoStart (void) const {
    return mProperty_mAutoStart ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_decoratedTaskList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMStackSize (const GALGAS_lbigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMTaskSetupListAST (const GALGAS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskSetupListAST = inValue ;
  }

  public: inline void setter_setMTaskActivateListAST (const GALGAS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskActivateListAST = inValue ;
  }

  public: inline void setter_setMTaskDeactivateListAST (const GALGAS_taskSetupListAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskDeactivateListAST = inValue ;
  }

  public: inline void setter_setMEndOfTaskDeclaration (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfTaskDeclaration = inValue ;
  }

  public: inline void setter_setMAutoStart (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAutoStart = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_decoratedTaskList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_decoratedTaskList_2D_element (const GALGAS_lstring & in_mTaskName,
                                               const GALGAS_lbigint & in_mStackSize,
                                               const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                               const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                               const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                               const GALGAS_location & in_mEndOfTaskDeclaration,
                                               const GALGAS_bool & in_mAutoStart) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedTaskList_2D_element init_21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                       const class GALGAS_lbigint & inOperand1,
                                                                                       const class GALGAS_taskSetupListAST & inOperand2,
                                                                                       const class GALGAS_taskSetupListAST & inOperand3,
                                                                                       const class GALGAS_taskSetupListAST & inOperand4,
                                                                                       const class GALGAS_location & inOperand5,
                                                                                       const class GALGAS_bool & inOperand6,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedTaskList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedTaskList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lbigint & inOperand1,
                                                                           const class GALGAS_taskSetupListAST & inOperand2,
                                                                           const class GALGAS_taskSetupListAST & inOperand3,
                                                                           const class GALGAS_taskSetupListAST & inOperand4,
                                                                           const class GALGAS_location & inOperand5,
                                                                           const class GALGAS_bool & inOperand6,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedTaskList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedTaskList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedTaskListDeclaration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedTaskListDeclaration_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedTaskListDeclaration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedTaskListDeclaration_2D_weak (const class GALGAS_decoratedTaskListDeclaration & inSource) ;

  public: GALGAS_decoratedTaskListDeclaration_2D_weak & operator = (const class GALGAS_decoratedTaskListDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedTaskListDeclaration bang_decoratedTaskListDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedTaskListDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedTaskListDeclaration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedTaskListDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedTaskListDeclaration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@taskMapIR' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_taskMapIR : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mTaskType ;
  public: GALGAS_uint mProperty_mPriority ;
  public: GALGAS_bigint mProperty_mStackSize ;
  public: GALGAS_stringlist mProperty_mSetupOrderedList ;
  public: GALGAS_stringlist mProperty_mActivateOrderedList ;
  public: GALGAS_stringlist mProperty_mDeactivateOrderedList ;
  public: GALGAS_uint mProperty_mTaskNameStringIndex ;
  public: GALGAS_bool mProperty_mActivate ;

//--- Constructor
  public: cMapElement_taskMapIR (const GALGAS_lstring & inKey,
                                 const GALGAS_omnibusType & in_mTaskType,
                                 const GALGAS_uint & in_mPriority,
                                 const GALGAS_bigint & in_mStackSize,
                                 const GALGAS_stringlist & in_mSetupOrderedList,
                                 const GALGAS_stringlist & in_mActivateOrderedList,
                                 const GALGAS_stringlist & in_mDeactivateOrderedList,
                                 const GALGAS_uint & in_mTaskNameStringIndex,
                                 const GALGAS_bool & in_mActivate
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskMapIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mTaskType ;
  public: inline GALGAS_omnibusType readProperty_mTaskType (void) const {
    return mProperty_mTaskType ;
  }

  public: GALGAS_uint mProperty_mPriority ;
  public: inline GALGAS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GALGAS_bigint mProperty_mStackSize ;
  public: inline GALGAS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GALGAS_stringlist mProperty_mSetupOrderedList ;
  public: inline GALGAS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GALGAS_stringlist mProperty_mActivateOrderedList ;
  public: inline GALGAS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GALGAS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GALGAS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GALGAS_uint mProperty_mTaskNameStringIndex ;
  public: inline GALGAS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GALGAS_bool mProperty_mActivate ;
  public: inline GALGAS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_taskMapIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMTaskType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskType = inValue ;
  }

  public: inline void setter_setMPriority (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_taskMapIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_taskMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_omnibusType & in_mTaskType,
                                       const GALGAS_uint & in_mPriority,
                                       const GALGAS_bigint & in_mStackSize,
                                       const GALGAS_stringlist & in_mSetupOrderedList,
                                       const GALGAS_stringlist & in_mActivateOrderedList,
                                       const GALGAS_stringlist & in_mDeactivateOrderedList,
                                       const GALGAS_uint & in_mTaskNameStringIndex,
                                       const GALGAS_bool & in_mActivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_taskMapIR_2D_element init_21__21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
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

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskMapIR_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_omnibusType & inOperand1,
                                                                   const class GALGAS_uint & inOperand2,
                                                                   const class GALGAS_bigint & inOperand3,
                                                                   const class GALGAS_stringlist & inOperand4,
                                                                   const class GALGAS_stringlist & inOperand5,
                                                                   const class GALGAS_stringlist & inOperand6,
                                                                   const class GALGAS_uint & inOperand7,
                                                                   const class GALGAS_bool & inOperand8,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_taskMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskMapIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSortedListIR sorted list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskSortedListIR : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_taskSortedListIR (void) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskSortedListIR extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskSortedListIR class_func_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_taskSortedListIR class_func_sortedListWithValue (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_uint & inOperand1,
                                                                               const class GALGAS_bigint & inOperand2,
                                                                               const class GALGAS_stringlist & inOperand3,
                                                                               const class GALGAS_stringlist & inOperand4,
                                                                               const class GALGAS_stringlist & inOperand5,
                                                                               const class GALGAS_uint & inOperand6,
                                                                               const class GALGAS_bool & inOperand7
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_taskSortedListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_bigint & inOperand2,
                                                     const class GALGAS_stringlist & inOperand3,
                                                     const class GALGAS_stringlist & inOperand4,
                                                     const class GALGAS_stringlist & inOperand5,
                                                     const class GALGAS_uint & inOperand6,
                                                     const class GALGAS_bool & inOperand7
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insert (class GALGAS_string inArgument0,
                                               class GALGAS_uint inArgument1,
                                               class GALGAS_bigint inArgument2,
                                               class GALGAS_stringlist inArgument3,
                                               class GALGAS_stringlist inArgument4,
                                               class GALGAS_stringlist inArgument5,
                                               class GALGAS_uint inArgument6,
                                               class GALGAS_bool inArgument7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_string & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_bigint & outArgument2,
                                                    class GALGAS_stringlist & outArgument3,
                                                    class GALGAS_stringlist & outArgument4,
                                                    class GALGAS_stringlist & outArgument5,
                                                    class GALGAS_uint & outArgument6,
                                                    class GALGAS_bool & outArgument7,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_string & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    class GALGAS_bigint & outArgument2,
                                                    class GALGAS_stringlist & outArgument3,
                                                    class GALGAS_stringlist & outArgument4,
                                                    class GALGAS_stringlist & outArgument5,
                                                    class GALGAS_uint & outArgument6,
                                                    class GALGAS_bool & outArgument7,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_bigint & outArgument2,
                                                 class GALGAS_stringlist & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_stringlist & outArgument5,
                                                 class GALGAS_uint & outArgument6,
                                                 class GALGAS_bool & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_bigint & outArgument2,
                                                 class GALGAS_stringlist & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_stringlist & outArgument5,
                                                 class GALGAS_uint & outArgument6,
                                                 class GALGAS_bool & outArgument7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_taskSortedListIR ;
 
} ; // End of GALGAS_taskSortedListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_taskSortedListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_taskSortedListIR (const GALGAS_taskSortedListIR & inEnumeratedObject,
                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mTaskName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mPriority (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mStackSize (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mSetupOrderedList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mActivateOrderedList (LOCATION_ARGS) const ;
  public: class GALGAS_stringlist current_mDeactivateOrderedList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mTaskNameStringIndex (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mActivate (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_taskSortedListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSortedListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskSortedListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mTaskName ;
  public: inline GALGAS_string readProperty_mTaskName (void) const {
    return mProperty_mTaskName ;
  }

  public: GALGAS_uint mProperty_mPriority ;
  public: inline GALGAS_uint readProperty_mPriority (void) const {
    return mProperty_mPriority ;
  }

  public: GALGAS_bigint mProperty_mStackSize ;
  public: inline GALGAS_bigint readProperty_mStackSize (void) const {
    return mProperty_mStackSize ;
  }

  public: GALGAS_stringlist mProperty_mSetupOrderedList ;
  public: inline GALGAS_stringlist readProperty_mSetupOrderedList (void) const {
    return mProperty_mSetupOrderedList ;
  }

  public: GALGAS_stringlist mProperty_mActivateOrderedList ;
  public: inline GALGAS_stringlist readProperty_mActivateOrderedList (void) const {
    return mProperty_mActivateOrderedList ;
  }

  public: GALGAS_stringlist mProperty_mDeactivateOrderedList ;
  public: inline GALGAS_stringlist readProperty_mDeactivateOrderedList (void) const {
    return mProperty_mDeactivateOrderedList ;
  }

  public: GALGAS_uint mProperty_mTaskNameStringIndex ;
  public: inline GALGAS_uint readProperty_mTaskNameStringIndex (void) const {
    return mProperty_mTaskNameStringIndex ;
  }

  public: GALGAS_bool mProperty_mActivate ;
  public: inline GALGAS_bool readProperty_mActivate (void) const {
    return mProperty_mActivate ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_taskSortedListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMTaskName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskName = inValue ;
  }

  public: inline void setter_setMPriority (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPriority = inValue ;
  }

  public: inline void setter_setMStackSize (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStackSize = inValue ;
  }

  public: inline void setter_setMSetupOrderedList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSetupOrderedList = inValue ;
  }

  public: inline void setter_setMActivateOrderedList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivateOrderedList = inValue ;
  }

  public: inline void setter_setMDeactivateOrderedList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDeactivateOrderedList = inValue ;
  }

  public: inline void setter_setMTaskNameStringIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTaskNameStringIndex = inValue ;
  }

  public: inline void setter_setMActivate (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mActivate = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_taskSortedListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_taskSortedListIR_2D_element (const GALGAS_string & in_mTaskName,
                                              const GALGAS_uint & in_mPriority,
                                              const GALGAS_bigint & in_mStackSize,
                                              const GALGAS_stringlist & in_mSetupOrderedList,
                                              const GALGAS_stringlist & in_mActivateOrderedList,
                                              const GALGAS_stringlist & in_mDeactivateOrderedList,
                                              const GALGAS_uint & in_mTaskNameStringIndex,
                                              const GALGAS_bool & in_mActivate) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_taskSortedListIR_2D_element init_21__21__21__21__21__21__21__21_ (const class GALGAS_string & inOperand0,
                                                                                          const class GALGAS_uint & inOperand1,
                                                                                          const class GALGAS_bigint & inOperand2,
                                                                                          const class GALGAS_stringlist & inOperand3,
                                                                                          const class GALGAS_stringlist & inOperand4,
                                                                                          const class GALGAS_stringlist & inOperand5,
                                                                                          const class GALGAS_uint & inOperand6,
                                                                                          const class GALGAS_bool & inOperand7,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskSortedListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskSortedListIR_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_uint & inOperand1,
                                                                          const class GALGAS_bigint & inOperand2,
                                                                          const class GALGAS_stringlist & inOperand3,
                                                                          const class GALGAS_stringlist & inOperand4,
                                                                          const class GALGAS_stringlist & inOperand5,
                                                                          const class GALGAS_uint & inOperand6,
                                                                          const class GALGAS_bool & inOperand7,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_taskSortedListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskSortedListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSortedListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const class GALGAS_taskMapIR inObject,
                                   class GALGAS_string & io_ioLLVMcode,
                                   const class GALGAS_generationContext constin_inGenerationContext,
                                   class GALGAS_generationAdds & io_ioGenerationAdds,
                                   class GALGAS_primitiveAndServiceIRlist & io_ioServiceList,
                                   class Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'activateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_activateNameForTaskType (const class GALGAS_string & constinArgument0,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'deactivateNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_deactivateNameForTaskType (const class GALGAS_string & constinArgument0,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_literalStringName (const class GALGAS_uint & constinArgument0,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForFunction'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForFunction (const class GALGAS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSelf'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSelf (class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceImplementation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForServiceImplementation (const class GALGAS_string & constinArgument0,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForTaskWaitsForActivation'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForTaskWaitsForActivation (class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmSeparatorLine (class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'mainRoutineNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_mainRoutineNameForTask (const class GALGAS_string & constinArgument0,
                                                     class Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'setupNameForTaskType'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_setupNameForTaskType (const class GALGAS_string & constinArgument0,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackAddressForTask'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_stackAddressForTask (const class GALGAS_string & constinArgument0,
                                                  class Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'stackNameForTask'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_stackNameForTask (const class GALGAS_string & constinArgument0,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@objectIR llvmValue' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_llvmValue (const class GALGAS_objectIR & inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveAndServiceIRlist list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primitiveAndServiceIRlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_primitiveAndServiceIRlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_primitiveAndServiceIRlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mCallName,
                                                 const class GALGAS_string & in_mImplementationName,
                                                 const class GALGAS_bool & in_mHasReturnValue
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primitiveAndServiceIRlist extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primitiveAndServiceIRlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_primitiveAndServiceIRlist class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_primitiveAndServiceIRlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_primitiveAndServiceIRlist add_operation (const GALGAS_primitiveAndServiceIRlist & inOperand,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMCallNameAtIndex (class GALGAS_string constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMHasReturnValueAtIndex (class GALGAS_bool constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMImplementationNameAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mCallNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasReturnValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mImplementationNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_primitiveAndServiceIRlist getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_primitiveAndServiceIRlist getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_primitiveAndServiceIRlist getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_primitiveAndServiceIRlist ;
 
} ; // End of GALGAS_primitiveAndServiceIRlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_primitiveAndServiceIRlist : public cGenericAbstractEnumerator {
  public: cEnumerator_primitiveAndServiceIRlist (const GALGAS_primitiveAndServiceIRlist & inEnumeratedObject,
                                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mCallName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mImplementationName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mHasReturnValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_primitiveAndServiceIRlist_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @generationAdds struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_generationAdds : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mUniqueIndex ;
  public: inline GALGAS_uint readProperty_mUniqueIndex (void) const {
    return mProperty_mUniqueIndex ;
  }

  public: GALGAS_stringset mProperty_mExternFunctionDeclarationSet ;
  public: inline GALGAS_stringset readProperty_mExternFunctionDeclarationSet (void) const {
    return mProperty_mExternFunctionDeclarationSet ;
  }

  public: GALGAS_staticEntityMap mProperty_mStaticEntityMap ;
  public: inline GALGAS_staticEntityMap readProperty_mStaticEntityMap (void) const {
    return mProperty_mStaticEntityMap ;
  }

  public: GALGAS_bool mProperty_mUsesGuards ;
  public: inline GALGAS_bool readProperty_mUsesGuards (void) const {
    return mProperty_mUsesGuards ;
  }

  public: GALGAS_bool mProperty_mNeedsDynamicMemoryAllocation ;
  public: inline GALGAS_bool readProperty_mNeedsDynamicMemoryAllocation (void) const {
    return mProperty_mNeedsDynamicMemoryAllocation ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_generationAdds (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMUniqueIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUniqueIndex = inValue ;
  }

  public: inline void setter_setMExternFunctionDeclarationSet (const GALGAS_stringset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExternFunctionDeclarationSet = inValue ;
  }

  public: inline void setter_setMStaticEntityMap (const GALGAS_staticEntityMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mStaticEntityMap = inValue ;
  }

  public: inline void setter_setMUsesGuards (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUsesGuards = inValue ;
  }

  public: inline void setter_setMNeedsDynamicMemoryAllocation (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNeedsDynamicMemoryAllocation = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_generationAdds (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_generationAdds (const GALGAS_uint & in_mUniqueIndex,
                                 const GALGAS_stringset & in_mExternFunctionDeclarationSet,
                                 const GALGAS_staticEntityMap & in_mStaticEntityMap,
                                 const GALGAS_bool & in_mUsesGuards,
                                 const GALGAS_bool & in_mNeedsDynamicMemoryAllocation) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_generationAdds init (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_generationAdds extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_generationAdds class_func_new (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_generationAdds & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_generationAdds class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationAdds ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @generationContext struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_generationContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_omnibusType mProperty_mPanicCodeLLVMType ;
  public: inline GALGAS_omnibusType readProperty_mPanicCodeLLVMType (void) const {
    return mProperty_mPanicCodeLLVMType ;
  }

  public: GALGAS_omnibusType mProperty_mPanicLineLLVMType ;
  public: inline GALGAS_omnibusType readProperty_mPanicLineLLVMType (void) const {
    return mProperty_mPanicLineLLVMType ;
  }

  public: GALGAS_string mProperty_mNopInstructionInLLVM ;
  public: inline GALGAS_string readProperty_mNopInstructionInLLVM (void) const {
    return mProperty_mNopInstructionInLLVM ;
  }

  public: GALGAS_globalTaskVariableList mProperty_mGlobalTaskVariableList ;
  public: inline GALGAS_globalTaskVariableList readProperty_mGlobalTaskVariableList (void) const {
    return mProperty_mGlobalTaskVariableList ;
  }

  public: GALGAS_availableInterruptMap mProperty_mAvailableInterruptMap ;
  public: inline GALGAS_availableInterruptMap readProperty_mAvailableInterruptMap (void) const {
    return mProperty_mAvailableInterruptMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_generationContext (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPanicCodeLLVMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicCodeLLVMType = inValue ;
  }

  public: inline void setter_setMPanicLineLLVMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPanicLineLLVMType = inValue ;
  }

  public: inline void setter_setMNopInstructionInLLVM (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mNopInstructionInLLVM = inValue ;
  }

  public: inline void setter_setMGlobalTaskVariableList (const GALGAS_globalTaskVariableList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGlobalTaskVariableList = inValue ;
  }

  public: inline void setter_setMAvailableInterruptMap (const GALGAS_availableInterruptMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAvailableInterruptMap = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_generationContext (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_generationContext (const GALGAS_omnibusType & in_mPanicCodeLLVMType,
                                    const GALGAS_omnibusType & in_mPanicLineLLVMType,
                                    const GALGAS_string & in_mNopInstructionInLLVM,
                                    const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                    const GALGAS_availableInterruptMap & in_mAvailableInterruptMap) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_generationContext init_21__21__21__21__21_ (const class GALGAS_omnibusType & inOperand0,
                                                                    const class GALGAS_omnibusType & inOperand1,
                                                                    const class GALGAS_string & inOperand2,
                                                                    const class GALGAS_globalTaskVariableList & inOperand3,
                                                                    const class GALGAS_availableInterruptMap & inOperand4,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_generationContext extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_generationContext class_func_new (const class GALGAS_omnibusType & inOperand0,
                                                                const class GALGAS_omnibusType & inOperand1,
                                                                const class GALGAS_string & inOperand2,
                                                                const class GALGAS_globalTaskVariableList & inOperand3,
                                                                const class GALGAS_availableInterruptMap & inOperand4,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_generationContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_generationContext class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskActivateFunctionIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskActivateFunctionIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_taskActivateFunctionIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_taskActivateFunctionIR_2D_weak (const class GALGAS_taskActivateFunctionIR & inSource) ;

  public: GALGAS_taskActivateFunctionIR_2D_weak & operator = (const class GALGAS_taskActivateFunctionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_taskActivateFunctionIR bang_taskActivateFunctionIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskActivateFunctionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskActivateFunctionIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_taskActivateFunctionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskActivateFunctionIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSetupDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_taskSetupDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_taskSetupDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_taskSetupDeclarationAST_2D_weak (const class GALGAS_taskSetupDeclarationAST & inSource) ;

  public: GALGAS_taskSetupDeclarationAST_2D_weak & operator = (const class GALGAS_taskSetupDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_taskSetupDeclarationAST bang_taskSetupDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_taskSetupDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_taskSetupDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_taskSetupDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_taskSetupDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListAST_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineFormalArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentPassingMode ;
  public: inline GALGAS_procFormalArgumentPassingMode readProperty_mFormalArgumentPassingMode (void) const {
    return mProperty_mFormalArgumentPassingMode ;
  }

  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentTypeName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentTypeName (void) const {
    return mProperty_mFormalArgumentTypeName ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMFormalArgumentTypeName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentTypeName = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineFormalArgumentListAST_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineFormalArgumentListAST_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                          const GALGAS_lstring & in_mSelector,
                                                          const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                          const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineFormalArgumentListAST_2D_element init_21__21__21__21_ (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_lstring & inOperand3,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineFormalArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineFormalArgumentListAST_2D_element class_func_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                      const class GALGAS_lstring & inOperand1,
                                                                                      const class GALGAS_lstring & inOperand2,
                                                                                      const class GALGAS_lstring & inOperand3,
                                                                                      class Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineFormalArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineFormalArgumentListAST_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @functionDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_functionDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_functionDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_functionDeclarationAST_2D_weak (const class GALGAS_functionDeclarationAST & inSource) ;

  public: GALGAS_functionDeclarationAST_2D_weak & operator = (const class GALGAS_functionDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_functionDeclarationAST bang_functionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_functionDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_functionDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_functionDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineLLVMNameDict_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineLLVMNameDict_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_mode mProperty_key ;
  public: inline GALGAS_mode readProperty_key (void) const {
    return mProperty_key ;
  }

  public: GALGAS_string mProperty_llvmName ;
  public: inline GALGAS_string readProperty_llvmName (void) const {
    return mProperty_llvmName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineLLVMNameDict_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setKey (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_key = inValue ;
  }

  public: inline void setter_setLlvmName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_llvmName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineLLVMNameDict_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineLLVMNameDict_2D_element (const GALGAS_mode & in_key,
                                                 const GALGAS_string & in_llvmName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineLLVMNameDict_2D_element init_21__21_ (const class GALGAS_mode & inOperand0,
                                                                     const class GALGAS_string & inOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineLLVMNameDict_2D_element extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineLLVMNameDict_2D_element class_func_new (const class GALGAS_mode & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             class Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineLLVMNameDict_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineLLVMNameDict_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@mode routineLLVMDictionaryForFunction' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const class GALGAS_mode & inObject,
                                                                                   const class GALGAS_string & constinArgument0,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@routineFormalArgumentListAST routineSignature' (as function)
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_routineFormalArgumentListAST & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithInputArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithInputArgument (class GALGAS_routineMapForContext & ioObject,
                                                   const class GALGAS_string constin_inOmnibusTypeDescriptionName,
                                                   class GALGAS_semanticContext & io_ioContext,
                                                   const class GALGAS_string constin_inLLVMBaseTypeName,
                                                   const class GALGAS_lstring constin_inMethodName,
                                                   const class GALGAS_mode constin_inMode,
                                                   const class GALGAS_string constin_inInputSelector,
                                                   const class GALGAS_unifiedTypeMapEntry constin_inInputArgumentTypeProxy,
                                                   const class GALGAS_string constin_inInputArgumentName,
                                                   const class GALGAS_unifiedTypeMapEntry constin_inResultType,
                                                   class GALGAS_lstring & out_outRoutineLLVMName,
                                                   class Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_26__3F__21_ (class GALGAS_unifiedTypeMap & ioArgument0,
                                                const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                                class GALGAS_routineTypedSignature & outArgument2,
                                                class Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension setter '@routineMapForContext addFunctionWithTwoInputArguments'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFunctionWithTwoInputArguments (class GALGAS_routineMapForContext & ioObject,
                                                       const class GALGAS_string constin_inOmnibusTypeDescriptionName,
                                                       class GALGAS_semanticContext & io_ioContext,
                                                       const class GALGAS_string constin_inLLVMBaseTypeName,
                                                       const class GALGAS_lstring constin_inMethodName,
                                                       const class GALGAS_mode constin_inMode,
                                                       const class GALGAS_string constin_inInputSelector_31_,
                                                       const class GALGAS_unifiedTypeMapEntry constin_inInputArgumentTypeProxy_31_,
                                                       const class GALGAS_string constin_inInputArgumentName_31_,
                                                       const class GALGAS_string constin_inInputSelector_32_,
                                                       const class GALGAS_unifiedTypeMapEntry constin_inInputArgumentTypeProxy_32_,
                                                       const class GALGAS_string constin_inInputArgumentName_32_,
                                                       const class GALGAS_unifiedTypeMapEntry constin_inResultType,
                                                       class GALGAS_lstring & out_outRoutineLLVMName,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @systemRoutineDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_systemRoutineDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_systemRoutineDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_systemRoutineDeclarationAST_2D_weak (const class GALGAS_systemRoutineDeclarationAST & inSource) ;

  public: GALGAS_systemRoutineDeclarationAST_2D_weak & operator = (const class GALGAS_systemRoutineDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_systemRoutineDeclarationAST bang_systemRoutineDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_systemRoutineDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_systemRoutineDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_systemRoutineDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_systemRoutineDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionIRlist list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sectionIRlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_sectionIRlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_sectionIRlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mSectionCallName,
                                                 const class GALGAS_string & in_mSectionImplementationName,
                                                 const class GALGAS_bool & in_invocationFromAnyMode
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sectionIRlist extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sectionIRlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_sectionIRlist class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_string & inOperand1,
                                                                      const class GALGAS_bool & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sectionIRlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_sectionIRlist add_operation (const GALGAS_sectionIRlist & inOperand,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_string constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setInvocationFromAnyModeAtIndex (class GALGAS_bool constinArgument0,
                                                                        class GALGAS_uint constinArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSectionCallNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSectionImplementationNameAtIndex (class GALGAS_string constinArgument0,
                                                                             class GALGAS_uint constinArgument1,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_invocationFromAnyModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionCallNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mSectionImplementationNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sectionIRlist getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sectionIRlist getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sectionIRlist getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_sectionIRlist ;
 
} ; // End of GALGAS_sectionIRlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_sectionIRlist : public cGenericAbstractEnumerator {
  public: cEnumerator_sectionIRlist (const GALGAS_sectionIRlist & inEnumeratedObject,
                                     const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mSectionCallName (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mSectionImplementationName (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_invocationFromAnyMode (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sectionIRlist_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionIRlist_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_sectionIRlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mSectionCallName ;
  public: inline GALGAS_string readProperty_mSectionCallName (void) const {
    return mProperty_mSectionCallName ;
  }

  public: GALGAS_string mProperty_mSectionImplementationName ;
  public: inline GALGAS_string readProperty_mSectionImplementationName (void) const {
    return mProperty_mSectionImplementationName ;
  }

  public: GALGAS_bool mProperty_invocationFromAnyMode ;
  public: inline GALGAS_bool readProperty_invocationFromAnyMode (void) const {
    return mProperty_invocationFromAnyMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSectionCallName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionCallName = inValue ;
  }

  public: inline void setter_setMSectionImplementationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSectionImplementationName = inValue ;
  }

  public: inline void setter_setInvocationFromAnyMode (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_invocationFromAnyMode = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_sectionIRlist_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_sectionIRlist_2D_element (const GALGAS_string & in_mSectionCallName,
                                           const GALGAS_string & in_mSectionImplementationName,
                                           const GALGAS_bool & in_invocationFromAnyMode) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_sectionIRlist_2D_element init_21__21__21_invocationFromAnyMode (const class GALGAS_string & inOperand0,
                                                                                        const class GALGAS_string & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_sectionIRlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_sectionIRlist_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_string & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       class Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_sectionIRlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_sectionIRlist_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionIRlist_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @primitiveAndServiceIRlist_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_primitiveAndServiceIRlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mCallName ;
  public: inline GALGAS_string readProperty_mCallName (void) const {
    return mProperty_mCallName ;
  }

  public: GALGAS_string mProperty_mImplementationName ;
  public: inline GALGAS_string readProperty_mImplementationName (void) const {
    return mProperty_mImplementationName ;
  }

  public: GALGAS_bool mProperty_mHasReturnValue ;
  public: inline GALGAS_bool readProperty_mHasReturnValue (void) const {
    return mProperty_mHasReturnValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_primitiveAndServiceIRlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMCallName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mCallName = inValue ;
  }

  public: inline void setter_setMImplementationName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mImplementationName = inValue ;
  }

  public: inline void setter_setMHasReturnValue (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHasReturnValue = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_primitiveAndServiceIRlist_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_primitiveAndServiceIRlist_2D_element (const GALGAS_string & in_mCallName,
                                                       const GALGAS_string & in_mImplementationName,
                                                       const GALGAS_bool & in_mHasReturnValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_primitiveAndServiceIRlist_2D_element init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_primitiveAndServiceIRlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_primitiveAndServiceIRlist_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_string & inOperand1,
                                                                                   const class GALGAS_bool & inOperand2,
                                                                                   class Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_primitiveAndServiceIRlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_primitiveAndServiceIRlist_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @systemUserRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_systemUserRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_systemUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_systemUserRoutineIR (const class cPtr_systemUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mMangledImplementationName (void) const ;
  public: void setProperty_mMangledImplementationName (const GALGAS_string & inValue) ;

  public: class GALGAS_routineTypedSignature readProperty_mFormalArgumentList (void) const ;
  public: void setProperty_mFormalArgumentList (const GALGAS_routineTypedSignature & inValue) ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReceiverTypeProxy (void) const ;
  public: void setProperty_mReceiverTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) ;

  public: class GALGAS_bool readProperty_mIsSection (void) const ;
  public: void setProperty_mIsSection (const GALGAS_bool & inValue) ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReturnTypeProxy (void) const ;
  public: void setProperty_mReturnTypeProxy (const GALGAS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_systemUserRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                         const class GALGAS_bool & inOperand2,
                                                                                                         const class GALGAS_string & inOperand3,
                                                                                                         const class GALGAS_routineTypedSignature & inOperand4,
                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                         const class GALGAS_bool & inOperand6,
                                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand7,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_systemUserRoutineIR extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_systemUserRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_bool & inOperand1,
                                                                  const class GALGAS_bool & inOperand2,
                                                                  const class GALGAS_string & inOperand3,
                                                                  const class GALGAS_routineTypedSignature & inOperand4,
                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                  const class GALGAS_bool & inOperand6,
                                                                  const class GALGAS_unifiedTypeMapEntry & inOperand7
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_systemUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_systemUserRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @systemUserRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_systemUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void systemUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                const class GALGAS_bool & inOperand1,
                                                                                                const class GALGAS_bool & inOperand2,
                                                                                                const class GALGAS_string & inOperand3,
                                                                                                const class GALGAS_routineTypedSignature & inOperand4,
                                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand5,
                                                                                                const class GALGAS_bool & inOperand6,
                                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand7,
                                                                                                Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GALGAS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GALGAS_sectionIRlist & arg_ioSectionList,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mMangledImplementationName ;
  public: GALGAS_routineTypedSignature mProperty_mFormalArgumentList ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReceiverTypeProxy ;
  public: GALGAS_bool mProperty_mIsSection ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnTypeProxy ;


//--- Default constructor
  public: cPtr_systemUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_systemUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                    const GALGAS_bool & in_isRequired,
                                    const GALGAS_bool & in_warnsIfUnused,
                                    const GALGAS_string & in_mMangledImplementationName,
                                    const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                    const GALGAS_unifiedTypeMapEntry & in_mReceiverTypeProxy,
                                    const GALGAS_bool & in_mIsSection,
                                    const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @systemUserRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_systemUserRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_systemUserRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_systemUserRoutineIR_2D_weak (const class GALGAS_systemUserRoutineIR & inSource) ;

  public: GALGAS_systemUserRoutineIR_2D_weak & operator = (const class GALGAS_systemUserRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_systemUserRoutineIR bang_systemUserRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_systemUserRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_systemUserRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_systemUserRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_systemUserRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteTypesInPrecedenceGraph (const class GALGAS_externFunctionDeclarationListAST inObject,
                                                 class GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 class Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GALGAS_externFunctionDeclarationListAST inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST-element enterExternProcInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExternProcInContext (const class GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                               class GALGAS_semanticContext & io_ioContext,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externFunctionDeclarationListAST inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST-element externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const class GALGAS_externFunctionDeclarationListAST_2D_element inObject,
                                                      const class GALGAS_semanticContext constin_inContext,
                                                      class GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                      class GALGAS_intermediateCodeStruct & io_ioIntermediateCodeStruct,
                                                      class Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineFormalArgumentListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_routineFormalArgumentListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_routineFormalArgumentListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                 const class GALGAS_omnibusType & in_mFormalArgumentType,
                                                 const class GALGAS_string & in_mFormalArgumentName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineFormalArgumentListIR extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineFormalArgumentListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_routineFormalArgumentListIR class_func_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                    const class GALGAS_omnibusType & inOperand1,
                                                                                    const class GALGAS_string & inOperand2
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineFormalArgumentListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR add_operation (const GALGAS_routineFormalArgumentListIR & inOperand,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               class GALGAS_string constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_string constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_string & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_string & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentKindAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentNameAtIndex (class GALGAS_string constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalArgumentTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mFormalArgumentTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_routineFormalArgumentListIR ;
 
} ; // End of GALGAS_routineFormalArgumentListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_routineFormalArgumentListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_routineFormalArgumentListIR (const GALGAS_routineFormalArgumentListIR & inEnumeratedObject,
                                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentKind (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mFormalArgumentType (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_routineFormalArgumentListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @routineFormalArgumentListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_routineFormalArgumentListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_procFormalArgumentPassingMode mProperty_mFormalArgumentKind ;
  public: inline GALGAS_procFormalArgumentPassingMode readProperty_mFormalArgumentKind (void) const {
    return mProperty_mFormalArgumentKind ;
  }

  public: GALGAS_omnibusType mProperty_mFormalArgumentType ;
  public: inline GALGAS_omnibusType readProperty_mFormalArgumentType (void) const {
    return mProperty_mFormalArgumentType ;
  }

  public: GALGAS_string mProperty_mFormalArgumentName ;
  public: inline GALGAS_string readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_routineFormalArgumentListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentKind (const GALGAS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentKind = inValue ;
  }

  public: inline void setter_setMFormalArgumentType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentType = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_routineFormalArgumentListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                         const GALGAS_omnibusType & in_mFormalArgumentType,
                                                         const GALGAS_string & in_mFormalArgumentName) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_routineFormalArgumentListIR_2D_element init_21__21__21_ (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                 const class GALGAS_omnibusType & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_routineFormalArgumentListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_routineFormalArgumentListIR_2D_element class_func_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                     const class GALGAS_omnibusType & inOperand1,
                                                                                     const class GALGAS_string & inOperand2,
                                                                                     class Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_routineFormalArgumentListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_routineFormalArgumentListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_externRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_externRoutineIR (const class cPtr_externRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) ;

  public: class GALGAS_unifiedTypeMapEntry readProperty_mReturnType (void) const ;
  public: void setProperty_mReturnType (const GALGAS_unifiedTypeMapEntry & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_bool & inOperand1,
                                                                                         const class GALGAS_bool & inOperand2,
                                                                                         const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                         const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externRoutineIR extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_bool & inOperand1,
                                                              const class GALGAS_bool & inOperand2,
                                                              const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                              const class GALGAS_unifiedTypeMapEntry & inOperand4
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_externRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_bool & inOperand2,
                                                                                const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                const class GALGAS_unifiedTypeMapEntry & inOperand4,
                                                                                Compiler * inCompiler) ;


//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnType ;


//--- Default constructor
  public: cPtr_externRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_externRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                const GALGAS_bool & in_isRequired,
                                const GALGAS_bool & in_warnsIfUnused,
                                const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_externRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_externRoutineIR_2D_weak (const class GALGAS_externRoutineIR & inSource) ;

  public: GALGAS_externRoutineIR_2D_weak & operator = (const class GALGAS_externRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_externRoutineIR bang_externRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@externProcedureMapIR' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_externProcedureMapIR : public cMapElement {
//--- Map attributes
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnType ;

//--- Constructor
  public: cMapElement_externProcedureMapIR (const GALGAS_lstring & inKey,
                                            const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @externProcedureMapIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_externProcedureMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: inline GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const {
    return mProperty_mFormalArgumentListForGeneration ;
  }

  public: GALGAS_unifiedTypeMapEntry mProperty_mReturnType ;
  public: inline GALGAS_unifiedTypeMapEntry readProperty_mReturnType (void) const {
    return mProperty_mReturnType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_externProcedureMapIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentListForGeneration = inValue ;
  }

  public: inline void setter_setMReturnType (const GALGAS_unifiedTypeMapEntry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mReturnType = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_externProcedureMapIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_externProcedureMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const GALGAS_unifiedTypeMapEntry & in_mReturnType) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_externProcedureMapIR_2D_element init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                          const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_externProcedureMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_externProcedureMapIR_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_routineFormalArgumentListIR & inOperand1,
                                                                              const class GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_externProcedureMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_externProcedureMapIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externProcedureMapIR llvmPrototypeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_llvmPrototypeGeneration (const class GALGAS_externProcedureMapIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @isrDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_isrDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_isrDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_isrDeclarationAST_2D_weak (const class GALGAS_isrDeclarationAST & inSource) ;

  public: GALGAS_isrDeclarationAST_2D_weak & operator = (const class GALGAS_isrDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_isrDeclarationAST bang_isrDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_isrDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_isrDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_isrDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_isrDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedISRDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedISRDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedISRDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedISRDeclaration (const class cPtr_decoratedISRDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mISRName (void) const ;
  public: void setProperty_mISRName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_mode readProperty_mMode (void) const ;
  public: void setProperty_mMode (const GALGAS_mode & inValue) ;

  public: class GALGAS_lstring readProperty_mDriverName (void) const ;
  public: void setProperty_mDriverName (const GALGAS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedISRDeclaration init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_mode & inOperand1,
                                                                  const class GALGAS_lstring & inOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedISRDeclaration extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedISRDeclaration class_func_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_mode & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedISRDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedISRDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedISRDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedISRDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedISRDeclaration_init_21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                         const class GALGAS_mode & inOperand1,
                                                         const class GALGAS_lstring & inOperand2,
                                                         Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mISRName ;
  public: GALGAS_mode mProperty_mMode ;
  public: GALGAS_lstring mProperty_mDriverName ;


//--- Default constructor
  public: cPtr_decoratedISRDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedISRDeclaration (const GALGAS_lstring & in_mISRName,
                                        const GALGAS_mode & in_mMode,
                                        const GALGAS_lstring & in_mDriverName
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedISRDeclaration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedISRDeclaration_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedISRDeclaration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedISRDeclaration_2D_weak (const class GALGAS_decoratedISRDeclaration & inSource) ;

  public: GALGAS_decoratedISRDeclaration_2D_weak & operator = (const class GALGAS_decoratedISRDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedISRDeclaration bang_decoratedISRDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedISRDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedISRDeclaration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedISRDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedISRDeclaration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@interruptMapIR' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_interruptMapIR : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mSelfType ;
  public: GALGAS_string mProperty_mDriverName ;
  public: GALGAS_mode mProperty_mMode ;

//--- Constructor
  public: cMapElement_interruptMapIR (const GALGAS_lstring & inKey,
                                      const GALGAS_omnibusType & in_mSelfType,
                                      const GALGAS_string & in_mDriverName,
                                      const GALGAS_mode & in_mMode
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @interruptMapIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_interruptMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mSelfType ;
  public: inline GALGAS_omnibusType readProperty_mSelfType (void) const {
    return mProperty_mSelfType ;
  }

  public: GALGAS_string mProperty_mDriverName ;
  public: inline GALGAS_string readProperty_mDriverName (void) const {
    return mProperty_mDriverName ;
  }

  public: GALGAS_mode mProperty_mMode ;
  public: inline GALGAS_mode readProperty_mMode (void) const {
    return mProperty_mMode ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMSelfType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelfType = inValue ;
  }

  public: inline void setter_setMDriverName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverName = inValue ;
  }

  public: inline void setter_setMMode (const GALGAS_mode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mMode = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_interruptMapIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_omnibusType & in_mSelfType,
                                            const GALGAS_string & in_mDriverName,
                                            const GALGAS_mode & in_mMode) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_interruptMapIR_2D_element init_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_omnibusType & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_mode & inOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_interruptMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_interruptMapIR_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_omnibusType & inOperand1,
                                                                        const class GALGAS_string & inOperand2,
                                                                        const class GALGAS_mode & inOperand3,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_interruptMapIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@interruptMapIR interruptCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_interruptCodeGeneration (const class GALGAS_interruptMapIR inObject,
                                              class GALGAS_string & io_ioLLVMcode,
                                              class GALGAS_string & io_ioAScode,
                                              const class GALGAS_string constin_inUndefinedInterruptString,
                                              const class GALGAS_string constin_inXTRInterruptHandlerString,
                                              const class GALGAS_generationContext constin_inGenerationContext,
                                              class GALGAS_generationAdds & io_ioGenerationAdds,
                                              class Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForSectionInterrupt'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForSectionInterrupt (const class GALGAS_string & constinArgument0,
                                                          class Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForServiceInterrupt'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmNameForServiceInterrupt (const class GALGAS_lstring & constinArgument0,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardDeclarationAST_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardDeclarationAST_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardDeclarationAST_2D_weak (const class GALGAS_guardDeclarationAST & inSource) ;

  public: GALGAS_guardDeclarationAST_2D_weak & operator = (const class GALGAS_guardDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardDeclarationAST bang_guardDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardDeclarationAST_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardDeclarationAST_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedGuardDeclaration reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedGuardDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--------------------------------- Default constructor
  public: GALGAS_decoratedGuardDeclaration (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_decoratedGuardDeclaration (const class cPtr_decoratedGuardDeclaration * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_lstring readProperty_mReceiverTypeName (void) const ;
  public: void setProperty_mReceiverTypeName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_lstring readProperty_mGuardName (void) const ;
  public: void setProperty_mGuardName (const GALGAS_lstring & inValue) ;

  public: class GALGAS_bool readProperty_mIsPublic (void) const ;
  public: void setProperty_mIsPublic (const GALGAS_bool & inValue) ;

  public: class GALGAS_lstringlist readProperty_mGuardAttributeList (void) const ;
  public: void setProperty_mGuardAttributeList (const GALGAS_lstringlist & inValue) ;

  public: class GALGAS_routineFormalArgumentListAST readProperty_mGuardFormalArgumentList (void) const ;
  public: void setProperty_mGuardFormalArgumentList (const GALGAS_routineFormalArgumentListAST & inValue) ;

  public: class GALGAS_guardKind readProperty_mGuardKind (void) const ;
  public: void setProperty_mGuardKind (const GALGAS_guardKind & inValue) ;

  public: class GALGAS_instructionListAST readProperty_mGuardInstructionList (void) const ;
  public: void setProperty_mGuardInstructionList (const GALGAS_instructionListAST & inValue) ;

  public: class GALGAS_location readProperty_mEndOfGuardDeclaration (void) const ;
  public: void setProperty_mEndOfGuardDeclaration (const GALGAS_location & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_decoratedGuardDeclaration init_21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lstring & inOperand1,
                                                                                        const class GALGAS_bool & inOperand2,
                                                                                        const class GALGAS_lstringlist & inOperand3,
                                                                                        const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                                        const class GALGAS_guardKind & inOperand5,
                                                                                        const class GALGAS_instructionListAST & inOperand6,
                                                                                        const class GALGAS_location & inOperand7,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedGuardDeclaration extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedGuardDeclaration class_func_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_lstringlist & inOperand3,
                                                                        const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                        const class GALGAS_guardKind & inOperand5,
                                                                        const class GALGAS_instructionListAST & inOperand6,
                                                                        const class GALGAS_location & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedGuardDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedGuardDeclaration class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedGuardDeclaration class
//
//--------------------------------------------------------------------------------------------------

class cPtr_decoratedGuardDeclaration : public cPtr_abstractDecoratedDeclaration {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_lstringlist & inOperand3,
                                                                               const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                               const class GALGAS_guardKind & inOperand5,
                                                                               const class GALGAS_instructionListAST & inOperand6,
                                                                               const class GALGAS_location & inOperand7,
                                                                               Compiler * inCompiler) ;


//--- Extension method semanticAnalysis
  public: virtual void method_semanticAnalysis (const class GALGAS_semanticContext arg_inContext,
           class GALGAS_semanticTemporariesStruct & arg_ioTemporaries,
           class GALGAS_intermediateCodeStruct & arg_ioIntermediateCodeStruct,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mReceiverTypeName ;
  public: GALGAS_lstring mProperty_mGuardName ;
  public: GALGAS_bool mProperty_mIsPublic ;
  public: GALGAS_lstringlist mProperty_mGuardAttributeList ;
  public: GALGAS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;
  public: GALGAS_guardKind mProperty_mGuardKind ;
  public: GALGAS_instructionListAST mProperty_mGuardInstructionList ;
  public: GALGAS_location mProperty_mEndOfGuardDeclaration ;


//--- Default constructor
  public: cPtr_decoratedGuardDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_decoratedGuardDeclaration (const GALGAS_lstring & in_mReceiverTypeName,
                                          const GALGAS_lstring & in_mGuardName,
                                          const GALGAS_bool & in_mIsPublic,
                                          const GALGAS_lstringlist & in_mGuardAttributeList,
                                          const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                          const GALGAS_guardKind & in_mGuardKind,
                                          const GALGAS_instructionListAST & in_mGuardInstructionList,
                                          const GALGAS_location & in_mEndOfGuardDeclaration
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedGuardDeclaration_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_decoratedGuardDeclaration_2D_weak : public GALGAS_abstractDecoratedDeclaration_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_decoratedGuardDeclaration_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_decoratedGuardDeclaration_2D_weak (const class GALGAS_decoratedGuardDeclaration & inSource) ;

  public: GALGAS_decoratedGuardDeclaration_2D_weak & operator = (const class GALGAS_decoratedGuardDeclaration & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_decoratedGuardDeclaration bang_decoratedGuardDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_decoratedGuardDeclaration_2D_weak extractObject (const GALGAS_object & inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_decoratedGuardDeclaration_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_decoratedGuardDeclaration_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_decoratedGuardDeclaration_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @guardKindGenerationIR enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardKindGenerationIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_guardKindGenerationIR (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_baseGuard,
    kEnum_convenienceGuard
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

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardKindGenerationIR extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardKindGenerationIR class_func_baseGuard (LOCATION_ARGS) ;

  public: static class GALGAS_guardKindGenerationIR class_func_convenienceGuard (const class GALGAS_allocaList & inOperand0,
                                                                                 const class GALGAS_instructionListIR & inOperand1,
                                                                                 const class GALGAS_string & inOperand2,
                                                                                 const class GALGAS_procCallEffectiveParameterListIR & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardKindGenerationIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_convenienceGuard (class GALGAS_allocaList & outArgument0,
                                                         class GALGAS_instructionListIR & outArgument1,
                                                         class GALGAS_string & outArgument2,
                                                         class GALGAS_procCallEffectiveParameterListIR & outArgument3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBaseGuard (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConvenienceGuard (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_baseGuard () const ;

  public: VIRTUAL_IN_DEBUG bool optional_convenienceGuard (class GALGAS_allocaList & outOperand0,
                                                           class GALGAS_instructionListIR & outOperand1,
                                                           class GALGAS_string & outOperand2,
                                                           class GALGAS_procCallEffectiveParameterListIR & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardKindGenerationIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_allocaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_allocaList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_allocaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mVarLLVMName,
                                                 const class GALGAS_omnibusType & in_mLLVMType,
                                                 const class GALGAS_bool & in_mFormalInputArgument
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_allocaList extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_allocaList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_allocaList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                   const class GALGAS_omnibusType & inOperand1,
                                                                   const class GALGAS_bool & inOperand2
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_allocaList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_omnibusType & inOperand1,
                                                     const class GALGAS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_allocaList add_operation (const GALGAS_allocaList & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_omnibusType constinArgument1,
                                               class GALGAS_bool constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_omnibusType constinArgument1,
                                                      class GALGAS_bool constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_omnibusType & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_omnibusType & outArgument1,
                                                      class GALGAS_bool & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormalInputArgumentAtIndex (class GALGAS_bool constinArgument0,
                                                                       class GALGAS_uint constinArgument1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLLVMTypeAtIndex (class GALGAS_omnibusType constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarLLVMNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_bool & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_omnibusType & outArgument1,
                                             class GALGAS_bool & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFormalInputArgumentAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mLLVMTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarLLVMNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_allocaList ;
 
} ; // End of GALGAS_allocaList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_allocaList : public cGenericAbstractEnumerator {
  public: cEnumerator_allocaList (const GALGAS_allocaList & inEnumeratedObject,
                                  const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mVarLLVMName (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mLLVMType (LOCATION_ARGS) const ;
  public: class GALGAS_bool current_mFormalInputArgument (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_allocaList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_instructionListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_instructionListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListIR extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_instructionListIR class_func_listWithValue (const class GALGAS_abstractInstructionIR & inOperand0
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_instructionListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractInstructionIR & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_instructionListIR add_operation (const GALGAS_instructionListIR & inOperand,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractInstructionIR constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractInstructionIR constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractInstructionIR & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractInstructionIR & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractInstructionIR & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationAtIndex (class GALGAS_abstractInstructionIR constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractInstructionIR & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractInstructionIR & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractInstructionIR getter_mInstructionGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_instructionListIR ;
 
} ; // End of GALGAS_instructionListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_instructionListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                         const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractInstructionIR current_mInstructionGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instructionListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @procCallEffectiveParameterListIR list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_procCallEffectiveParameterListIR : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_procCallEffectiveParameterListIR (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_procCallEffectiveParameterListIR (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                 const class GALGAS_objectIR & in_mParameter
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_procCallEffectiveParameterListIR extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_procCallEffectiveParameterListIR class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_procCallEffectiveParameterListIR class_func_listWithValue (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                         const class GALGAS_objectIR & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                     const class GALGAS_objectIR & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_procCallEffectiveParameterListIR add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                               class GALGAS_objectIR constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                                      class GALGAS_objectIR constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                 class GALGAS_objectIR & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                class GALGAS_objectIR & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                                      class GALGAS_objectIR & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMEffectiveParameterPassingModeAtIndex (class GALGAS_procEffectiveParameterPassingModeIR constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterAtIndex (class GALGAS_objectIR constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                              class GALGAS_objectIR & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_procEffectiveParameterPassingModeIR & outArgument0,
                                             class GALGAS_objectIR & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_procEffectiveParameterPassingModeIR getter_mEffectiveParameterPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mParameterAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_procCallEffectiveParameterListIR getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_procCallEffectiveParameterListIR ;
 
} ; // End of GALGAS_procCallEffectiveParameterListIR class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_procCallEffectiveParameterListIR : public cGenericAbstractEnumerator {
  public: cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_procEffectiveParameterPassingModeIR current_mEffectiveParameterPassingMode (LOCATION_ARGS) const ;
  public: class GALGAS_objectIR current_mParameter (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_procCallEffectiveParameterListIR_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @guardKindGenerationIR enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard : public cEnumAssociatedValues {
  public: const GALGAS_allocaList mAssociatedValue0 ;
  public: const GALGAS_instructionListIR mAssociatedValue1 ;
  public: const GALGAS_string mAssociatedValue2 ;
  public: const GALGAS_procCallEffectiveParameterListIR mAssociatedValue3 ;

//--- Constructor
  public: cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (const GALGAS_allocaList inAssociatedValue0,
                                                                        const GALGAS_instructionListIR inAssociatedValue1,
                                                                        const GALGAS_string inAssociatedValue2,
                                                                        const GALGAS_procCallEffectiveParameterListIR inAssociatedValue3
                                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard (void) { }
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardUserRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardUserRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_guardUserRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_guardUserRoutineIR (const class cPtr_guardUserRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_string readProperty_mMangledImplementationGuardName (void) const ;
  public: void setProperty_mMangledImplementationGuardName (const GALGAS_string & inValue) ;

  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GALGAS_guardKindGenerationIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardUserRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                    const class GALGAS_bool & inOperand1,
                                                                                                    const class GALGAS_bool & inOperand2,
                                                                                                    const class GALGAS_string & inOperand3,
                                                                                                    const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                                                    const class GALGAS_omnibusType & inOperand5,
                                                                                                    const class GALGAS_guardKindGenerationIR & inOperand6,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardUserRoutineIR extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardUserRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_bool & inOperand2,
                                                                 const class GALGAS_string & inOperand3,
                                                                 const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                 const class GALGAS_omnibusType & inOperand5,
                                                                 const class GALGAS_guardKindGenerationIR & inOperand6
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardUserRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardUserRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardUserRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_guardUserRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                           const class GALGAS_bool & inOperand1,
                                                                                           const class GALGAS_bool & inOperand2,
                                                                                           const class GALGAS_string & inOperand3,
                                                                                           const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                                           const class GALGAS_omnibusType & inOperand5,
                                                                                           const class GALGAS_guardKindGenerationIR & inOperand6,
                                                                                           Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method svcDeclarationGeneration
  public: virtual void method_svcDeclarationGeneration (class GALGAS_primitiveAndServiceIRlist & arg_ioPrimitiveAndServiceList,
           class GALGAS_sectionIRlist & arg_ioSectionList,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_string mProperty_mMangledImplementationGuardName ;
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;


//--- Default constructor
  public: cPtr_guardUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                   const GALGAS_bool & in_isRequired,
                                   const GALGAS_bool & in_warnsIfUnused,
                                   const GALGAS_string & in_mMangledImplementationGuardName,
                                   const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                   const GALGAS_omnibusType & in_mReceiverType,
                                   const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardUserRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardUserRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardUserRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardUserRoutineIR_2D_weak (const class GALGAS_guardUserRoutineIR & inSource) ;

  public: GALGAS_guardUserRoutineIR_2D_weak & operator = (const class GALGAS_guardUserRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardUserRoutineIR bang_guardUserRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardUserRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardUserRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardUserRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardUserRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @allocaList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_allocaList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mVarLLVMName ;
  public: inline GALGAS_string readProperty_mVarLLVMName (void) const {
    return mProperty_mVarLLVMName ;
  }

  public: GALGAS_omnibusType mProperty_mLLVMType ;
  public: inline GALGAS_omnibusType readProperty_mLLVMType (void) const {
    return mProperty_mLLVMType ;
  }

  public: GALGAS_bool mProperty_mFormalInputArgument ;
  public: inline GALGAS_bool readProperty_mFormalInputArgument (void) const {
    return mProperty_mFormalInputArgument ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarLLVMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarLLVMName = inValue ;
  }

  public: inline void setter_setMLLVMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLLVMType = inValue ;
  }

  public: inline void setter_setMFormalInputArgument (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalInputArgument = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_allocaList_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_allocaList_2D_element (const GALGAS_string & in_mVarLLVMName,
                                        const GALGAS_omnibusType & in_mLLVMType,
                                        const GALGAS_bool & in_mFormalInputArgument) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_allocaList_2D_element init_21__21__21_ (const class GALGAS_string & inOperand0,
                                                                const class GALGAS_omnibusType & inOperand1,
                                                                const class GALGAS_bool & inOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_allocaList_2D_element extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_allocaList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                    const class GALGAS_omnibusType & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    class Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_allocaList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_allocaList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractInstructionIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractInstructionIR : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractInstructionIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractInstructionIR (const class cPtr_abstractInstructionIR * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_abstractInstructionIR init (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractInstructionIR extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractInstructionIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractInstructionIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInstructionIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractInstructionIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractInstructionIR : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void abstractInstructionIR_init (Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) ;

//--- Extension method llvmInstructionCode
  public: virtual void method_llvmInstructionCode (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties


//--- Default constructor
  public: cPtr_abstractInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_abstractInstructionIR (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListIR_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_instructionListIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractInstructionIR mProperty_mInstructionGeneration ;
  public: inline GALGAS_abstractInstructionIR readProperty_mInstructionGeneration (void) const {
    return mProperty_mInstructionGeneration ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstructionGeneration (const GALGAS_abstractInstructionIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstructionGeneration = inValue ;
  }

//--------------------------------- Virtual destructor
  public: virtual ~ GALGAS_instructionListIR_2D_element (void) ;

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GALGAS_instructionListIR_2D_element (const GALGAS_abstractInstructionIR & in_mInstructionGeneration) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_instructionListIR_2D_element init_21_ (const class GALGAS_abstractInstructionIR & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_instructionListIR_2D_element class_func_new (const class GALGAS_abstractInstructionIR & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_instructionListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_instructionListIR_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListIR_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR : public GALGAS_abstractRoutineIR {
//--------------------------------- Default constructor
  public: GALGAS_guardImplementationRoutineIR (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_guardImplementationRoutineIR (const class cPtr_guardImplementationRoutineIR * inSourcePtr) ;

//--------------------------------- Property access
  public: class GALGAS_routineFormalArgumentListIR readProperty_mFormalArgumentListForGeneration (void) const ;
  public: void setProperty_mFormalArgumentListForGeneration (const GALGAS_routineFormalArgumentListIR & inValue) ;

  public: class GALGAS_omnibusType readProperty_mReceiverType (void) const ;
  public: void setProperty_mReceiverType (const GALGAS_omnibusType & inValue) ;

  public: class GALGAS_guardKindGenerationIR readProperty_mGuardKindGenerationIR (void) const ;
  public: void setProperty_mGuardKindGenerationIR (const GALGAS_guardKindGenerationIR & inValue) ;

  public: class GALGAS_allocaList readProperty_mAllocaList (void) const ;
  public: void setProperty_mAllocaList (const GALGAS_allocaList & inValue) ;

  public: class GALGAS_instructionListIR readProperty_mInstructionGenerationList (void) const ;
  public: void setProperty_mInstructionGenerationList (const GALGAS_instructionListIR & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GALGAS_guardImplementationRoutineIR init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                                  const class GALGAS_bool & inOperand1,
                                                                                                                  const class GALGAS_bool & inOperand2,
                                                                                                                  const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                                                  const class GALGAS_omnibusType & inOperand4,
                                                                                                                  const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                                                                  const class GALGAS_allocaList & inOperand6,
                                                                                                                  const class GALGAS_instructionListIR & inOperand7,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardImplementationRoutineIR extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardImplementationRoutineIR class_func_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                           const class GALGAS_omnibusType & inOperand4,
                                                                           const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                           const class GALGAS_allocaList & inOperand6,
                                                                           const class GALGAS_instructionListIR & inOperand7
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardImplementationRoutineIR class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardImplementationRoutineIR class
//
//--------------------------------------------------------------------------------------------------

class cPtr_guardImplementationRoutineIR : public cPtr_abstractRoutineIR {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif

//--------------------------------- Initializers
  public: void guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const class GALGAS_lstring & inOperand0,
                                                                                                         const class GALGAS_bool & inOperand1,
                                                                                                         const class GALGAS_bool & inOperand2,
                                                                                                         const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                                                         const class GALGAS_omnibusType & inOperand4,
                                                                                                         const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                                                         const class GALGAS_allocaList & inOperand6,
                                                                                                         const class GALGAS_instructionListIR & inOperand7,
                                                                                                         Compiler * inCompiler) ;


//--- Extension method enterAccessibleEntities
  public: virtual void method_enterAccessibleEntities (class GALGAS_stringset & arg_ioInvokedRoutineSet,
           class GALGAS_uint & arg_ioMaxBranchOfOnInstructions,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Extension method llvmCodeGeneration
  public: virtual void method_llvmCodeGeneration (class GALGAS_string & arg_ioLLVMcode,
           const class GALGAS_generationContext arg_inGenerationContext,
           class GALGAS_generationAdds & arg_ioGenerationAdds,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public: GALGAS_omnibusType mProperty_mReceiverType ;
  public: GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public: GALGAS_allocaList mProperty_mAllocaList ;
  public: GALGAS_instructionListIR mProperty_mInstructionGenerationList ;


//--- Default constructor
  public: cPtr_guardImplementationRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_guardImplementationRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused,
                                             const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                             const GALGAS_omnibusType & in_mReceiverType,
                                             const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                             const GALGAS_allocaList & in_mAllocaList,
                                             const GALGAS_instructionListIR & in_mInstructionGenerationList
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR_2D_weak : public GALGAS_abstractRoutineIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_guardImplementationRoutineIR_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_guardImplementationRoutineIR_2D_weak (const class GALGAS_guardImplementationRoutineIR & inSource) ;

  public: GALGAS_guardImplementationRoutineIR_2D_weak & operator = (const class GALGAS_guardImplementationRoutineIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_guardImplementationRoutineIR bang_guardImplementationRoutineIR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_guardImplementationRoutineIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_guardImplementationRoutineIR_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_guardImplementationRoutineIR_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2D_weak ;

