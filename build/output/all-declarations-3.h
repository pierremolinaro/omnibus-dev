#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mPropertyName ;
  public: inline GALGAS_string readProperty_mPropertyName (void) const {
    return mProperty_mPropertyName ;
  }

  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

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
  public: inline GALGAS_objectIR readProperty_mOperand (void) const {
    return mProperty_mOperand ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sortedOperandIRList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @userLLVMSructureTypeDefinitionIR reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMSructureTypeDefinitionIR : public GALGAS_userLLVMTypeDefinitionIR {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMSructureTypeDefinitionIR (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_userLLVMSructureTypeDefinitionIR constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_userLLVMSructureTypeDefinitionIR (const class cPtr_userLLVMSructureTypeDefinitionIR * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_propertyList readProperty_mPropertyList (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_propertyList mProperty_mPropertyList ;

//--- Constructor
  public: cPtr_userLLVMSructureTypeDefinitionIR (const GALGAS_string & in_mLLVMDefinedTypeName,
                                                 const GALGAS_propertyList & in_mPropertyList
                                                 COMMA_LOCATION_ARGS) ;

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
// Phase 1: @userLLVMSructureTypeDefinitionIR_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak : public GALGAS_userLLVMTypeDefinitionIR_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak (const class GALGAS_userLLVMSructureTypeDefinitionIR & inSource) ;

  public: GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak & operator = (const class GALGAS_userLLVMSructureTypeDefinitionIR & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_userLLVMSructureTypeDefinitionIR bang_userLLVMSructureTypeDefinitionIR_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @integerDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_integerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_integerDeclarationAST (const class cPtr_integerDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_bool readProperty_mIsSigned (void) const ;

  public: class GALGAS_uint readProperty_mSize (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

/* § public: virtual GALGAS_string getter_typeName (C_Compiler * COMMA_LOCATION_ARGS) const ; */
//--- Properties
  public: GALGAS_bool mProperty_mIsSigned ;
  public: GALGAS_uint mProperty_mSize ;

//--- Constructor
  public: cPtr_integerDeclarationAST (const GALGAS_bool & in_mIsSigned,
                                      const GALGAS_uint & in_mSize
                                      COMMA_LOCATION_ARGS) ;

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
// Phase 1: @integerDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_integerDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_integerDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_integerDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_integerDeclarationAST_2D_weak (const class GALGAS_integerDeclarationAST & inSource) ;

  public: GALGAS_integerDeclarationAST_2D_weak & operator = (const class GALGAS_integerDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_integerDeclarationAST bang_integerDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_integerDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_integerDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_integerDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_integerDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerDeclarationAST_2D_weak ;

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
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const class cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLLVMOperation (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mLLVMOperation ;

//--- Constructor
  public: cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
                                                                          COMMA_LOCATION_ARGS) ;

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
// Phase 1: @inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (const class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) ;

  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak & operator = (const class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage bang_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const class cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_string readProperty_mLLVMOperation (void) const ;

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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties
  public: GALGAS_string mProperty_mLLVMOperation ;

//--- Constructor
  public: cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage (const GALGAS_string & in_mLLVMOperation
                                                                          COMMA_LOCATION_ARGS) ;

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
// Phase 1: @inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak : public GALGAS_omnibusInfixOperatorUsage_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (const class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) ;

  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak & operator = (const class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage bang_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalStringDeclarationAST reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringDeclarationAST : public GALGAS_abstractDeclarationAST {
//--------------------------------- Default constructor
  public: GALGAS_literalStringDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringDeclarationAST constructor_default (LOCATION_ARGS) ;

//--------------------------------- Embedded object pointer
 public: inline acStrongPtr_class * embeddedObjectPtr (void) const {
   return (acStrongPtr_class *) mObjectPtr ;
 }
  
//--------------------------------- Constructor from pointer
  public: GALGAS_literalStringDeclarationAST (const class cPtr_literalStringDeclarationAST * inSourcePtr) ;

//--------------------------------- Property read access
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

//----------------------------------------------------------------------------------------------------------------------

//--- Properties

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
// Phase 1: @literalStringDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalStringDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_literalStringDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_literalStringDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_literalStringDeclarationAST_2D_weak (const class GALGAS_literalStringDeclarationAST & inSource) ;

  public: GALGAS_literalStringDeclarationAST_2D_weak & operator = (const class GALGAS_literalStringDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_literalStringDeclarationAST bang_literalStringDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_literalStringDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_literalStringDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_literalStringDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalStringDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterNameListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterNameListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRegisterName ;
  public: inline GALGAS_lstring readProperty_mRegisterName (void) const {
    return mProperty_mRegisterName ;
  }

  public: GALGAS_controlRegisterKind mProperty_mControlRegisterKind ;
  public: inline GALGAS_controlRegisterKind readProperty_mControlRegisterKind (void) const {
    return mProperty_mControlRegisterKind ;
  }

  public: GALGAS_bool mProperty_mIsReadOnly ;
  public: inline GALGAS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GALGAS_expressionAST mProperty_mRegisterOffset ;
  public: inline GALGAS_expressionAST readProperty_mRegisterOffset (void) const {
    return mProperty_mRegisterOffset ;
  }

  public: GALGAS_location mProperty_mRegisterOffsetLocation ;
  public: inline GALGAS_location readProperty_mRegisterOffsetLocation (void) const {
    return mProperty_mRegisterOffsetLocation ;
  }

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
  public: inline GALGAS_controlRegisterNameListAST readProperty_mRegisterArrayList (void) const {
    return mProperty_mRegisterArrayList ;
  }

  public: GALGAS_lstring mProperty_mRegisterTypeName ;
  public: inline GALGAS_lstring readProperty_mRegisterTypeName (void) const {
    return mProperty_mRegisterTypeName ;
  }

  public: GALGAS_controlRegisterBitSliceList mProperty_mRegisterBitSliceList ;
  public: inline GALGAS_controlRegisterBitSliceList readProperty_mRegisterBitSliceList (void) const {
    return mProperty_mRegisterBitSliceList ;
  }

  public: GALGAS_location mProperty_mRegisterBitSliceListLocation ;
  public: inline GALGAS_location readProperty_mRegisterBitSliceListLocation (void) const {
    return mProperty_mRegisterBitSliceListLocation ;
  }

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
  public: inline GALGAS_controlRegisterBitSlice readProperty_mRegisterBitSlice (void) const {
    return mProperty_mRegisterBitSlice ;
  }

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

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterBitSliceList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @registerGroupListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_registerGroupListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mRegisterGroupName ;
  public: inline GALGAS_lstring readProperty_mRegisterGroupName (void) const {
    return mProperty_mRegisterGroupName ;
  }

  public: GALGAS_controlRegisterGroupKindAST mProperty_mControlRegisterGroupKind ;
  public: inline GALGAS_controlRegisterGroupKindAST readProperty_mControlRegisterGroupKind (void) const {
    return mProperty_mControlRegisterGroupKind ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_registerGroupListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMRegisterGroupName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterGroupName = inValue ;
  }

  public: inline void setter_setMControlRegisterGroupKind (const GALGAS_controlRegisterGroupKindAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterGroupKind = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_registerGroupListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_registerGroupListAST_2D_element (const GALGAS_lstring & in_mRegisterGroupName,
                                                  const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_registerGroupListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_registerGroupListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_controlRegisterGroupKindAST & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_registerGroupListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerGroupListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupDeclarationAST_2D_weak weak reference class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupDeclarationAST_2D_weak : public GALGAS_abstractDeclarationAST_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupDeclarationAST_2D_weak (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterGroupDeclarationAST_2D_weak constructor_default (LOCATION_ARGS) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_controlRegisterGroupDeclarationAST_2D_weak (const class GALGAS_controlRegisterGroupDeclarationAST & inSource) ;

  public: GALGAS_controlRegisterGroupDeclarationAST_2D_weak & operator = (const class GALGAS_controlRegisterGroupDeclarationAST & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_controlRegisterGroupDeclarationAST bang_controlRegisterGroupDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupDeclarationAST_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterGroupDeclarationAST_2D_weak constructor_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterGroupDeclarationAST_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterGroupDeclarationAST_2D_weak class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST_2D_weak ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterFieldList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_controlRegisterFieldList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_uint & in_mFieldBitCount,
                                                 const class GALGAS_string & in_mFieldName
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterFieldList constructor_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterFieldList constructor_listWithValue (const class GALGAS_uint & inOperand0,
                                                                                  const class GALGAS_string & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterFieldList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_uint & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_controlRegisterFieldList add_operation (const GALGAS_controlRegisterFieldList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_controlRegisterFieldList_2D_element inArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_uint constinArgument0,
                                                      class GALGAS_string constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_uint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_uint & outArgument0,
                                                class GALGAS_string & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_uint & outArgument0,
                                                      class GALGAS_string & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldBitCountAtIndex (class GALGAS_uint constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_uint & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_uint & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mFieldNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterFieldList ;
 
} ; // End of GALGAS_controlRegisterFieldList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterFieldList : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_uint current_mFieldBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mFieldName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterFieldList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterFieldList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_uint mProperty_mFieldBitCount ;
  public: inline GALGAS_uint readProperty_mFieldBitCount (void) const {
    return mProperty_mFieldBitCount ;
  }

  public: GALGAS_string mProperty_mFieldName ;
  public: inline GALGAS_string readProperty_mFieldName (void) const {
    return mProperty_mFieldName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterFieldList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFieldBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldBitCount = inValue ;
  }

  public: inline void setter_setMFieldName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterFieldList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterFieldList_2D_element (const GALGAS_uint & in_mFieldBitCount,
                                                      const GALGAS_string & in_mFieldName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterFieldList_2D_element constructor_new (const class GALGAS_uint & inOperand0,
                                                                                   const class GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterFieldList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterFieldList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterFieldMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterFieldMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_controlRegisterFieldMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inSource) ;
  public: GALGAS_controlRegisterFieldMap & operator = (const GALGAS_controlRegisterFieldMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldMap extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterFieldMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterFieldMap constructor_mapWithMapToOverride (const class GALGAS_controlRegisterFieldMap & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitIndexForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitIndexForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_controlRegisterFieldMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & inKey
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_controlRegisterFieldMap ;
 
} ; // End of GALGAS_controlRegisterFieldMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterFieldMap : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterFieldMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@controlRegisterFieldMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterFieldMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mBitIndex ;
  public: GALGAS_uint mProperty_mBitCount ;

//--- Constructor
  public: cMapElement_controlRegisterFieldMap (const GALGAS_lstring & inKey,
                                               const GALGAS_uint & in_mBitIndex,
                                               const GALGAS_uint & in_mBitCount
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
// Phase 1: @controlRegisterFieldMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterFieldMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mBitIndex ;
  public: inline GALGAS_uint readProperty_mBitIndex (void) const {
    return mProperty_mBitIndex ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterFieldMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterFieldMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBitIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterFieldMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_uint & in_mBitIndex,
                                                     const GALGAS_uint & in_mBitCount) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterFieldMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterFieldMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1,
                                                                                  const class GALGAS_uint & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterFieldMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sliceMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_sliceMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_sliceMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sliceMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_sliceMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_sliceMap (const GALGAS_sliceMap & inSource) ;
  public: GALGAS_sliceMap & operator = (const GALGAS_sliceMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sliceMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_sliceMap constructor_mapWithMapToOverride (const class GALGAS_sliceMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_llvmBinaryOperation & inOperand1,
                                                     const class GALGAS_bigint & inOperand2,
                                                     const class GALGAS_omnibusType & inOperand3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_llvmBinaryOperation constinArgument1,
                                                  class GALGAS_bigint constinArgument2,
                                                  class GALGAS_omnibusType constinArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessOperatorForKey (class GALGAS_llvmBinaryOperation constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMAccessRightOperandForKey (class GALGAS_bigint constinArgument0,
                                                                     class GALGAS_string constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_llvmBinaryOperation & outArgument1,
                                                  class GALGAS_bigint & outArgument2,
                                                  class GALGAS_omnibusType & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_llvmBinaryOperation getter_mAccessOperatorForKey (const class GALGAS_string & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mAccessRightOperandForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_sliceMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_llvmBinaryOperation & outOperand1,
                                                    class GALGAS_bigint & outOperand2,
                                                    class GALGAS_omnibusType & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_sliceMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_sliceMap ;
 
} ; // End of GALGAS_sliceMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_sliceMap : public cGenericAbstractEnumerator {
  public: cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_llvmBinaryOperation current_mAccessOperator (LOCATION_ARGS) const ;
  public: class GALGAS_bigint current_mAccessRightOperand (LOCATION_ARGS) const ;
  public: class GALGAS_omnibusType current_mResultType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_sliceMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                          Phase 1: @llvmBinaryOperation enum                                         *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmBinaryOperation : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_llvmBinaryOperation (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_addNoOVF,
    kEnum_subNoOVF,
    kEnum_mulNoOVF,
    kEnum_udivNoOVF,
    kEnum_sdivNoOVF,
    kEnum_uremNoOVF,
    kEnum_sremNoOVF,
    kEnum_uaddOVF,
    kEnum_saddOVF,
    kEnum_usubOVF,
    kEnum_ssubOVF,
    kEnum_umulOVF,
    kEnum_smulOVF,
    kEnum_udivOVF,
    kEnum_sdivOVF,
    kEnum_uremOVF,
    kEnum_sremOVF,
    kEnum_and,
    kEnum_ior,
    kEnum_xor,
    kEnum_shl,
    kEnum_ashr,
    kEnum_lshr,
    kEnum_icmp_5F_eq,
    kEnum_icmp_5F_ult,
    kEnum_icmp_5F_ule,
    kEnum_icmp_5F_slt,
    kEnum_icmp_5F_sle
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_llvmBinaryOperation extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_llvmBinaryOperation constructor_addNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_and (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_ashr (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_icmp_5F_eq (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_icmp_5F_sle (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_icmp_5F_slt (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_icmp_5F_ule (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_icmp_5F_ult (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_ior (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_lshr (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_mulNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_saddOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_sdivNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_sdivOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_shl (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_smulOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_sremNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_sremOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_ssubOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_subNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_uaddOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_udivNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_udivOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_umulOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_uremNoOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_uremOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_usubOVF (LOCATION_ARGS) ;

  public: static class GALGAS_llvmBinaryOperation constructor_xor (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_llvmBinaryOperation & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAddNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAnd (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAshr (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_eq (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_sle (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_slt (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_ule (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIcmp_5F_ult (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isIor (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLshr (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isMulNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSaddOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSdivNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSdivOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isShl (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSmulOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSremNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSremOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSsubOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSubNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUaddOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUdivNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUdivOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUmulOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUremNoOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUremOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isUsubOVF (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isXor (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_addNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_and () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ashr () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_eq () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_sle () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_slt () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_ule () const ;

  public: VIRTUAL_IN_DEBUG bool optional_icmp_5F_ult () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ior () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lshr () const ;

  public: VIRTUAL_IN_DEBUG bool optional_mulNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_saddOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sdivNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sdivOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_shl () const ;

  public: VIRTUAL_IN_DEBUG bool optional_smulOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sremNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_sremOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_ssubOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_subNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_uaddOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_udivNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_udivOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_umulOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_uremNoOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_uremOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_usubOVF () const ;

  public: VIRTUAL_IN_DEBUG bool optional_xor () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmBinaryOperation class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmBinaryOperation ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@sliceMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_sliceMap : public cMapElement {
//--- Map attributes
  public: GALGAS_llvmBinaryOperation mProperty_mAccessOperator ;
  public: GALGAS_bigint mProperty_mAccessRightOperand ;
  public: GALGAS_omnibusType mProperty_mResultType ;

//--- Constructor
  public: cMapElement_sliceMap (const GALGAS_lstring & inKey,
                                const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                const GALGAS_bigint & in_mAccessRightOperand,
                                const GALGAS_omnibusType & in_mResultType
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
// Phase 1: @sliceMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sliceMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_llvmBinaryOperation mProperty_mAccessOperator ;
  public: inline GALGAS_llvmBinaryOperation readProperty_mAccessOperator (void) const {
    return mProperty_mAccessOperator ;
  }

  public: GALGAS_bigint mProperty_mAccessRightOperand ;
  public: inline GALGAS_bigint readProperty_mAccessRightOperand (void) const {
    return mProperty_mAccessRightOperand ;
  }

  public: GALGAS_omnibusType mProperty_mResultType ;
  public: inline GALGAS_omnibusType readProperty_mResultType (void) const {
    return mProperty_mResultType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_sliceMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMAccessOperator (const GALGAS_llvmBinaryOperation & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessOperator = inValue ;
  }

  public: inline void setter_setMAccessRightOperand (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAccessRightOperand = inValue ;
  }

  public: inline void setter_setMResultType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mResultType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_sliceMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_sliceMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                      const GALGAS_bigint & in_mAccessRightOperand,
                                      const GALGAS_omnibusType & in_mResultType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_sliceMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_sliceMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_llvmBinaryOperation & inOperand1,
                                                                   const class GALGAS_bigint & inOperand2,
                                                                   const class GALGAS_omnibusType & inOperand3
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sliceMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph) (const class cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                                                                        class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'compileTimeDeclarationBarrier'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_compileTimeDeclarationBarrier (class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@controlRegisterMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_controlRegisterMap : public cMapElement {
//--- Map attributes
  public: GALGAS_omnibusType mProperty_mType ;
  public: GALGAS_bool mProperty_mIsReadOnly ;
  public: GALGAS_bool mProperty_mUserAccess ;
  public: GALGAS_sliceMap mProperty_mRegisterFieldAccessMap ;
  public: GALGAS_controlRegisterFieldMap mProperty_mRegisterFieldMap ;
  public: GALGAS_bigint mProperty_mAddressOffset ;
  public: GALGAS_controlRegisterFieldList mProperty_mControlRegisterFieldList ;
  public: GALGAS_uint mProperty_mRegisterBitCount ;
  public: GALGAS_uint mProperty_mArraySize ;
  public: GALGAS_uint mProperty_mElementArraySize ;

//--- Constructor
  public: cMapElement_controlRegisterMap (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & in_mType,
                                          const GALGAS_bool & in_mIsReadOnly,
                                          const GALGAS_bool & in_mUserAccess,
                                          const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                          const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                          const GALGAS_bigint & in_mAddressOffset,
                                          const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                          const GALGAS_uint & in_mRegisterBitCount,
                                          const GALGAS_uint & in_mArraySize,
                                          const GALGAS_uint & in_mElementArraySize
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
// Phase 1: @controlRegisterMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_omnibusType mProperty_mType ;
  public: inline GALGAS_omnibusType readProperty_mType (void) const {
    return mProperty_mType ;
  }

  public: GALGAS_bool mProperty_mIsReadOnly ;
  public: inline GALGAS_bool readProperty_mIsReadOnly (void) const {
    return mProperty_mIsReadOnly ;
  }

  public: GALGAS_bool mProperty_mUserAccess ;
  public: inline GALGAS_bool readProperty_mUserAccess (void) const {
    return mProperty_mUserAccess ;
  }

  public: GALGAS_sliceMap mProperty_mRegisterFieldAccessMap ;
  public: inline GALGAS_sliceMap readProperty_mRegisterFieldAccessMap (void) const {
    return mProperty_mRegisterFieldAccessMap ;
  }

  public: GALGAS_controlRegisterFieldMap mProperty_mRegisterFieldMap ;
  public: inline GALGAS_controlRegisterFieldMap readProperty_mRegisterFieldMap (void) const {
    return mProperty_mRegisterFieldMap ;
  }

  public: GALGAS_bigint mProperty_mAddressOffset ;
  public: inline GALGAS_bigint readProperty_mAddressOffset (void) const {
    return mProperty_mAddressOffset ;
  }

  public: GALGAS_controlRegisterFieldList mProperty_mControlRegisterFieldList ;
  public: inline GALGAS_controlRegisterFieldList readProperty_mControlRegisterFieldList (void) const {
    return mProperty_mControlRegisterFieldList ;
  }

  public: GALGAS_uint mProperty_mRegisterBitCount ;
  public: inline GALGAS_uint readProperty_mRegisterBitCount (void) const {
    return mProperty_mRegisterBitCount ;
  }

  public: GALGAS_uint mProperty_mArraySize ;
  public: inline GALGAS_uint readProperty_mArraySize (void) const {
    return mProperty_mArraySize ;
  }

  public: GALGAS_uint mProperty_mElementArraySize ;
  public: inline GALGAS_uint readProperty_mElementArraySize (void) const {
    return mProperty_mElementArraySize ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_omnibusType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

  public: inline void setter_setMIsReadOnly (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIsReadOnly = inValue ;
  }

  public: inline void setter_setMUserAccess (const GALGAS_bool & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mUserAccess = inValue ;
  }

  public: inline void setter_setMRegisterFieldAccessMap (const GALGAS_sliceMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldAccessMap = inValue ;
  }

  public: inline void setter_setMRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterFieldMap = inValue ;
  }

  public: inline void setter_setMAddressOffset (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddressOffset = inValue ;
  }

  public: inline void setter_setMControlRegisterFieldList (const GALGAS_controlRegisterFieldList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mControlRegisterFieldList = inValue ;
  }

  public: inline void setter_setMRegisterBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRegisterBitCount = inValue ;
  }

  public: inline void setter_setMArraySize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mArraySize = inValue ;
  }

  public: inline void setter_setMElementArraySize (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElementArraySize = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_omnibusType & in_mType,
                                                const GALGAS_bool & in_mIsReadOnly,
                                                const GALGAS_bool & in_mUserAccess,
                                                const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                const GALGAS_bigint & in_mAddressOffset,
                                                const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                const GALGAS_uint & in_mRegisterBitCount,
                                                const GALGAS_uint & in_mArraySize,
                                                const GALGAS_uint & in_mElementArraySize) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_omnibusType & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_bool & inOperand3,
                                                                             const class GALGAS_sliceMap & inOperand4,
                                                                             const class GALGAS_controlRegisterFieldMap & inOperand5,
                                                                             const class GALGAS_bigint & inOperand6,
                                                                             const class GALGAS_controlRegisterFieldList & inOperand7,
                                                                             const class GALGAS_uint & inOperand8,
                                                                             const class GALGAS_uint & inOperand9,
                                                                             const class GALGAS_uint & inOperand10
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @registerGroupKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_registerGroupKind_single : public cEnumAssociatedValues {
  public: const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_registerGroupKind_single (const GALGAS_bigint & inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_registerGroupKind_single (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_registerGroupKind_arrayGroup : public cEnumAssociatedValues {
  public: const GALGAS_lbigintlist mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_registerGroupKind_arrayGroup (const GALGAS_lbigintlist & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (C_String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_registerGroupKind_arrayGroup (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterGroupArrayList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterGroupArrayList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mGroupName ;
  public: inline GALGAS_lstring readProperty_mGroupName (void) const {
    return mProperty_mGroupName ;
  }

  public: GALGAS_lbigintlist mProperty_mBaseAddresses ;
  public: inline GALGAS_lbigintlist readProperty_mBaseAddresses (void) const {
    return mProperty_mBaseAddresses ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterGroupArrayList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterGroupArrayList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMGroupName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mGroupName = inValue ;
  }

  public: inline void setter_setMBaseAddresses (const GALGAS_lbigintlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBaseAddresses = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterGroupArrayList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterGroupArrayList_2D_element (const GALGAS_lstring & in_mGroupName,
                                                           const GALGAS_lbigintlist & in_mBaseAddresses) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterGroupArrayList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterGroupArrayList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                        const class GALGAS_lbigintlist & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterGroupArrayList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterGroupArrayList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterByAddress sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterByAddress : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterByAddress (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterByAddress extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterByAddress constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterByAddress constructor_sortedListWithValue (const class GALGAS_bigint & inOperand0,
                                                                                        const class GALGAS_string & inOperand1
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterByAddress inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bigint & inOperand0,
                                                     const class GALGAS_string & inOperand1
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bigint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bigint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterByAddress ;
 
} ; // End of GALGAS_controlRegisterByAddress class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterByAddress : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterByAddress (const GALGAS_controlRegisterByAddress & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mHTML (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterByAddress_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByAddress ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterByAddress_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterByAddress_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bigint mProperty_mAddress ;
  public: inline GALGAS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GALGAS_string mProperty_mHTML ;
  public: inline GALGAS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterByAddress_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterByAddress_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterByAddress_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterByAddress_2D_element (const GALGAS_bigint & in_mAddress,
                                                      const GALGAS_string & in_mHTML) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterByAddress_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterByAddress_2D_element constructor_new (const class GALGAS_bigint & inOperand0,
                                                                                   const class GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterByAddress_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterByAddress_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByAddress_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterByName sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterByName : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public: GALGAS_controlRegisterByName (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterByName extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterByName constructor_emptySortedList (LOCATION_ARGS) ;

  public: static class GALGAS_controlRegisterByName constructor_sortedListWithValue (const class GALGAS_bigint & inOperand0,
                                                                                     const class GALGAS_string & inOperand1,
                                                                                     const class GALGAS_string & inOperand2
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_controlRegisterByName inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_bigint & inOperand0,
                                                     const class GALGAS_string & inOperand1,
                                                     const class GALGAS_string & inOperand2
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_bigint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_bigint & outArgument0,
                                                    class GALGAS_string & outArgument1,
                                                    class GALGAS_string & outArgument2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_controlRegisterByName ;
 
} ; // End of GALGAS_controlRegisterByName class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_controlRegisterByName : public cGenericAbstractEnumerator {
  public: cEnumerator_controlRegisterByName (const GALGAS_controlRegisterByName & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_bigint current_mAddress (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mHTML (LOCATION_ARGS) const ;
  public: class GALGAS_string current_mName (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_controlRegisterByName_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByName ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @controlRegisterByName_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_controlRegisterByName_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_bigint mProperty_mAddress ;
  public: inline GALGAS_bigint readProperty_mAddress (void) const {
    return mProperty_mAddress ;
  }

  public: GALGAS_string mProperty_mHTML ;
  public: inline GALGAS_string readProperty_mHTML (void) const {
    return mProperty_mHTML ;
  }

  public: GALGAS_string mProperty_mName ;
  public: inline GALGAS_string readProperty_mName (void) const {
    return mProperty_mName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_controlRegisterByName_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_controlRegisterByName_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMAddress (const GALGAS_bigint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mAddress = inValue ;
  }

  public: inline void setter_setMHTML (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mHTML = inValue ;
  }

  public: inline void setter_setMName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_controlRegisterByName_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_controlRegisterByName_2D_element (const GALGAS_bigint & in_mAddress,
                                                   const GALGAS_string & in_mHTML,
                                                   const GALGAS_string & in_mName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_controlRegisterByName_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_controlRegisterByName_2D_element constructor_new (const class GALGAS_bigint & inOperand0,
                                                                                const class GALGAS_string & inOperand1,
                                                                                const class GALGAS_string & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_controlRegisterByName_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterByName_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterByName_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression) (const class cPtr_expressionAST * inObject,
                                                                                             const class GALGAS_lstring constinArgument0,
                                                                                             class GALGAS_semanticTypePrecedenceGraph & ioArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addDependenceEdgeForStaticExpression (const class cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@globalSyncInstanceMapIR' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_globalSyncInstanceMapIR : public cMapElement {
//--- Map attributes
  public: GALGAS_objectIR mProperty_mInitialValue ;

//--- Constructor
  public: cMapElement_globalSyncInstanceMapIR (const GALGAS_lstring & inKey,
                                               const GALGAS_objectIR & in_mInitialValue
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
// Phase 1: @globalSyncInstanceMapIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_globalSyncInstanceMapIR_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_objectIR mProperty_mInitialValue ;
  public: inline GALGAS_objectIR readProperty_mInitialValue (void) const {
    return mProperty_mInitialValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_globalSyncInstanceMapIR_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitialValue (const GALGAS_objectIR & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitialValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_globalSyncInstanceMapIR_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_globalSyncInstanceMapIR_2D_element (const GALGAS_lstring & in_lkey,
                                                     const GALGAS_objectIR & in_mInitialValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_globalSyncInstanceMapIR_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_globalSyncInstanceMapIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_objectIR & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_globalSyncInstanceMapIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalSyncInstanceMapIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMapIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instructionListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instructionListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_instructionAST mProperty_mInstruction ;
  public: inline GALGAS_instructionAST readProperty_mInstruction (void) const {
    return mProperty_mInstruction ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_instructionListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMInstruction (const GALGAS_instructionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInstruction = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_instructionListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_instructionListAST_2D_element (const GALGAS_instructionAST & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instructionListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instructionListAST_2D_element constructor_new (const class GALGAS_instructionAST & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instructionListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instructionListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instructionListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @driverInstanciationArgumentListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_driverInstanciationArgumentListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mSelector ;
  public: inline GALGAS_lstring readProperty_mSelector (void) const {
    return mProperty_mSelector ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_driverInstanciationArgumentListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_driverInstanciationArgumentListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_driverInstanciationArgumentListAST_2D_element (const GALGAS_lstring & in_mSelector,
                                                                const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_driverInstanciationArgumentListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_driverInstanciationArgumentListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_expressionAST & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_driverInstanciationArgumentListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_driverInstanciationArgumentListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @driverInstanciationArgumentMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_driverInstanciationArgumentMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_driverInstanciationArgumentMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_driverInstanciationArgumentMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_driverInstanciationArgumentMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inSource) ;
  public: GALGAS_driverInstanciationArgumentMap & operator = (const GALGAS_driverInstanciationArgumentMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_driverInstanciationArgumentMap extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_driverInstanciationArgumentMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_driverInstanciationArgumentMap constructor_mapWithMapToOverride (const class GALGAS_driverInstanciationArgumentMap & inOperand0
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_expressionAST & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_expressionAST constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpressionForKey (class GALGAS_expressionAST constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_expressionAST & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_expressionAST getter_mExpressionForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_expressionAST & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_driverInstanciationArgumentMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_driverInstanciationArgumentMap ;
 
} ; // End of GALGAS_driverInstanciationArgumentMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_driverInstanciationArgumentMap : public cGenericAbstractEnumerator {
  public: cEnumerator_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_expressionAST current_mExpression (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_driverInstanciationArgumentMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@driverInstanciationArgumentMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_driverInstanciationArgumentMap : public cMapElement {
//--- Map attributes
  public: GALGAS_expressionAST mProperty_mExpression ;

//--- Constructor
  public: cMapElement_driverInstanciationArgumentMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_expressionAST & in_mExpression
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
// Phase 1: @driverInstanciationArgumentMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_driverInstanciationArgumentMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_expressionAST mProperty_mExpression ;
  public: inline GALGAS_expressionAST readProperty_mExpression (void) const {
    return mProperty_mExpression ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_driverInstanciationArgumentMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMExpression (const GALGAS_expressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_driverInstanciationArgumentMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_driverInstanciationArgumentMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_expressionAST & in_mExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_driverInstanciationArgumentMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_driverInstanciationArgumentMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_expressionAST & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_driverInstanciationArgumentMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_driverInstanciationArgumentMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @instanciedDriverMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_instanciedDriverMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_instanciedDriverMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_instanciedDriverMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_instanciedDriverMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_instanciedDriverMap (const GALGAS_instanciedDriverMap & inSource) ;
  public: GALGAS_instanciedDriverMap & operator = (const GALGAS_instanciedDriverMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instanciedDriverMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instanciedDriverMap constructor_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_instanciedDriverMap constructor_mapWithMapToOverride (const class GALGAS_instanciedDriverMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_driverInstanciationArgumentMap & inOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_driverInstanciationArgumentMap constinArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDriverInstanciationArgumentMapForKey (class GALGAS_driverInstanciationArgumentMap constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_driverInstanciationArgumentMap & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentMap getter_mDriverInstanciationArgumentMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_instanciedDriverMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_driverInstanciationArgumentMap & outOperand1) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public: VIRTUAL_IN_DEBUG cMapElement_instanciedDriverMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_instanciedDriverMap ;
 
} ; // End of GALGAS_instanciedDriverMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_instanciedDriverMap : public cGenericAbstractEnumerator {
  public: cEnumerator_instanciedDriverMap (const GALGAS_instanciedDriverMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_driverInstanciationArgumentMap current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_instanciedDriverMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@instanciedDriverMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_instanciedDriverMap : public cMapElement {
//--- Map attributes
  public: GALGAS_driverInstanciationArgumentMap mProperty_mDriverInstanciationArgumentMap ;

//--- Constructor
  public: cMapElement_instanciedDriverMap (const GALGAS_lstring & inKey,
                                           const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap
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
// Phase 1: @instanciedDriverMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_instanciedDriverMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_instanciedDriverMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMDriverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDriverInstanciationArgumentMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_instanciedDriverMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_instanciedDriverMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_instanciedDriverMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_instanciedDriverMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_driverInstanciationArgumentMap & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_instanciedDriverMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_instanciedDriverMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @driverListIR_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_driverListIR_2D_element constructor_default (LOCATION_ARGS) ;

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

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_driverListIR_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_driverListIR_2D_element (const GALGAS_lstring & in_mDriverName,
                                          const GALGAS_omnibusType & in_mType,
                                          const GALGAS_operandIRList & in_mInitialValueList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_driverListIR_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_driverListIR_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_omnibusType & inOperand1,
                                                                       const class GALGAS_operandIRList & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_driverListIR_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_driverListIR_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverListIR_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@driverListIR generateLLVMDriverCode'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMDriverCode (const class GALGAS_driverListIR inObject,
                                             class GALGAS_string & io_ioLLVMcode,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmAttributeFunction'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmBootRoutineNameFromDriver (const class GALGAS_lstring & constinArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForGlobalVariable'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmNameForGlobalVariable (const class GALGAS_string & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string function_llvmTitleComment (const class GALGAS_string & constinArgument0,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@omnibusType llvmTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_omnibusType_llvmTypeName) (const class cPtr_omnibusType * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_llvmTypeName (const int32_t inClassIndex,
                                        enterExtensionGetter_omnibusType_llvmTypeName inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_llvmTypeName (const cPtr_omnibusType * inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListPropertyListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_staticListPropertyListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMPropertyName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyName = inValue ;
  }

  public: inline void setter_setMPropertyType (const GALGAS_staticListPropertyTypeAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mPropertyType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_staticListPropertyListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListPropertyListAST_2D_element (const GALGAS_lstring & in_mPropertyName,
                                                       const GALGAS_staticListPropertyTypeAST & in_mPropertyType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListPropertyListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListPropertyListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                    const class GALGAS_staticListPropertyTypeAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticListPropertyListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListPropertyListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListValueListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticListValueListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_staticListValueListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMElement (const GALGAS_extendStaticListElementAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mElement = inValue ;
  }

  public: inline void setter_setMLocation (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mLocation = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_staticListValueListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListValueListAST_2D_element (const GALGAS_extendStaticListElementAST & in_mElement,
                                                    const GALGAS_location & in_mLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListValueListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListValueListAST_2D_element constructor_new (const class GALGAS_extendStaticListElementAST & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticListValueListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListValueListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListValueListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @extendStaticListElementAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_extendStaticListElementAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMExpression (const GALGAS_extendStaticListExpressionAST & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mExpression = inValue ;
  }

  public: inline void setter_setMEndOfExpression (const GALGAS_location & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mEndOfExpression = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_extendStaticListElementAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_extendStaticListElementAST_2D_element (const GALGAS_extendStaticListExpressionAST & in_mExpression,
                                                        const GALGAS_location & in_mEndOfExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_extendStaticListElementAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_extendStaticListElementAST_2D_element constructor_new (const class GALGAS_extendStaticListExpressionAST & inOperand0,
                                                                                     const class GALGAS_location & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_extendStaticListElementAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_extendStaticListElementAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendStaticListElementAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @staticListInitializationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_staticListInitializationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_staticListInitializationMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMInitializationList (const GALGAS_stringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mInitializationList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_staticListInitializationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_staticListInitializationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                         const GALGAS_stringlist & in_mInitializationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_staticListInitializationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_staticListInitializationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_stringlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_staticListInitializationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticListInitializationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@staticListInitializationMap generateLLVMForStaticLists'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateLLVMForStaticLists (const class GALGAS_staticListInitializationMap inObject,
                                                 const class GALGAS_staticListInvokedFunctionSetMap constin_inUsefulStaticArrayMap,
                                                 class GALGAS_string & io_ioLLVMcode,
                                                 class C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring function_llvmNameForStaticListElementType (const class GALGAS_lstring & constinArgument0,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @routineTypedSignature_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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

  public: GALGAS_unifiedTypeMap_2D_entry mProperty_mTypeProxy ;
  public: inline GALGAS_unifiedTypeMap_2D_entry readProperty_mTypeProxy (void) const {
    return mProperty_mTypeProxy ;
  }

  public: GALGAS_lstring mProperty_mFormalArgumentName ;
  public: inline GALGAS_lstring readProperty_mFormalArgumentName (void) const {
    return mProperty_mFormalArgumentName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public: GALGAS_routineTypedSignature_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormalArgumentPassingMode (const GALGAS_procFormalArgumentPassingMode & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentPassingMode = inValue ;
  }

  public: inline void setter_setMSelector (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSelector = inValue ;
  }

  public: inline void setter_setMTypeProxy (const GALGAS_unifiedTypeMap_2D_entry & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mTypeProxy = inValue ;
  }

  public: inline void setter_setMFormalArgumentName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormalArgumentName = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_routineTypedSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                   const GALGAS_lstring & in_mSelector,
                                                   const GALGAS_unifiedTypeMap_2D_entry & in_mTypeProxy,
                                                   const GALGAS_lstring & in_mFormalArgumentName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_routineTypedSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_routineTypedSignature_2D_element constructor_new (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_unifiedTypeMap_2D_entry & inOperand2,
                                                                                const class GALGAS_lstring & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineTypedSignature_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @taskSetupListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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
  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public: VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public: static GALGAS_taskSetupListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public: GALGAS_taskSetupListAST_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mName = inValue ;
  }

  public: inline void setter_setMDependanceList (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDependanceList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_taskSetupListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_taskSetupListAST_2D_element (const GALGAS_lstring & in_mName,
                                              const GALGAS_lstringlist & in_mDependanceList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public: static GALGAS_taskSetupListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public: static class GALGAS_taskSetupListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_lstringlist & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public: typeComparisonResult objectCompare (const GALGAS_taskSetupListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskSetupListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ;

