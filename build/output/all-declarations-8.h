#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @systemUserRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_systemUserRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_systemUserRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_systemUserRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_systemUserRoutineIR * ptr (void) const { return (const cPtr_systemUserRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_systemUserRoutineIR (const cPtr_systemUserRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_systemUserRoutineIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_systemUserRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bool & inOperand1,
                                                                    const class GALGAS_bool & inOperand2,
                                                                    const class GALGAS_string & inOperand3,
                                                                    const class GALGAS_routineTypedSignature & inOperand4,
                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                    const class GALGAS_bool & inOperand6,
                                                                    const class GALGAS_unifiedTypeMap_2D_proxy & inOperand7
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_systemUserRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (class GALGAS_routineTypedSignature inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsSection (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMangledImplementationName (class GALGAS_string inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeProxy (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxy (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mMangledImplementationName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnTypeProxy (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_systemUserRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_systemUserRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @systemUserRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_systemUserRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_string mProperty_mMangledImplementationName ;
  public : GALGAS_routineTypedSignature mProperty_mFormalArgumentList ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReceiverTypeProxy ;
  public : GALGAS_bool mProperty_mIsSection ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnTypeProxy ;

//--- Constructor
  public : cPtr_systemUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                     const GALGAS_bool & in_isRequired,
                                     const GALGAS_bool & in_warnsIfUnused,
                                     const GALGAS_string & in_mMangledImplementationName,
                                     const GALGAS_routineTypedSignature & in_mFormalArgumentList,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverTypeProxy,
                                     const GALGAS_bool & in_mIsSection,
                                     const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnTypeProxy
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mMangledImplementationName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMangledImplementationName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_routineTypedSignature getter_mFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentList (GALGAS_routineTypedSignature inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReceiverTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsSection (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsSection (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReturnTypeProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxy (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @externRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_externRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_externRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_externRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_externRoutineIR * ptr (void) const { return (const cPtr_externRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_externRoutineIR (const cPtr_externRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externRoutineIR extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_bool & inOperand1,
                                                                const class GALGAS_bool & inOperand2,
                                                                const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand4
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnType (class GALGAS_unifiedTypeMap_2D_proxy inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @externRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_externRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnType ;

//--- Constructor
  public : cPtr_externRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                 const GALGAS_bool & in_isRequired,
                                 const GALGAS_bool & in_warnsIfUnused,
                                 const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                 const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_unifiedTypeMap_2D_proxy getter_mReturnType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReturnType (GALGAS_unifiedTypeMap_2D_proxy inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterFormalArguments (const class GALGAS_semanticContext constinArgument0,
                                   const class GALGAS_routineFormalArgumentListAST constinArgument1,
                                   class GALGAS_universalValuedObjectMap & ioArgument2,
                                   class GALGAS_routineFormalArgumentListIR & ioArgument3,
                                   const class GALGAS_bool constinArgument4,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedISRDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedISRDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedISRDeclaration (void) ;

//---
  public : inline const class cPtr_decoratedISRDeclaration * ptr (void) const { return (const cPtr_decoratedISRDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedISRDeclaration (const cPtr_decoratedISRDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedISRDeclaration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedISRDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_mode & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedISRDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDriverName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMISRName (class GALGAS_lstring inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMode (class GALGAS_mode inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mISRName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedISRDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedISRDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedISRDeclaration : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mISRName ;
  public : GALGAS_mode mProperty_mMode ;
  public : GALGAS_lstring mProperty_mDriverName ;

//--- Constructor
  public : cPtr_decoratedISRDeclaration (const GALGAS_lstring & in_mISRName,
                                         const GALGAS_mode & in_mMode,
                                         const GALGAS_lstring & in_mDriverName
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mISRName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMISRName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_mode getter_mMode (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMode (GALGAS_mode inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDriverName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedGuardDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedGuardDeclaration : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedGuardDeclaration (void) ;

//---
  public : inline const class cPtr_decoratedGuardDeclaration * ptr (void) const { return (const cPtr_decoratedGuardDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedGuardDeclaration (const cPtr_decoratedGuardDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedGuardDeclaration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedGuardDeclaration constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_lstringlist & inOperand3,
                                                                          const class GALGAS_routineFormalArgumentListAST & inOperand4,
                                                                          const class GALGAS_guardKind & inOperand5,
                                                                          const class GALGAS_instructionListAST & inOperand6,
                                                                          const class GALGAS_location & inOperand7
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedGuardDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfGuardDeclaration (class GALGAS_location inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardAttributeList (class GALGAS_lstringlist inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardFormalArgumentList (class GALGAS_routineFormalArgumentListAST inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardInstructionList (class GALGAS_instructionListAST inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardKind (class GALGAS_guardKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPublic (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfGuardDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGuardAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListAST getter_mGuardInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKind getter_mGuardKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mGuardName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedGuardDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedGuardDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedGuardDeclaration : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverTypeName ;
  public : GALGAS_lstring mProperty_mGuardName ;
  public : GALGAS_bool mProperty_mIsPublic ;
  public : GALGAS_lstringlist mProperty_mGuardAttributeList ;
  public : GALGAS_routineFormalArgumentListAST mProperty_mGuardFormalArgumentList ;
  public : GALGAS_guardKind mProperty_mGuardKind ;
  public : GALGAS_instructionListAST mProperty_mGuardInstructionList ;
  public : GALGAS_location mProperty_mEndOfGuardDeclaration ;

//--- Constructor
  public : cPtr_decoratedGuardDeclaration (const GALGAS_lstring & in_mReceiverTypeName,
                                           const GALGAS_lstring & in_mGuardName,
                                           const GALGAS_bool & in_mIsPublic,
                                           const GALGAS_lstringlist & in_mGuardAttributeList,
                                           const GALGAS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                           const GALGAS_guardKind & in_mGuardKind,
                                           const GALGAS_instructionListAST & in_mGuardInstructionList,
                                           const GALGAS_location & in_mEndOfGuardDeclaration
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mGuardName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsPublic (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mGuardAttributeList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardAttributeList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListAST getter_mGuardFormalArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardFormalArgumentList (GALGAS_routineFormalArgumentListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_guardKind getter_mGuardKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardKind (GALGAS_guardKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListAST getter_mGuardInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardInstructionList (GALGAS_instructionListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mEndOfGuardDeclaration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEndOfGuardDeclaration (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardUserRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardUserRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_guardUserRoutineIR (void) ;

//---
  public : inline const class cPtr_guardUserRoutineIR * ptr (void) const { return (const cPtr_guardUserRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_guardUserRoutineIR (const cPtr_guardUserRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardUserRoutineIR extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardUserRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_bool & inOperand1,
                                                                   const class GALGAS_bool & inOperand2,
                                                                   const class GALGAS_string & inOperand3,
                                                                   const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                   const class GALGAS_omnibusType & inOperand5,
                                                                   const class GALGAS_guardKindGenerationIR & inOperand6
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardUserRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIR (class GALGAS_guardKindGenerationIR inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMangledImplementationGuardName (class GALGAS_string inArgument0
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mMangledImplementationGuardName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardUserRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardUserRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_guardUserRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_string mProperty_mMangledImplementationGuardName ;
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_omnibusType mProperty_mReceiverType ;
  public : GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;

//--- Constructor
  public : cPtr_guardUserRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                    const GALGAS_bool & in_isRequired,
                                    const GALGAS_bool & in_warnsIfUnused,
                                    const GALGAS_string & in_mMangledImplementationGuardName,
                                    const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                    const GALGAS_omnibusType & in_mReceiverType,
                                    const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mMangledImplementationGuardName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMangledImplementationGuardName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIR (GALGAS_guardKindGenerationIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @guardImplementationRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_guardImplementationRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_guardImplementationRoutineIR (void) ;

//---
  public : inline const class cPtr_guardImplementationRoutineIR * ptr (void) const { return (const cPtr_guardImplementationRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_guardImplementationRoutineIR (const cPtr_guardImplementationRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardImplementationRoutineIR extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardImplementationRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1,
                                                                             const class GALGAS_bool & inOperand2,
                                                                             const class GALGAS_routineFormalArgumentListIR & inOperand3,
                                                                             const class GALGAS_omnibusType & inOperand4,
                                                                             const class GALGAS_guardKindGenerationIR & inOperand5,
                                                                             const class GALGAS_allocaList & inOperand6,
                                                                             const class GALGAS_instructionListIR & inOperand7
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardImplementationRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIR (class GALGAS_guardKindGenerationIR inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationList (class GALGAS_instructionListIR inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardImplementationRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @guardImplementationRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_guardImplementationRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_omnibusType mProperty_mReceiverType ;
  public : GALGAS_guardKindGenerationIR mProperty_mGuardKindGenerationIR ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;

//--- Constructor
  public : cPtr_guardImplementationRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                              const GALGAS_bool & in_isRequired,
                                              const GALGAS_bool & in_warnsIfUnused,
                                              const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                              const GALGAS_omnibusType & in_mReceiverType,
                                              const GALGAS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                              const GALGAS_allocaList & in_mAllocaList,
                                              const GALGAS_instructionListIR & in_mInstructionGenerationList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_guardKindGenerationIR getter_mGuardKindGenerationIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGuardKindGenerationIR (GALGAS_guardKindGenerationIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (GALGAS_allocaList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationList (GALGAS_instructionListIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@effectiveArgumentListAST routineSignature' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_lstring extensionGetter_routineSignature (const class GALGAS_effectiveArgumentListAST & inObject,
                                                       const class GALGAS_location & constinArgument0,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_regularRoutineIR (void) ;

//---
  public : inline const class cPtr_regularRoutineIR * ptr (void) const { return (const cPtr_regularRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularRoutineIR extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_regularRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_bool & inOperand1,
                                                                 const class GALGAS_bool & inOperand2,
                                                                 const class GALGAS_omnibusType & inOperand3,
                                                                 const class GALGAS_routineFormalArgumentListIR & inOperand4,
                                                                 const class GALGAS_allocaList & inOperand5,
                                                                 const class GALGAS_instructionListIR & inOperand6,
                                                                 const class GALGAS_bool & inOperand7,
                                                                 const class GALGAS_routineKind & inOperand8,
                                                                 const class GALGAS_omnibusType & inOperand9,
                                                                 const class GALGAS_bool & inOperand10
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_regularRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAppendFileAndLineArgumentForPanicLocation (class GALGAS_bool inArgument0
                                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExportedFunction (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (class GALGAS_routineFormalArgumentListIR inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationList (class GALGAS_instructionListIR inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_routineKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mExportedFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineKind getter_mKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReturnType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_regularRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @regularRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_regularRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mReceiverType ;
  public : GALGAS_routineFormalArgumentListIR mProperty_mFormalArgumentListForGeneration ;
  public : GALGAS_allocaList mProperty_mAllocaList ;
  public : GALGAS_instructionListIR mProperty_mInstructionGenerationList ;
  public : GALGAS_bool mProperty_mExportedFunction ;
  public : GALGAS_routineKind mProperty_mKind ;
  public : GALGAS_omnibusType mProperty_mReturnType ;
  public : GALGAS_bool mProperty_mAppendFileAndLineArgumentForPanicLocation ;

//--- Constructor
  public : cPtr_regularRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                  const GALGAS_bool & in_isRequired,
                                  const GALGAS_bool & in_warnsIfUnused,
                                  const GALGAS_omnibusType & in_mReceiverType,
                                  const GALGAS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                  const GALGAS_allocaList & in_mAllocaList,
                                  const GALGAS_instructionListIR & in_mInstructionGenerationList,
                                  const GALGAS_bool & in_mExportedFunction,
                                  const GALGAS_routineKind & in_mKind,
                                  const GALGAS_omnibusType & in_mReturnType,
                                  const GALGAS_bool & in_mAppendFileAndLineArgumentForPanicLocation
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_routineFormalArgumentListIR getter_mFormalArgumentListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFormalArgumentListForGeneration (GALGAS_routineFormalArgumentListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (GALGAS_allocaList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_instructionListIR getter_mInstructionGenerationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionGenerationList (GALGAS_instructionListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mExportedFunction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExportedFunction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_routineKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMKind (GALGAS_routineKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mReturnType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReturnType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mAppendFileAndLineArgumentForPanicLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAppendFileAndLineArgumentForPanicLocation (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph) (const class cPtr_panicAST * inObject,
                                                                              class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (const class cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @decoratedPanicRoutine class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_decoratedPanicRoutine : public GALGAS_abstractDecoratedDeclaration {
//--- Constructor
  public : GALGAS_decoratedPanicRoutine (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_decoratedPanicRoutine constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_decoratedPanicRoutine * ptr (void) const { return (const cPtr_decoratedPanicRoutine *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_decoratedPanicRoutine extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_decoratedPanicRoutine constructor_new (const class GALGAS_bool & inOperand0,
                                                                      const class GALGAS_lbigint & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsSetup (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPriority (class GALGAS_lbigint inArgument0
                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsSetup (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_decoratedPanicRoutine class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @decoratedPanicRoutine class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_decoratedPanicRoutine : public cPtr_abstractDecoratedDeclaration {
//--- Attributes
  public : GALGAS_bool mProperty_mIsSetup ;
  public : GALGAS_lbigint mProperty_mPriority ;

//--- Constructor
  public : cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                       const GALGAS_lbigint & in_mPriority
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsSetup (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsSetup (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lbigint getter_mPriority (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPriority (GALGAS_lbigint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileSpecificPanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_fileSpecificPanicRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_fileSpecificPanicRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_fileSpecificPanicRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_fileSpecificPanicRoutineIR * ptr (void) const { return (const cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_fileSpecificPanicRoutineIR (const cPtr_fileSpecificPanicRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_fileSpecificPanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_fileSpecificPanicRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_bool & inOperand1,
                                                                           const class GALGAS_bool & inOperand2,
                                                                           const class GALGAS_string & inOperand3
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_fileSpecificPanicRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setInFilePath (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_inFilePath (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fileSpecificPanicRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @fileSpecificPanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_fileSpecificPanicRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_string mProperty_inFilePath ;

//--- Constructor
  public : cPtr_fileSpecificPanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                            const GALGAS_bool & in_isRequired,
                                            const GALGAS_bool & in_warnsIfUnused,
                                            const GALGAS_string & in_inFilePath
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_inFilePath (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setInFilePath (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @universalModePanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_universalModePanicRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_universalModePanicRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_universalModePanicRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_universalModePanicRoutineIR * ptr (void) const { return (const cPtr_universalModePanicRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_universalModePanicRoutineIR (const cPtr_universalModePanicRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_universalModePanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_universalModePanicRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_bool & inOperand1,
                                                                            const class GALGAS_bool & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_universalModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_universalModePanicRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @universalModePanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_universalModePanicRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes

//--- Constructor
  public : cPtr_universalModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                             const GALGAS_bool & in_isRequired,
                                             const GALGAS_bool & in_warnsIfUnused
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sectionModePanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sectionModePanicRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_sectionModePanicRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_sectionModePanicRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_sectionModePanicRoutineIR * ptr (void) const { return (const cPtr_sectionModePanicRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sectionModePanicRoutineIR (const cPtr_sectionModePanicRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sectionModePanicRoutineIR extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sectionModePanicRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_bool & inOperand2,
                                                                          const class GALGAS_panicSortedListIR & inOperand3,
                                                                          const class GALGAS_panicSortedListIR & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sectionModePanicRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPanicLoopListIR (class GALGAS_panicSortedListIR inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPanicSetupListIR (class GALGAS_panicSortedListIR inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_panicSortedListIR getter_mPanicLoopListIR (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_panicSortedListIR getter_mPanicSetupListIR (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sectionModePanicRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sectionModePanicRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sectionModePanicRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_panicSortedListIR mProperty_mPanicSetupListIR ;
  public : GALGAS_panicSortedListIR mProperty_mPanicLoopListIR ;

//--- Constructor
  public : cPtr_sectionModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                           const GALGAS_bool & in_isRequired,
                                           const GALGAS_bool & in_warnsIfUnused,
                                           const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                           const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_panicSortedListIR getter_mPanicSetupListIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPanicSetupListIR (GALGAS_panicSortedListIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_panicSortedListIR getter_mPanicLoopListIR (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPanicLoopListIR (GALGAS_panicSortedListIR inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--- Constructor
  public : GALGAS_compileTimeImplicitConverterToBoolean (void) ;

//---
  public : inline const class cPtr_compileTimeImplicitConverterToBoolean * ptr (void) const { return (const cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_compileTimeImplicitConverterToBoolean (const cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_compileTimeImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_compileTimeImplicitConverterToBoolean constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_ctExpressionAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_compileTimeImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_ctExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeImplicitConverterToBoolean class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_compileTimeImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                       const GALGAS_ctExpressionAST & in_mExpression
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_ctExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmImplicitConverterToBoolean : public GALGAS_abstractImplicitConverterToBoolean {
//--- Constructor
  public : GALGAS_llvmImplicitConverterToBoolean (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_llvmImplicitConverterToBoolean constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_llvmImplicitConverterToBoolean * ptr (void) const { return (const cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_llvmImplicitConverterToBoolean (const cPtr_llvmImplicitConverterToBoolean * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmImplicitConverterToBoolean constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_omnibusType & inOperand1,
                                                                               const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmImplicitConverterToBoolean class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmImplicitConverterToBoolean class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmImplicitConverterToBoolean : public cPtr_abstractImplicitConverterToBoolean {
//--- Attributes
  public : GALGAS_lstring mProperty_mReceiverName ;
  public : GALGAS_omnibusType mProperty_mReceiverType ;
  public : GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_llvmImplicitConverterToBoolean (const GALGAS_lstring & in_mReceiverName,
                                                const GALGAS_omnibusType & in_mReceiverType,
                                                const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @convertInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_convertInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_convertInstructionIR (void) ;

//---
  public : inline const class cPtr_convertInstructionIR * ptr (void) const { return (const cPtr_convertInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_convertInstructionIR extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_convertInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                     const class GALGAS_objectIR & inOperand1,
                                                                     const class GALGAS_location & inOperand2
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_convertInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (class GALGAS_location inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperand (class GALGAS_objectIR inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_convertInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @convertInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_convertInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_objectIR mProperty_mOperand ;
  public : GALGAS_location mProperty_mLocation ;

//--- Constructor
  public : cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                      const GALGAS_objectIR & in_mOperand,
                                      const GALGAS_location & in_mLocation
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTarget (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mOperand (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperand (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @sizeofInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_sizeofInstructionIR : public GALGAS_abstractInstructionIR {
//--- Constructor
  public : GALGAS_sizeofInstructionIR (void) ;

//---
  public : inline const class cPtr_sizeofInstructionIR * ptr (void) const { return (const cPtr_sizeofInstructionIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sizeofInstructionIR extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sizeofInstructionIR constructor_new (const class GALGAS_objectIR & inOperand0,
                                                                    const class GALGAS_omnibusType & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMSourceType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTarget (class GALGAS_objectIR inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mSourceType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_sizeofInstructionIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @sizeofInstructionIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_sizeofInstructionIR : public cPtr_abstractInstructionIR {
//--- Attributes
  public : GALGAS_objectIR mProperty_mTarget ;
  public : GALGAS_omnibusType mProperty_mSourceType ;

//--- Constructor
  public : cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                     const GALGAS_omnibusType & in_mSourceType
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_objectIR getter_mTarget (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTarget (GALGAS_objectIR inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mSourceType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSourceType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) (const class cPtr_primaryInExpressionAST * inObject,
                                                                                                const class GALGAS_omnibusType constinArgument0,
                                                                                                const class GALGAS_routineAttributes constinArgument1,
                                                                                                const class GALGAS_omnibusType constinArgument2,
                                                                                                const class GALGAS_semanticContext constinArgument3,
                                                                                                const class GALGAS_mode constinArgument4,
                                                                                                class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                                                class GALGAS_staticEntityMap & ioArgument6,
                                                                                                class GALGAS_universalValuedObjectMap & ioArgument7,
                                                                                                class GALGAS_allocaList & ioArgument8,
                                                                                                class GALGAS_instructionListIR & ioArgument9,
                                                                                                class GALGAS_objectIR & outArgument10,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzePrimaryExpressionNoSelf (const int32_t inClassIndex,
                                                          extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (const class cPtr_primaryInExpressionAST * inObject,
                                                         const GALGAS_omnibusType constin_inSelfType,
                                                         const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                         const GALGAS_omnibusType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                         GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                         GALGAS_allocaList & io_ioAllocaList,
                                                         GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         GALGAS_objectIR & out_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression (const class GALGAS_omnibusType constinArgument0,
                                               const class GALGAS_routineAttributes constinArgument1,
                                               const class GALGAS_omnibusType constinArgument2,
                                               const class GALGAS_semanticContext constinArgument3,
                                               const class GALGAS_mode constinArgument4,
                                               class GALGAS_semanticTemporariesStruct & ioArgument5,
                                               class GALGAS_staticEntityMap & ioArgument6,
                                               class GALGAS_universalValuedObjectMap & ioArgument7,
                                               class GALGAS_allocaList & ioArgument8,
                                               class GALGAS_instructionListIR & ioArgument9,
                                               const class GALGAS_primaryInExpressionAccessListAST constinArgument10,
                                               class GALGAS_objectIR & ioArgument11,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) (const class cPtr_primaryInExpressionAST * inObject,
                                                                                                  const class GALGAS_omnibusType constinArgument0,
                                                                                                  const class GALGAS_routineAttributes constinArgument1,
                                                                                                  const class GALGAS_omnibusType constinArgument2,
                                                                                                  const class GALGAS_semanticContext constinArgument3,
                                                                                                  const class GALGAS_mode constinArgument4,
                                                                                                  class GALGAS_semanticTemporariesStruct & ioArgument5,
                                                                                                  class GALGAS_staticEntityMap & ioArgument6,
                                                                                                  class GALGAS_universalValuedObjectMap & ioArgument7,
                                                                                                  class GALGAS_allocaList & ioArgument8,
                                                                                                  class GALGAS_instructionListIR & ioArgument9,
                                                                                                  class GALGAS_objectIR & outArgument10,
                                                                                                  class C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzePrimaryExpressionWithSelf (const int32_t inClassIndex,
                                                            extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (const class cPtr_primaryInExpressionAST * inObject,
                                                           const GALGAS_omnibusType constin_inSelfType,
                                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                           const GALGAS_omnibusType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                           GALGAS_allocaList & io_ioAllocaList,
                                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                           GALGAS_objectIR & out_outResult,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression (class GALGAS_objectIR & ioArgument0,
                                            const class GALGAS_expressionAST constinArgument1,
                                            const class GALGAS_location constinArgument2,
                                            const class GALGAS_bool constinArgument3,
                                            const class GALGAS_omnibusType constinArgument4,
                                            const class GALGAS_routineAttributes constinArgument5,
                                            const class GALGAS_omnibusType constinArgument6,
                                            const class GALGAS_semanticContext constinArgument7,
                                            const class GALGAS_mode constinArgument8,
                                            class GALGAS_semanticTemporariesStruct & ioArgument9,
                                            class GALGAS_staticEntityMap & ioArgument10,
                                            class GALGAS_universalValuedObjectMap & ioArgument11,
                                            class GALGAS_allocaList & ioArgument12,
                                            class GALGAS_instructionListIR & ioArgument13,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression (const class GALGAS_lstring constinArgument0,
                                             class GALGAS_objectIR & ioArgument1,
                                             const class GALGAS_omnibusType constinArgument2,
                                             const class GALGAS_semanticContext constinArgument3,
                                             const class GALGAS_mode constinArgument4,
                                             const class GALGAS_routineAttributes constinArgument5,
                                             class GALGAS_semanticTemporariesStruct & ioArgument6,
                                             class GALGAS_staticEntityMap & ioArgument7,
                                             class GALGAS_universalValuedObjectMap & ioArgument8,
                                             class GALGAS_allocaList & ioArgument9,
                                             const class GALGAS_effectiveArgumentListAST constinArgument10,
                                             class GALGAS_instructionListIR & ioArgument11,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression (const class GALGAS_semanticContext constinArgument0,
                                               class GALGAS_objectIR & ioArgument1,
                                               const class GALGAS_lstring constinArgument2,
                                               const class GALGAS_mode constinArgument3,
                                               class GALGAS_semanticTemporariesStruct & ioArgument4,
                                               class GALGAS_allocaList & ioArgument5,
                                               class GALGAS_instructionListIR & ioArgument6,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression (const class GALGAS_semanticContext constinArgument0,
                                      class GALGAS_objectIR & ioArgument1,
                                      const class GALGAS_lbigint constinArgument2,
                                      const class GALGAS_lbigint constinArgument3,
                                      class GALGAS_semanticTemporariesStruct & ioArgument4,
                                      class GALGAS_instructionListIR & ioArgument5,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public : GALGAS_compileTimeInfixOperatorUsage (void) ;

//---
  public : inline const class cPtr_compileTimeInfixOperatorUsage * ptr (void) const { return (const cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_compileTimeInfixOperatorUsage (const cPtr_compileTimeInfixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_compileTimeInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_compileTimeInfixOperatorUsage constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_ctExpressionAST & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_compileTimeInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_ctExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightOperandName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLeftOperandName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRightOperandName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public : GALGAS_lstring mProperty_mLeftOperandName ;
  public : GALGAS_lstring mProperty_mRightOperandName ;
  public : GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_compileTimeInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                               const GALGAS_lstring & in_mRightOperandName,
                                               const GALGAS_ctExpressionAST & in_mExpression
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLeftOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRightOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_ctExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_compileTimeInfixOperatorUsage_eval) (const class cPtr_compileTimeInfixOperatorUsage * inObject,
                                                                             const class GALGAS_objectIR constinArgument0,
                                                                             const class GALGAS_objectIR constinArgument1,
                                                                             class GALGAS_bigint & outArgument2,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_eval (const int32_t inClassIndex,
                                extensionMethodSignature_compileTimeInfixOperatorUsage_eval inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (const class cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GALGAS_objectIR constin_inLeftOperand,
                               const GALGAS_objectIR constin_inRightOperand,
                               GALGAS_bigint & out_outResult,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimeInfixInfEqualOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimeInfixInfEqualOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public : GALGAS_compileTimeInfixInfEqualOperatorUsage (void) ;

//---
  public : inline const class cPtr_compileTimeInfixInfEqualOperatorUsage * ptr (void) const { return (const cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_compileTimeInfixInfEqualOperatorUsage (const cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_compileTimeInfixInfEqualOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_compileTimeInfixInfEqualOperatorUsage constructor_new (const class GALGAS_compileTimeInfixOperatorUsage & inOperand0,
                                                                                      const class GALGAS_compileTimeInfixOperatorUsage & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_compileTimeInfixInfEqualOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEqualOperatorUsage (class GALGAS_compileTimeInfixOperatorUsage inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLessThanOperatorUsage (class GALGAS_compileTimeInfixOperatorUsage inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_compileTimeInfixOperatorUsage getter_mEqualOperatorUsage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_compileTimeInfixOperatorUsage getter_mLessThanOperatorUsage (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeInfixInfEqualOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimeInfixInfEqualOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimeInfixInfEqualOperatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public : GALGAS_compileTimeInfixOperatorUsage mProperty_mEqualOperatorUsage ;
  public : GALGAS_compileTimeInfixOperatorUsage mProperty_mLessThanOperatorUsage ;

//--- Constructor
  public : cPtr_compileTimeInfixInfEqualOperatorUsage (const GALGAS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                       const GALGAS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_compileTimeInfixOperatorUsage getter_mEqualOperatorUsage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEqualOperatorUsage (GALGAS_compileTimeInfixOperatorUsage inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_compileTimeInfixOperatorUsage getter_mLessThanOperatorUsage (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLessThanOperatorUsage (GALGAS_compileTimeInfixOperatorUsage inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public : GALGAS_llvmInfixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_llvmInfixOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_llvmInfixOperatorUsage * ptr (void) const { return (const cPtr_llvmInfixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_llvmInfixOperatorUsage (const cPtr_llvmInfixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmInfixOperatorUsage constructor_new (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2,
                                                                       const class GALGAS_llvmGenerationInstructionList & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInfixMangledFunctionName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightOperandName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInfixMangledFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLeftOperandName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRightOperandName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public : GALGAS_string mProperty_mInfixMangledFunctionName ;
  public : GALGAS_lstring mProperty_mLeftOperandName ;
  public : GALGAS_lstring mProperty_mRightOperandName ;
  public : GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_llvmInfixOperatorUsage (const GALGAS_string & in_mInfixMangledFunctionName,
                                        const GALGAS_lstring & in_mLeftOperandName,
                                        const GALGAS_lstring & in_mRightOperandName,
                                        const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mInfixMangledFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInfixMangledFunctionName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLeftOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRightOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmInlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmInlineInfixOperatorUsage : public GALGAS_omnibusInfixOperatorUsage {
//--- Constructor
  public : GALGAS_llvmInlineInfixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_llvmInlineInfixOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_llvmInlineInfixOperatorUsage * ptr (void) const { return (const cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_llvmInlineInfixOperatorUsage (const cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmInlineInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmInlineInfixOperatorUsage constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmInlineInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightOperandName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLeftOperandName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRightOperandName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmInlineInfixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmInlineInfixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmInlineInfixOperatorUsage : public cPtr_omnibusInfixOperatorUsage {
//--- Attributes
  public : GALGAS_lstring mProperty_mLeftOperandName ;
  public : GALGAS_lstring mProperty_mRightOperandName ;
  public : GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_llvmInlineInfixOperatorUsage (const GALGAS_lstring & in_mLeftOperandName,
                                              const GALGAS_lstring & in_mRightOperandName,
                                              const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLeftOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLeftOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRightOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @infixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_infixOperatorRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_infixOperatorRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_infixOperatorRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_infixOperatorRoutineIR * ptr (void) const { return (const cPtr_infixOperatorRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_infixOperatorRoutineIR (const cPtr_infixOperatorRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorRoutineIR extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperatorRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bool & inOperand1,
                                                                       const class GALGAS_bool & inOperand2,
                                                                       const class GALGAS_omnibusType & inOperand3,
                                                                       const class GALGAS_string & inOperand4,
                                                                       const class GALGAS_omnibusType & inOperand5,
                                                                       const class GALGAS_string & inOperand6,
                                                                       const class GALGAS_omnibusType & inOperand7,
                                                                       const class GALGAS_stringlist & inOperand8,
                                                                       const class GALGAS_allocaList & inOperand9
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (class GALGAS_stringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSourceType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSourceVarName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetVarName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mGeneratedInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mSourceType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSourceVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTargetType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetVarName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @infixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_infixOperatorRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mTargetType ;
  public : GALGAS_string mProperty_mTargetVarName ;
  public : GALGAS_omnibusType mProperty_mSourceType ;
  public : GALGAS_string mProperty_mSourceVarName ;
  public : GALGAS_omnibusType mProperty_mResultType ;
  public : GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public : GALGAS_allocaList mProperty_mAllocaList ;

//--- Constructor
  public : cPtr_infixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                        const GALGAS_bool & in_isRequired,
                                        const GALGAS_bool & in_warnsIfUnused,
                                        const GALGAS_omnibusType & in_mTargetType,
                                        const GALGAS_string & in_mTargetVarName,
                                        const GALGAS_omnibusType & in_mSourceType,
                                        const GALGAS_string & in_mSourceVarName,
                                        const GALGAS_omnibusType & in_mResultType,
                                        const GALGAS_stringlist & in_mGeneratedInstructions,
                                        const GALGAS_allocaList & in_mAllocaList
                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mTargetType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTargetVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTargetVarName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mSourceType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSourceType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mSourceVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSourceVarName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mGeneratedInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (GALGAS_stringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (GALGAS_allocaList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @compileTimePrefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_compileTimePrefixOperatorUsage : public GALGAS_prefixOperatorUsage {
//--- Constructor
  public : GALGAS_compileTimePrefixOperatorUsage (void) ;

//---
  public : inline const class cPtr_compileTimePrefixOperatorUsage * ptr (void) const { return (const cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_compileTimePrefixOperatorUsage (const cPtr_compileTimePrefixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_compileTimePrefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_compileTimePrefixOperatorUsage constructor_new (const class GALGAS_location & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_ctExpressionAST & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_compileTimePrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_ctExpressionAST inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPrefixOperatorLocation (class GALGAS_location inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverOperandName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mPrefixOperatorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverOperandName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimePrefixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @compileTimePrefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_compileTimePrefixOperatorUsage : public cPtr_prefixOperatorUsage {
//--- Attributes
  public : GALGAS_location mProperty_mPrefixOperatorLocation ;
  public : GALGAS_lstring mProperty_mReceiverOperandName ;
  public : GALGAS_ctExpressionAST mProperty_mExpression ;

//--- Constructor
  public : cPtr_compileTimePrefixOperatorUsage (const GALGAS_location & in_mPrefixOperatorLocation,
                                                const GALGAS_lstring & in_mReceiverOperandName,
                                                const GALGAS_ctExpressionAST & in_mExpression
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_location getter_mPrefixOperatorLocation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPrefixOperatorLocation (GALGAS_location inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_ctExpressionAST getter_mExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExpression (GALGAS_ctExpressionAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @llvmPrefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_llvmPrefixOperatorUsage : public GALGAS_prefixOperatorUsage {
//--- Constructor
  public : GALGAS_llvmPrefixOperatorUsage (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_llvmPrefixOperatorUsage constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_llvmPrefixOperatorUsage * ptr (void) const { return (const cPtr_llvmPrefixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_llvmPrefixOperatorUsage (const cPtr_llvmPrefixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmPrefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmPrefixOperatorUsage constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_llvmGenerationInstructionList & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_llvmPrefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_llvmGenerationInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPrefixMangledFunctionName (class GALGAS_string inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverOperandName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPrefixMangledFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReceiverOperandName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_llvmPrefixOperatorUsage class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @llvmPrefixOperatorUsage class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_llvmPrefixOperatorUsage : public cPtr_prefixOperatorUsage {
//--- Attributes
  public : GALGAS_string mProperty_mPrefixMangledFunctionName ;
  public : GALGAS_lstring mProperty_mReceiverOperandName ;
  public : GALGAS_llvmGenerationInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_llvmPrefixOperatorUsage (const GALGAS_string & in_mPrefixMangledFunctionName,
                                         const GALGAS_lstring & in_mReceiverOperandName,
                                         const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mPrefixMangledFunctionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPrefixMangledFunctionName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mReceiverOperandName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverOperandName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_llvmGenerationInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefixOperatorRoutineIR : public GALGAS_abstractRoutineIR {
//--- Constructor
  public : GALGAS_prefixOperatorRoutineIR (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefixOperatorRoutineIR constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_prefixOperatorRoutineIR * ptr (void) const { return (const cPtr_prefixOperatorRoutineIR *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefixOperatorRoutineIR (const cPtr_prefixOperatorRoutineIR * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorRoutineIR extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefixOperatorRoutineIR constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bool & inOperand1,
                                                                        const class GALGAS_bool & inOperand2,
                                                                        const class GALGAS_omnibusType & inOperand3,
                                                                        const class GALGAS_string & inOperand4,
                                                                        const class GALGAS_omnibusType & inOperand5,
                                                                        const class GALGAS_stringlist & inOperand6,
                                                                        const class GALGAS_allocaList & inOperand7
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperatorRoutineIR & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (class GALGAS_allocaList inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (class GALGAS_stringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (class GALGAS_omnibusType inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverVarName (class GALGAS_string inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultType (class GALGAS_omnibusType inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mGeneratedInstructions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mReceiverVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorRoutineIR class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefixOperatorRoutineIR class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefixOperatorRoutineIR : public cPtr_abstractRoutineIR {
//--- Attributes
  public : GALGAS_omnibusType mProperty_mReceiverType ;
  public : GALGAS_string mProperty_mReceiverVarName ;
  public : GALGAS_omnibusType mProperty_mResultType ;
  public : GALGAS_stringlist mProperty_mGeneratedInstructions ;
  public : GALGAS_allocaList mProperty_mAllocaList ;

//--- Constructor
  public : cPtr_prefixOperatorRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                         const GALGAS_bool & in_isRequired,
                                         const GALGAS_bool & in_warnsIfUnused,
                                         const GALGAS_omnibusType & in_mReceiverType,
                                         const GALGAS_string & in_mReceiverVarName,
                                         const GALGAS_omnibusType & in_mResultType,
                                         const GALGAS_stringlist & in_mGeneratedInstructions,
                                         const GALGAS_allocaList & in_mAllocaList
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mReceiverVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMReceiverVarName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusType getter_mResultType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMResultType (GALGAS_omnibusType inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringlist getter_mGeneratedInstructions (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGeneratedInstructions (GALGAS_stringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_allocaList getter_mAllocaList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAllocaList (GALGAS_allocaList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

