#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-0.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @requiredFunctionDeclarationListAST_2D_element struct                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_requiredFunctionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mName ;

  public : GALGAS_mode mProperty_mExecutionMode ;

  public : GALGAS_bool mProperty_mIsExported ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mFormalArgumentList ;

  public : GALGAS_location mProperty_mEndOfProcLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_requiredFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_requiredFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_requiredFunctionDeclarationListAST_2D_element (const GALGAS_lstring & in_mName,
                                                                 const GALGAS_mode & in_mExecutionMode,
                                                                 const GALGAS_bool & in_mIsExported,
                                                                 const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                 const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_requiredFunctionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_requiredFunctionDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_mode & inOperand1,
                                                                                              const class GALGAS_bool & inOperand2,
                                                                                              const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                              const class GALGAS_location & inOperand4
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mExecutionMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExported (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_requiredFunctionDeclarationListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @externFunctionDeclarationListAST_2D_element struct                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_externFunctionDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mExternProcedureName ;

  public : GALGAS_mode mProperty_mMode ;

  public : GALGAS_lstringlist mProperty_mAttributeList ;

  public : GALGAS_routineFormalArgumentListAST mProperty_mProcFormalArgumentList ;

  public : GALGAS_lstring mProperty_mReturnTypeName ;

  public : GALGAS_lstring mProperty_mRoutineNameForGeneration ;

  public : GALGAS_location mProperty_mEndOfProcLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_externFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_externFunctionDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_externFunctionDeclarationListAST_2D_element (const GALGAS_lstring & in_mExternProcedureName,
                                                               const GALGAS_mode & in_mMode,
                                                               const GALGAS_lstringlist & in_mAttributeList,
                                                               const GALGAS_routineFormalArgumentListAST & in_mProcFormalArgumentList,
                                                               const GALGAS_lstring & in_mReturnTypeName,
                                                               const GALGAS_lstring & in_mRoutineNameForGeneration,
                                                               const GALGAS_location & in_mEndOfProcLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_externFunctionDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_externFunctionDeclarationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                            const class GALGAS_mode & inOperand1,
                                                                                            const class GALGAS_lstringlist & inOperand2,
                                                                                            const class GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                            const class GALGAS_lstring & inOperand4,
                                                                                            const class GALGAS_lstring & inOperand5,
                                                                                            const class GALGAS_location & inOperand6
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_externFunctionDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAttributeList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfProcLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mExternProcedureName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineFormalArgumentListAST getter_mProcFormalArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mReturnTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRoutineNameForGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_externFunctionDeclarationListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @taskListAST_2D_element struct                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_taskListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mTaskName ;

  public : GALGAS_lstringlist mProperty_mLowerPriorityTaskList ;

  public : GALGAS_lbigint mProperty_mStackSize ;

  public : GALGAS_taskSetupListAST mProperty_mTaskSetupListAST ;

  public : GALGAS_taskSetupListAST mProperty_mTaskActivateListAST ;

  public : GALGAS_taskSetupListAST mProperty_mTaskDeactivateListAST ;

  public : GALGAS_syncInstructionBranchListAST mProperty_mGuardedCommandList ;

  public : GALGAS_location mProperty_mEndOfTaskDeclaration ;

  public : GALGAS_bool mProperty_mAutoStart ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_taskListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskListAST_2D_element (const GALGAS_lstring & in_mTaskName,
                                          const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                          const GALGAS_lbigint & in_mStackSize,
                                          const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                          const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                          const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                          const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                          const GALGAS_location & in_mEndOfTaskDeclaration,
                                          const GALGAS_bool & in_mAutoStart) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_lstringlist & inOperand1,
                                                                       const class GALGAS_lbigint & inOperand2,
                                                                       const class GALGAS_taskSetupListAST & inOperand3,
                                                                       const class GALGAS_taskSetupListAST & inOperand4,
                                                                       const class GALGAS_taskSetupListAST & inOperand5,
                                                                       const class GALGAS_syncInstructionBranchListAST & inOperand6,
                                                                       const class GALGAS_location & inOperand7,
                                                                       const class GALGAS_bool & inOperand8
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mAutoStart (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mEndOfTaskDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_syncInstructionBranchListAST getter_mGuardedCommandList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mLowerPriorityTaskList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lbigint getter_mStackSize (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskActivateListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskDeactivateListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTaskName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskSetupListAST getter_mTaskSetupListAST (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @checkTargetListAST_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_checkTargetListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_location mProperty_mTargetConstructLocation ;

  public : GALGAS_lstringlist mProperty_mAcceptedTargetList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_checkTargetListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_checkTargetListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_checkTargetListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_checkTargetListAST_2D_element (const GALGAS_location & in_mTargetConstructLocation,
                                                 const GALGAS_lstringlist & in_mAcceptedTargetList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_checkTargetListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_checkTargetListAST_2D_element constructor_new (const class GALGAS_location & inOperand0,
                                                                              const class GALGAS_lstringlist & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_checkTargetListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mAcceptedTargetList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mTargetConstructLocation (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_checkTargetListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkTargetListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @driverDeclarationListAST_2D_element struct                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_driverDeclarationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_driverDeclarationAST mProperty_mDriver ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_driverDeclarationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_driverDeclarationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_driverDeclarationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_driverDeclarationListAST_2D_element (const GALGAS_driverDeclarationAST & in_mDriver) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverDeclarationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverDeclarationListAST_2D_element constructor_new (const class GALGAS_driverDeclarationAST & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_driverDeclarationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_driverDeclarationAST getter_mDriver (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_driverDeclarationListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @driverInstanciationListAST_2D_element struct                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_driverInstanciationListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mDriverName ;

  public : GALGAS_driverInstanciationArgumentListAST mProperty_mDriverInstanciationArgumentList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_driverInstanciationListAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_driverInstanciationListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_driverInstanciationListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_driverInstanciationListAST_2D_element (const GALGAS_lstring & in_mDriverName,
                                                         const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_driverInstanciationListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_driverInstanciationListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_driverInstanciationListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_driverInstanciationArgumentListAST getter_mDriverInstanciationArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDriverName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_driverInstanciationListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @controlRegisterUserAccesMapAST_2D_element struct                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_controlRegisterUserAccesMapAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_controlRegisterUserAccesMapAST_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_controlRegisterUserAccesMapAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_controlRegisterUserAccesMapAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controlRegisterUserAccesMapAST_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterUserAccesMapAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterUserAccesMapAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterUserAccesMapAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Abstract extension getter '@abstractDeclarationAST locationForErrorSignaling'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_location (*enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                                        class C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_locationForErrorSignaling (const int32_t inClassIndex,
                                                     enterExtensionGetter_abstractDeclarationAST_locationForErrorSignaling inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_location callExtensionGetter_locationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@abstractDeclarationAST enterExtension'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterExtension) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                class GALGAS_extendStaticArrayDeclarationDictAST & ioArgument0,
                                                                                class GALGAS_abstractDeclarationAST & outArgument1,
                                                                                class C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterExtension (const int32_t inClassIndex,
                                          extensionMethodSignature_abstractDeclarationAST_enterExtension inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterExtension (const class cPtr_abstractDeclarationAST * inObject,
                                         GALGAS_extendStaticArrayDeclarationDictAST & io_ioExtendStaticArrayDeclarationAST,
                                         GALGAS_abstractDeclarationAST & out_outNewDeclaration,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @routineKind enum                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routineKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_routineKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_function,
    kEnum_section,
    kEnum_service,
    kEnum_primitive
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineKind extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineKind constructor_function (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_primitive (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_section (LOCATION_ARGS) ;

  public : static class GALGAS_routineKind constructor_service (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isPrimitive (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSection (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isService (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @flatValuedObjectMap map                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_flatValuedObjectMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_flatValuedObjectMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_flatValuedObjectMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_flatValuedObjectMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inSource) ;
  public : GALGAS_flatValuedObjectMap & operator = (const GALGAS_flatValuedObjectMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_flatValuedObjectMap extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_flatValuedObjectMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_flatValuedObjectMap constructor_mapWithMapToOverride (const class GALGAS_flatValuedObjectMap & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_valuedObjectState & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_valuedObject & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_valuedObjectState constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   class GALGAS_valuedObject constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_valuedObjectState & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_valuedObject & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObjectShouldBeValuedAtEndOfScopeForKey (class GALGAS_bool constinArgument0,
                                                                                    class GALGAS_string constinArgument1,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObjectStateForKey (class GALGAS_valuedObjectState constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValuedObjectForKey (class GALGAS_valuedObject constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_valuedObjectState & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_valuedObject & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mObjectShouldBeValuedAtEndOfScopeForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_valuedObjectState getter_mObjectStateForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_valuedObject getter_mValuedObjectForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_flatValuedObjectMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_flatValuedObjectMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_flatValuedObjectMap ;
 
} ; // End of GALGAS_flatValuedObjectMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_flatValuedObjectMap : public cGenericAbstractEnumerator {
  public : cEnumerator_flatValuedObjectMap (const GALGAS_flatValuedObjectMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_valuedObjectState current_mObjectState (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;
  public : class GALGAS_valuedObject current_mValuedObject (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_flatValuedObjectMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @valuedObject enum                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_valuedObject : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_valuedObject (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_driver,
    kEnum_task,
    kEnum_globalConstant,
    kEnum_localConstant,
    kEnum_localVariable,
    kEnum_globalSyncInstance
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_valuedObject extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_valuedObject constructor_driver (const class GALGAS_omnibusType & inOperand0,
                                                                const class GALGAS_bool & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_valuedObject constructor_globalConstant (const class GALGAS_objectIR & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_valuedObject constructor_globalSyncInstance (const class GALGAS_omnibusType & inOperand0,
                                                                            const class GALGAS_lstring & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_valuedObject constructor_localConstant (const class GALGAS_omnibusType & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1,
                                                                       const class GALGAS_bool & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_valuedObject constructor_localVariable (const class GALGAS_omnibusType & inOperand0,
                                                                       const class GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_valuedObject constructor_task (const class GALGAS_omnibusType & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_valuedObject & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_driver (class GALGAS_omnibusType & outArgument0,
                                                class GALGAS_bool & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_globalConstant (class GALGAS_objectIR & outArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_globalSyncInstance (class GALGAS_omnibusType & outArgument0,
                                                            class GALGAS_lstring & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_localConstant (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_bool & outArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_localVariable (class GALGAS_omnibusType & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_task (class GALGAS_omnibusType & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDriver (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGlobalConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGlobalSyncInstance (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLocalConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLocalVariable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTask (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_valuedObject class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObject ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @valuedObjectState enum                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_valuedObjectState : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_valuedObjectState (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noValue,
    kEnum_hasUnreadValue,
    kEnum_hasReadValue
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_valuedObjectState extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_valuedObjectState constructor_hasReadValue (LOCATION_ARGS) ;

  public : static class GALGAS_valuedObjectState constructor_hasUnreadValue (LOCATION_ARGS) ;

  public : static class GALGAS_valuedObjectState constructor_noValue (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_valuedObjectState & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasReadValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasUnreadValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_valuedObjectState class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_valuedObjectState ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@flatValuedObjectMap' map                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_flatValuedObjectMap : public cMapElement {
//--- Map attributes
  public : GALGAS_valuedObjectState mProperty_mObjectState ;
  public : GALGAS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;
  public : GALGAS_valuedObject mProperty_mValuedObject ;

//--- Constructor
  public : cMapElement_flatValuedObjectMap (const GALGAS_lstring & inKey,
                                            const GALGAS_valuedObjectState & in_mObjectState,
                                            const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                            const GALGAS_valuedObject & in_mValuedObject
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @flatValuedObjectMap_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_flatValuedObjectMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_valuedObjectState mProperty_mObjectState ;

  public : GALGAS_bool mProperty_mObjectShouldBeValuedAtEndOfScope ;

  public : GALGAS_valuedObject mProperty_mValuedObject ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_flatValuedObjectMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_flatValuedObjectMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_flatValuedObjectMap_2D_element (const GALGAS_lstring & in_lkey,
                                                  const GALGAS_valuedObjectState & in_mObjectState,
                                                  const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                  const GALGAS_valuedObject & in_mValuedObject) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_flatValuedObjectMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_flatValuedObjectMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_valuedObjectState & inOperand1,
                                                                               const class GALGAS_bool & inOperand2,
                                                                               const class GALGAS_valuedObject & inOperand3
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_flatValuedObjectMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_valuedObjectState getter_mObjectState (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_valuedObject getter_mValuedObject (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_flatValuedObjectMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @scopeStack list                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_scopeStack : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_scopeStack (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_scopeStack (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_scopeKind & in_mScopeKind,
                                                  const class GALGAS_bool & in_mFirstBranch,
                                                  const class GALGAS_referenceStateMap & in_mInitialStateMap,
                                                  const class GALGAS_referenceStateMap & in_mReferenceStateMap,
                                                  const class GALGAS_lstringlist & in_mObjectList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scopeStack extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scopeStack constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_scopeStack constructor_listWithValue (const class GALGAS_scopeKind & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_referenceStateMap & inOperand2,
                                                                     const class GALGAS_referenceStateMap & inOperand3,
                                                                     const class GALGAS_lstringlist & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_scopeStack inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_scopeKind & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_referenceStateMap & inOperand2,
                                                      const class GALGAS_referenceStateMap & inOperand3,
                                                      const class GALGAS_lstringlist & inOperand4
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_scopeStack add_operation (const GALGAS_scopeStack & inOperand,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_scopeStack_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_scopeKind constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_referenceStateMap constinArgument2,
                                                       class GALGAS_referenceStateMap constinArgument3,
                                                       class GALGAS_lstringlist constinArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_scopeKind & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  class GALGAS_referenceStateMap & outArgument2,
                                                  class GALGAS_referenceStateMap & outArgument3,
                                                  class GALGAS_lstringlist & outArgument4,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_scopeKind & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 class GALGAS_referenceStateMap & outArgument2,
                                                 class GALGAS_referenceStateMap & outArgument3,
                                                 class GALGAS_lstringlist & outArgument4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_scopeKind & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_referenceStateMap & outArgument2,
                                                       class GALGAS_referenceStateMap & outArgument3,
                                                       class GALGAS_lstringlist & outArgument4,
                                                       class GALGAS_uint constinArgument5,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_scopeKind & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               class GALGAS_referenceStateMap & outArgument2,
                                               class GALGAS_referenceStateMap & outArgument3,
                                               class GALGAS_lstringlist & outArgument4,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_scopeKind & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              class GALGAS_referenceStateMap & outArgument2,
                                              class GALGAS_referenceStateMap & outArgument3,
                                              class GALGAS_lstringlist & outArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFirstBranchAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_mInitialStateMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_mReferenceStateMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scopeKind getter_mScopeKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scopeStack getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_scopeStack ;
 
} ; // End of GALGAS_scopeStack class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_scopeStack : public cGenericAbstractEnumerator {
  public : cEnumerator_scopeStack (const GALGAS_scopeStack & inEnumeratedObject,
                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_scopeKind current_mScopeKind (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mFirstBranch (LOCATION_ARGS) const ;
  public : class GALGAS_referenceStateMap current_mInitialStateMap (LOCATION_ARGS) const ;
  public : class GALGAS_referenceStateMap current_mReferenceStateMap (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mObjectList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_scopeStack_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @scopeKind enum                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_scopeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_scopeKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_selectScope,
    kEnum_repeatScope
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scopeKind extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scopeKind constructor_repeatScope (LOCATION_ARGS) ;

  public : static class GALGAS_scopeKind constructor_selectScope (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_scopeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRepeatScope (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectScope (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_scopeKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @referenceStateMap map                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_referenceStateMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_referenceStateMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_referenceStateMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_referenceStateMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_referenceStateMap (const GALGAS_referenceStateMap & inSource) ;
  public : GALGAS_referenceStateMap & operator = (const GALGAS_referenceStateMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_referenceStateMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_referenceStateMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_referenceStateMap constructor_mapWithMapToOverride (const class GALGAS_referenceStateMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_valuedObjectState & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_valuedObjectState constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStateForKey (class GALGAS_valuedObjectState constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_valuedObjectState & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_valuedObjectState getter_mStateForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_referenceStateMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_referenceStateMap ;
 
} ; // End of GALGAS_referenceStateMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_referenceStateMap : public cGenericAbstractEnumerator {
  public : cEnumerator_referenceStateMap (const GALGAS_referenceStateMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_valuedObjectState current_mState (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_referenceStateMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@referenceStateMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_referenceStateMap : public cMapElement {
//--- Map attributes
  public : GALGAS_valuedObjectState mProperty_mState ;

//--- Constructor
  public : cMapElement_referenceStateMap (const GALGAS_lstring & inKey,
                                          const GALGAS_valuedObjectState & in_mState
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @scopeStack_2D_element struct                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_scopeStack_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_scopeKind mProperty_mScopeKind ;

  public : GALGAS_bool mProperty_mFirstBranch ;

  public : GALGAS_referenceStateMap mProperty_mInitialStateMap ;

  public : GALGAS_referenceStateMap mProperty_mReferenceStateMap ;

  public : GALGAS_lstringlist mProperty_mObjectList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_scopeStack_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_scopeStack_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_scopeStack_2D_element (const GALGAS_scopeKind & in_mScopeKind,
                                         const GALGAS_bool & in_mFirstBranch,
                                         const GALGAS_referenceStateMap & in_mInitialStateMap,
                                         const GALGAS_referenceStateMap & in_mReferenceStateMap,
                                         const GALGAS_lstringlist & in_mObjectList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_scopeStack_2D_element extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_scopeStack_2D_element constructor_new (const class GALGAS_scopeKind & inOperand0,
                                                                      const class GALGAS_bool & inOperand1,
                                                                      const class GALGAS_referenceStateMap & inOperand2,
                                                                      const class GALGAS_referenceStateMap & inOperand3,
                                                                      const class GALGAS_lstringlist & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_scopeStack_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mFirstBranch (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_mInitialStateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObjectList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_referenceStateMap getter_mReferenceStateMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_scopeKind getter_mScopeKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_scopeStack_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeStack_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @omnibusTypeAttributes struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_omnibusTypeAttributes : public AC_GALGAS_root {
//--------------------------------- Properties
  private : uint64_t mFlags ;
  private : bool mIsValid ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_omnibusTypeAttributes (void) ;

//--------------------------------- Private constructor
  private : GALGAS_omnibusTypeAttributes (const uint64_t inFlags) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_omnibusTypeAttributes extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_omnibusTypeAttributes constructor_all (LOCATION_ARGS) ;

  public : static class GALGAS_omnibusTypeAttributes constructor_copyable (LOCATION_ARGS) ;

  public : static class GALGAS_omnibusTypeAttributes constructor_instanciable (LOCATION_ARGS) ;

  public : static class GALGAS_omnibusTypeAttributes constructor_none (LOCATION_ARGS) ;

//--------------------------------- & operator
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_and (const GALGAS_omnibusTypeAttributes & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- | operator
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_or (const GALGAS_omnibusTypeAttributes & inOperand
                                                                      COMMA_LOCATION_ARGS) const ;

//--------------------------------- ^ operator
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_xor (const GALGAS_omnibusTypeAttributes & inOperand
                                                                       COMMA_LOCATION_ARGS) const ;

//--------------------------------- ~ operator
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes operator_tilde (LOCATION_ARGS) const ;

//--------------------------------- - operator
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes substract_operation (const GALGAS_omnibusTypeAttributes & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_omnibusTypeAttributes & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_all (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_copyable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_instanciable (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_none (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_omnibusTypeAttributes class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusTypeAttributes ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @omnibusType class                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_omnibusType : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_omnibusType (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_omnibusType constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_omnibusType * ptr (void) const { return (const cPtr_omnibusType *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_omnibusType (const cPtr_omnibusType * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_omnibusType extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_omnibusType constructor_new (const class GALGAS_subscript & inOperand0,
                                                            const class GALGAS_omnibusTypeAttributes & inOperand1,
                                                            const class GALGAS_string & inOperand2,
                                                            const class GALGAS_typeKind & inOperand3,
                                                            const class GALGAS_string & inOperand4
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_omnibusType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusTypeAttributes getter_attributes (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_kind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_llvmBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_omnibusTypeDescriptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_subscript getter_subscript (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_omnibusType class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @subscript enum                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_subscript : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_subscript (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_noSubscript,
    kEnum_staticSubscript,
    kEnum_literalString
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_subscript extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_subscript constructor_literalString (LOCATION_ARGS) ;

  public : static class GALGAS_subscript constructor_noSubscript (LOCATION_ARGS) ;

  public : static class GALGAS_subscript constructor_staticSubscript (const class GALGAS_omnibusType & inOperand0,
                                                                      const class GALGAS_bigint & inOperand1
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_subscript & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_staticSubscript (class GALGAS_omnibusType & outArgument0,
                                                         class GALGAS_bigint & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNoSubscript (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStaticSubscript (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_subscript class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscript ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @subscript enum, associated values                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_subscript_staticSubscript : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_subscript_staticSubscript (const GALGAS_omnibusType & inAssociatedValue0,
                                                            const GALGAS_bigint & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_subscript_staticSubscript (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @typeKind enum                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_typeKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
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
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKind extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeKind constructor_boolean (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_compileTimeBool (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_compileTimeInteger (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_dynamicArrayType (const class GALGAS_omnibusType & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_enumeration (const class GALGAS_uint & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_function (const class GALGAS_mode & inOperand0,
                                                              const class GALGAS_routineTypedSignature & inOperand1,
                                                              const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_generic (const class GALGAS_genericFormalParameterList & inOperand0,
                                                             const class GALGAS_ctExpressionAST & inOperand1,
                                                             const class GALGAS_llvmStringDefinition & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_integer (const class GALGAS_bigint & inOperand0,
                                                             const class GALGAS_bigint & inOperand1,
                                                             const class GALGAS_bool & inOperand2,
                                                             const class GALGAS_uint & inOperand3
                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_literalString (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_llvmType (const class GALGAS_bigint & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_opaque (const class GALGAS_bigint & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_staticArrayType (const class GALGAS_omnibusType & inOperand0,
                                                                     const class GALGAS_bigint & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_structure (const class GALGAS_propertyList & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_syncTool (LOCATION_ARGS) ;

  public : static class GALGAS_typeKind constructor_void (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_dynamicArrayType (class GALGAS_omnibusType & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_enumeration (class GALGAS_uint & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_function (class GALGAS_mode & outArgument0,
                                                  class GALGAS_routineTypedSignature & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_generic (class GALGAS_genericFormalParameterList & outArgument0,
                                                 class GALGAS_ctExpressionAST & outArgument1,
                                                 class GALGAS_llvmStringDefinition & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_integer (class GALGAS_bigint & outArgument0,
                                                 class GALGAS_bigint & outArgument1,
                                                 class GALGAS_bool & outArgument2,
                                                 class GALGAS_uint & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmType (class GALGAS_bigint & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_opaque (class GALGAS_bigint & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_staticArrayType (class GALGAS_omnibusType & outArgument0,
                                                         class GALGAS_bigint & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_structure (class GALGAS_propertyList & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolean (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTimeBool (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isCompileTimeInteger (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isDynamicArrayType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnumeration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFunction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGeneric (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isInteger (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOpaque (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStaticArrayType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructure (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSyncTool (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVoid (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @llvmStringDefinition list                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_llvmStringDefinition : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_llvmStringDefinition (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_llvmStringDefinition (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_llvmStringDefinitionElement & in_mElement
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_llvmStringDefinition extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_llvmStringDefinition constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_llvmStringDefinition constructor_listWithValue (const class GALGAS_llvmStringDefinitionElement & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_llvmStringDefinition inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_llvmStringDefinitionElement & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_llvmStringDefinition add_operation (const GALGAS_llvmStringDefinition & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_llvmStringDefinition_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_llvmStringDefinitionElement constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_llvmStringDefinitionElement & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinitionElement getter_mElementAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinition getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinition getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_llvmStringDefinition getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_llvmStringDefinition ;
 
} ; // End of GALGAS_llvmStringDefinition class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_llvmStringDefinition : public cGenericAbstractEnumerator {
  public : cEnumerator_llvmStringDefinition (const GALGAS_llvmStringDefinition & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_llvmStringDefinitionElement current_mElement (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_llvmStringDefinition_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmStringDefinition ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @propertyList list                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_propertyList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_propertyList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_propertyList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mPropertyName,
                                                  const class GALGAS_omnibusType & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_propertyList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                       const class GALGAS_omnibusType & inOperand1
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_propertyList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_propertyList add_operation (const GALGAS_propertyList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_propertyList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_omnibusType constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_omnibusType & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_omnibusType & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_propertyList ;
 
} ; // End of GALGAS_propertyList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_propertyList : public cGenericAbstractEnumerator {
  public : cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @routineTypedSignature list                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routineTypedSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_routineTypedSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_routineTypedSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                  const class GALGAS_lstring & in_mSelector,
                                                  const class GALGAS_unifiedTypeMap_2D_proxy & in_mTypeProxy,
                                                  const class GALGAS_lstring & in_mFormalArgumentName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineTypedSignature extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineTypedSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_routineTypedSignature constructor_listWithValue (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                const class GALGAS_lstring & inOperand1,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                const class GALGAS_lstring & inOperand3
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_routineTypedSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                      const class GALGAS_lstring & inOperand1,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                      const class GALGAS_lstring & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_routineTypedSignature add_operation (const GALGAS_routineTypedSignature & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_routineTypedSignature_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_procFormalArgumentPassingMode constinArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy constinArgument2,
                                                       class GALGAS_lstring constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                  class GALGAS_lstring & outArgument1,
                                                  class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                  class GALGAS_lstring & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                 class GALGAS_lstring & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                                       class GALGAS_lstring & outArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                                       class GALGAS_lstring & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                               class GALGAS_lstring & outArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                               class GALGAS_lstring & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_procFormalArgumentPassingMode & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              class GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                              class GALGAS_lstring & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormalArgumentNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_procFormalArgumentPassingMode getter_mFormalArgumentPassingModeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mTypeProxyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineTypedSignature ;
 
} ; // End of GALGAS_routineTypedSignature class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_routineTypedSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_routineTypedSignature (const GALGAS_routineTypedSignature & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_procFormalArgumentPassingMode current_mFormalArgumentPassingMode (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mFormalArgumentName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineTypedSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @unifiedTypeMap_2D_proxy map proxy                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_unifiedTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeOptionalProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                                       class GALGAS_lstring constinArgument1,
                                                       class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                       COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_type (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_proxy class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @typeKind enum, associated values                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_enumeration : public cEnumAssociatedValues {
  public : const GALGAS_uint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_enumeration (const GALGAS_uint & inAssociatedValue0
                                                       COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_enumeration (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_structure : public cEnumAssociatedValues {
  public : const GALGAS_propertyList mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_structure (const GALGAS_propertyList & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_structure (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_integer : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;
  public : const GALGAS_bigint mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_uint mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_integer (const GALGAS_bigint & inAssociatedValue0,
                                                   const GALGAS_bigint & inAssociatedValue1,
                                                   const GALGAS_bool & inAssociatedValue2,
                                                   const GALGAS_uint & inAssociatedValue3
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_integer (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_llvmType : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_llvmType (const GALGAS_bigint & inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_llvmType (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_generic : public cEnumAssociatedValues {
  public : const GALGAS_genericFormalParameterList mAssociatedValue0 ;
  public : const GALGAS_ctExpressionAST mAssociatedValue1 ;
  public : const GALGAS_llvmStringDefinition mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_generic (const GALGAS_genericFormalParameterList & inAssociatedValue0,
                                                   const GALGAS_ctExpressionAST & inAssociatedValue1,
                                                   const GALGAS_llvmStringDefinition & inAssociatedValue2
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_generic (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_opaque : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_opaque (const GALGAS_bigint & inAssociatedValue0
                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_opaque (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_staticArrayType : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_staticArrayType (const GALGAS_omnibusType & inAssociatedValue0,
                                                           const GALGAS_bigint & inAssociatedValue1
                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_staticArrayType (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_dynamicArrayType : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_dynamicArrayType (const GALGAS_omnibusType & inAssociatedValue0
                                                            COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_dynamicArrayType (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_typeKind_function : public cEnumAssociatedValues {
  public : const GALGAS_mode mAssociatedValue0 ;
  public : const GALGAS_routineTypedSignature mAssociatedValue1 ;
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_typeKind_function (const GALGAS_mode & inAssociatedValue0,
                                                    const GALGAS_routineTypedSignature & inAssociatedValue1,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue2
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_typeKind_function (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Pointer class for @omnibusType class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_omnibusType : public acPtr_class {
//--- Attributes
  public : GALGAS_subscript mProperty_subscript ;
  public : GALGAS_omnibusTypeAttributes mProperty_attributes ;
  public : GALGAS_string mProperty_omnibusTypeDescriptionName ;
  public : GALGAS_typeKind mProperty_kind ;
  public : GALGAS_string mProperty_llvmBaseTypeName ;

//--- Constructor
  public : cPtr_omnibusType (const GALGAS_subscript & in_subscript,
                             const GALGAS_omnibusTypeAttributes & in_attributes,
                             const GALGAS_string & in_omnibusTypeDescriptionName,
                             const GALGAS_typeKind & in_kind,
                             const GALGAS_string & in_llvmBaseTypeName
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_subscript getter_subscript (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_omnibusTypeAttributes getter_attributes (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_omnibusTypeDescriptionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_kind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_llvmBaseTypeName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @sortedOperandIRList sorted list                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_sortedOperandIRList : public AC_GALGAS_sortedlist {
//--------------------------------- Default constructor
  public : GALGAS_sortedOperandIRList (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_sortedOperandIRList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_sortedOperandIRList constructor_emptySortedList (LOCATION_ARGS) ;

  public : static class GALGAS_sortedOperandIRList constructor_sortedListWithValue (const class GALGAS_objectIR & inOperand0,
                                                                                    const class GALGAS_uint & inOperand1
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_sortedOperandIRList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_objectIR & inOperand0,
                                                      const class GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_popGreatest (class GALGAS_objectIR & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popSmallest (class GALGAS_objectIR & outArgument0,
                                                     class GALGAS_uint & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_greatest (class GALGAS_objectIR & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_smallest (class GALGAS_objectIR & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_sortedOperandIRList ;
 
} ; // End of GALGAS_sortedOperandIRList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_sortedOperandIRList : public cGenericAbstractEnumerator {
  public : cEnumerator_sortedOperandIRList (const GALGAS_sortedOperandIRList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_objectIR current_mOperand (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_sortedOperandIRList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedOperandIRList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @objectIR enum                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_objectIR : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_objectIR (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_void,
    kEnum_reference,
    kEnum_null,
    kEnum_llvmValue,
    kEnum_literalInteger,
    kEnum_llvmStructureValue,
    kEnum_literalString,
    kEnum_zero,
    kEnum_llvmArrayStaticValues,
    kEnum_llvmArrayDynamicValues,
    kEnum_llvmArrayRepeatedStaticValue,
    kEnum_llvmArrayRepeatedDynamicValue
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_objectIR extractObject (const GALGAS_object & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_objectIR constructor_literalInteger (const class GALGAS_omnibusType & inOperand0,
                                                                    const class GALGAS_bigint & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_literalString (const class GALGAS_uint & inOperand0,
                                                                   const class GALGAS_uint & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_llvmArrayDynamicValues (const class GALGAS_omnibusType & inOperand0,
                                                                            const class GALGAS_operandIRList & inOperand1
                                                                            COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_llvmArrayRepeatedDynamicValue (const class GALGAS_omnibusType & inOperand0,
                                                                                   const class GALGAS_uint & inOperand1,
                                                                                   const class GALGAS_objectIR & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_llvmArrayRepeatedStaticValue (const class GALGAS_omnibusType & inOperand0,
                                                                                  const class GALGAS_uint & inOperand1,
                                                                                  const class GALGAS_objectIR & inOperand2,
                                                                                  const class GALGAS_uint & inOperand3
                                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_llvmArrayStaticValues (const class GALGAS_omnibusType & inOperand0,
                                                                           const class GALGAS_operandIRList & inOperand1,
                                                                           const class GALGAS_uint & inOperand2
                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_llvmStructureValue (const class GALGAS_omnibusType & inOperand0,
                                                                        const class GALGAS_sortedOperandIRList & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_llvmValue (const class GALGAS_omnibusType & inOperand0,
                                                               const class GALGAS_string & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_null (const class GALGAS_omnibusType & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_reference (const class GALGAS_omnibusType & inOperand0,
                                                               const class GALGAS_string & inOperand1
                                                               COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_void (LOCATION_ARGS) ;

  public : static class GALGAS_objectIR constructor_zero (const class GALGAS_omnibusType & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_objectIR & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_literalInteger (class GALGAS_omnibusType & outArgument0,
                                                        class GALGAS_bigint & outArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_literalString (class GALGAS_uint & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmArrayDynamicValues (class GALGAS_omnibusType & outArgument0,
                                                                class GALGAS_operandIRList & outArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmArrayRepeatedDynamicValue (class GALGAS_omnibusType & outArgument0,
                                                                       class GALGAS_uint & outArgument1,
                                                                       class GALGAS_objectIR & outArgument2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmArrayRepeatedStaticValue (class GALGAS_omnibusType & outArgument0,
                                                                      class GALGAS_uint & outArgument1,
                                                                      class GALGAS_objectIR & outArgument2,
                                                                      class GALGAS_uint & outArgument3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmArrayStaticValues (class GALGAS_omnibusType & outArgument0,
                                                               class GALGAS_operandIRList & outArgument1,
                                                               class GALGAS_uint & outArgument2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmStructureValue (class GALGAS_omnibusType & outArgument0,
                                                            class GALGAS_sortedOperandIRList & outArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_llvmValue (class GALGAS_omnibusType & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_null (class GALGAS_omnibusType & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_reference (class GALGAS_omnibusType & outArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_zero (class GALGAS_omnibusType & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralInteger (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLiteralString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayDynamicValues (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayRepeatedDynamicValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayRepeatedStaticValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmArrayStaticValues (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmStructureValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLlvmValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isVoid (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isZero (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_objectIR class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_objectIR ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @operandIRList list                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_operandIRList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_operandIRList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_operandIRList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_objectIR & in_mOperand
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_operandIRList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_operandIRList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_operandIRList constructor_listWithValue (const class GALGAS_objectIR & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_operandIRList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_objectIR & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_operandIRList add_operation (const GALGAS_operandIRList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_operandIRList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_objectIR constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_objectIR & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_objectIR & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_objectIR & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_objectIR & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_objectIR & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mOperandAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_operandIRList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_operandIRList ;
 
} ; // End of GALGAS_operandIRList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_operandIRList : public cGenericAbstractEnumerator {
  public : cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_objectIR current_mOperand (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_operandIRList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_operandIRList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @objectIR enum, associated values                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_reference : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_reference (const GALGAS_omnibusType & inAssociatedValue0,
                                                     const GALGAS_string & inAssociatedValue1
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_reference (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_null : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_null (const GALGAS_omnibusType & inAssociatedValue0
                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_null (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_llvmValue : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_llvmValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                     const GALGAS_string & inAssociatedValue1
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_llvmValue (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_literalInteger : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_bigint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_omnibusType & inAssociatedValue0,
                                                          const GALGAS_bigint & inAssociatedValue1
                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_literalInteger (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_llvmStructureValue : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_sortedOperandIRList mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_llvmStructureValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                              const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_llvmStructureValue (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_literalString : public cEnumAssociatedValues {
  public : const GALGAS_uint mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_literalString (const GALGAS_uint & inAssociatedValue0,
                                                         const GALGAS_uint & inAssociatedValue1
                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_literalString (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_zero : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_zero (const GALGAS_omnibusType & inAssociatedValue0
                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_zero (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_llvmArrayStaticValues : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_operandIRList mAssociatedValue1 ;
  public : const GALGAS_uint mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_llvmArrayStaticValues (const GALGAS_omnibusType & inAssociatedValue0,
                                                                 const GALGAS_operandIRList & inAssociatedValue1,
                                                                 const GALGAS_uint & inAssociatedValue2
                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_llvmArrayStaticValues (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_llvmArrayDynamicValues : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_operandIRList mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (const GALGAS_omnibusType & inAssociatedValue0,
                                                                  const GALGAS_operandIRList & inAssociatedValue1
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;
  public : const GALGAS_objectIR mAssociatedValue2 ;
  public : const GALGAS_uint mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                        const GALGAS_uint & inAssociatedValue1,
                                                                        const GALGAS_objectIR & inAssociatedValue2,
                                                                        const GALGAS_uint & inAssociatedValue3
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;
  public : const GALGAS_objectIR mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                                         const GALGAS_uint & inAssociatedValue1,
                                                                         const GALGAS_objectIR & inAssociatedValue2
                                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @valuedObject enum, associated values                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_valuedObject_driver : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_valuedObject_driver (const GALGAS_omnibusType & inAssociatedValue0,
                                                      const GALGAS_bool & inAssociatedValue1
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_valuedObject_driver (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_valuedObject_task : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_valuedObject_task (const GALGAS_omnibusType & inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_valuedObject_task (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_valuedObject_globalConstant : public cEnumAssociatedValues {
  public : const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_valuedObject_globalConstant (const GALGAS_objectIR & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_valuedObject_globalConstant (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_valuedObject_localConstant : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_valuedObject_localConstant (const GALGAS_omnibusType & inAssociatedValue0,
                                                             const GALGAS_lstring & inAssociatedValue1,
                                                             const GALGAS_bool & inAssociatedValue2
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_valuedObject_localConstant (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_valuedObject_localVariable : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_valuedObject_localVariable (const GALGAS_omnibusType & inAssociatedValue0,
                                                             const GALGAS_lstring & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_valuedObject_localVariable (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_valuedObject_globalSyncInstance : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_valuedObject_globalSyncInstance (const GALGAS_omnibusType & inAssociatedValue0,
                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                  COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_valuedObject_globalSyncInstance (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @referenceStateMap_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_referenceStateMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_valuedObjectState mProperty_mState ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_referenceStateMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_referenceStateMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_valuedObjectState & in_mState) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_referenceStateMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_referenceStateMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_valuedObjectState & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_referenceStateMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_valuedObjectState getter_mState (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_referenceStateMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension getter '@valuedObjectState string' (as function)                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_string (const class GALGAS_valuedObjectState & inObject,
                                            class C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @semanticTypePrecedenceGraph graph                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_semanticTypePrecedenceGraph : public AC_GALGAS_graph {
//--------------------------------- Default constructor
  public : GALGAS_semanticTypePrecedenceGraph (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticTypePrecedenceGraph extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticTypePrecedenceGraph constructor_emptyGraph (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_addNode (class GALGAS_lstring inArgument0,
                                                 class GALGAS_abstractDeclarationAST inArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_circularities (class GALGAS_declarationListAST & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_depthFirstTopologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                                   class GALGAS_lstringlist & outArgument1,
                                                                   class GALGAS_declarationListAST & outArgument2,
                                                                   class GALGAS_lstringlist & outArgument3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoPredecessor (class GALGAS_declarationListAST & outArgument0,
                                                                class GALGAS_lstringlist & outArgument1
                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_nodesWithNoSuccessor (class GALGAS_declarationListAST & outArgument0,
                                                              class GALGAS_lstringlist & outArgument1
                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_topologicalSort (class GALGAS_declarationListAST & outArgument0,
                                                         class GALGAS_lstringlist & outArgument1,
                                                         class GALGAS_declarationListAST & outArgument2,
                                                         class GALGAS_lstringlist & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_accessibleNodesFrom (const class GALGAS_lstringlist & constinOperand0,
                                                                                 const class GALGAS_stringset & constinOperand1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_reversedGraph (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_semanticTypePrecedenceGraph getter_subgraphFromNodes (const class GALGAS_lstringlist & constinOperand0,
                                                                                               const class GALGAS_stringset & constinOperand1,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticTypePrecedenceGraph class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension setter '@semanticTypePrecedenceGraph noteUINTType'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_noteUINTType (class GALGAS_semanticTypePrecedenceGraph & ioObject,
                                   const class GALGAS_uint constin_inBitSize,
                                   const class GALGAS_location constin_inErrorLocation,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                        class GALGAS_semanticTypePrecedenceGraph & ioArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInPrecedenceGraph (const class cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Abstract extension getter '@abstractDeclarationAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling) (const class cPtr_abstractDeclarationAST * inObject,
                                                                                                               class C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_keyRepresentationForErrorSignaling (const int32_t inClassIndex,
                                                              enterExtensionGetter_abstractDeclarationAST_keyRepresentationForErrorSignaling inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_keyRepresentationForErrorSignaling (const class cPtr_abstractDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @compileTimeDeclarationBarrierAST class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_compileTimeDeclarationBarrierAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_compileTimeDeclarationBarrierAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_compileTimeDeclarationBarrierAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_compileTimeDeclarationBarrierAST * ptr (void) const { return (const cPtr_compileTimeDeclarationBarrierAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_compileTimeDeclarationBarrierAST (const cPtr_compileTimeDeclarationBarrierAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_compileTimeDeclarationBarrierAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_compileTimeDeclarationBarrierAST constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_compileTimeDeclarationBarrierAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_compileTimeDeclarationBarrierAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeDeclarationBarrierAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Pointer class for @compileTimeDeclarationBarrierAST class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_compileTimeDeclarationBarrierAST : public cPtr_abstractDeclarationAST {
//--- Attributes

//--- Constructor
  public : cPtr_compileTimeDeclarationBarrierAST (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @panicRoutinePriorityMap map                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_panicRoutinePriorityMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchSetupKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_panicRoutinePriorityMap_searchLoopKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_panicRoutinePriorityMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_panicRoutinePriorityMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inSource) ;
  public : GALGAS_panicRoutinePriorityMap & operator = (const GALGAS_panicRoutinePriorityMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicRoutinePriorityMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicRoutinePriorityMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_panicRoutinePriorityMap constructor_mapWithMapToOverride (const class GALGAS_panicRoutinePriorityMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertLoopKey (class GALGAS_lstring constinArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertSetupKey (class GALGAS_lstring constinArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchLoopKey (class GALGAS_lstring constinArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_searchSetupKey (class GALGAS_lstring constinArgument0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_panicRoutinePriorityMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_panicRoutinePriorityMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_panicRoutinePriorityMap ;
 
} ; // End of GALGAS_panicRoutinePriorityMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_panicRoutinePriorityMap : public cGenericAbstractEnumerator {
  public : cEnumerator_panicRoutinePriorityMap (const GALGAS_panicRoutinePriorityMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_panicRoutinePriorityMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@panicRoutinePriorityMap' map                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_panicRoutinePriorityMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_panicRoutinePriorityMap (const GALGAS_lstring & inKey
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @panicRoutinePriorityMap_2D_element struct                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_panicRoutinePriorityMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_panicRoutinePriorityMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_panicRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_panicRoutinePriorityMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_panicRoutinePriorityMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_panicRoutinePriorityMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_panicRoutinePriorityMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @routineMapForContext map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_routineMapForContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_routineMapForContext_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routineMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_routineMapForContext (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineMapForContext (const GALGAS_routineMapForContext & inSource) ;
  public : GALGAS_routineMapForContext & operator = (const GALGAS_routineMapForContext & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMapForContext extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineMapForContext constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_routineMapForContext constructor_mapWithMapToOverride (const class GALGAS_routineMapForContext & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_routineTypedSignature & inOperand2,
                                                      const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                      const class GALGAS_routineLLVMNameDict & inOperand4,
                                                      const class GALGAS_bool & inOperand5,
                                                      const class GALGAS_mode & inOperand6,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_routineTypedSignature constinArgument2,
                                                   class GALGAS_unifiedTypeMap_2D_proxy constinArgument3,
                                                   class GALGAS_routineLLVMNameDict constinArgument4,
                                                   class GALGAS_bool constinArgument5,
                                                   class GALGAS_mode constinArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionModeForKey (class GALGAS_mode constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsExportedForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModeDictionaryForKey (class GALGAS_routineLLVMNameDict constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReturnTypeProxyForKey (class GALGAS_unifiedTypeMap_2D_proxy constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_routineTypedSignature constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_routineTypedSignature & outArgument2,
                                                   class GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                   class GALGAS_routineLLVMNameDict & outArgument4,
                                                   class GALGAS_bool & outArgument5,
                                                   class GALGAS_mode & outArgument6,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mFunctionModeForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExportedForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineLLVMNameDict getter_mModeDictionaryForKey (const class GALGAS_string & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnTypeProxyForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineMapForContext getter_overriddenMap (C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_routineMapForContext * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & inKey
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_routineMapForContext ;
 
} ; // End of GALGAS_routineMapForContext class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_routineMapForContext : public cGenericAbstractEnumerator {
  public : cEnumerator_routineMapForContext (const GALGAS_routineMapForContext & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_unifiedTypeMap_2D_proxy current_mReturnTypeProxy (LOCATION_ARGS) const ;
  public : class GALGAS_routineLLVMNameDict current_mModeDictionary (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsExported (LOCATION_ARGS) const ;
  public : class GALGAS_mode current_mFunctionMode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineMapForContext_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @routineLLVMNameDict dict                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSharedDictRoot_routineLLVMNameDict ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routineLLVMNameDict : public AC_GALGAS_root {
//--------------------------------- Attributes
  private : cSharedDictRoot_routineLLVMNameDict * mSharedDict ;

//--------------------------------- Default constructor
  public : GALGAS_routineLLVMNameDict (void) ;

//--------------------------------- Destructor
  public : virtual ~ GALGAS_routineLLVMNameDict (void) ;

//--------------------------------- Handle copy
  public : GALGAS_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inSource) ;
  public : GALGAS_routineLLVMNameDict & operator = (const GALGAS_routineLLVMNameDict & inSource) ;

//--- isValid
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedDict != NULL ; }

//--- drop
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--- Implementation of reader 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;

//--- Insulate
  private : void insulate (LOCATION_ARGS) ;

//--- Object compare
  public : VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const GALGAS_routineLLVMNameDict & inOperand) const ;

//--- Enumeration
  public : void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineLLVMNameDict extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineLLVMNameDict constructor_emptyDict (LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_mode & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_removeKey (class GALGAS_mode constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRoutineLLVMNameForKey (class GALGAS_string constinArgument0,
                                                                   class GALGAS_mode constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_mode constinArgument0,
                                                   class GALGAS_string & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_hasKey (const class GALGAS_mode & constinOperand0
                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRoutineLLVMNameForKey (const class GALGAS_mode & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_routineLLVMNameDict ;
 
} ; // End of GALGAS_routineLLVMNameDict class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_routineLLVMNameDict : public cGenericAbstractEnumerator {
  public : cEnumerator_routineLLVMNameDict (const GALGAS_routineLLVMNameDict & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_mode current_key (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mRoutineLLVMName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_routineLLVMNameDict_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineLLVMNameDict ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@routineMapForContext' map                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_routineMapForContext : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mProperty_mIsPublic ;
  public : GALGAS_routineTypedSignature mProperty_mSignature ;
  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnTypeProxy ;
  public : GALGAS_routineLLVMNameDict mProperty_mModeDictionary ;
  public : GALGAS_bool mProperty_mIsExported ;
  public : GALGAS_mode mProperty_mFunctionMode ;

//--- Constructor
  public : cMapElement_routineMapForContext (const GALGAS_lstring & inKey,
                                             const GALGAS_bool & in_mIsPublic,
                                             const GALGAS_routineTypedSignature & in_mSignature,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnTypeProxy,
                                             const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                             const GALGAS_bool & in_mIsExported,
                                             const GALGAS_mode & in_mFunctionMode
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @routineMapForContext_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routineMapForContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bool mProperty_mIsPublic ;

  public : GALGAS_routineTypedSignature mProperty_mSignature ;

  public : GALGAS_unifiedTypeMap_2D_proxy mProperty_mReturnTypeProxy ;

  public : GALGAS_routineLLVMNameDict mProperty_mModeDictionary ;

  public : GALGAS_bool mProperty_mIsExported ;

  public : GALGAS_mode mProperty_mFunctionMode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_routineMapForContext_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_routineMapForContext_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_routineMapForContext_2D_element (const GALGAS_lstring & in_lkey,
                                                   const GALGAS_bool & in_mIsPublic,
                                                   const GALGAS_routineTypedSignature & in_mSignature,
                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnTypeProxy,
                                                   const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                   const GALGAS_bool & in_mIsExported,
                                                   const GALGAS_mode & in_mFunctionMode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_routineMapForContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_routineMapForContext_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                const class GALGAS_bool & inOperand1,
                                                                                const class GALGAS_routineTypedSignature & inOperand2,
                                                                                const class GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                const class GALGAS_routineLLVMNameDict & inOperand4,
                                                                                const class GALGAS_bool & inOperand5,
                                                                                const class GALGAS_mode & inOperand6
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_routineMapForContext_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mode getter_mFunctionMode (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsExported (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineLLVMNameDict getter_mModeDictionary (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_unifiedTypeMap_2D_proxy getter_mReturnTypeProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_routineMapForContext_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @guardMapForContext map                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_guardMapForContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_guardMapForContext_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_guardMapForContext : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_guardMapForContext (void) ;

//--------------------------------- Handle copy
  public : GALGAS_guardMapForContext (const GALGAS_guardMapForContext & inSource) ;
  public : GALGAS_guardMapForContext & operator = (const GALGAS_guardMapForContext & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardMapForContext extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardMapForContext constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_guardMapForContext constructor_mapWithMapToOverride (const class GALGAS_guardMapForContext & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_routineTypedSignature & inOperand2,
                                                      const class GALGAS_lstring & inOperand3,
                                                      const class GALGAS_lstring & inOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_routineTypedSignature constinArgument2,
                                                   class GALGAS_lstring constinArgument3,
                                                   class GALGAS_lstring constinArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMImplementationRoutineLLVMNameForKey (class GALGAS_lstring constinArgument0,
                                                                                 class GALGAS_string constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_routineTypedSignature constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserRoutineLLVMNameForKey (class GALGAS_lstring constinArgument0,
                                                                       class GALGAS_string constinArgument1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_routineTypedSignature & outArgument2,
                                                   class GALGAS_lstring & outArgument3,
                                                   class GALGAS_lstring & outArgument4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImplementationRoutineLLVMNameForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mUserRoutineLLVMNameForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_guardMapForContext getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_guardMapForContext * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_guardMapForContext ;
 
} ; // End of GALGAS_guardMapForContext class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_guardMapForContext : public cGenericAbstractEnumerator {
  public : cEnumerator_guardMapForContext (const GALGAS_guardMapForContext & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_routineTypedSignature current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mUserRoutineLLVMName (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_guardMapForContext_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@guardMapForContext' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_guardMapForContext : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mProperty_mIsPublic ;
  public : GALGAS_routineTypedSignature mProperty_mSignature ;
  public : GALGAS_lstring mProperty_mUserRoutineLLVMName ;
  public : GALGAS_lstring mProperty_mImplementationRoutineLLVMName ;

//--- Constructor
  public : cMapElement_guardMapForContext (const GALGAS_lstring & inKey,
                                           const GALGAS_bool & in_mIsPublic,
                                           const GALGAS_routineTypedSignature & in_mSignature,
                                           const GALGAS_lstring & in_mUserRoutineLLVMName,
                                           const GALGAS_lstring & in_mImplementationRoutineLLVMName
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @guardMapForContext_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_guardMapForContext_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bool mProperty_mIsPublic ;

  public : GALGAS_routineTypedSignature mProperty_mSignature ;

  public : GALGAS_lstring mProperty_mUserRoutineLLVMName ;

  public : GALGAS_lstring mProperty_mImplementationRoutineLLVMName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_guardMapForContext_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_guardMapForContext_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_guardMapForContext_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_bool & in_mIsPublic,
                                                 const GALGAS_routineTypedSignature & in_mSignature,
                                                 const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                 const GALGAS_lstring & in_mImplementationRoutineLLVMName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_guardMapForContext_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_guardMapForContext_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_bool & inOperand1,
                                                                              const class GALGAS_routineTypedSignature & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3,
                                                                              const class GALGAS_lstring & inOperand4
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_guardMapForContext_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mImplementationRoutineLLVMName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_routineTypedSignature getter_mSignature (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mUserRoutineLLVMName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_guardMapForContext_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @controlRegisterGroupMap map                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_controlRegisterGroupMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_controlRegisterGroupMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterGroupMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inSource) ;
  public : GALGAS_controlRegisterGroupMap & operator = (const GALGAS_controlRegisterGroupMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterGroupMap extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterGroupMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterGroupMap constructor_mapWithMapToOverride (const class GALGAS_controlRegisterGroupMap & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_registerGroupKind & inOperand1,
                                                      const class GALGAS_controlRegisterMap & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_registerGroupKind constinArgument1,
                                                   class GALGAS_controlRegisterMap constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControlRegisterMapForKey (class GALGAS_controlRegisterMap constinArgument0,
                                                                      class GALGAS_string constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGroupKindForKey (class GALGAS_registerGroupKind constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_registerGroupKind & outArgument1,
                                                   class GALGAS_controlRegisterMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_mControlRegisterMapForKey (const class GALGAS_string & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerGroupKind getter_mGroupKindForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterGroupMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_controlRegisterGroupMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_controlRegisterGroupMap ;
 
} ; // End of GALGAS_controlRegisterGroupMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_controlRegisterGroupMap : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_registerGroupKind current_mGroupKind (LOCATION_ARGS) const ;
  public : class GALGAS_controlRegisterMap current_mControlRegisterMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterGroupMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @registerGroupKind enum                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_registerGroupKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_registerGroupKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_single,
    kEnum_arrayGroup
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_registerGroupKind extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_registerGroupKind constructor_arrayGroup (const class GALGAS_lbigintlist & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_registerGroupKind constructor_single (const class GALGAS_bigint & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_registerGroupKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayGroup (class GALGAS_lbigintlist & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_single (class GALGAS_bigint & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayGroup (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSingle (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_registerGroupKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @controlRegisterMap map                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_controlRegisterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_controlRegisterMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_controlRegisterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_controlRegisterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_controlRegisterMap (const GALGAS_controlRegisterMap & inSource) ;
  public : GALGAS_controlRegisterMap & operator = (const GALGAS_controlRegisterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_controlRegisterMap constructor_mapWithMapToOverride (const class GALGAS_controlRegisterMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_bool & inOperand2,
                                                      const class GALGAS_bool & inOperand3,
                                                      const class GALGAS_sliceMap & inOperand4,
                                                      const class GALGAS_controlRegisterFieldMap & inOperand5,
                                                      const class GALGAS_bigint & inOperand6,
                                                      const class GALGAS_controlRegisterFieldList & inOperand7,
                                                      const class GALGAS_uint & inOperand8,
                                                      const class GALGAS_uint & inOperand9,
                                                      const class GALGAS_uint & inOperand10,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType constinArgument1,
                                                   class GALGAS_bool constinArgument2,
                                                   class GALGAS_bool constinArgument3,
                                                   class GALGAS_sliceMap constinArgument4,
                                                   class GALGAS_controlRegisterFieldMap constinArgument5,
                                                   class GALGAS_bigint constinArgument6,
                                                   class GALGAS_controlRegisterFieldList constinArgument7,
                                                   class GALGAS_uint constinArgument8,
                                                   class GALGAS_uint constinArgument9,
                                                   class GALGAS_uint constinArgument10,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAddressOffsetForKey (class GALGAS_bigint constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArraySizeForKey (class GALGAS_uint constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMControlRegisterFieldListForKey (class GALGAS_controlRegisterFieldList constinArgument0,
                                                                            class GALGAS_string constinArgument1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMElementArraySizeForKey (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsReadOnlyForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterBitCountForKey (class GALGAS_uint constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterFieldAccessMapForKey (class GALGAS_sliceMap constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegisterFieldMapForKey (class GALGAS_controlRegisterFieldMap constinArgument0,
                                                                    class GALGAS_string constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserAccessForKey (class GALGAS_bool constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType & outArgument1,
                                                   class GALGAS_bool & outArgument2,
                                                   class GALGAS_bool & outArgument3,
                                                   class GALGAS_sliceMap & outArgument4,
                                                   class GALGAS_controlRegisterFieldMap & outArgument5,
                                                   class GALGAS_bigint & outArgument6,
                                                   class GALGAS_controlRegisterFieldList & outArgument7,
                                                   class GALGAS_uint & outArgument8,
                                                   class GALGAS_uint & outArgument9,
                                                   class GALGAS_uint & outArgument10,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mAddressOffsetForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mArraySizeForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldList getter_mControlRegisterFieldListForKey (const class GALGAS_string & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mElementArraySizeForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsReadOnlyForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mRegisterBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_sliceMap getter_mRegisterFieldAccessMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterFieldMap getter_mRegisterFieldMapForKey (const class GALGAS_string & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeForKey (const class GALGAS_string & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserAccessForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_controlRegisterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_controlRegisterMap ;
 
} ; // End of GALGAS_controlRegisterMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_controlRegisterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsReadOnly (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mUserAccess (LOCATION_ARGS) const ;
  public : class GALGAS_sliceMap current_mRegisterFieldAccessMap (LOCATION_ARGS) const ;
  public : class GALGAS_controlRegisterFieldMap current_mRegisterFieldMap (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mAddressOffset (LOCATION_ARGS) const ;
  public : class GALGAS_controlRegisterFieldList current_mControlRegisterFieldList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mRegisterBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mArraySize (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mElementArraySize (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_controlRegisterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@controlRegisterGroupMap' map                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_controlRegisterGroupMap : public cMapElement {
//--- Map attributes
  public : GALGAS_registerGroupKind mProperty_mGroupKind ;
  public : GALGAS_controlRegisterMap mProperty_mControlRegisterMap ;

//--- Constructor
  public : cMapElement_controlRegisterGroupMap (const GALGAS_lstring & inKey,
                                                const GALGAS_registerGroupKind & in_mGroupKind,
                                                const GALGAS_controlRegisterMap & in_mControlRegisterMap
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @controlRegisterGroupMap_2D_element struct                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_controlRegisterGroupMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_registerGroupKind mProperty_mGroupKind ;

  public : GALGAS_controlRegisterMap mProperty_mControlRegisterMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_controlRegisterGroupMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_controlRegisterGroupMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_controlRegisterGroupMap_2D_element (const GALGAS_lstring & in_lkey,
                                                      const GALGAS_registerGroupKind & in_mGroupKind,
                                                      const GALGAS_controlRegisterMap & in_mControlRegisterMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_controlRegisterGroupMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_controlRegisterGroupMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                   const class GALGAS_registerGroupKind & inOperand1,
                                                                                   const class GALGAS_controlRegisterMap & inOperand2
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_controlRegisterGroupMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controlRegisterMap getter_mControlRegisterMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_registerGroupKind getter_mGroupKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_controlRegisterGroupMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @globalConstantMap map                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_globalConstantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_globalConstantMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_globalConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_globalConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_globalConstantMap (const GALGAS_globalConstantMap & inSource) ;
  public : GALGAS_globalConstantMap & operator = (const GALGAS_globalConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_globalConstantMap constructor_mapWithMapToOverride (const class GALGAS_globalConstantMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_objectIR & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_objectIR constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_objectIR constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_objectIR & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_globalConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_globalConstantMap ;
 
} ; // End of GALGAS_globalConstantMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_globalConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_globalConstantMap (const GALGAS_globalConstantMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@globalConstantMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_globalConstantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_objectIR mProperty_mValue ;

//--- Constructor
  public : cMapElement_globalConstantMap (const GALGAS_lstring & inKey,
                                          const GALGAS_objectIR & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @globalConstantMap_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_globalConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_objectIR mProperty_mValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_globalConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_objectIR & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_objectIR & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalConstantMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @globalSyncInstanceMap map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_globalSyncInstanceMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_globalSyncInstanceMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_globalSyncInstanceMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inSource) ;
  public : GALGAS_globalSyncInstanceMap & operator = (const GALGAS_globalSyncInstanceMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalSyncInstanceMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalSyncInstanceMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_globalSyncInstanceMap constructor_mapWithMapToOverride (const class GALGAS_globalSyncInstanceMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_objectIR & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType constinArgument1,
                                                   class GALGAS_objectIR constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setInitialValueForKey (class GALGAS_objectIR constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType & outArgument1,
                                                   class GALGAS_objectIR & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_initialValueForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalSyncInstanceMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_typeForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_globalSyncInstanceMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_globalSyncInstanceMap ;
 
} ; // End of GALGAS_globalSyncInstanceMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_globalSyncInstanceMap : public cGenericAbstractEnumerator {
  public : cEnumerator_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_type (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_initialValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalSyncInstanceMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@globalSyncInstanceMap' map                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_globalSyncInstanceMap : public cMapElement {
//--- Map attributes
  public : GALGAS_omnibusType mProperty_type ;
  public : GALGAS_objectIR mProperty_initialValue ;

//--- Constructor
  public : cMapElement_globalSyncInstanceMap (const GALGAS_lstring & inKey,
                                              const GALGAS_omnibusType & in_type,
                                              const GALGAS_objectIR & in_initialValue
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @globalSyncInstanceMap_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_globalSyncInstanceMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_omnibusType mProperty_type ;

  public : GALGAS_objectIR mProperty_initialValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalSyncInstanceMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_globalSyncInstanceMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalSyncInstanceMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_omnibusType & in_type,
                                                    const GALGAS_objectIR & in_initialValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalSyncInstanceMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalSyncInstanceMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_omnibusType & inOperand1,
                                                                                 const class GALGAS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalSyncInstanceMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_initialValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_type (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalSyncInstanceMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @staticlistMap map                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_staticlistMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_staticlistMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_staticlistMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_staticlistMap (const GALGAS_staticlistMap & inSource) ;
  public : GALGAS_staticlistMap & operator = (const GALGAS_staticlistMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticlistMap extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticlistMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_staticlistMap constructor_mapWithMapToOverride (const class GALGAS_staticlistMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_propertyList & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertyList constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMStaticListPropertyListForKey (class GALGAS_propertyList constinArgument0,
                                                                          class GALGAS_string constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_mStaticListPropertyListForKey (const class GALGAS_string & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_staticlistMap getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_staticlistMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_staticlistMap ;
 
} ; // End of GALGAS_staticlistMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_staticlistMap : public cGenericAbstractEnumerator {
  public : cEnumerator_staticlistMap (const GALGAS_staticlistMap & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_propertyList current_mStaticListPropertyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_staticlistMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@staticlistMap' map                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_staticlistMap : public cMapElement {
//--- Map attributes
  public : GALGAS_propertyList mProperty_mStaticListPropertyList ;

//--- Constructor
  public : cMapElement_staticlistMap (const GALGAS_lstring & inKey,
                                      const GALGAS_propertyList & in_mStaticListPropertyList
                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @staticlistMap_2D_element struct                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_staticlistMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_propertyList mProperty_mStaticListPropertyList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_staticlistMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_staticlistMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_staticlistMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_staticlistMap_2D_element (const GALGAS_lstring & in_lkey,
                                            const GALGAS_propertyList & in_mStaticListPropertyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_staticlistMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_staticlistMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_propertyList & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_staticlistMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyList getter_mStaticListPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_staticlistMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_unifiedTypeMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertType (class GALGAS_lstring constinArgument0,
                                                    class GALGAS_omnibusType constinArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_typeForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_type (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_omnibusType mProperty_type ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_omnibusType & in_type
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @typeConstantMap map                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typeConstantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_typeConstantMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeConstantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_typeConstantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_typeConstantMap (const GALGAS_typeConstantMap & inSource) ;
  public : GALGAS_typeConstantMap & operator = (const GALGAS_typeConstantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeConstantMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeConstantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_typeConstantMap constructor_mapWithMapToOverride (const class GALGAS_typeConstantMap & inOperand0
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_constantMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_constantMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstantMapForKey (class GALGAS_constantMap constinArgument0,
                                                               class GALGAS_string constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_constantMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_constantMap getter_mConstantMapForKey (const class GALGAS_string & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeConstantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_typeConstantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_typeConstantMap ;
 
} ; // End of GALGAS_typeConstantMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_typeConstantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_typeConstantMap (const GALGAS_typeConstantMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_constantMap current_mConstantMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typeConstantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @constantMap map                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_constantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_constantMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constantMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_constantMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_constantMap (const GALGAS_constantMap & inSource) ;
  public : GALGAS_constantMap & operator = (const GALGAS_constantMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantMap extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constantMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_constantMap constructor_mapWithMapToOverride (const class GALGAS_constantMap & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bigint & inOperand1,
                                                      const class GALGAS_lstring & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bigint constinArgument1,
                                                   class GALGAS_lstring constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMClassTypeNameForKey (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_bigint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bigint & outArgument1,
                                                   class GALGAS_lstring & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeNameForKey (const class GALGAS_string & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantMap getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_constantMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constantMap ;
 
} ; // End of GALGAS_constantMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_constantMap : public cGenericAbstractEnumerator {
  public : cEnumerator_constantMap (const GALGAS_constantMap & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bigint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_lstring current_mClassTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_constantMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@typeConstantMap' map                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typeConstantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_constantMap mProperty_mConstantMap ;

//--- Constructor
  public : cMapElement_typeConstantMap (const GALGAS_lstring & inKey,
                                        const GALGAS_constantMap & in_mConstantMap
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @typeConstantMap_2D_element struct                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeConstantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_constantMap mProperty_mConstantMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeConstantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typeConstantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_typeConstantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typeConstantMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_constantMap & in_mConstantMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeConstantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeConstantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_constantMap & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeConstantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constantMap getter_mConstantMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeConstantMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @typeConstructorMap map                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typeConstructorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_typeConstructorMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeConstructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_typeConstructorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_typeConstructorMap (const GALGAS_typeConstructorMap & inSource) ;
  public : GALGAS_typeConstructorMap & operator = (const GALGAS_typeConstructorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeConstructorMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeConstructorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_typeConstructorMap constructor_mapWithMapToOverride (const class GALGAS_typeConstructorMap & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_constructorMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_constructorMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConstructorMapForKey (class GALGAS_constructorMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_constructorMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_mConstructorMapForKey (const class GALGAS_string & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeConstructorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_typeConstructorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_typeConstructorMap ;
 
} ; // End of GALGAS_typeConstructorMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_typeConstructorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_typeConstructorMap (const GALGAS_typeConstructorMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_constructorMap current_mConstructorMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typeConstructorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @constructorMap map                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_constructorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_constructorMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_constructorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_constructorMap (const GALGAS_constructorMap & inSource) ;
  public : GALGAS_constructorMap & operator = (const GALGAS_constructorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_constructorMap constructor_mapWithMapToOverride (const class GALGAS_constructorMap & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_constructorSignature & inOperand1,
                                                      const class GALGAS_constructorValue & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_constructorSignature constinArgument1,
                                                   class GALGAS_constructorValue constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInitValueForKey (class GALGAS_constructorValue constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSignatureForKey (class GALGAS_constructorSignature constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_constructorSignature & outArgument1,
                                                   class GALGAS_constructorValue & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_constructorValue getter_mInitValueForKey (const class GALGAS_string & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_mSignatureForKey (const class GALGAS_string & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_constructorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_constructorMap ;
 
} ; // End of GALGAS_constructorMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_constructorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_constructorMap (const GALGAS_constructorMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_constructorSignature current_mSignature (LOCATION_ARGS) const ;
  public : class GALGAS_constructorValue current_mInitValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_constructorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@typeConstructorMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typeConstructorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_constructorMap mProperty_mConstructorMap ;

//--- Constructor
  public : cMapElement_typeConstructorMap (const GALGAS_lstring & inKey,
                                           const GALGAS_constructorMap & in_mConstructorMap
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @typeConstructorMap_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeConstructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_constructorMap mProperty_mConstructorMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typeConstructorMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typeConstructorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_typeConstructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typeConstructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_constructorMap & in_mConstructorMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeConstructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeConstructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_constructorMap & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeConstructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorMap getter_mConstructorMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeConstructorMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typePropertySetterMap map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typePropertySetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_typePropertySetterMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typePropertySetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_typePropertySetterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_typePropertySetterMap (const GALGAS_typePropertySetterMap & inSource) ;
  public : GALGAS_typePropertySetterMap & operator = (const GALGAS_typePropertySetterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typePropertySetterMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typePropertySetterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_typePropertySetterMap constructor_mapWithMapToOverride (const class GALGAS_typePropertySetterMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_propertySetterMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertySetterMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_propertySetterMap constinArgument1
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSetterMapForKey (class GALGAS_propertySetterMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertySetterMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertySetterMap getter_mSetterMapForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typePropertySetterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_typePropertySetterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_typePropertySetterMap ;
 
} ; // End of GALGAS_typePropertySetterMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_typePropertySetterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_typePropertySetterMap (const GALGAS_typePropertySetterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_propertySetterMap current_mSetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typePropertySetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @propertySetterMap map                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_propertySetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_propertySetterMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_propertySetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_propertySetterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_propertySetterMap (const GALGAS_propertySetterMap & inSource) ;
  public : GALGAS_propertySetterMap & operator = (const GALGAS_propertySetterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertySetterMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertySetterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_propertySetterMap constructor_mapWithMapToOverride (const class GALGAS_propertySetterMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_propertySetterKind & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_propertySetterKind constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GALGAS_propertySetterKind constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_propertySetterKind & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertySetterKind getter_mAccessForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertySetterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_propertySetterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertySetterMap ;
 
} ; // End of GALGAS_propertySetterMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_propertySetterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_propertySetterMap (const GALGAS_propertySetterMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_propertySetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertySetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@typePropertySetterMap' map                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typePropertySetterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_propertySetterMap mProperty_mSetterMap ;

//--- Constructor
  public : cMapElement_typePropertySetterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_propertySetterMap & in_mSetterMap
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @typePropertySetterMap_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typePropertySetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_propertySetterMap mProperty_mSetterMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typePropertySetterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typePropertySetterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_typePropertySetterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typePropertySetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_propertySetterMap & in_mSetterMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typePropertySetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typePropertySetterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_propertySetterMap & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typePropertySetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertySetterMap getter_mSetterMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typePropertySetterMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typePropertyGetterMap map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typePropertyGetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_typePropertyGetterMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typePropertyGetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_typePropertyGetterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inSource) ;
  public : GALGAS_typePropertyGetterMap & operator = (const GALGAS_typePropertyGetterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typePropertyGetterMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typePropertyGetterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_typePropertyGetterMap constructor_mapWithMapToOverride (const class GALGAS_typePropertyGetterMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_propertyGetterMap & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertyGetterMap constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertOrReplace (class GALGAS_lstring constinArgument0,
                                                         class GALGAS_propertyGetterMap constinArgument1
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGetterMapForKey (class GALGAS_propertyGetterMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_propertyGetterMap & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGetterMap getter_mGetterMapForKey (const class GALGAS_string & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typePropertyGetterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_typePropertyGetterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_typePropertyGetterMap ;
 
} ; // End of GALGAS_typePropertyGetterMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_typePropertyGetterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_typePropertyGetterMap (const GALGAS_typePropertyGetterMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_propertyGetterMap current_mGetterMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typePropertyGetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @propertyGetterMap map                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_propertyGetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_propertyGetterMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_propertyGetterMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_propertyGetterMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_propertyGetterMap (const GALGAS_propertyGetterMap & inSource) ;
  public : GALGAS_propertyGetterMap & operator = (const GALGAS_propertyGetterMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyGetterMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyGetterMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_propertyGetterMap constructor_mapWithMapToOverride (const class GALGAS_propertyGetterMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bool & inOperand1,
                                                      const class GALGAS_propertyGetterKind & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool constinArgument1,
                                                   class GALGAS_propertyGetterKind constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAccessForKey (class GALGAS_propertyGetterKind constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsPublicForKey (class GALGAS_bool constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_bool & outArgument1,
                                                   class GALGAS_propertyGetterKind & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGetterKind getter_mAccessForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublicForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGetterMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_propertyGetterMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_propertyGetterMap ;
 
} ; // End of GALGAS_propertyGetterMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_propertyGetterMap : public cGenericAbstractEnumerator {
  public : cEnumerator_propertyGetterMap (const GALGAS_propertyGetterMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsPublic (LOCATION_ARGS) const ;
  public : class GALGAS_propertyGetterKind current_mAccess (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_propertyGetterMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@typePropertyGetterMap' map                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_typePropertyGetterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_propertyGetterMap mProperty_mGetterMap ;

//--- Constructor
  public : cMapElement_typePropertyGetterMap (const GALGAS_lstring & inKey,
                                              const GALGAS_propertyGetterMap & in_mGetterMap
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @typePropertyGetterMap_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typePropertyGetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_propertyGetterMap mProperty_mGetterMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_typePropertyGetterMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_typePropertyGetterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_typePropertyGetterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typePropertyGetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_propertyGetterMap & in_mGetterMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typePropertyGetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typePropertyGetterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_propertyGetterMap & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typePropertyGetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGetterMap getter_mGetterMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typePropertyGetterMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @availableInterruptMap map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_availableInterruptMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_availableInterruptMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_availableInterruptMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_availableInterruptMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_availableInterruptMap (const GALGAS_availableInterruptMap & inSource) ;
  public : GALGAS_availableInterruptMap & operator = (const GALGAS_availableInterruptMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_availableInterruptMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_availableInterruptMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_availableInterruptMap constructor_mapWithMapToOverride (const class GALGAS_availableInterruptMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_interruptionPanicCode & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_interruptionPanicCode constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInterruptionPanicCodeForKey (class GALGAS_interruptionPanicCode constinArgument0,
                                                                         class GALGAS_string constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_interruptionPanicCode & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCodeForKey (const class GALGAS_string & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_availableInterruptMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_availableInterruptMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_availableInterruptMap ;
 
} ; // End of GALGAS_availableInterruptMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_availableInterruptMap : public cGenericAbstractEnumerator {
  public : cEnumerator_availableInterruptMap (const GALGAS_availableInterruptMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_interruptionPanicCode current_mInterruptionPanicCode (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_availableInterruptMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@availableInterruptMap' map                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_availableInterruptMap : public cMapElement {
//--- Map attributes
  public : GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;

//--- Constructor
  public : cMapElement_availableInterruptMap (const GALGAS_lstring & inKey,
                                              const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @availableInterruptMap_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_availableInterruptMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_interruptionPanicCode mProperty_mInterruptionPanicCode ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_availableInterruptMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_availableInterruptMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_availableInterruptMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_availableInterruptMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_interruptionPanicCode & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_availableInterruptMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_interruptionPanicCode getter_mInterruptionPanicCode (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_availableInterruptMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @infixOperatorMap map                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_infixOperatorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_infixOperatorMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_infixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_infixOperatorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) ;
  public : GALGAS_infixOperatorMap & operator = (const GALGAS_infixOperatorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorMap extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperatorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_infixOperatorMap constructor_mapWithMapToOverride (const class GALGAS_infixOperatorMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_omnibusInfixOperatorUsage & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType constinArgument1,
                                                   class GALGAS_omnibusInfixOperatorUsage constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorUsageForKey (class GALGAS_omnibusInfixOperatorUsage constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType & outArgument1,
                                                   class GALGAS_omnibusInfixOperatorUsage & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusInfixOperatorUsage getter_mOperatorUsageForKey (const class GALGAS_string & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_infixOperatorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_infixOperatorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_infixOperatorMap ;
 
} ; // End of GALGAS_infixOperatorMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_infixOperatorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusInfixOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_infixOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @omnibusInfixOperatorUsage class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_omnibusInfixOperatorUsage : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_omnibusInfixOperatorUsage (void) ;

//---
  public : inline const class cPtr_omnibusInfixOperatorUsage * ptr (void) const { return (const cPtr_omnibusInfixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_omnibusInfixOperatorUsage (const cPtr_omnibusInfixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_omnibusInfixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_omnibusInfixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_omnibusInfixOperatorUsage class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@infixOperatorMap' map                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_infixOperatorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_omnibusType mProperty_mResultType ;
  public : GALGAS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;

//--- Constructor
  public : cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                         const GALGAS_omnibusType & in_mResultType,
                                         const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @infixOperatorMap_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_infixOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_omnibusType mProperty_mResultType ;

  public : GALGAS_omnibusInfixOperatorUsage mProperty_mOperatorUsage ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_infixOperatorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_infixOperatorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                               const GALGAS_omnibusType & in_mResultType,
                                               const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_infixOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_infixOperatorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_omnibusType & inOperand1,
                                                                            const class GALGAS_omnibusInfixOperatorUsage & inOperand2
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusInfixOperatorUsage getter_mOperatorUsage (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_infixOperatorMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @prefixOperatorMap map                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_prefixOperatorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_prefixOperatorMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_prefixOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_prefixOperatorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) ;
  public : GALGAS_prefixOperatorMap & operator = (const GALGAS_prefixOperatorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorMap extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefixOperatorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_prefixOperatorMap constructor_mapWithMapToOverride (const class GALGAS_prefixOperatorMap & inOperand0
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_omnibusType & inOperand2,
                                                      const class GALGAS_prefixOperatorUsage & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType constinArgument1,
                                                   class GALGAS_omnibusType constinArgument2,
                                                   class GALGAS_prefixOperatorUsage constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorForKey (class GALGAS_prefixOperatorUsage constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMReceiverTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                                class GALGAS_string constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResultTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                              class GALGAS_string constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType & outArgument1,
                                                   class GALGAS_omnibusType & outArgument2,
                                                   class GALGAS_prefixOperatorUsage & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorUsage getter_mOperatorForKey (const class GALGAS_string & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverTypeForKey (const class GALGAS_string & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultTypeForKey (const class GALGAS_string & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_prefixOperatorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_prefixOperatorMap ;
 
} ; // End of GALGAS_prefixOperatorMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_prefixOperatorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mReceiverType (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mResultType (LOCATION_ARGS) const ;
  public : class GALGAS_prefixOperatorUsage current_mOperator (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_prefixOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @prefixOperatorUsage class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_prefixOperatorUsage : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_prefixOperatorUsage (void) ;

//---
  public : inline const class cPtr_prefixOperatorUsage * ptr (void) const { return (const cPtr_prefixOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefixOperatorUsage (const cPtr_prefixOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorUsage extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorUsage class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorUsage ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@prefixOperatorMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_prefixOperatorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_omnibusType mProperty_mReceiverType ;
  public : GALGAS_omnibusType mProperty_mResultType ;
  public : GALGAS_prefixOperatorUsage mProperty_mOperator ;

//--- Constructor
  public : cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey,
                                          const GALGAS_omnibusType & in_mReceiverType,
                                          const GALGAS_omnibusType & in_mResultType,
                                          const GALGAS_prefixOperatorUsage & in_mOperator
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @prefixOperatorMap_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_prefixOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_omnibusType mProperty_mReceiverType ;

  public : GALGAS_omnibusType mProperty_mResultType ;

  public : GALGAS_prefixOperatorUsage mProperty_mOperator ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_prefixOperatorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_prefixOperatorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_omnibusType & in_mReceiverType,
                                                const GALGAS_omnibusType & in_mResultType,
                                                const GALGAS_prefixOperatorUsage & in_mOperator) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefixOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefixOperatorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_omnibusType & inOperand1,
                                                                             const class GALGAS_omnibusType & inOperand2,
                                                                             const class GALGAS_prefixOperatorUsage & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefixOperatorUsage getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mReceiverType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mResultType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefixOperatorMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @assignmentOperatorMap map                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_assignmentOperatorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_assignmentOperatorMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_assignmentOperatorMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_assignmentOperatorMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inSource) ;
  public : GALGAS_assignmentOperatorMap & operator = (const GALGAS_assignmentOperatorMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentOperatorMap extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentOperatorMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_assignmentOperatorMap constructor_mapWithMapToOverride (const class GALGAS_assignmentOperatorMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractAssignmentOperatorUsage & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_abstractAssignmentOperatorUsage constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperatorUsageForKey (class GALGAS_abstractAssignmentOperatorUsage constinArgument0,
                                                                 class GALGAS_string constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_abstractAssignmentOperatorUsage & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractAssignmentOperatorUsage getter_mOperatorUsageForKey (const class GALGAS_string & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_assignmentOperatorMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_assignmentOperatorMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & inKey
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_assignmentOperatorMap ;
 
} ; // End of GALGAS_assignmentOperatorMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_assignmentOperatorMap : public cGenericAbstractEnumerator {
  public : cEnumerator_assignmentOperatorMap (const GALGAS_assignmentOperatorMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_abstractAssignmentOperatorUsage current_mOperatorUsage (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_assignmentOperatorMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @abstractAssignmentOperatorUsage class                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractAssignmentOperatorUsage : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractAssignmentOperatorUsage (void) ;

//---
  public : inline const class cPtr_abstractAssignmentOperatorUsage * ptr (void) const { return (const cPtr_abstractAssignmentOperatorUsage *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractAssignmentOperatorUsage (const cPtr_abstractAssignmentOperatorUsage * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractAssignmentOperatorUsage extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractAssignmentOperatorUsage & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractAssignmentOperatorUsage class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@assignmentOperatorMap' map                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_assignmentOperatorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_abstractAssignmentOperatorUsage mProperty_mOperatorUsage ;

//--- Constructor
  public : cMapElement_assignmentOperatorMap (const GALGAS_lstring & inKey,
                                              const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @assignmentOperatorMap_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_assignmentOperatorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_abstractAssignmentOperatorUsage mProperty_mOperatorUsage ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_assignmentOperatorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_assignmentOperatorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_assignmentOperatorMap_2D_element (const GALGAS_lstring & in_lkey,
                                                    const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentOperatorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_assignmentOperatorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_abstractAssignmentOperatorUsage & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentOperatorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractAssignmentOperatorUsage getter_mOperatorUsage (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentOperatorMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @implicitConversionToBooleanMap map                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_implicitConversionToBooleanMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_implicitConversionToBooleanMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_implicitConversionToBooleanMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_implicitConversionToBooleanMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_implicitConversionToBooleanMap (const GALGAS_implicitConversionToBooleanMap & inSource) ;
  public : GALGAS_implicitConversionToBooleanMap & operator = (const GALGAS_implicitConversionToBooleanMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_implicitConversionToBooleanMap extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_implicitConversionToBooleanMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_implicitConversionToBooleanMap constructor_mapWithMapToOverride (const class GALGAS_implicitConversionToBooleanMap & inOperand0
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_abstractImplicitConverterToBoolean & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_abstractImplicitConverterToBoolean constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMConverterForKey (class GALGAS_abstractImplicitConverterToBoolean constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_abstractImplicitConverterToBoolean & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractImplicitConverterToBoolean getter_mConverterForKey (const class GALGAS_string & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_implicitConversionToBooleanMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_implicitConversionToBooleanMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & inKey
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_implicitConversionToBooleanMap ;
 
} ; // End of GALGAS_implicitConversionToBooleanMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_implicitConversionToBooleanMap : public cGenericAbstractEnumerator {
  public : cEnumerator_implicitConversionToBooleanMap (const GALGAS_implicitConversionToBooleanMap & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_abstractImplicitConverterToBoolean current_mConverter (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_implicitConversionToBooleanMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @abstractImplicitConverterToBoolean class                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractImplicitConverterToBoolean : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractImplicitConverterToBoolean (void) ;

//---
  public : inline const class cPtr_abstractImplicitConverterToBoolean * ptr (void) const { return (const cPtr_abstractImplicitConverterToBoolean *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractImplicitConverterToBoolean (const cPtr_abstractImplicitConverterToBoolean * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractImplicitConverterToBoolean extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractImplicitConverterToBoolean & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractImplicitConverterToBoolean class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@implicitConversionToBooleanMap' map                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_implicitConversionToBooleanMap : public cMapElement {
//--- Map attributes
  public : GALGAS_abstractImplicitConverterToBoolean mProperty_mConverter ;

//--- Constructor
  public : cMapElement_implicitConversionToBooleanMap (const GALGAS_lstring & inKey,
                                                       const GALGAS_abstractImplicitConverterToBoolean & in_mConverter
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @implicitConversionToBooleanMap_2D_element struct                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_implicitConversionToBooleanMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_abstractImplicitConverterToBoolean mProperty_mConverter ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_implicitConversionToBooleanMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_implicitConversionToBooleanMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_implicitConversionToBooleanMap_2D_element (const GALGAS_lstring & in_lkey,
                                                             const GALGAS_abstractImplicitConverterToBoolean & in_mConverter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_implicitConversionToBooleanMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_implicitConversionToBooleanMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_abstractImplicitConverterToBoolean & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_implicitConversionToBooleanMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractImplicitConverterToBoolean getter_mConverter (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_implicitConversionToBooleanMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                    @taskMap map                                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_taskMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const char * kSearchErrorMessage_taskMap_searchKey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_taskMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_taskMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_taskMap (const GALGAS_taskMap & inSource) ;
  public : GALGAS_taskMap & operator = (const GALGAS_taskMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskMap extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_taskMap constructor_mapWithMapToOverride (const class GALGAS_taskMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType constinArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTaskTypeForKey (class GALGAS_omnibusType constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_omnibusType & outArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTaskTypeForKey (const class GALGAS_string & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_taskMap getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_taskMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_taskMap ;
 
} ; // End of GALGAS_taskMap class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_taskMap : public cGenericAbstractEnumerator {
  public : cEnumerator_taskMap (const GALGAS_taskMap & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mTaskType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_taskMap_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Class for element of '@taskMap' map                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_taskMap : public cMapElement {
//--- Map attributes
  public : GALGAS_omnibusType mProperty_mTaskType ;

//--- Constructor
  public : cMapElement_taskMap (const GALGAS_lstring & inKey,
                                const GALGAS_omnibusType & in_mTaskType
                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @taskMap_2D_element struct                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_taskMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_omnibusType mProperty_mTaskType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_taskMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_taskMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_taskMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_taskMap_2D_element (const GALGAS_lstring & in_lkey,
                                      const GALGAS_omnibusType & in_mTaskType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_taskMap_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_taskMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_omnibusType & inOperand1
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_taskMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTaskType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_taskMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @globalTaskVariableList list                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_globalTaskVariableList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_globalTaskVariableList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_globalTaskVariableList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTaskName,
                                                  const class GALGAS_string & in_mTaskTypeName,
                                                  const class GALGAS_objectIR & in_mInitialValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalTaskVariableList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalTaskVariableList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_globalTaskVariableList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                 const class GALGAS_string & inOperand1,
                                                                                 const class GALGAS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_globalTaskVariableList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_objectIR & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_globalTaskVariableList add_operation (const GALGAS_globalTaskVariableList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_globalTaskVariableList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_objectIR constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_objectIR & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_objectIR & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_objectIR & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_objectIR & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_objectIR & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_globalTaskVariableList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_globalTaskVariableList ;
 
} ; // End of GALGAS_globalTaskVariableList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_globalTaskVariableList : public cGenericAbstractEnumerator {
  public : cEnumerator_globalTaskVariableList (const GALGAS_globalTaskVariableList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTaskName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTaskTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_objectIR current_mInitialValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_globalTaskVariableList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @globalTaskVariableList_2D_element struct                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_globalTaskVariableList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTaskName ;

  public : GALGAS_string mProperty_mTaskTypeName ;

  public : GALGAS_objectIR mProperty_mInitialValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_globalTaskVariableList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_globalTaskVariableList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & in_mTaskName,
                                                     const GALGAS_string & in_mTaskTypeName,
                                                     const GALGAS_objectIR & in_mInitialValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_globalTaskVariableList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_globalTaskVariableList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_objectIR & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_globalTaskVariableList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_objectIR getter_mInitialValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTaskTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_globalTaskVariableList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @abstractDecoratedDeclaration class                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_abstractDecoratedDeclaration : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractDecoratedDeclaration (void) ;

//---
  public : inline const class cPtr_abstractDecoratedDeclaration * ptr (void) const { return (const cPtr_abstractDecoratedDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractDecoratedDeclaration extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractDecoratedDeclaration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Pointer class for @abstractDecoratedDeclaration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_abstractDecoratedDeclaration : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @declarationDecorationList list                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_declarationDecorationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_declarationDecorationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_declarationDecorationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractDecoratedDeclaration & in_mDeclaration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationDecorationList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationDecorationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_declarationDecorationList constructor_listWithValue (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_declarationDecorationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_declarationDecorationList add_operation (const GALGAS_declarationDecorationList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_declarationDecorationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractDecoratedDeclaration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractDecoratedDeclaration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDecoratedDeclaration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationDecorationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_declarationDecorationList ;
 
} ; // End of GALGAS_declarationDecorationList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_declarationDecorationList : public cGenericAbstractEnumerator {
  public : cEnumerator_declarationDecorationList (const GALGAS_declarationDecorationList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractDecoratedDeclaration current_mDeclaration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_declarationDecorationList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @declarationDecorationList_2D_element struct                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_declarationDecorationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractDecoratedDeclaration mProperty_mDeclaration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_declarationDecorationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_declarationDecorationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_declarationDecorationList_2D_element (const GALGAS_abstractDecoratedDeclaration & in_mDeclaration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_declarationDecorationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_declarationDecorationList_2D_element constructor_new (const class GALGAS_abstractDecoratedDeclaration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_declarationDecorationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDecoratedDeclaration getter_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_declarationDecorationList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationDecorationList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Class for element of '@constantMap' map                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_constantMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bigint mProperty_mIndex ;
  public : GALGAS_lstring mProperty_mClassTypeName ;

//--- Constructor
  public : cMapElement_constantMap (const GALGAS_lstring & inKey,
                                    const GALGAS_bigint & in_mIndex,
                                    const GALGAS_lstring & in_mClassTypeName
                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @constantMap_2D_element struct                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constantMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bigint mProperty_mIndex ;

  public : GALGAS_lstring mProperty_mClassTypeName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constantMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constantMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_constantMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constantMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_bigint & in_mIndex,
                                          const GALGAS_lstring & in_mClassTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constantMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constantMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_bigint & inOperand1,
                                                                       const class GALGAS_lstring & inOperand2
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constantMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mClassTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bigint getter_mIndex (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constantMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @constructorValue enum                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorValue : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_constructorValue (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_null,
    kEnum_simple,
    kEnum_structure,
    kEnum_arrayValue
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorValue extractObject (const GALGAS_object & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorValue constructor_arrayValue (const class GALGAS_omnibusType & inOperand0,
                                                                        const class GALGAS_uint & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_constructorValue constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_constructorValue constructor_simple (const class GALGAS_bigint & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_constructorValue constructor_structure (const class GALGAS_sortedOperandIRList & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorValue & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayValue (class GALGAS_omnibusType & outArgument0,
                                                    class GALGAS_uint & outArgument1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_simple (class GALGAS_bigint & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_structure (class GALGAS_sortedOperandIRList & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNull (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSimple (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStructure (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorValue class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorValue ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @constructorSignature list                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorSignature : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_constructorSignature (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_constructorSignature (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mSelector,
                                                  const class GALGAS_omnibusType & in_mType,
                                                  const class GALGAS_uint & in_mFieldIndex
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorSignature extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorSignature constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_constructorSignature constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_omnibusType & inOperand1,
                                                                               const class GALGAS_uint & inOperand2
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_constructorSignature inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_omnibusType & inOperand1,
                                                      const class GALGAS_uint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_constructorSignature add_operation (const GALGAS_constructorSignature & inOperand,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_constructorSignature_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_omnibusType constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_omnibusType & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_omnibusType & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_omnibusType & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_omnibusType & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_omnibusType & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectorAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_constructorSignature ;
 
} ; // End of GALGAS_constructorSignature class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_constructorSignature : public cGenericAbstractEnumerator {
  public : cEnumerator_constructorSignature (const GALGAS_constructorSignature & inEnumeratedObject,
                                             const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mSelector (LOCATION_ARGS) const ;
  public : class GALGAS_omnibusType current_mType (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mFieldIndex (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_constructorSignature_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@constructorMap' map                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_constructorMap : public cMapElement {
//--- Map attributes
  public : GALGAS_constructorSignature mProperty_mSignature ;
  public : GALGAS_constructorValue mProperty_mInitValue ;

//--- Constructor
  public : cMapElement_constructorMap (const GALGAS_lstring & inKey,
                                       const GALGAS_constructorSignature & in_mSignature,
                                       const GALGAS_constructorValue & in_mInitValue
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @constructorMap_2D_element struct                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_constructorSignature mProperty_mSignature ;

  public : GALGAS_constructorValue mProperty_mInitValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_constructorMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_constructorSignature & in_mSignature,
                                             const GALGAS_constructorValue & in_mInitValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_constructorSignature & inOperand1,
                                                                          const class GALGAS_constructorValue & inOperand2
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorValue getter_mInitValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_constructorSignature getter_mSignature (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @constructorValue enum, associated values                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_constructorValue_simple : public cEnumAssociatedValues {
  public : const GALGAS_bigint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_constructorValue_simple (const GALGAS_bigint & inAssociatedValue0
                                                          COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_constructorValue_simple (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_constructorValue_structure : public cEnumAssociatedValues {
  public : const GALGAS_sortedOperandIRList mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_constructorValue_structure (const GALGAS_sortedOperandIRList & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_constructorValue_structure (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_constructorValue_arrayValue : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_constructorValue_arrayValue (const GALGAS_omnibusType & inAssociatedValue0,
                                                              const GALGAS_uint & inAssociatedValue1
                                                              COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_constructorValue_arrayValue (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @constructorSignature_2D_element struct                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_constructorSignature_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mSelector ;

  public : GALGAS_omnibusType mProperty_mType ;

  public : GALGAS_uint mProperty_mFieldIndex ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_constructorSignature_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_constructorSignature_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_constructorSignature_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_constructorSignature_2D_element (const GALGAS_string & in_mSelector,
                                                   const GALGAS_omnibusType & in_mType,
                                                   const GALGAS_uint & in_mFieldIndex) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_constructorSignature_2D_element extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_constructorSignature_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                const class GALGAS_omnibusType & inOperand1,
                                                                                const class GALGAS_uint & inOperand2
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mFieldIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelector (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_omnibusType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_constructorSignature_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @propertyGetterKind enum                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_propertyGetterKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyGetterKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_storedProperty,
    kEnum_computedProperty,
    kEnum_constantProperty
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyGetterKind extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyGetterKind constructor_computedProperty (const class GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                const class GALGAS_routineLLVMNameDict & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyGetterKind constructor_constantProperty (const class GALGAS_objectIR & inOperand0
                                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyGetterKind constructor_storedProperty (const class GALGAS_omnibusType & inOperand0,
                                                                              const class GALGAS_uint & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyGetterKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_computedProperty (class GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                          class GALGAS_routineLLVMNameDict & outArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_constantProperty (class GALGAS_objectIR & outArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_storedProperty (class GALGAS_omnibusType & outArgument0,
                                                        class GALGAS_uint & outArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputedProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isConstantProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStoredProperty (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyGetterKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@propertyGetterMap' map                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cMapElement_propertyGetterMap : public cMapElement {
//--- Map attributes
  public : GALGAS_bool mProperty_mIsPublic ;
  public : GALGAS_propertyGetterKind mProperty_mAccess ;

//--- Constructor
  public : cMapElement_propertyGetterMap (const GALGAS_lstring & inKey,
                                          const GALGAS_bool & in_mIsPublic,
                                          const GALGAS_propertyGetterKind & in_mAccess
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @propertyGetterMap_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_propertyGetterMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_bool mProperty_mIsPublic ;

  public : GALGAS_propertyGetterKind mProperty_mAccess ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_propertyGetterMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_propertyGetterMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_propertyGetterMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_bool & in_mIsPublic,
                                                const GALGAS_propertyGetterKind & in_mAccess) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyGetterMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyGetterMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1,
                                                                             const class GALGAS_propertyGetterKind & inOperand2
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyGetterMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyGetterKind getter_mAccess (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsPublic (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyGetterMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension setter '@typePropertyGetterMap insertProperty'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_insertProperty (class GALGAS_typePropertyGetterMap & ioObject,
                                     const class GALGAS_lstring constin_inTypeName,
                                     const class GALGAS_lstring constin_inGetterName,
                                     const class GALGAS_bool constin_inIsPublic,
                                     const class GALGAS_propertyGetterKind constin_inAccess,
                                     class C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @propertyGetterKind enum, associated values                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_propertyGetterKind_storedProperty : public cEnumAssociatedValues {
  public : const GALGAS_omnibusType mAssociatedValue0 ;
  public : const GALGAS_uint mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyGetterKind_storedProperty (const GALGAS_omnibusType & inAssociatedValue0,
                                                                    const GALGAS_uint & inAssociatedValue1
                                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyGetterKind_storedProperty (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_propertyGetterKind_computedProperty : public cEnumAssociatedValues {
  public : const GALGAS_unifiedTypeMap_2D_proxy mAssociatedValue0 ;
  public : const GALGAS_routineLLVMNameDict mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyGetterKind_computedProperty (const GALGAS_unifiedTypeMap_2D_proxy & inAssociatedValue0,
                                                                      const GALGAS_routineLLVMNameDict & inAssociatedValue1
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyGetterKind_computedProperty (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumAssociatedValues_propertyGetterKind_constantProperty : public cEnumAssociatedValues {
  public : const GALGAS_objectIR mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyGetterKind_constantProperty (const GALGAS_objectIR & inAssociatedValue0
                                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyGetterKind_constantProperty (void) {}
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension getter '@typePropertyGetterMap propertyMap' (as function)                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_propertyGetterMap extensionGetter_propertyMap (const class GALGAS_typePropertyGetterMap & inObject,
                                                            const class GALGAS_omnibusType & constinArgument0,
                                                            class C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension setter '@typePropertyGetterMap addComputedPropertyGetter'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionSetter_addComputedPropertyGetter (class GALGAS_typePropertyGetterMap & ioObject,
                                                const class GALGAS_lstring constin_inTypeName,
                                                const class GALGAS_string constin_inLLVMBaseTypeName,
                                                const class GALGAS_lstring constin_inPropertyName,
                                                const class GALGAS_mode constin_inMode,
                                                const class GALGAS_bool constin_inPublic,
                                                const class GALGAS_unifiedTypeMap_2D_proxy constin_inResultTypeProxy,
                                                class GALGAS_lstring & out_outRoutineLLVMName,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Function 'getterLLVMName'                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string function_getterLLVMName (class GALGAS_string inArgument0,
                                             const class GALGAS_string & constinArgument1,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension getter '@mode routineLLVMDictionaryForFunction' (as function)                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_routineLLVMNameDict extensionGetter_routineLLVMDictionaryForFunction (const class GALGAS_mode & inObject,
                                                                                   const class GALGAS_string & constinArgument0,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

