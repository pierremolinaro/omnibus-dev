#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@taskListAST enterInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInContext (const GGS_taskListAST inObject,
                                     GGS_semanticContext & ioArgument_ioContext,
                                     GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                     GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                     GGS_routineListIR & ioArgument_ioRoutineListIR,
                                     GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                     GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_taskListAST temp_0 = inObject ;
  GGS_taskListAST var_taskList_5898 = temp_0 ;
  GGS_taskListAST temp_1 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 175)) ;
  GGS_taskListAST var_sortedTaskList_5933 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 176)) ;
  GGS_stringset var_handledTaskSet_5971 = temp_2 ;
  GGS_bool var_continue_5998 = GGS_bool (true) ;
  if (var_taskList_5898.getter_count (SOURCE_FILE ("task-declaration.galgas3", 178)).isValid ()) {
    uint32_t variant_6016 = var_taskList_5898.getter_count (SOURCE_FILE ("task-declaration.galgas3", 178)).uintValue () ;
    bool loop_6016 = true ;
    while (loop_6016) {
      GGS_bool test_3 = var_continue_5998 ;
      if (GalgasBool::boolTrue == test_3.boolEnum ()) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_taskList_5898.getter_count (SOURCE_FILE ("task-declaration.galgas3", 178)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_6016 = test_3.isValid () ;
      if (loop_6016) {
        loop_6016 = test_3.boolValue () ;
      }
      if (loop_6016 && (0 == variant_6016)) {
        loop_6016 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas3", 178)) ;
      }
      if (loop_6016) {
        variant_6016 -= 1 ;
        var_continue_5998 = GGS_bool (false) ;
        GGS_taskListAST temp_4 = GGS_taskListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 180)) ;
        GGS_taskListAST var_candidateTaskList_6122 = temp_4 ;
        GGS_bigint var_idx_6154 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 181)) ;
        UpEnumerator_taskListAST enumerator_6178 (var_taskList_5898) ;
        while (enumerator_6178.hasCurrentObject ()) {
          GGS_bool var_allPrecedenceDefined_6200 = GGS_bool (true) ;
          UpEnumerator_lstringlist enumerator_6239 (enumerator_6178.current (HERE).readProperty_mLowerPriorityTaskList ()) ;
          bool bool_5 = var_allPrecedenceDefined_6200.isValidAndTrue () ;
          if (enumerator_6239.hasCurrentObject () && bool_5) {
            while (enumerator_6239.hasCurrentObject () && bool_5) {
              var_allPrecedenceDefined_6200 = var_handledTaskSet_5971.getter_hasKey (enumerator_6239.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("task-declaration.galgas3", 185)) ;
              enumerator_6239.gotoNextObject () ;
              if (enumerator_6239.hasCurrentObject ()) {
                bool_5 = var_allPrecedenceDefined_6200.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_allPrecedenceDefined_6200.boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_candidateTaskList_6122.addAssignOperation (enumerator_6178.current (HERE).readProperty_mTaskName (), enumerator_6178.current (HERE).readProperty_mLowerPriorityTaskList (), enumerator_6178.current (HERE).readProperty_mStackSize (), enumerator_6178.current (HERE).readProperty_mTaskSetupListAST (), enumerator_6178.current (HERE).readProperty_mTaskActivateListAST (), enumerator_6178.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_6178.current (HERE).readProperty_mGuardedCommandList (), enumerator_6178.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_6178.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas3", 188)) ;
              var_continue_5998 = GGS_bool (true) ;
              {
              GGS_lstring joker_6829_9 ; // Joker input parameter
              GGS_lstringlist joker_6829_8 ; // Joker input parameter
              GGS_lbigint joker_6829_7 ; // Joker input parameter
              GGS_taskSetupListAST joker_6829_6 ; // Joker input parameter
              GGS_taskSetupListAST joker_6829_5 ; // Joker input parameter
              GGS_taskSetupListAST joker_6829_4 ; // Joker input parameter
              GGS_syncInstructionBranchListAST joker_6829_3 ; // Joker input parameter
              GGS_location joker_6829_2 ; // Joker input parameter
              GGS_bool joker_6829_1 ; // Joker input parameter
              var_taskList_5898.setter_removeAtIndex (joker_6829_9, joker_6829_8, joker_6829_7, joker_6829_6, joker_6829_5, joker_6829_4, joker_6829_3, joker_6829_2, joker_6829_1, var_idx_6154.getter_uint (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 199)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 199)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            var_idx_6154 = var_idx_6154.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 201)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 201)) ;
          }
          enumerator_6178.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_bool test_8 = GGS_bool (gOption_omnibus_5F_options_taskStrictPriorityOrder.readProperty_value ()) ;
          if (GalgasBool::boolTrue == test_8.boolEnum ()) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6122.getter_count (SOURCE_FILE ("task-declaration.galgas3", 204)).objectCompare (GGS_uint (uint32_t (1U)))) ;
          }
          test_7 = test_8.boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            UpEnumerator_taskListAST enumerator_7009 (var_candidateTaskList_6122) ;
            while (enumerator_7009.hasCurrentObject ()) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_7009.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string ("this task does not respect a strict priority order"), fixItArray9  COMMA_SOURCE_FILE ("task-declaration.galgas3", 206)) ;
              enumerator_7009.gotoNextObject () ;
            }
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::greaterThan, var_candidateTaskList_6122.getter_count (SOURCE_FILE ("task-declaration.galgas3", 209)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            var_continue_5998 = GGS_bool (true) ;
            UpEnumerator_taskListAST enumerator_7214 (var_candidateTaskList_6122) ;
            while (enumerator_7214.hasCurrentObject ()) {
              var_handledTaskSet_5971.plusPlusAssignOperation (enumerator_7214.current (HERE).readProperty_mTaskName ().readProperty_string ()  COMMA_SOURCE_FILE ("task-declaration.galgas3", 212)) ;
              enumerator_7214.gotoNextObject () ;
            }
            var_sortedTaskList_5933.plusAssignOperation(var_candidateTaskList_6122, inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 214)) ;
          }
        }
      }
    }
  }
  UpEnumerator_taskListAST enumerator_7402 (var_taskList_5898) ;
  while (enumerator_7402.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (enumerator_7402.current_mTaskName (HERE).readProperty_location (), GGS_string ("this task is out of priority order"), fixItArray11  COMMA_SOURCE_FILE ("task-declaration.galgas3", 219)) ;
    enumerator_7402.gotoNextObject () ;
  }
  GGS_decoratedTaskList temp_12 = GGS_decoratedTaskList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 222)) ;
  GGS_decoratedTaskList var_decoratedTaskList_7513 = temp_12 ;
  UpEnumerator_taskListAST enumerator_7551 (var_sortedTaskList_5933) ;
  GGS_uint index_7539 (uint32_t (0)) ;
  while (enumerator_7551.hasCurrentObject ()) {
    {
    GGS_lstring joker_7883 ; // Joker input parameter
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_lstring::init_21__21_ (GGS_string ("activate"), enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE), GGS_mode::class_func_safeUserMode (SOURCE_FILE ("task-declaration.galgas3", 229)), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("task-declaration.galgas3", 230)), joker_7883, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 225)) ;
    }
    GGS_string var_assemblerTaskName_7916 = enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 233)) ;
    GGS_string var_activateTaskCallName_7990 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 234)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 234)) ;
    GGS_routineFormalArgumentListAST temp_13 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 236)) ;
    ioArgument_ioRoutineListIR.addAssignOperation (GGS_taskActivateFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (function_routineMangledNameFromAST (enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_string ("activate").getter_nowhere (SOURCE_FILE ("task-declaration.galgas3", 236)), temp_13, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 236)), GGS_bool (false), GGS_bool (false), var_assemblerTaskName_7916, var_activateTaskCallName_7990, index_7539, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas3", 235)) ;
    GGS_instructionListAST temp_14 = GGS_instructionListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 245)) ;
    GGS_instructionListAST var_taskListInstructionList_8494 = temp_14 ;
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = GGS_bool (ComparisonKind::greaterThan, enumerator_7551.current (HERE).readProperty_mGuardedCommandList ().getter_count (SOURCE_FILE ("task-declaration.galgas3", 246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_syncInstructionAST var_syncInstruction_8581 = GGS_syncInstructionAST::init_21__21__21_ (enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_location (), enumerator_7551.current (HERE).readProperty_mGuardedCommandList (), enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
        var_taskListInstructionList_8494.addAssignOperation (var_syncInstruction_8581  COMMA_SOURCE_FILE ("task-declaration.galgas3", 248)) ;
      }
    }
    GGS_routineFormalArgumentListAST temp_16 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 250)) ;
    GGS_lstring var_routineMangledName_8763 = function_routineMangledNameFromAST (enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string (), function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 250)).getter_nowhere (SOURCE_FILE ("task-declaration.galgas3", 250)), temp_16, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 250)) ;
    GGS_routineFormalArgumentListAST temp_17 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 260)) ;
    ioArgument_ioDecoratedRoutineList.addAssignOperation (enumerator_7551.current (HERE).readProperty_mTaskName (), GGS_mode::class_func_userMode (SOURCE_FILE ("task-declaration.galgas3", 253)), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("task-declaration.galgas3", 255)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("task-declaration.galgas3", 258)), var_routineMangledName_8763, temp_17, GGS_bool (true), var_taskListInstructionList_8494, enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-declaration.galgas3", 264))  COMMA_SOURCE_FILE ("task-declaration.galgas3", 251)) ;
    GGS_omnibusType var_taskType_9395 ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), enumerator_7551.current (HERE).readProperty_mTaskName (), var_taskType_9395, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 265)) ;
    {
    extensionSetter_insertTask (ioArgument_ioContext.mProperty_mValuedObjectMap, enumerator_7551.current (HERE).readProperty_mTaskName (), var_taskType_9395, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 266)) ;
    }
    GGS_sortedOperandIRList temp_18 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 267)) ;
    GGS_sortedOperandIRList var_initialValueList_9486 = temp_18 ;
    GGS_lstring var_typeName_9538 = GGS_lstring::init_21__21_ (var_taskType_9395.readProperty_omnibusTypeDescriptionName (), enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constructorMap var_constructorMap_9683 ;
    ioArgument_ioContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_9538, var_constructorMap_9683, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 269)) ;
    UpEnumerator_constructorMap enumerator_9712 (var_constructorMap_9683) ;
    while (enumerator_9712.hasCurrentObject ()) {
      enumerator_9712.current_mInitValue (HERE).method_extractStructure (var_initialValueList_9486, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 272)) ;
      enumerator_9712.gotoNextObject () ;
    }
    ioArgument_ioContext.mProperty_mGlobalTaskVariableList.addAssignOperation (enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string (), enumerator_7551.current (HERE).readProperty_mTaskName ().readProperty_string (), GGS_objectIR::class_func_llvmStructureValue (var_taskType_9395, var_initialValueList_9486  COMMA_SOURCE_FILE ("task-declaration.galgas3", 277))  COMMA_SOURCE_FILE ("task-declaration.galgas3", 274)) ;
    var_decoratedTaskList_7513.addAssignOperation (enumerator_7551.current (HERE).readProperty_mTaskName (), enumerator_7551.current (HERE).readProperty_mStackSize (), enumerator_7551.current (HERE).readProperty_mTaskSetupListAST (), enumerator_7551.current (HERE).readProperty_mTaskActivateListAST (), enumerator_7551.current (HERE).readProperty_mTaskDeactivateListAST (), enumerator_7551.current (HERE).readProperty_mEndOfTaskDeclaration (), enumerator_7551.current (HERE).readProperty_mAutoStart ()  COMMA_SOURCE_FILE ("task-declaration.galgas3", 279)) ;
    enumerator_7551.gotoNextObject () ;
    index_7539.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 223)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedTaskListDeclaration::init_21_ (var_decoratedTaskList_7513, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas3", 289)) ;
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@decoratedTaskList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_decoratedTaskList : public CollectionElementPtr {
  public: GGS_decoratedTaskList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_decoratedTaskList (const GGS_lstring & in_mTaskName,
                                                  const GGS_lbigint & in_mStackSize,
                                                  const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                  const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                  const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                  const GGS_location & in_mEndOfTaskDeclaration,
                                                  const GGS_bool & in_mAutoStart
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_decoratedTaskList (const GGS_decoratedTaskList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_decoratedTaskList::CollectionElementPtr_decoratedTaskList (const GGS_lstring & in_mTaskName,
                                                                                const GGS_lbigint & in_mStackSize,
                                                                                const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                                                const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                                                const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                                const GGS_location & in_mEndOfTaskDeclaration,
                                                                                const GGS_bool & in_mAutoStart
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_decoratedTaskList::CollectionElementPtr_decoratedTaskList (const GGS_decoratedTaskList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mStackSize, inElement.mProperty_mTaskSetupListAST, inElement.mProperty_mTaskActivateListAST, inElement.mProperty_mTaskDeactivateListAST, inElement.mProperty_mEndOfTaskDeclaration, inElement.mProperty_mAutoStart) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_decoratedTaskList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_decoratedTaskList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_decoratedTaskList (mObject.mProperty_mTaskName, mObject.mProperty_mStackSize, mObject.mProperty_mTaskSetupListAST, mObject.mProperty_mTaskActivateListAST, mObject.mProperty_mTaskDeactivateListAST, mObject.mProperty_mEndOfTaskDeclaration, mObject.mProperty_mAutoStart COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @decoratedTaskList
//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList::GGS_decoratedTaskList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList::GGS_decoratedTaskList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_decoratedTaskList * p = (CollectionElementPtr_decoratedTaskList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_decoratedTaskList) ;
    const GGS_decoratedTaskList_2E_element element (p->mObject.mProperty_mTaskName, p->mObject.mProperty_mStackSize, p->mObject.mProperty_mTaskSetupListAST, p->mObject.mProperty_mTaskActivateListAST, p->mObject.mProperty_mTaskDeactivateListAST, p->mObject.mProperty_mEndOfTaskDeclaration, p->mObject.mProperty_mAutoStart) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_lstring & in_mTaskName,
                                                       const GGS_lbigint & in_mStackSize,
                                                       const GGS_taskSetupListAST & in_mTaskSetupListAST,
                                                       const GGS_taskSetupListAST & in_mTaskActivateListAST,
                                                       const GGS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                       const GGS_location & in_mEndOfTaskDeclaration,
                                                       const GGS_bool & in_mAutoStart
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_decoratedTaskList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_decoratedTaskList (in_mTaskName, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mEndOfTaskDeclaration, in_mAutoStart COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_decoratedTaskList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_decoratedTaskList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mStackSize:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStackSize.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskSetupListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskSetupListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskActivateListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskActivateListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskDeactivateListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskDeactivateListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfTaskDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAutoStart:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAutoStart.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::plusPlusAssignOperation (const GGS_decoratedTaskList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_lbigint & inOperand1,
                                                                       const GGS_taskSetupListAST & inOperand2,
                                                                       const GGS_taskSetupListAST & inOperand3,
                                                                       const GGS_taskSetupListAST & inOperand4,
                                                                       const GGS_location & inOperand5,
                                                                       const GGS_bool & inOperand6
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_decoratedTaskList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_lbigint & inOperand1,
                                                const GGS_taskSetupListAST & inOperand2,
                                                const GGS_taskSetupListAST & inOperand3,
                                                const GGS_taskSetupListAST & inOperand4,
                                                const GGS_location & inOperand5,
                                                const GGS_bool & inOperand6
                                                COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_lbigint inOperand1,
                                           const GGS_taskSetupListAST inOperand2,
                                           const GGS_taskSetupListAST inOperand3,
                                           const GGS_taskSetupListAST inOperand4,
                                           const GGS_location inOperand5,
                                           const GGS_bool inOperand6,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_lbigint inOperand1,
                                                  const GGS_taskSetupListAST inOperand2,
                                                  const GGS_taskSetupListAST inOperand3,
                                                  const GGS_taskSetupListAST inOperand4,
                                                  const GGS_location inOperand5,
                                                  const GGS_bool inOperand6,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_decoratedTaskList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_lbigint & outOperand1,
                                                  GGS_taskSetupListAST & outOperand2,
                                                  GGS_taskSetupListAST & outOperand3,
                                                  GGS_taskSetupListAST & outOperand4,
                                                  GGS_location & outOperand5,
                                                  GGS_bool & outOperand6,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mStackSize ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mAutoStart ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_lbigint & outOperand1,
                                             GGS_taskSetupListAST & outOperand2,
                                             GGS_taskSetupListAST & outOperand3,
                                             GGS_taskSetupListAST & outOperand4,
                                             GGS_location & outOperand5,
                                             GGS_bool & outOperand6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStackSize ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mAutoStart ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_lbigint & outOperand1,
                                            GGS_taskSetupListAST & outOperand2,
                                            GGS_taskSetupListAST & outOperand3,
                                            GGS_taskSetupListAST & outOperand4,
                                            GGS_location & outOperand5,
                                            GGS_bool & outOperand6,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mAutoStart ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::method_first (GGS_lstring & outOperand0,
                                          GGS_lbigint & outOperand1,
                                          GGS_taskSetupListAST & outOperand2,
                                          GGS_taskSetupListAST & outOperand3,
                                          GGS_taskSetupListAST & outOperand4,
                                          GGS_location & outOperand5,
                                          GGS_bool & outOperand6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mStackSize ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mAutoStart ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::method_last (GGS_lstring & outOperand0,
                                         GGS_lbigint & outOperand1,
                                         GGS_taskSetupListAST & outOperand2,
                                         GGS_taskSetupListAST & outOperand3,
                                         GGS_taskSetupListAST & outOperand4,
                                         GGS_location & outOperand5,
                                         GGS_bool & outOperand6,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTaskSetupListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTaskActivateListAST ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mTaskDeactivateListAST ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mEndOfTaskDeclaration ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mAutoStart ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::add_operation (const GGS_decoratedTaskList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::plusAssignOperation (const GGS_decoratedTaskList inList,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskNameAtIndex (GGS_lstring inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedTaskList::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMStackSizeAtIndex (GGS_lbigint inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStackSize = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_decoratedTaskList::getter_mStackSizeAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lbigint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStackSize ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskSetupListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskSetupListAST = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskSetupListASTAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskSetupListAST ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskActivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskActivateListAST = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskActivateListASTAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskActivateListAST ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMTaskDeactivateListASTAtIndex (GGS_taskSetupListAST inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskDeactivateListAST = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST GGS_decoratedTaskList::getter_mTaskDeactivateListASTAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_taskSetupListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskDeactivateListAST ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMEndOfTaskDeclarationAtIndex (GGS_location inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfTaskDeclaration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_decoratedTaskList::getter_mEndOfTaskDeclarationAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfTaskDeclaration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskList::setter_setMAutoStartAtIndex (GGS_bool inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAutoStart = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_decoratedTaskList::getter_mAutoStartAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAutoStart ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @decoratedTaskList
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedTaskList::DownEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element DownEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint DownEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST DownEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAutoStart ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @decoratedTaskList
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedTaskList::UpEnumerator_decoratedTaskList (const GGS_decoratedTaskList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList_2E_element UpEnumerator_decoratedTaskList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedTaskList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint UpEnumerator_decoratedTaskList::current_mStackSize (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskSetupListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskSetupListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskActivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskActivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSetupListAST UpEnumerator_decoratedTaskList::current_mTaskDeactivateListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskDeactivateListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_decoratedTaskList::current_mEndOfTaskDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfTaskDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_decoratedTaskList::current_mAutoStart (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAutoStart ;
}




//--------------------------------------------------------------------------------------------------
//     @decoratedTaskList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskList ("decoratedTaskList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskList result ;
  const GGS_decoratedTaskList * p = (const GGS_decoratedTaskList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedTaskListDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration::objectCompare (const GGS_decoratedTaskListDeclaration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::
init_21_ (const GGS_decoratedTaskList & in_mTaskList,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_decoratedTaskListDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedTaskListDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedTaskListDeclaration_init_21_ (in_mTaskList, inCompiler) ;
  const GGS_decoratedTaskListDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedTaskListDeclaration::
decoratedTaskListDeclaration_init_21_ (const GGS_decoratedTaskList & in_mTaskList,
                                       Compiler * /* inCompiler */) {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration::GGS_decoratedTaskListDeclaration (const cPtr_decoratedTaskListDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedTaskListDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskList GGS_decoratedTaskListDeclaration::readProperty_mTaskList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedTaskList () ;
  }else{
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    return p->mProperty_mTaskList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedTaskListDeclaration::setProperty_mTaskList (const GGS_decoratedTaskList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedTaskListDeclaration) ;
    p->mProperty_mTaskList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedTaskListDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedTaskListDeclaration::cPtr_decoratedTaskListDeclaration (const GGS_decoratedTaskList & in_mTaskList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mTaskList () {
  mProperty_mTaskList = in_mTaskList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_decoratedTaskListDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

void cPtr_decoratedTaskListDeclaration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedTaskListDeclaration:") ;
  mProperty_mTaskList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_decoratedTaskListDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedTaskListDeclaration (mProperty_mTaskList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedTaskListDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mTaskList.printNonNullClassInstanceProperties ("mTaskList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ("decoratedTaskListDeclaration",
                                                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskListDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration result ;
  const GGS_decoratedTaskListDeclaration * p = (const GGS_decoratedTaskListDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedTaskListDeclaration_2E_weak::objectCompare (const GGS_decoratedTaskListDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak & GGS_decoratedTaskListDeclaration_2E_weak::operator = (const GGS_decoratedTaskListDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak::GGS_decoratedTaskListDeclaration_2E_weak (const GGS_decoratedTaskListDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedTaskListDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedTaskListDeclaration * p = (cPtr_decoratedTaskListDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedTaskListDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration GGS_decoratedTaskListDeclaration_2E_weak::bang_decoratedTaskListDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedTaskListDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedTaskListDeclaration) ;
      result = GGS_decoratedTaskListDeclaration ((cPtr_decoratedTaskListDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedTaskListDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ("decoratedTaskListDeclaration.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedTaskListDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTaskListDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedTaskListDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedTaskListDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedTaskListDeclaration_2E_weak GGS_decoratedTaskListDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_decoratedTaskListDeclaration_2E_weak result ;
  const GGS_decoratedTaskListDeclaration_2E_weak * p = (const GGS_decoratedTaskListDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedTaskListDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTaskListDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @taskMapIR
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::GGS_taskMapIR (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::~ GGS_taskMapIR (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR::GGS_taskMapIR (const GGS_taskMapIR & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR & GGS_taskMapIR::operator = (const GGS_taskMapIR & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_hasKeyAtLevel (const GGS_string & inKey,
                                              const GGS_uint & inLevel
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_taskMapIR::getter_locationForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_taskMapIR::getter_keyList (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_taskMapIR::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_taskMapIR_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::performInsert (const GGS_taskMapIR_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>
GGS_taskMapIR::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_taskMapIR::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>>
GGS_taskMapIR::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_taskMapIR::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element_3F_ GGS_taskMapIR
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_taskMapIR_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_taskMapIR_2E_element_3F_::init_nil () ;
    }else{
      GGS_taskMapIR_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mTaskType = info->mProperty_mTaskType ;
      element.mProperty_mPriority = info->mProperty_mPriority ;
      element.mProperty_mStackSize = info->mProperty_mStackSize ;
      element.mProperty_mSetupOrderedList = info->mProperty_mSetupOrderedList ;
      element.mProperty_mActivateOrderedList = info->mProperty_mActivateOrderedList ;
      element.mProperty_mDeactivateOrderedList = info->mProperty_mDeactivateOrderedList ;
      element.mProperty_mTaskNameStringIndex = info->mProperty_mTaskNameStringIndex ;
      element.mProperty_mActivate = info->mProperty_mActivate ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::class_func_mapWithMapToOverride (const GGS_taskMapIR & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_taskMapIR_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_taskMapIR result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_insertKey (GGS_lstring inLKey,
                                      GGS_omnibusType inArgument0,
                                      GGS_uint inArgument1,
                                      GGS_bigint inArgument2,
                                      GGS_stringlist inArgument3,
                                      GGS_stringlist inArgument4,
                                      GGS_stringlist inArgument5,
                                      GGS_uint inArgument6,
                                      GGS_bool inArgument7,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  const GGS_taskMapIR_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::method_searchKey (GGS_lstring inLKey,
                                      GGS_omnibusType & outArgument0,
                                      GGS_uint & outArgument1,
                                      GGS_bigint & outArgument2,
                                      GGS_stringlist & outArgument3,
                                      GGS_stringlist & outArgument4,
                                      GGS_stringlist & outArgument5,
                                      GGS_uint & outArgument6,
                                      GGS_bool & outArgument7,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "** internal error **" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
  }else{
    outArgument0 = info->mProperty_mTaskType ;
    outArgument1 = info->mProperty_mPriority ;
    outArgument2 = info->mProperty_mStackSize ;
    outArgument3 = info->mProperty_mSetupOrderedList ;
    outArgument4 = info->mProperty_mActivateOrderedList ;
    outArgument5 = info->mProperty_mDeactivateOrderedList ;
    outArgument6 = info->mProperty_mTaskNameStringIndex ;
    outArgument7 = info->mProperty_mActivate ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_removeKey (GGS_lstring inLKey,
                                      GGS_omnibusType & outArgument0,
                                      GGS_uint & outArgument1,
                                      GGS_bigint & outArgument2,
                                      GGS_stringlist & outArgument3,
                                      GGS_stringlist & outArgument4,
                                      GGS_stringlist & outArgument5,
                                      GGS_uint & outArgument6,
                                      GGS_bool & outArgument7,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "** internal error **" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
  }else{
    outArgument0 = info->mProperty_mTaskType ;
    outArgument1 = info->mProperty_mPriority ;
    outArgument2 = info->mProperty_mStackSize ;
    outArgument3 = info->mProperty_mSetupOrderedList ;
    outArgument4 = info->mProperty_mActivateOrderedList ;
    outArgument5 = info->mProperty_mDeactivateOrderedList ;
    outArgument6 = info->mProperty_mTaskNameStringIndex ;
    outArgument7 = info->mProperty_mActivate ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_taskMapIR::getter_mTaskTypeForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_omnibusType result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTaskType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_mPriorityForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPriority ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_taskMapIR::getter_mStackSizeForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_bigint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mStackSize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mSetupOrderedListForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSetupOrderedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mActivateOrderedListForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mActivateOrderedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_taskMapIR::getter_mDeactivateOrderedListForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDeactivateOrderedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskMapIR::getter_mTaskNameStringIndexForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mTaskNameStringIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_taskMapIR::getter_mActivateForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mActivate ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMTaskTypeForKey (GGS_omnibusType inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTaskType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMPriorityForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPriority = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMStackSizeForKey (GGS_bigint inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mStackSize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMSetupOrderedListForKey (GGS_stringlist inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSetupOrderedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMActivateOrderedListForKey (GGS_stringlist inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mActivateOrderedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMDeactivateOrderedListForKey (GGS_stringlist inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDeactivateOrderedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMTaskNameStringIndexForKey (GGS_uint inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mTaskNameStringIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::setter_setMActivateForKey (GGS_bool inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_taskMapIR_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mActivate = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_taskMapIR_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTaskType:") ;
    inArray (i COMMA_HERE)->mProperty_mTaskType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPriority:") ;
    inArray (i COMMA_HERE)->mProperty_mPriority.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mStackSize:") ;
    inArray (i COMMA_HERE)->mProperty_mStackSize.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSetupOrderedList:") ;
    inArray (i COMMA_HERE)->mProperty_mSetupOrderedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActivateOrderedList:") ;
    inArray (i COMMA_HERE)->mProperty_mActivateOrderedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDeactivateOrderedList:") ;
    inArray (i COMMA_HERE)->mProperty_mDeactivateOrderedList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mTaskNameStringIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mTaskNameStringIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActivate:") ;
    inArray (i COMMA_HERE)->mProperty_mActivate.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskMapIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_taskMapIR_2E_element>> array = sortedInfoArray () ;
    GGS_taskMapIR_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_taskMapIR_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_taskMapIR_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @taskMapIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskMapIR::DownEnumerator_taskMapIR (const GGS_taskMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element DownEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType DownEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivate ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @taskMapIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskMapIR::UpEnumerator_taskMapIR (const GGS_taskMapIR & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR_2E_element UpEnumerator_taskMapIR::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_taskMapIR::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType UpEnumerator_taskMapIR::current_mTaskType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskType ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskMapIR::current_mPriority (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_taskMapIR::current_mStackSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskMapIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskMapIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskMapIR::current_mActivate (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActivate ;
}


//--------------------------------------------------------------------------------------------------
//     @taskMapIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskMapIR ("taskMapIR",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskMapIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskMapIR GGS_taskMapIR::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_taskMapIR result ;
  const GGS_taskMapIR * p = (const GGS_taskMapIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@taskSortedListIR' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_taskSortedListIR (const GGS_taskSortedListIR_2E_element & inLeft,
                                                   const GGS_taskSortedListIR_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inRight.mProperty_mPriority.objectCompare (inLeft.mProperty_mPriority) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR::GGS_taskSortedListIR (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_taskSortedListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::plusPlusAssignOperation (const GGS_taskSortedListIR_2E_element & inElement
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_taskSortedListIR) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::class_func_sortedListWithValue (const GGS_string & inOperand0,
                                                                           const GGS_uint & inOperand1,
                                                                           const GGS_bigint & inOperand2,
                                                                           const GGS_stringlist & inOperand3,
                                                                           const GGS_stringlist & inOperand4,
                                                                           const GGS_stringlist & inOperand5,
                                                                           const GGS_uint & inOperand6,
                                                                           const GGS_bool & inOperand7
                                                                           COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result = init (nullptr COMMA_THERE) ;
  const GGS_taskSortedListIR_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::addAssignOperation (const GGS_string & inOperand0,
                                               const GGS_uint & inOperand1,
                                               const GGS_bigint & inOperand2,
                                               const GGS_stringlist & inOperand3,
                                               const GGS_stringlist & inOperand4,
                                               const GGS_stringlist & inOperand5,
                                               const GGS_uint & inOperand6,
                                               const GGS_bool & inOperand7
                                               COMMA_LOCATION_ARGS) {
  const GGS_taskSortedListIR_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_insert (const GGS_string inOperand0,
                                          const GGS_uint inOperand1,
                                          const GGS_bigint inOperand2,
                                          const GGS_stringlist inOperand3,
                                          const GGS_stringlist inOperand4,
                                          const GGS_stringlist inOperand5,
                                          const GGS_uint inOperand6,
                                          const GGS_bool inOperand7,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  const GGS_taskSortedListIR_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::plusAssignOperation (const GGS_taskSortedListIR inSortedList,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_taskSortedListIR) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_popSmallest (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_bigint & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_stringlist & outOperand5,
                                               GGS_uint & outOperand6,
                                               GGS_bool & outOperand7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray (0 COMMA_HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray (0 COMMA_HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray (0 COMMA_HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray (0 COMMA_HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray (0 COMMA_HERE).mProperty_mActivate ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::setter_popGreatest (GGS_string & outOperand0,
                                               GGS_uint & outOperand1,
                                               GGS_bigint & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_stringlist & outOperand5,
                                               GGS_uint & outOperand6,
                                               GGS_bool & outOperand7,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray.lastObject (HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray.lastObject (HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray.lastObject (HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray.lastObject (HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray.lastObject (HERE).mProperty_mActivate ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::method_smallest (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_bigint & outOperand2,
                                            GGS_stringlist & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_stringlist & outOperand5,
                                            GGS_uint & outOperand6,
                                            GGS_bool & outOperand7,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray (0 COMMA_HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray (0 COMMA_HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray (0 COMMA_HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray (0 COMMA_HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray (0 COMMA_HERE).mProperty_mActivate ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::method_greatest (GGS_string & outOperand0,
                                            GGS_uint & outOperand1,
                                            GGS_bigint & outOperand2,
                                            GGS_stringlist & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_stringlist & outOperand5,
                                            GGS_uint & outOperand6,
                                            GGS_bool & outOperand7,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mPriority ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mStackSize ;
      outOperand3 = mSharedArray.lastObject (HERE).mProperty_mSetupOrderedList ;
      outOperand4 = mSharedArray.lastObject (HERE).mProperty_mActivateOrderedList ;
      outOperand5 = mSharedArray.lastObject (HERE).mProperty_mDeactivateOrderedList ;
      outOperand6 = mSharedArray.lastObject (HERE).mProperty_mTaskNameStringIndex ;
      outOperand7 = mSharedArray.lastObject (HERE).mProperty_mActivate ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_taskSortedListIR::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @taskSortedListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_taskSortedListIR::DownEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element DownEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint DownEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivate ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @taskSortedListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_taskSortedListIR::UpEnumerator_taskSortedListIR (const GGS_taskSortedListIR & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR_2E_element UpEnumerator_taskSortedListIR::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_taskSortedListIR::current_mTaskName (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskSortedListIR::current_mPriority (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigint UpEnumerator_taskSortedListIR::current_mStackSize (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mStackSize ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mSetupOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mSetupOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mActivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_taskSortedListIR::current_mDeactivateOrderedList (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mDeactivateOrderedList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_taskSortedListIR::current_mTaskNameStringIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mTaskNameStringIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_taskSortedListIR::current_mActivate (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mActivate ;
}



//--------------------------------------------------------------------------------------------------
//     @taskSortedListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskSortedListIR ("taskSortedListIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskSortedListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSortedListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskSortedListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskSortedListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskSortedListIR GGS_taskSortedListIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_taskSortedListIR result ;
  const GGS_taskSortedListIR * p = (const GGS_taskSortedListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskSortedListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSortedListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@globalTaskVariableList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_globalTaskVariableList : public CollectionElementPtr {
  public: GGS_globalTaskVariableList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_globalTaskVariableList (const GGS_string & in_mTaskName,
                                                       const GGS_string & in_mTaskTypeName,
                                                       const GGS_objectIR & in_mInitialValue
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_globalTaskVariableList (const GGS_globalTaskVariableList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_globalTaskVariableList::CollectionElementPtr_globalTaskVariableList (const GGS_string & in_mTaskName,
                                                                                          const GGS_string & in_mTaskTypeName,
                                                                                          const GGS_objectIR & in_mInitialValue
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTaskName, in_mTaskTypeName, in_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_globalTaskVariableList::CollectionElementPtr_globalTaskVariableList (const GGS_globalTaskVariableList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTaskName, inElement.mProperty_mTaskTypeName, inElement.mProperty_mInitialValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_globalTaskVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_globalTaskVariableList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_globalTaskVariableList (mObject.mProperty_mTaskName, mObject.mProperty_mTaskTypeName, mObject.mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @globalTaskVariableList
//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList::GGS_globalTaskVariableList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList::GGS_globalTaskVariableList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_globalTaskVariableList * p = (CollectionElementPtr_globalTaskVariableList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_globalTaskVariableList) ;
    const GGS_globalTaskVariableList_2E_element element (p->mObject.mProperty_mTaskName, p->mObject.mProperty_mTaskTypeName, p->mObject.mProperty_mInitialValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_string & in_mTaskName,
                                                            const GGS_string & in_mTaskTypeName,
                                                            const GGS_objectIR & in_mInitialValue
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_globalTaskVariableList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_globalTaskVariableList (in_mTaskName, in_mTaskTypeName, in_mInitialValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_globalTaskVariableList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_globalTaskVariableList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTaskTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTaskTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInitialValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInitialValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::plusPlusAssignOperation (const GGS_globalTaskVariableList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                 const GGS_string & inOperand1,
                                                                                 const GGS_objectIR & inOperand2
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_globalTaskVariableList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::addAssignOperation (const GGS_string & inOperand0,
                                                     const GGS_string & inOperand1,
                                                     const GGS_objectIR & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_append (const GGS_string inOperand0,
                                                const GGS_string inOperand1,
                                                const GGS_objectIR inOperand2,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_insertAtIndex (const GGS_string inOperand0,
                                                       const GGS_string inOperand1,
                                                       const GGS_objectIR inOperand2,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_globalTaskVariableList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_removeAtIndex (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_objectIR & outOperand2,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTaskName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInitialValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_popFirst (GGS_string & outOperand0,
                                                  GGS_string & outOperand1,
                                                  GGS_objectIR & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_popLast (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_objectIR & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::method_first (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_objectIR & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTaskName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInitialValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::method_last (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_objectIR & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTaskName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTaskTypeName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInitialValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::add_operation (const GGS_globalTaskVariableList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_globalTaskVariableList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::plusAssignOperation (const GGS_globalTaskVariableList inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_setMTaskNameAtIndex (GGS_string inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_globalTaskVariableList::getter_mTaskNameAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_setMTaskTypeNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_globalTaskVariableList::getter_mTaskTypeNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTaskTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_globalTaskVariableList::setter_setMInitialValueAtIndex (GGS_objectIR inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_globalTaskVariableList::getter_mInitialValueAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_objectIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInitialValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @globalTaskVariableList
//--------------------------------------------------------------------------------------------------

DownEnumerator_globalTaskVariableList::DownEnumerator_globalTaskVariableList (const GGS_globalTaskVariableList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element DownEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR DownEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @globalTaskVariableList
//--------------------------------------------------------------------------------------------------

UpEnumerator_globalTaskVariableList::UpEnumerator_globalTaskVariableList (const GGS_globalTaskVariableList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList_2E_element UpEnumerator_globalTaskVariableList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_globalTaskVariableList::current_mTaskName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_globalTaskVariableList::current_mTaskTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTaskTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR UpEnumerator_globalTaskVariableList::current_mInitialValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInitialValue ;
}




//--------------------------------------------------------------------------------------------------
//     @globalTaskVariableList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_globalTaskVariableList ("globalTaskVariableList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_globalTaskVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_globalTaskVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_globalTaskVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_globalTaskVariableList GGS_globalTaskVariableList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_globalTaskVariableList result ;
  const GGS_globalTaskVariableList * p = (const GGS_globalTaskVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_globalTaskVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@taskMapIR generateCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCode (const GGS_taskMapIR inObject,
                                   GGS_string & ioArgument_ioLLVMcode,
                                   const GGS_generationContext constinArgument_inGenerationContext,
                                   GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                   GGS_primitiveAndServiceIRlist & ioArgument_ioServiceList,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Activate task service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 480)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 480)) ;
  GGS_string var_activateTaskImplementationName_17512 = function_llvmNameForServiceImplementation (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 481)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 481)) ;
  GGS_string var_activateTaskCallName_17614 = function_llvmNameForServiceCall (function_llvmNameForActivateTask (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 482)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 482)) ;
  ioArgument_ioServiceList.addAssignOperation (var_activateTaskCallName_17614, var_activateTaskImplementationName_17512, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas3", 483)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_activateTaskCallName_17614, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 484)).add_operation (GGS_string (" (i8 %inTaskIndex) nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 484)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 484)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Wait for activation service"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 486)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 486)) ;
  GGS_string var_waitForActivationImplementationName_17985 = function_llvmNameForServiceImplementation (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 487)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 487)) ;
  GGS_string var_waitForActivationCallName_18102 = function_llvmNameForServiceCall (function_llvmNameForTaskWaitsForActivation (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 488)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 488)) ;
  ioArgument_ioServiceList.addAssignOperation (var_waitForActivationCallName_18102, var_waitForActivationImplementationName_17985, GGS_bool (false)  COMMA_SOURCE_FILE ("task-declaration.galgas3", 489)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @").add_operation (var_waitForActivationCallName_18102, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 490)).add_operation (GGS_string (" () nounwind\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 490)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 490)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task variables"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 492)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 492)) ;
  UpEnumerator_globalTaskVariableList enumerator_18483 (constinArgument_inGenerationContext.readProperty_mGlobalTaskVariableList ()) ;
  while (enumerator_18483.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmNameForGlobalVariable (enumerator_18483.current_mTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 494)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 494)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = internal global %"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 495)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(enumerator_18483.current_mTaskTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 496)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 496)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_llvmValue (enumerator_18483.current_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 497)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 497)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 497)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 497)) ;
    enumerator_18483.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 499)) ;
  GGS_taskSortedListIR temp_0 = GGS_taskSortedListIR::init (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 501)) ;
  GGS_taskSortedListIR var_orderedTaskList_18843 = temp_0 ;
  const GGS_taskMapIR temp_1 = inObject ;
  UpEnumerator_taskMapIR enumerator_18879 (temp_1) ;
  while (enumerator_18879.hasCurrentObject ()) {
    var_orderedTaskList_18843.addAssignOperation (enumerator_18879.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_18879.current (HERE).readProperty_mPriority (), enumerator_18879.current (HERE).readProperty_mStackSize (), enumerator_18879.current (HERE).readProperty_mSetupOrderedList (), enumerator_18879.current (HERE).readProperty_mActivateOrderedList (), enumerator_18879.current (HERE).readProperty_mDeactivateOrderedList (), enumerator_18879.current (HERE).readProperty_mTaskNameStringIndex (), enumerator_18879.current (HERE).readProperty_mActivate ()  COMMA_SOURCE_FILE ("task-declaration.galgas3", 503)) ;
    enumerator_18879.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Create task extern routine"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 514)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 514)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("declare void @kernel_create_task (i32 %inTaskIndex, i8* %inTaskName, i32* %inStackBufferAddress, "), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 515)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 %inStackBufferSize, void ()* %inTaskRoutine) nounwind\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 516)) ;
  UpEnumerator_taskSortedListIR enumerator_19463 (var_orderedTaskList_18843) ;
  while (enumerator_19463.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Task ").add_operation (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 518)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 518)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 518)) ;
    GGS_string var_assemblerTaskName_19553 = enumerator_19463.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 519)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_stackNameForTask (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)).add_operation (GGS_string (" = global ["), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)).add_operation (enumerator_19463.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)).getter_string (SOURCE_FILE ("task-declaration.galgas3", 520)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)).add_operation (GGS_string (" x i32] zeroinitializer\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 520)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 521)) ;
    GGS_string var_effectiveParameter_19766 = GGS_string ("(%").add_operation (var_assemblerTaskName_19553, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 522)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 522)).add_operation (function_llvmNameForGlobalVariable (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 522)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 522)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 522)) ;
    GGS_string var_formalArgument_19879 = GGS_string (" (%").add_operation (var_assemblerTaskName_19553, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 523)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 523)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 523)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 523)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 523)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 524)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 524)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 524)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_setupNameForTaskType (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)).add_operation (var_formalArgument_19879, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 526)) ;
    UpEnumerator_stringlist enumerator_20167 (enumerator_19463.current (HERE).readProperty_mSetupOrderedList ()) ;
    while (enumerator_20167.hasCurrentObject ()) {
      GGS_string var_mangledName_20217 = GGS_string ("task.setup.").add_operation (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 528)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 528)).add_operation (enumerator_20167.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 528)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_20217.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 529)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 529)).add_operation (var_formalArgument_19879, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 529)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 529)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 529)) ;
      enumerator_20167.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 531)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 532)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 533)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 533)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 534)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (function_activateNameForTaskType (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 536)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 536)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 536)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 536)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_formalArgument_19879.add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 537)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 537)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 537)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 537)) ;
    UpEnumerator_stringlist enumerator_20719 (enumerator_19463.current (HERE).readProperty_mActivateOrderedList ()) ;
    while (enumerator_20719.hasCurrentObject ()) {
      GGS_string var_mangledName_20775 = GGS_string ("task.activate.").add_operation (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 539)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 539)).add_operation (enumerator_20719.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 539)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_20775.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 540)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 540)).add_operation (var_formalArgument_19879, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 540)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 540)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 540)) ;
      enumerator_20719.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 542)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 543)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 544)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 544)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 545)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_deactivateNameForTaskType (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)).add_operation (var_formalArgument_19879, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 547)) ;
    UpEnumerator_stringlist enumerator_21246 (enumerator_19463.current (HERE).readProperty_mDeactivateOrderedList ()) ;
    while (enumerator_21246.hasCurrentObject ()) {
      GGS_string var_mangledName_21306 = GGS_string ("task.deactivate.").add_operation (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 549)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 549)).add_operation (enumerator_21246.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 549)) ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_mangledName_21306.getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 550)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 550)).add_operation (var_formalArgument_19879, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 550)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 550)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 550)) ;
      enumerator_21246.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 552)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 553)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 554)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 554)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 555)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void ").add_operation (function_mainRoutineNameForTask (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)).add_operation (GGS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 557)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_setupNameForTaskType (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 558)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 558)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 558)).add_operation (var_effectiveParameter_19766, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 558)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 558)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 558)) ;
    GGS_string var_taskLoopLabel_21887 = GGS_string ("loop.").add_operation (enumerator_19463.current (HERE).readProperty_mTaskName ().getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 559)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 559)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_21887, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 560)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 560)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 560)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_taskLoopLabel_21887.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 561)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 561)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = enumerator_19463.current (HERE).readProperty_mActivate ().operator_not (SOURCE_FILE ("task-declaration.galgas3", 562)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18102, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 563)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 563)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 563)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_activateNameForTaskType (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 565)).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas3", 565)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 565)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 565)).add_operation (var_effectiveParameter_19766, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 565)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 565)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 565)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @func.").add_operation (function_llvmNameForFunction (enumerator_19463.current (HERE).readProperty_mTaskName ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)).add_operation (var_effectiveParameter_19766, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 566)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void ").add_operation (function_deactivateNameForTaskType (enumerator_19463.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 567)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 567)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 567)).add_operation (var_effectiveParameter_19766, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 567)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 567)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 567)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = enumerator_19463.current (HERE).readProperty_mActivate ().boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_waitForActivationCallName_18102, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 569)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 569)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 569)) ;
      }
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_taskLoopLabel_21887, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 571)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 571)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 571)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 572)) ;
    enumerator_19463.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(function_llvmTitleComment (GGS_string ("Start tasks"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 575)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 575)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @start.tasks ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 576)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 576)).add_operation (GGS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 576)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 576)) ;
  UpEnumerator_taskSortedListIR enumerator_22974 (var_orderedTaskList_18843) ;
  GGS_uint index_22962 (uint32_t (0)) ;
  while (enumerator_22974.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (function_stackAddressForTask (enumerator_22974.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 578)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 578)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 578)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" = getelementptr inbounds [").add_operation (enumerator_22974.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 579)).getter_string (SOURCE_FILE ("task-declaration.galgas3", 579)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 579)).add_operation (GGS_string (" x i32], "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 579)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 579)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("[").add_operation (enumerator_22974.current (HERE).readProperty_mStackSize ().divide_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)).getter_string (SOURCE_FILE ("task-declaration.galgas3", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)).add_operation (GGS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)).add_operation (function_stackNameForTask (enumerator_22974.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 580)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 581)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %task.name.").add_operation (index_22962.getter_string (SOURCE_FILE ("task-declaration.galgas3", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 582)).add_operation (GGS_string (" = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 582)).add_operation (function_literalStringName (enumerator_22974.current (HERE).readProperty_mTaskNameStringIndex (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 582)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 582)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 582)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 582)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @kernel_create_task ("), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 583)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("i32 ").add_operation (index_22962.getter_string (SOURCE_FILE ("task-declaration.galgas3", 584)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 584)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 584)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i8* %task.name.").add_operation (index_22962.getter_string (SOURCE_FILE ("task-declaration.galgas3", 585)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 585)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 585)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32* ").add_operation (function_stackAddressForTask (enumerator_22974.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 586)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 586)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 586)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_22974.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("task-declaration.galgas3", 587)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 587)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 587)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", void ()* ").add_operation (function_mainRoutineNameForTask (enumerator_22974.current (HERE).readProperty_mTaskName (), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 588)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 588)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas3", 588)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 588)) ;
    enumerator_22974.gotoNextObject () ;
    index_22962.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 577)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 590)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas3", 591)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_taskActivateFunctionIR_2E_weak::objectCompare (const GGS_taskActivateFunctionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak & GGS_taskActivateFunctionIR_2E_weak::operator = (const GGS_taskActivateFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak::GGS_taskActivateFunctionIR_2E_weak (const GGS_taskActivateFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_taskActivateFunctionIR result ;
  if (isValid ()) {
    const cPtr_taskActivateFunctionIR * p = (cPtr_taskActivateFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_taskActivateFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR GGS_taskActivateFunctionIR_2E_weak::bang_taskActivateFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_taskActivateFunctionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_taskActivateFunctionIR) ;
      result = GGS_taskActivateFunctionIR ((cPtr_taskActivateFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @taskActivateFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ("taskActivateFunctionIR.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_taskActivateFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskActivateFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_taskActivateFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_taskActivateFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_taskActivateFunctionIR_2E_weak GGS_taskActivateFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_taskActivateFunctionIR_2E_weak result ;
  const GGS_taskActivateFunctionIR_2E_weak * p = (const GGS_taskActivateFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_taskActivateFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskActivateFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendGetUniversalPropertyReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalPropertyReference (GGS_instructionListIR & ioObject,
                                                          const GGS_omnibusType constinArgument_inType,
                                                          const GGS_string constinArgument_inLLVMName,
                                                          const GGS_string constinArgument_inElementLLVMName,
                                                          const GGS_uint constinArgument_inPropertyIndex,
                                                          const GGS_string constinArgument_inPropertyName,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_getUniversalPropertyReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementLLVMName, constinArgument_inPropertyIndex, constinArgument_inPropertyName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas3", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalPropertyReferenceIR_2E_weak::objectCompare (const GGS_getUniversalPropertyReferenceIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak::GGS_getUniversalPropertyReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak & GGS_getUniversalPropertyReferenceIR_2E_weak::operator = (const GGS_getUniversalPropertyReferenceIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak::GGS_getUniversalPropertyReferenceIR_2E_weak (const GGS_getUniversalPropertyReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak GGS_getUniversalPropertyReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_getUniversalPropertyReferenceIR result ;
  if (isValid ()) {
    const cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getUniversalPropertyReferenceIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR GGS_getUniversalPropertyReferenceIR_2E_weak::bang_getUniversalPropertyReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getUniversalPropertyReferenceIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalPropertyReferenceIR) ;
      result = GGS_getUniversalPropertyReferenceIR ((cPtr_getUniversalPropertyReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getUniversalPropertyReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ("getUniversalPropertyReferenceIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalPropertyReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalPropertyReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalPropertyReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalPropertyReferenceIR_2E_weak GGS_getUniversalPropertyReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_getUniversalPropertyReferenceIR_2E_weak result ;
  const GGS_getUniversalPropertyReferenceIR_2E_weak * p = (const GGS_getUniversalPropertyReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalPropertyReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionAST::objectCompare (const GGS_assertInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST::GGS_assertInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_expressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionAST (inCompiler COMMA_THERE)) ;
  object->assertInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_assertInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionAST::
assertInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                   const GGS_expressionAST & in_mExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST::GGS_assertInstructionAST (const cPtr_assertInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_assertInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionAST::cPtr_assertInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_expressionAST & in_mExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assertInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

void cPtr_assertInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_assertInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assertInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST ("assertInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_assertInstructionAST result ;
  const GGS_assertInstructionAST * p = (const GGS_assertInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionAST_2E_weak::objectCompare (const GGS_assertInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak::GGS_assertInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak & GGS_assertInstructionAST_2E_weak::operator = (const GGS_assertInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak::GGS_assertInstructionAST_2E_weak (const GGS_assertInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak GGS_assertInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assertInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_assertInstructionAST result ;
  if (isValid ()) {
    const cPtr_assertInstructionAST * p = (cPtr_assertInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_assertInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST GGS_assertInstructionAST_2E_weak::bang_assertInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assertInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionAST) ;
      result = GGS_assertInstructionAST ((cPtr_assertInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assertInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ("assertInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionAST_2E_weak GGS_assertInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_assertInstructionAST_2E_weak result ;
  const GGS_assertInstructionAST_2E_weak * p = (const GGS_assertInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionIR::objectCompare (const GGS_assertInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR::GGS_assertInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR::
init_21__21__21_ (const GGS_location & in_mAssertInstructionLocation,
                  const GGS_instructionListIR & in_mInstructionList,
                  const GGS_objectIR & in_mExpressionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_assertInstructionIR (inCompiler COMMA_THERE)) ;
  object->assertInstructionIR_init_21__21__21_ (in_mAssertInstructionLocation, in_mInstructionList, in_mExpressionValue, inCompiler) ;
  const GGS_assertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assertInstructionIR::
assertInstructionIR_init_21__21__21_ (const GGS_location & in_mAssertInstructionLocation,
                                      const GGS_instructionListIR & in_mInstructionList,
                                      const GGS_objectIR & in_mExpressionValue,
                                      Compiler * /* inCompiler */) {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR::GGS_assertInstructionIR (const cPtr_assertInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_assertInstructionIR::readProperty_mAssertInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mAssertInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionIR::setProperty_mAssertInstructionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mAssertInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_assertInstructionIR::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionIR::setProperty_mInstructionList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_assertInstructionIR::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assertInstructionIR::setProperty_mExpressionValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assertInstructionIR) ;
    p->mProperty_mExpressionValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assertInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assertInstructionIR::cPtr_assertInstructionIR (const GGS_location & in_mAssertInstructionLocation,
                                                    const GGS_instructionListIR & in_mInstructionList,
                                                    const GGS_objectIR & in_mExpressionValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mAssertInstructionLocation (),
mProperty_mInstructionList (),
mProperty_mExpressionValue () {
  mProperty_mAssertInstructionLocation = in_mAssertInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mExpressionValue = in_mExpressionValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

void cPtr_assertInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@assertInstructionIR:") ;
  mProperty_mAssertInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_assertInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assertInstructionIR (mProperty_mAssertInstructionLocation, mProperty_mInstructionList, mProperty_mExpressionValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mAssertInstructionLocation.printNonNullClassInstanceProperties ("mAssertInstructionLocation") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assertInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR ("assertInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_assertInstructionIR result ;
  const GGS_assertInstructionIR * p = (const GGS_assertInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assertInstructionIR_2E_weak::objectCompare (const GGS_assertInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak::GGS_assertInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak & GGS_assertInstructionIR_2E_weak::operator = (const GGS_assertInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak::GGS_assertInstructionIR_2E_weak (const GGS_assertInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak GGS_assertInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assertInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_assertInstructionIR result ;
  if (isValid ()) {
    const cPtr_assertInstructionIR * p = (cPtr_assertInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_assertInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR GGS_assertInstructionIR_2E_weak::bang_assertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assertInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assertInstructionIR) ;
      result = GGS_assertInstructionIR ((cPtr_assertInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assertInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ("assertInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assertInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assertInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assertInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assertInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assertInstructionIR_2E_weak GGS_assertInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_assertInstructionIR_2E_weak result ;
  const GGS_assertInstructionIR_2E_weak * p = (const GGS_assertInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assertInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assertInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@integerSliceFieldListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_integerSliceFieldListAST : public CollectionElementPtr {
  public: GGS_integerSliceFieldListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_integerSliceFieldListAST (const GGS_lstring & in_mSliceWidth,
                                                         const GGS_expressionAST & in_mExpression,
                                                         const GGS_location & in_mExpressionLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_integerSliceFieldListAST (const GGS_integerSliceFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_integerSliceFieldListAST::CollectionElementPtr_integerSliceFieldListAST (const GGS_lstring & in_mSliceWidth,
                                                                                              const GGS_expressionAST & in_mExpression,
                                                                                              const GGS_location & in_mExpressionLocation
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSliceWidth, in_mExpression, in_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_integerSliceFieldListAST::CollectionElementPtr_integerSliceFieldListAST (const GGS_integerSliceFieldListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSliceWidth, inElement.mProperty_mExpression, inElement.mProperty_mExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_integerSliceFieldListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_integerSliceFieldListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_integerSliceFieldListAST (mObject.mProperty_mSliceWidth, mObject.mProperty_mExpression, mObject.mProperty_mExpressionLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @integerSliceFieldListAST
//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST::GGS_integerSliceFieldListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST::GGS_integerSliceFieldListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_integerSliceFieldListAST * p = (CollectionElementPtr_integerSliceFieldListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_integerSliceFieldListAST) ;
    const GGS_integerSliceFieldListAST_2E_element element (p->mObject.mProperty_mSliceWidth, p->mObject.mProperty_mExpression, p->mObject.mProperty_mExpressionLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_lstring & in_mSliceWidth,
                                                              const GGS_expressionAST & in_mExpression,
                                                              const GGS_location & in_mExpressionLocation
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_integerSliceFieldListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_integerSliceFieldListAST (in_mSliceWidth, in_mExpression, in_mExpressionLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_integerSliceFieldListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_integerSliceFieldListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSliceWidth:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSliceWidth.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpressionLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpressionLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::plusPlusAssignOperation (const GGS_integerSliceFieldListAST_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_expressionAST & inOperand1,
                                                                                     const GGS_location & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_integerSliceFieldListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_expressionAST & inOperand1,
                                                       const GGS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_expressionAST inOperand1,
                                                  const GGS_location inOperand2,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_expressionAST inOperand1,
                                                         const GGS_location inOperand2,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_integerSliceFieldListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_expressionAST & outOperand1,
                                                         GGS_location & outOperand2,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mExpressionLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_expressionAST & outOperand1,
                                                    GGS_location & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mExpressionLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_expressionAST & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mExpressionLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_expressionAST & outOperand1,
                                                 GGS_location & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSliceWidth ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mExpressionLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_expressionAST & outOperand1,
                                                GGS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSliceWidth ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mExpressionLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::add_operation (const GGS_integerSliceFieldListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_integerSliceFieldListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::plusAssignOperation (const GGS_integerSliceFieldListAST inList,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_setMSliceWidthAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceWidth = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_integerSliceFieldListAST::getter_mSliceWidthAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSliceWidth ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_setMExpressionAtIndex (GGS_expressionAST inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_integerSliceFieldListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_expressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_integerSliceFieldListAST::setter_setMExpressionLocationAtIndex (GGS_location inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpressionLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_integerSliceFieldListAST::getter_mExpressionLocationAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpressionLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @integerSliceFieldListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_integerSliceFieldListAST::DownEnumerator_integerSliceFieldListAST (const GGS_integerSliceFieldListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element DownEnumerator_integerSliceFieldListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_integerSliceFieldListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST DownEnumerator_integerSliceFieldListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_integerSliceFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpressionLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @integerSliceFieldListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_integerSliceFieldListAST::UpEnumerator_integerSliceFieldListAST (const GGS_integerSliceFieldListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST_2E_element UpEnumerator_integerSliceFieldListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_integerSliceFieldListAST::current_mSliceWidth (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSliceWidth ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST UpEnumerator_integerSliceFieldListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_integerSliceFieldListAST::current_mExpressionLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpressionLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @integerSliceFieldListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST ("integerSliceFieldListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerSliceFieldListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceFieldListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceFieldListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceFieldListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_integerSliceFieldListAST result ;
  const GGS_integerSliceFieldListAST * p = (const GGS_integerSliceFieldListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceFieldListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerSliceExpressionAST_2E_weak::objectCompare (const GGS_integerSliceExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak::GGS_integerSliceExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak & GGS_integerSliceExpressionAST_2E_weak::operator = (const GGS_integerSliceExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak::GGS_integerSliceExpressionAST_2E_weak (const GGS_integerSliceExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak GGS_integerSliceExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_integerSliceExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_integerSliceExpressionAST result ;
  if (isValid ()) {
    const cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_integerSliceExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST_2E_weak::bang_integerSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_integerSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerSliceExpressionAST) ;
      result = GGS_integerSliceExpressionAST ((cPtr_integerSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @integerSliceExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST_2E_weak ("integerSliceExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerSliceExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST_2E_weak GGS_integerSliceExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_integerSliceExpressionAST_2E_weak result ;
  const GGS_integerSliceExpressionAST_2E_weak * p = (const GGS_integerSliceExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemRoutineDeclarationAST_2E_weak::objectCompare (const GGS_systemRoutineDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak::GGS_systemRoutineDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak & GGS_systemRoutineDeclarationAST_2E_weak::operator = (const GGS_systemRoutineDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak::GGS_systemRoutineDeclarationAST_2E_weak (const GGS_systemRoutineDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak GGS_systemRoutineDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_systemRoutineDeclarationAST result ;
  if (isValid ()) {
    const cPtr_systemRoutineDeclarationAST * p = (cPtr_systemRoutineDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_systemRoutineDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST GGS_systemRoutineDeclarationAST_2E_weak::bang_systemRoutineDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_systemRoutineDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_systemRoutineDeclarationAST) ;
      result = GGS_systemRoutineDeclarationAST ((cPtr_systemRoutineDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @systemRoutineDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ("systemRoutineDeclarationAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_systemRoutineDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemRoutineDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemRoutineDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemRoutineDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemRoutineDeclarationAST_2E_weak GGS_systemRoutineDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_systemRoutineDeclarationAST_2E_weak result ;
  const GGS_systemRoutineDeclarationAST_2E_weak * p = (const GGS_systemRoutineDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemRoutineDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemRoutineDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sectionIRlist' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_sectionIRlist : public CollectionElementPtr {
  public: GGS_sectionIRlist_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_sectionIRlist (const GGS_string & in_mSectionCallName,
                                              const GGS_string & in_mSectionImplementationName,
                                              const GGS_bool & in_invocationFromAnyMode
                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_sectionIRlist (const GGS_sectionIRlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_sectionIRlist::CollectionElementPtr_sectionIRlist (const GGS_string & in_mSectionCallName,
                                                                        const GGS_string & in_mSectionImplementationName,
                                                                        const GGS_bool & in_invocationFromAnyMode
                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSectionCallName, in_mSectionImplementationName, in_invocationFromAnyMode) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_sectionIRlist::CollectionElementPtr_sectionIRlist (const GGS_sectionIRlist_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSectionCallName, inElement.mProperty_mSectionImplementationName, inElement.mProperty_invocationFromAnyMode) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_sectionIRlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_sectionIRlist::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_sectionIRlist (mObject.mProperty_mSectionCallName, mObject.mProperty_mSectionImplementationName, mObject.mProperty_invocationFromAnyMode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @sectionIRlist
//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist::GGS_sectionIRlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist::GGS_sectionIRlist (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_sectionIRlist * p = (CollectionElementPtr_sectionIRlist *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_sectionIRlist) ;
    const GGS_sectionIRlist_2E_element element (p->mObject.mProperty_mSectionCallName, p->mObject.mProperty_mSectionImplementationName, p->mObject.mProperty_invocationFromAnyMode) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                   const GGS_string & in_mSectionCallName,
                                                   const GGS_string & in_mSectionImplementationName,
                                                   const GGS_bool & in_invocationFromAnyMode
                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_sectionIRlist * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_sectionIRlist (in_mSectionCallName, in_mSectionImplementationName, in_invocationFromAnyMode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_sectionIRlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_sectionIRlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSectionCallName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSectionCallName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSectionImplementationName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSectionImplementationName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("invocationFromAnyMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_invocationFromAnyMode.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sectionIRlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::plusPlusAssignOperation (const GGS_sectionIRlist_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_bool & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_sectionIRlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_bool & inOperand2
                                            COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_bool inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_bool inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_sectionIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_bool & outOperand2,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSectionCallName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_invocationFromAnyMode ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_bool & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSectionCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_invocationFromAnyMode ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_bool & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSectionCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_invocationFromAnyMode ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_bool & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSectionCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_invocationFromAnyMode ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_bool & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSectionCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSectionImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_invocationFromAnyMode ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::add_operation (const GGS_sectionIRlist & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_sectionIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::plusAssignOperation (const GGS_sectionIRlist inList,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_setMSectionCallNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionCallName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_sectionIRlist::getter_mSectionCallNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionCallName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_setMSectionImplementationNameAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionImplementationName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_sectionIRlist::getter_mSectionImplementationNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSectionImplementationName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_sectionIRlist::setter_setInvocationFromAnyModeAtIndex (GGS_bool inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_invocationFromAnyMode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sectionIRlist::getter_invocationFromAnyModeAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_invocationFromAnyMode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sectionIRlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_sectionIRlist::DownEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element DownEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_invocationFromAnyMode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sectionIRlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_sectionIRlist::UpEnumerator_sectionIRlist (const GGS_sectionIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist_2E_element UpEnumerator_sectionIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sectionIRlist::current_mSectionCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sectionIRlist::current_mSectionImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSectionImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_sectionIRlist::current_invocationFromAnyMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_invocationFromAnyMode ;
}




//--------------------------------------------------------------------------------------------------
//     @sectionIRlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sectionIRlist ("sectionIRlist",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sectionIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionIRlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sectionIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sectionIRlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionIRlist GGS_sectionIRlist::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_sectionIRlist result ;
  const GGS_sectionIRlist * p = (const GGS_sectionIRlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sectionIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@primitiveAndServiceIRlist' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_primitiveAndServiceIRlist : public CollectionElementPtr {
  public: GGS_primitiveAndServiceIRlist_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_primitiveAndServiceIRlist (const GGS_string & in_mCallName,
                                                          const GGS_string & in_mImplementationName,
                                                          const GGS_bool & in_mHasReturnValue
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_primitiveAndServiceIRlist::CollectionElementPtr_primitiveAndServiceIRlist (const GGS_string & in_mCallName,
                                                                                                const GGS_string & in_mImplementationName,
                                                                                                const GGS_bool & in_mHasReturnValue
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCallName, in_mImplementationName, in_mHasReturnValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_primitiveAndServiceIRlist::CollectionElementPtr_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCallName, inElement.mProperty_mImplementationName, inElement.mProperty_mHasReturnValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_primitiveAndServiceIRlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_primitiveAndServiceIRlist::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_primitiveAndServiceIRlist (mObject.mProperty_mCallName, mObject.mProperty_mImplementationName, mObject.mProperty_mHasReturnValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist::GGS_primitiveAndServiceIRlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist::GGS_primitiveAndServiceIRlist (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_primitiveAndServiceIRlist * p = (CollectionElementPtr_primitiveAndServiceIRlist *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_primitiveAndServiceIRlist) ;
    const GGS_primitiveAndServiceIRlist_2E_element element (p->mObject.mProperty_mCallName, p->mObject.mProperty_mImplementationName, p->mObject.mProperty_mHasReturnValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_string & in_mCallName,
                                                               const GGS_string & in_mImplementationName,
                                                               const GGS_bool & in_mHasReturnValue
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_primitiveAndServiceIRlist * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_primitiveAndServiceIRlist (in_mCallName, in_mImplementationName, in_mHasReturnValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_primitiveAndServiceIRlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_primitiveAndServiceIRlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCallName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCallName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mImplementationName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mImplementationName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHasReturnValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHasReturnValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::plusPlusAssignOperation (const GGS_primitiveAndServiceIRlist_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                       const GGS_string & inOperand1,
                                                                                       const GGS_bool & inOperand2
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_primitiveAndServiceIRlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::addAssignOperation (const GGS_string & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_bool & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_append (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_bool inOperand2,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_insertAtIndex (const GGS_string inOperand0,
                                                          const GGS_string inOperand1,
                                                          const GGS_bool inOperand2,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_primitiveAndServiceIRlist_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_removeAtIndex (GGS_string & outOperand0,
                                                          GGS_string & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCallName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mImplementationName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mHasReturnValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_popFirst (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_bool & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mHasReturnValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_popLast (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mHasReturnValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::method_first (GGS_string & outOperand0,
                                                  GGS_string & outOperand1,
                                                  GGS_bool & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCallName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mImplementationName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mHasReturnValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::method_last (GGS_string & outOperand0,
                                                 GGS_string & outOperand1,
                                                 GGS_bool & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCallName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mImplementationName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mHasReturnValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::add_operation (const GGS_primitiveAndServiceIRlist & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_primitiveAndServiceIRlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::plusAssignOperation (const GGS_primitiveAndServiceIRlist inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_setMCallNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCallName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_primitiveAndServiceIRlist::getter_mCallNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCallName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_setMImplementationNameAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mImplementationName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_primitiveAndServiceIRlist::getter_mImplementationNameAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mImplementationName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_primitiveAndServiceIRlist::setter_setMHasReturnValueAtIndex (GGS_bool inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHasReturnValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primitiveAndServiceIRlist::getter_mHasReturnValueAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHasReturnValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

DownEnumerator_primitiveAndServiceIRlist::DownEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element DownEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasReturnValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @primitiveAndServiceIRlist
//--------------------------------------------------------------------------------------------------

UpEnumerator_primitiveAndServiceIRlist::UpEnumerator_primitiveAndServiceIRlist (const GGS_primitiveAndServiceIRlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist_2E_element UpEnumerator_primitiveAndServiceIRlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_primitiveAndServiceIRlist::current_mCallName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCallName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_primitiveAndServiceIRlist::current_mImplementationName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mImplementationName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_primitiveAndServiceIRlist::current_mHasReturnValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHasReturnValue ;
}




//--------------------------------------------------------------------------------------------------
//     @primitiveAndServiceIRlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ("primitiveAndServiceIRlist",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primitiveAndServiceIRlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveAndServiceIRlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primitiveAndServiceIRlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primitiveAndServiceIRlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveAndServiceIRlist GGS_primitiveAndServiceIRlist::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_primitiveAndServiceIRlist result ;
  const GGS_primitiveAndServiceIRlist * p = (const GGS_primitiveAndServiceIRlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primitiveAndServiceIRlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveAndServiceIRlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@routineTypedSignature' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_routineTypedSignature : public CollectionElementPtr {
  public: GGS_routineTypedSignature_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_routineTypedSignature (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                      const GGS_lstring & in_mSelector,
                                                      const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                      const GGS_lstring & in_mFormalArgumentName
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_routineTypedSignature (const GGS_routineTypedSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineTypedSignature::CollectionElementPtr_routineTypedSignature (const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                        const GGS_lstring & in_mSelector,
                                                                                        const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                        const GGS_lstring & in_mFormalArgumentName
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineTypedSignature::CollectionElementPtr_routineTypedSignature (const GGS_routineTypedSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mSelector, inElement.mProperty_mTypeProxy, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_routineTypedSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_routineTypedSignature::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_routineTypedSignature (mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mSelector, mObject.mProperty_mTypeProxy, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineTypedSignature
//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature::GGS_routineTypedSignature (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature::GGS_routineTypedSignature (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_routineTypedSignature * p = (CollectionElementPtr_routineTypedSignature *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_routineTypedSignature) ;
    const GGS_routineTypedSignature_2E_element element (p->mObject.mProperty_mFormalArgumentPassingMode, p->mObject.mProperty_mSelector, p->mObject.mProperty_mTypeProxy, p->mObject.mProperty_mFormalArgumentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                           const GGS_lstring & in_mSelector,
                                                           const GGS_unifiedTypeMapEntry & in_mTypeProxy,
                                                           const GGS_lstring & in_mFormalArgumentName
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_routineTypedSignature * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_routineTypedSignature (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineTypedSignature::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineTypedSignature::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentPassingMode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelector:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelector.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTypeProxy:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTypeProxy.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormalArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormalArgumentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::plusPlusAssignOperation (const GGS_routineTypedSignature_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::class_func_listWithValue (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_unifiedTypeMapEntry & inOperand2,
                                                                               const GGS_lstring & inOperand3
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_routineTypedSignature result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::addAssignOperation (const GGS_procFormalArgumentPassingMode & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_unifiedTypeMapEntry & inOperand2,
                                                    const GGS_lstring & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_append (const GGS_procFormalArgumentPassingMode inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_unifiedTypeMapEntry inOperand2,
                                               const GGS_lstring inOperand3,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_insertAtIndex (const GGS_procFormalArgumentPassingMode inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_unifiedTypeMapEntry inOperand2,
                                                      const GGS_lstring inOperand3,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_routineTypedSignature_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_removeAtIndex (GGS_procFormalArgumentPassingMode & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_unifiedTypeMapEntry & outOperand2,
                                                      GGS_lstring & outOperand3,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelector ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTypeProxy ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mFormalArgumentName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_popFirst (GGS_procFormalArgumentPassingMode & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_unifiedTypeMapEntry & outOperand2,
                                                 GGS_lstring & outOperand3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTypeProxy ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_popLast (GGS_procFormalArgumentPassingMode & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_unifiedTypeMapEntry & outOperand2,
                                                GGS_lstring & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTypeProxy ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::method_first (GGS_procFormalArgumentPassingMode & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_unifiedTypeMapEntry & outOperand2,
                                              GGS_lstring & outOperand3,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelector ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTypeProxy ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mFormalArgumentName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::method_last (GGS_procFormalArgumentPassingMode & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_unifiedTypeMapEntry & outOperand2,
                                             GGS_lstring & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormalArgumentPassingMode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelector ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTypeProxy ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mFormalArgumentName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::add_operation (const GGS_routineTypedSignature & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::plusAssignOperation (const GGS_routineTypedSignature inList,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMFormalArgumentPassingModeAtIndex (GGS_procFormalArgumentPassingMode inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentPassingMode = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode GGS_routineTypedSignature::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_procFormalArgumentPassingMode result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentPassingMode ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMSelectorAtIndex (GGS_lstring inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_routineTypedSignature::getter_mSelectorAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelector ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMTypeProxyAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeProxy = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_routineTypedSignature::getter_mTypeProxyAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeProxy ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineTypedSignature::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_routineTypedSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormalArgumentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineTypedSignature::objectCompare (const GGS_routineTypedSignature & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_routineTypedSignature_2E_element left = mArray (int32_t (i) COMMA_HERE) ;
        const GGS_routineTypedSignature_2E_element right = inOperand.mArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineTypedSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineTypedSignature::DownEnumerator_routineTypedSignature (const GGS_routineTypedSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element DownEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode DownEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineTypedSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineTypedSignature::UpEnumerator_routineTypedSignature (const GGS_routineTypedSignature & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature_2E_element UpEnumerator_routineTypedSignature::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_procFormalArgumentPassingMode UpEnumerator_routineTypedSignature::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineTypedSignature::current_mSelector (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_routineTypedSignature::current_mTypeProxy (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeProxy ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineTypedSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//     @routineTypedSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineTypedSignature ("routineTypedSignature",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineTypedSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineTypedSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineTypedSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_routineTypedSignature::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineTypedSignature result ;
  const GGS_routineTypedSignature * p = (const GGS_routineTypedSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineTypedSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_systemUserRoutineIR_2E_weak::objectCompare (const GGS_systemUserRoutineIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak::GGS_systemUserRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak & GGS_systemUserRoutineIR_2E_weak::operator = (const GGS_systemUserRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak::GGS_systemUserRoutineIR_2E_weak (const GGS_systemUserRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak GGS_systemUserRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_systemUserRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_systemUserRoutineIR result ;
  if (isValid ()) {
    const cPtr_systemUserRoutineIR * p = (cPtr_systemUserRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_systemUserRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR GGS_systemUserRoutineIR_2E_weak::bang_systemUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_systemUserRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_systemUserRoutineIR) ;
      result = GGS_systemUserRoutineIR ((cPtr_systemUserRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @systemUserRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ("systemUserRoutineIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_systemUserRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_systemUserRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_systemUserRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_systemUserRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_systemUserRoutineIR_2E_weak GGS_systemUserRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_systemUserRoutineIR_2E_weak result ;
  const GGS_systemUserRoutineIR_2E_weak * p = (const GGS_systemUserRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_systemUserRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("systemUserRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendFreeComment'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendFreeComment (GGS_instructionListIR & ioObject,
                                        const GGS_string constinArgument_inComment,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_freeCommentIR::init_21_ (constinArgument_inComment, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas3", 3)) ;
}


//--------------------------------------------------------------------------------------------------
// @freeCommentIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeCommentIR::objectCompare (const GGS_freeCommentIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR::GGS_freeCommentIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::
init_21_ (const GGS_string & in_mComment,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_freeCommentIR * object = nullptr ;
  macroMyNew (object, cPtr_freeCommentIR (inCompiler COMMA_THERE)) ;
  object->freeCommentIR_init_21_ (in_mComment, inCompiler) ;
  const GGS_freeCommentIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_freeCommentIR::
freeCommentIR_init_21_ (const GGS_string & in_mComment,
                        Compiler * /* inCompiler */) {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR::GGS_freeCommentIR (const cPtr_freeCommentIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_freeCommentIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_freeCommentIR::readProperty_mComment (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    return p->mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_freeCommentIR::setProperty_mComment (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_freeCommentIR) ;
    p->mProperty_mComment = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @freeCommentIR class
//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mComment () {
}

//--------------------------------------------------------------------------------------------------

cPtr_freeCommentIR::cPtr_freeCommentIR (const GGS_string & in_mComment,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mComment () {
  mProperty_mComment = in_mComment ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_freeCommentIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

void cPtr_freeCommentIR::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@freeCommentIR:") ;
  mProperty_mComment.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_freeCommentIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_freeCommentIR (mProperty_mComment, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_freeCommentIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mComment.printNonNullClassInstanceProperties ("mComment") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @freeCommentIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR ("freeCommentIR",
                                                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeCommentIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeCommentIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeCommentIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR result ;
  const GGS_freeCommentIR * p = (const GGS_freeCommentIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeCommentIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_freeCommentIR_2E_weak::objectCompare (const GGS_freeCommentIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak::GGS_freeCommentIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak & GGS_freeCommentIR_2E_weak::operator = (const GGS_freeCommentIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak::GGS_freeCommentIR_2E_weak (const GGS_freeCommentIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak GGS_freeCommentIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_freeCommentIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR_2E_weak::unwrappedValue (void) const {
  GGS_freeCommentIR result ;
  if (isValid ()) {
    const cPtr_freeCommentIR * p = (cPtr_freeCommentIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_freeCommentIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR GGS_freeCommentIR_2E_weak::bang_freeCommentIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_freeCommentIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_freeCommentIR) ;
      result = GGS_freeCommentIR ((cPtr_freeCommentIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @freeCommentIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ("freeCommentIR.weak",
                                                                          & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_freeCommentIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_freeCommentIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_freeCommentIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_freeCommentIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_freeCommentIR_2E_weak GGS_freeCommentIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_freeCommentIR_2E_weak result ;
  const GGS_freeCommentIR_2E_weak * p = (const GGS_freeCommentIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_freeCommentIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("freeCommentIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendGetUniversalArrayElementReference'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendGetUniversalArrayElementReference (GGS_instructionListIR & ioObject,
                                                              const GGS_omnibusType constinArgument_inType,
                                                              const GGS_string constinArgument_inLLVMName,
                                                              const GGS_omnibusType constinArgument_inElementType,
                                                              const GGS_string constinArgument_inElementLLVMName,
                                                              const GGS_objectIR constinArgument_inIndexIR,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_getUniversalArrayElementReferenceIR::init_21__21__21__21__21_ (constinArgument_inType, constinArgument_inLLVMName, constinArgument_inElementType, constinArgument_inElementLLVMName, constinArgument_inIndexIR, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas3", 9)) ;
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getUniversalArrayElementReferenceIR_2E_weak::objectCompare (const GGS_getUniversalArrayElementReferenceIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak::GGS_getUniversalArrayElementReferenceIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak & GGS_getUniversalArrayElementReferenceIR_2E_weak::operator = (const GGS_getUniversalArrayElementReferenceIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak::GGS_getUniversalArrayElementReferenceIR_2E_weak (const GGS_getUniversalArrayElementReferenceIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak GGS_getUniversalArrayElementReferenceIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR_2E_weak::unwrappedValue (void) const {
  GGS_getUniversalArrayElementReferenceIR result ;
  if (isValid ()) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_getUniversalArrayElementReferenceIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR GGS_getUniversalArrayElementReferenceIR_2E_weak::bang_getUniversalArrayElementReferenceIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getUniversalArrayElementReferenceIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getUniversalArrayElementReferenceIR) ;
      result = GGS_getUniversalArrayElementReferenceIR ((cPtr_getUniversalArrayElementReferenceIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getUniversalArrayElementReferenceIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ("getUniversalArrayElementReferenceIR.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getUniversalArrayElementReferenceIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getUniversalArrayElementReferenceIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getUniversalArrayElementReferenceIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getUniversalArrayElementReferenceIR_2E_weak GGS_getUniversalArrayElementReferenceIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_getUniversalArrayElementReferenceIR_2E_weak result ;
  const GGS_getUniversalArrayElementReferenceIR_2E_weak * p = (const GGS_getUniversalArrayElementReferenceIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getUniversalArrayElementReferenceIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@compileTimePrefixOperatorEnumeration string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_compileTimePrefixOperatorEnumeration & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_compileTimePrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_string ("not") ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_string ("-") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@compileTimePrefixOperatorEnumeration prefixOperator'
//--------------------------------------------------------------------------------------------------

GGS_prefixOperator extensionGetter_prefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result_result ; // Returned variable
  const GGS_compileTimePrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("prefix-operator-compile-time.galgas3", 23)) ;
    }
    break ;
  case GGS_compileTimePrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas3", 24)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compiletimePrefixOperatorAST_2E_weak::objectCompare (const GGS_compiletimePrefixOperatorAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak::GGS_compiletimePrefixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak & GGS_compiletimePrefixOperatorAST_2E_weak::operator = (const GGS_compiletimePrefixOperatorAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak::GGS_compiletimePrefixOperatorAST_2E_weak (const GGS_compiletimePrefixOperatorAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak GGS_compiletimePrefixOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_compiletimePrefixOperatorAST result ;
  if (isValid ()) {
    const cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_compiletimePrefixOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST_2E_weak::bang_compiletimePrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compiletimePrefixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compiletimePrefixOperatorAST) ;
      result = GGS_compiletimePrefixOperatorAST ((cPtr_compiletimePrefixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compiletimePrefixOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ("compiletimePrefixOperatorAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compiletimePrefixOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compiletimePrefixOperatorAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compiletimePrefixOperatorAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST_2E_weak GGS_compiletimePrefixOperatorAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST_2E_weak result ;
  const GGS_compiletimePrefixOperatorAST_2E_weak * p = (const GGS_compiletimePrefixOperatorAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compiletimePrefixOperatorAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimePrefixOperatorAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimePrefixOperatorUsage_2E_weak::objectCompare (const GGS_compileTimePrefixOperatorUsage_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak::GGS_compileTimePrefixOperatorUsage_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak & GGS_compileTimePrefixOperatorUsage_2E_weak::operator = (const GGS_compileTimePrefixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak::GGS_compileTimePrefixOperatorUsage_2E_weak (const GGS_compileTimePrefixOperatorUsage & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak GGS_compileTimePrefixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_compileTimePrefixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_compileTimePrefixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage_2E_weak::bang_compileTimePrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_compileTimePrefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_compileTimePrefixOperatorUsage) ;
      result = GGS_compileTimePrefixOperatorUsage ((cPtr_compileTimePrefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @compileTimePrefixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ("compileTimePrefixOperatorUsage.weak",
                                                                                           & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_compileTimePrefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimePrefixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimePrefixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage_2E_weak GGS_compileTimePrefixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage_2E_weak result ;
  const GGS_compileTimePrefixOperatorUsage_2E_weak * p = (const GGS_compileTimePrefixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimePrefixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST::objectCompare (const GGS_ifInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST::GGS_ifInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_expressionAST & in_mTestExpression,
                                          const GGS_location & in_mTestExpressionEndLocation,
                                          const GGS_bool & in_mStaticIfExpression,
                                          const GGS_instructionListAST & in_mThenInstructionList,
                                          const GGS_location & in_mEndOfThenInstructionList,
                                          const GGS_instructionListAST & in_mElseInstructionList,
                                          const GGS_location & in_mEndOfElseInstructionList,
                                          const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTestExpression, in_mTestExpressionEndLocation, in_mStaticIfExpression, in_mThenInstructionList, in_mEndOfThenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GGS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                           const GGS_expressionAST & in_mTestExpression,
                                                           const GGS_location & in_mTestExpressionEndLocation,
                                                           const GGS_bool & in_mStaticIfExpression,
                                                           const GGS_instructionListAST & in_mThenInstructionList,
                                                           const GGS_location & in_mEndOfThenInstructionList,
                                                           const GGS_instructionListAST & in_mElseInstructionList,
                                                           const GGS_location & in_mEndOfElseInstructionList,
                                                           const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTestExpression = in_mTestExpression ;
  mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST::GGS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_ifInstructionAST::readProperty_mTestExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mTestExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mTestExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mTestExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mTestExpressionEndLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mTestExpressionEndLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifInstructionAST::readProperty_mStaticIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mStaticIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mStaticIfExpression (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mStaticIfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_ifInstructionAST::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mThenInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOfThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mEndOfThenInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_ifInstructionAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mElseInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mEndOfElseInstructionList (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOfElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionAST::setProperty_mEndOf_5F_if_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    p->mProperty_mEndOf_5F_if_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTestExpression (),
mProperty_mTestExpressionEndLocation (),
mProperty_mStaticIfExpression (),
mProperty_mThenInstructionList (),
mProperty_mEndOfThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS_expressionAST & in_mTestExpression,
                                              const GGS_location & in_mTestExpressionEndLocation,
                                              const GGS_bool & in_mStaticIfExpression,
                                              const GGS_instructionListAST & in_mThenInstructionList,
                                              const GGS_location & in_mEndOfThenInstructionList,
                                              const GGS_instructionListAST & in_mElseInstructionList,
                                              const GGS_location & in_mEndOfElseInstructionList,
                                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTestExpression (),
mProperty_mTestExpressionEndLocation (),
mProperty_mStaticIfExpression (),
mProperty_mThenInstructionList (),
mProperty_mEndOfThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTestExpression = in_mTestExpression ;
  mProperty_mTestExpressionEndLocation = in_mTestExpressionEndLocation ;
  mProperty_mStaticIfExpression = in_mStaticIfExpression ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mEndOfThenInstructionList = in_mEndOfThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTestExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStaticIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mTestExpression, mProperty_mTestExpressionEndLocation, mProperty_mStaticIfExpression, mProperty_mThenInstructionList, mProperty_mEndOfThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTestExpression.printNonNullClassInstanceProperties ("mTestExpression") ;
    mProperty_mTestExpressionEndLocation.printNonNullClassInstanceProperties ("mTestExpressionEndLocation") ;
    mProperty_mStaticIfExpression.printNonNullClassInstanceProperties ("mStaticIfExpression") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mEndOfThenInstructionList.printNonNullClassInstanceProperties ("mEndOfThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElseInstructionList.printNonNullClassInstanceProperties ("mEndOfElseInstructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST result ;
  const GGS_ifInstructionAST * p = (const GGS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST_2E_weak::objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak & GGS_ifInstructionAST_2E_weak::operator = (const GGS_ifInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (const GGS_ifInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionAST result ;
  if (isValid ()) {
    const cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GGS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ("ifInstructionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  const GGS_ifInstructionAST_2E_weak * p = (const GGS_ifInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionIR::objectCompare (const GGS_ifInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR::GGS_ifInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR::
init_21__21__21__21_ (const GGS_string & in_mLLVMTestName,
                      const GGS_location & in_mLocation,
                      const GGS_instructionListIR & in_mThenInstructionGenerationList,
                      const GGS_instructionListIR & in_mElseInstructionGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionIR (inCompiler COMMA_THERE)) ;
  object->ifInstructionIR_init_21__21__21__21_ (in_mLLVMTestName, in_mLocation, in_mThenInstructionGenerationList, in_mElseInstructionGenerationList, inCompiler) ;
  const GGS_ifInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionIR::
ifInstructionIR_init_21__21__21__21_ (const GGS_string & in_mLLVMTestName,
                                      const GGS_location & in_mLocation,
                                      const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                      const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                      Compiler * /* inCompiler */) {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR::GGS_ifInstructionIR (const cPtr_ifInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_ifInstructionIR::readProperty_mLLVMTestName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLLVMTestName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mLLVMTestName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLLVMTestName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_ifInstructionIR::readProperty_mThenInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mThenInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mThenInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mThenInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_ifInstructionIR::readProperty_mElseInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    return p->mProperty_mElseInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifInstructionIR::setProperty_mElseInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionIR) ;
    p->mProperty_mElseInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionIR::cPtr_ifInstructionIR (const GGS_string & in_mLLVMTestName,
                                            const GGS_location & in_mLocation,
                                            const GGS_instructionListIR & in_mThenInstructionGenerationList,
                                            const GGS_instructionListIR & in_mElseInstructionGenerationList,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLLVMTestName (),
mProperty_mLocation (),
mProperty_mThenInstructionGenerationList (),
mProperty_mElseInstructionGenerationList () {
  mProperty_mLLVMTestName = in_mLLVMTestName ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mThenInstructionGenerationList = in_mThenInstructionGenerationList ;
  mProperty_mElseInstructionGenerationList = in_mElseInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

void cPtr_ifInstructionIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionIR:") ;
  mProperty_mLLVMTestName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionIR (mProperty_mLLVMTestName, mProperty_mLocation, mProperty_mThenInstructionGenerationList, mProperty_mElseInstructionGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTestName.printNonNullClassInstanceProperties ("mLLVMTestName") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mThenInstructionGenerationList.printNonNullClassInstanceProperties ("mThenInstructionGenerationList") ;
    mProperty_mElseInstructionGenerationList.printNonNullClassInstanceProperties ("mElseInstructionGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR ("ifInstructionIR",
                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_ifInstructionIR result ;
  const GGS_ifInstructionIR * p = (const GGS_ifInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionIR_2E_weak::objectCompare (const GGS_ifInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak::GGS_ifInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak & GGS_ifInstructionIR_2E_weak::operator = (const GGS_ifInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak::GGS_ifInstructionIR_2E_weak (const GGS_ifInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak GGS_ifInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionIR result ;
  if (isValid ()) {
    const cPtr_ifInstructionIR * p = (cPtr_ifInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR GGS_ifInstructionIR_2E_weak::bang_ifInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionIR) ;
      result = GGS_ifInstructionIR ((cPtr_ifInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ("ifInstructionIR.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionIR_2E_weak GGS_ifInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ifInstructionIR_2E_weak result ;
  const GGS_ifInstructionIR_2E_weak * p = (const GGS_ifInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::objectCompare (const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak & GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::operator = (const GGS_fixedSizeArrayTypeDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (const GGS_fixedSizeArrayTypeDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  if (isValid ()) {
    const cPtr_fixedSizeArrayTypeDeclarationAST * p = (cPtr_fixedSizeArrayTypeDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_fixedSizeArrayTypeDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::bang_fixedSizeArrayTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_fixedSizeArrayTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayTypeDeclarationAST) ;
      result = GGS_fixedSizeArrayTypeDeclarationAST ((cPtr_fixedSizeArrayTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @fixedSizeArrayTypeDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ("fixedSizeArrayTypeDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayTypeDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayTypeDeclarationAST_2E_weak GGS_fixedSizeArrayTypeDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayTypeDeclarationAST_2E_weak result ;
  const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak * p = (const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayTypeDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayTypeDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::objectCompare (const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (void) :
GGS_userLLVMTypeDefinitionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak & GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::operator = (const GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (const GGS_userLLVMStaticArrayTypeDefinitionIR & inSource) :
GGS_userLLVMTypeDefinitionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::unwrappedValue (void) const {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (isValid ()) {
    const cPtr_userLLVMStaticArrayTypeDefinitionIR * p = (cPtr_userLLVMStaticArrayTypeDefinitionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_userLLVMStaticArrayTypeDefinitionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::bang_userLLVMStaticArrayTypeDefinitionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_userLLVMStaticArrayTypeDefinitionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
      result = GGS_userLLVMStaticArrayTypeDefinitionIR ((cPtr_userLLVMStaticArrayTypeDefinitionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @userLLVMStaticArrayTypeDefinitionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ("userLLVMStaticArrayTypeDefinitionIR.weak",
                                                                                                & kTypeDescriptor_GALGAS_userLLVMTypeDefinitionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak result ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak * p = (const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_userLLVMStaticArrayTypeDefinitionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("userLLVMStaticArrayTypeDefinitionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::objectCompare (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (void) :
GGS_abstractAssignmentOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak & GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::operator = (const GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (const GGS_fixedSizeArrayAssignmentOperatorUsage & inSource) :
GGS_abstractAssignmentOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (isValid ()) {
    const cPtr_fixedSizeArrayAssignmentOperatorUsage * p = (cPtr_fixedSizeArrayAssignmentOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_fixedSizeArrayAssignmentOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::bang_fixedSizeArrayAssignmentOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_fixedSizeArrayAssignmentOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
      result = GGS_fixedSizeArrayAssignmentOperatorUsage ((cPtr_fixedSizeArrayAssignmentOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @fixedSizeArrayAssignmentOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ("fixedSizeArrayAssignmentOperatorUsage.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak result ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak * p = (const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixedSizeArrayAssignmentOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixedSizeArrayAssignmentOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::objectCompare (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak & GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::operator = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (isValid ()) {
    const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::bang_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
      result = GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ((cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak result ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak * p = (const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_staticArrayTypeAssignFunctionIR_2E_weak::objectCompare (const GGS_staticArrayTypeAssignFunctionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak::GGS_staticArrayTypeAssignFunctionIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak & GGS_staticArrayTypeAssignFunctionIR_2E_weak::operator = (const GGS_staticArrayTypeAssignFunctionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak::GGS_staticArrayTypeAssignFunctionIR_2E_weak (const GGS_staticArrayTypeAssignFunctionIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak GGS_staticArrayTypeAssignFunctionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR_2E_weak::unwrappedValue (void) const {
  GGS_staticArrayTypeAssignFunctionIR result ;
  if (isValid ()) {
    const cPtr_staticArrayTypeAssignFunctionIR * p = (cPtr_staticArrayTypeAssignFunctionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_staticArrayTypeAssignFunctionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR GGS_staticArrayTypeAssignFunctionIR_2E_weak::bang_staticArrayTypeAssignFunctionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_staticArrayTypeAssignFunctionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_staticArrayTypeAssignFunctionIR) ;
      result = GGS_staticArrayTypeAssignFunctionIR ((cPtr_staticArrayTypeAssignFunctionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @staticArrayTypeAssignFunctionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ("staticArrayTypeAssignFunctionIR.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_staticArrayTypeAssignFunctionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_staticArrayTypeAssignFunctionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_staticArrayTypeAssignFunctionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_staticArrayTypeAssignFunctionIR_2E_weak GGS_staticArrayTypeAssignFunctionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_staticArrayTypeAssignFunctionIR_2E_weak result ;
  const GGS_staticArrayTypeAssignFunctionIR_2E_weak * p = (const GGS_staticArrayTypeAssignFunctionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_staticArrayTypeAssignFunctionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticArrayTypeAssignFunctionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum registerGroupIndexAST
//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST::GGS_registerGroupIndexAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST GGS_registerGroupIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GGS_registerGroupIndexAST result ;
  result.mEnum = Enumeration::enum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST GGS_registerGroupIndexAST::class_func_index (const GGS_expressionAST & inAssociatedValue0,
                                                                       const GGS_location & inAssociatedValue1,
                                                                       const GGS_bool & inAssociatedValue2
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerGroupIndexAST result ;
  result.mEnum = Enumeration::enum_index ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerGroupIndexAST_2E_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST::method_extractIndex (GGS_expressionAST & outAssociatedValue_index,
                                                     GGS_location & outAssociatedValue_endOfIndex,
                                                     GGS_bool & outAssociatedValue_checkIndexExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_index) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    String s ;
    s.appendCString ("proc @registerGroupIndexAST.index invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_registerGroupIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST_2E_index_3F_ GGS_registerGroupIndexAST::getter_getIndex (UNUSED_LOCATION_ARGS) const {
  GGS_registerGroupIndexAST_2E_index_3F_ result ;
  if (mEnum == Enumeration::enum_index) {
    const auto ptr = (const GGS_registerGroupIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerGroupIndexAST_2E_index (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST::getAssociatedValuesFor_index (GGS_expressionAST & out_index,
                                                              GGS_location & out_endOfIndex,
                                                              GGS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GGS_registerGroupIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerGroupIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerGroupIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerGroupIndexAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerGroupIndexAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerGroupIndexAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @registerGroupIndexAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerGroupIndexAST ("registerGroupIndexAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerGroupIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerGroupIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerGroupIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerGroupIndexAST GGS_registerGroupIndexAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_registerGroupIndexAST result ;
  const GGS_registerGroupIndexAST * p = (const GGS_registerGroupIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerGroupIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum registerIndexAST
//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST::GGS_registerIndexAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST GGS_registerIndexAST::class_func_noIndex (UNUSED_LOCATION_ARGS) {
  GGS_registerIndexAST result ;
  result.mEnum = Enumeration::enum_noIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST GGS_registerIndexAST::class_func_index (const GGS_expressionAST & inAssociatedValue0,
                                                             const GGS_location & inAssociatedValue1,
                                                             const GGS_bool & inAssociatedValue2
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerIndexAST result ;
  result.mEnum = Enumeration::enum_index ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_registerIndexAST_2E_index (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST::method_extractIndex (GGS_expressionAST & outAssociatedValue_index,
                                                GGS_location & outAssociatedValue_endOfIndex,
                                                GGS_bool & outAssociatedValue_checkIndexExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_index) {
    outAssociatedValue_index.drop () ;
    outAssociatedValue_endOfIndex.drop () ;
    outAssociatedValue_checkIndexExpression.drop () ;
    String s ;
    s.appendCString ("proc @registerIndexAST.index invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_registerIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_index = ptr->mProperty_index ;
    outAssociatedValue_endOfIndex = ptr->mProperty_endOfIndex ;
    outAssociatedValue_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST_2E_index_3F_ GGS_registerIndexAST::getter_getIndex (UNUSED_LOCATION_ARGS) const {
  GGS_registerIndexAST_2E_index_3F_ result ;
  if (mEnum == Enumeration::enum_index) {
    const auto ptr = (const GGS_registerIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_registerIndexAST_2E_index (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST::getAssociatedValuesFor_index (GGS_expressionAST & out_index,
                                                         GGS_location & out_endOfIndex,
                                                         GGS_bool & out_checkIndexExpression) const {
  const auto ptr = (const GGS_registerIndexAST_2E_index *) mAssociatedValues.associatedValuesPointer () ;
  out_index = ptr->mProperty_index ;
  out_endOfIndex = ptr->mProperty_endOfIndex ;
  out_checkIndexExpression = ptr->mProperty_checkIndexExpression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_registerIndexAST [3] = {
  "(not built)",
  "noIndex",
  "index"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerIndexAST::getter_isNoIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noIndex == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_registerIndexAST::getter_isIndex (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_index == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerIndexAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @registerIndexAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_registerIndexAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @registerIndexAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerIndexAST ("registerIndexAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerIndexAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIndexAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerIndexAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerIndexAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerIndexAST GGS_registerIndexAST::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_registerIndexAST result ;
  const GGS_registerIndexAST * p = (const GGS_registerIndexAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerIndexAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIndexAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@switchCaseListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_switchCaseListAST : public CollectionElementPtr {
  public: GGS_switchCaseListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_switchCaseListAST (const GGS_lstringlist & in_mCaseIdentifiers,
                                                  const GGS_instructionListAST & in_mCaseInstructionList
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_switchCaseListAST (const GGS_switchCaseListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_switchCaseListAST::CollectionElementPtr_switchCaseListAST (const GGS_lstringlist & in_mCaseIdentifiers,
                                                                                const GGS_instructionListAST & in_mCaseInstructionList
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCaseIdentifiers, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_switchCaseListAST::CollectionElementPtr_switchCaseListAST (const GGS_switchCaseListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCaseIdentifiers, inElement.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_switchCaseListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_switchCaseListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_switchCaseListAST (mObject.mProperty_mCaseIdentifiers, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @switchCaseListAST
//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST::GGS_switchCaseListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST::GGS_switchCaseListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_switchCaseListAST * p = (CollectionElementPtr_switchCaseListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_switchCaseListAST) ;
    const GGS_switchCaseListAST_2E_element element (p->mObject.mProperty_mCaseIdentifiers, p->mObject.mProperty_mCaseInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_lstringlist & in_mCaseIdentifiers,
                                                       const GGS_instructionListAST & in_mCaseInstructionList
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_switchCaseListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_switchCaseListAST (in_mCaseIdentifiers, in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchCaseListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_switchCaseListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseIdentifiers:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseIdentifiers.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::plusPlusAssignOperation (const GGS_switchCaseListAST_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::class_func_listWithValue (const GGS_lstringlist & inOperand0,
                                                                       const GGS_instructionListAST & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_switchCaseListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::addAssignOperation (const GGS_lstringlist & inOperand0,
                                                const GGS_instructionListAST & inOperand1
                                                COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_append (const GGS_lstringlist inOperand0,
                                           const GGS_instructionListAST inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_insertAtIndex (const GGS_lstringlist inOperand0,
                                                  const GGS_instructionListAST inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_removeAtIndex (GGS_lstringlist & outOperand0,
                                                  GGS_instructionListAST & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCaseIdentifiers ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCaseInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_popFirst (GGS_lstringlist & outOperand0,
                                             GGS_instructionListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifiers ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_popLast (GGS_lstringlist & outOperand0,
                                            GGS_instructionListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifiers ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::method_first (GGS_lstringlist & outOperand0,
                                          GGS_instructionListAST & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifiers ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::method_last (GGS_lstringlist & outOperand0,
                                         GGS_instructionListAST & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifiers ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::add_operation (const GGS_switchCaseListAST & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::plusAssignOperation (const GGS_switchCaseListAST inList,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_setMCaseIdentifiersAtIndex (GGS_lstringlist inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifiers = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_switchCaseListAST::getter_mCaseIdentifiersAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifiers ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListAST::setter_setMCaseInstructionListAtIndex (GGS_instructionListAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_switchCaseListAST::getter_mCaseInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_instructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @switchCaseListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_switchCaseListAST::DownEnumerator_switchCaseListAST (const GGS_switchCaseListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element DownEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST DownEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @switchCaseListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_switchCaseListAST::UpEnumerator_switchCaseListAST (const GGS_switchCaseListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST_2E_element UpEnumerator_switchCaseListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_switchCaseListAST::current_mCaseIdentifiers (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifiers ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST UpEnumerator_switchCaseListAST::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @switchCaseListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListAST ("switchCaseListAST",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchCaseListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchCaseListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchCaseListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchCaseListAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_switchCaseListAST result ;
  const GGS_switchCaseListAST * p = (const GGS_switchCaseListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchCaseListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST::objectCompare (const GGS_switchInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_expressionAST & in_mSwitchExpression,
                          const GGS_location & in_mEndOf_5F_test_5F_expression,
                          const GGS_switchCaseListAST & in_mSwitchCaseList,
                          const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOf_5F_test_5F_expression, in_mSwitchCaseList, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GGS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_expressionAST & in_mSwitchExpression,
                                               const GGS_location & in_mEndOf_5F_test_5F_expression,
                                               const GGS_switchCaseListAST & in_mSwitchCaseList,
                                               const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mSwitchExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_test_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_test_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mEndOf_5F_test_5F_expression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_test_5F_expression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListAST GGS_switchInstructionAST::readProperty_mSwitchCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchCaseListAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mSwitchCaseList (const GGS_switchCaseListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchCaseList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionAST::setProperty_mEndOf_5F_switch_5F_instruction (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_expressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOf_5F_test_5F_expression,
                                                      const GGS_switchCaseListAST & in_mSwitchCaseList,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOf_5F_test_5F_expression (),
mProperty_mSwitchCaseList (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOf_5F_test_5F_expression = in_mEndOf_5F_test_5F_expression ;
  mProperty_mSwitchCaseList = in_mSwitchCaseList ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_test_5F_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchCaseList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_switchInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOf_5F_test_5F_expression, mProperty_mSwitchCaseList, mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOf_5F_test_5F_expression.printNonNullClassInstanceProperties ("mEndOf_test_expression") ;
    mProperty_mSwitchCaseList.printNonNullClassInstanceProperties ("mSwitchCaseList") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @switchInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  const GGS_switchInstructionAST * p = (const GGS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST_2E_weak::objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak & GGS_switchInstructionAST_2E_weak::operator = (const GGS_switchInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (const GGS_switchInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionAST result ;
  if (isValid ()) {
    const cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GGS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @switchInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ("switchInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  const GGS_switchInstructionAST_2E_weak * p = (const GGS_switchInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@switchCaseListIR' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_switchCaseListIR : public CollectionElementPtr {
  public: GGS_switchCaseListIR_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_switchCaseListIR (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                 const GGS_instructionListIR & in_mCaseInstructionList
                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_switchCaseListIR (const GGS_switchCaseListIR_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_switchCaseListIR::CollectionElementPtr_switchCaseListIR (const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                                              const GGS_instructionListIR & in_mCaseInstructionList
                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCaseIdentifierIndexes, in_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_switchCaseListIR::CollectionElementPtr_switchCaseListIR (const GGS_switchCaseListIR_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCaseIdentifierIndexes, inElement.mProperty_mCaseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_switchCaseListIR::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_switchCaseListIR::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_switchCaseListIR (mObject.mProperty_mCaseIdentifierIndexes, mObject.mProperty_mCaseInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @switchCaseListIR
//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR::GGS_switchCaseListIR (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR::GGS_switchCaseListIR (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_switchCaseListIR * p = (CollectionElementPtr_switchCaseListIR *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_switchCaseListIR) ;
    const GGS_switchCaseListIR_2E_element element (p->mObject.mProperty_mCaseIdentifierIndexes, p->mObject.mProperty_mCaseInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                      const GGS_uintlist & in_mCaseIdentifierIndexes,
                                                      const GGS_instructionListIR & in_mCaseInstructionList
                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_switchCaseListIR * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_switchCaseListIR (in_mCaseIdentifierIndexes, in_mCaseInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchCaseListIR::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_switchCaseListIR::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseIdentifierIndexes:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseIdentifierIndexes.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchCaseListIR result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::plusPlusAssignOperation (const GGS_switchCaseListIR_2E_element & inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::class_func_listWithValue (const GGS_uintlist & inOperand0,
                                                                     const GGS_instructionListIR & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element element (inOperand0, inOperand1) ;
  GGS_switchCaseListIR result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::addAssignOperation (const GGS_uintlist & inOperand0,
                                               const GGS_instructionListIR & inOperand1
                                               COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_append (const GGS_uintlist inOperand0,
                                          const GGS_instructionListIR inOperand1,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_insertAtIndex (const GGS_uintlist inOperand0,
                                                 const GGS_instructionListIR inOperand1,
                                                 const GGS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_switchCaseListIR_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_removeAtIndex (GGS_uintlist & outOperand0,
                                                 GGS_instructionListIR & outOperand1,
                                                 const GGS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCaseInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_popFirst (GGS_uintlist & outOperand0,
                                            GGS_instructionListIR & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_popLast (GGS_uintlist & outOperand0,
                                           GGS_instructionListIR & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::method_first (GGS_uintlist & outOperand0,
                                         GGS_instructionListIR & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::method_last (GGS_uintlist & outOperand0,
                                        GGS_instructionListIR & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseIdentifierIndexes ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::add_operation (const GGS_switchCaseListIR & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::subList (const int32_t inStart,
                                                    const int32_t inLength,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListWithRange (const GGS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::getter_subListToIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_switchCaseListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::plusAssignOperation (const GGS_switchCaseListIR inList,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_setMCaseIdentifierIndexesAtIndex (GGS_uintlist inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifierIndexes = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_switchCaseListIR::getter_mCaseIdentifierIndexesAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseIdentifierIndexes ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_switchCaseListIR::setter_setMCaseInstructionListAtIndex (GGS_instructionListIR inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_switchCaseListIR::getter_mCaseInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_instructionListIR result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @switchCaseListIR
//--------------------------------------------------------------------------------------------------

DownEnumerator_switchCaseListIR::DownEnumerator_switchCaseListIR (const GGS_switchCaseListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element DownEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR DownEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @switchCaseListIR
//--------------------------------------------------------------------------------------------------

UpEnumerator_switchCaseListIR::UpEnumerator_switchCaseListIR (const GGS_switchCaseListIR & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR_2E_element UpEnumerator_switchCaseListIR::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_switchCaseListIR::current_mCaseIdentifierIndexes (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseIdentifierIndexes ;
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR UpEnumerator_switchCaseListIR::current_mCaseInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @switchCaseListIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchCaseListIR ("switchCaseListIR",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchCaseListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchCaseListIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchCaseListIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchCaseListIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchCaseListIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_switchCaseListIR result ;
  const GGS_switchCaseListIR * p = (const GGS_switchCaseListIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchCaseListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchCaseListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionIR::objectCompare (const GGS_switchInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR::GGS_switchInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR::
init_21__21__21__21_ (const GGS_uint & in_mLabelIndex,
                      const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                      const GGS_objectIR & in_mSwitchExpression,
                      const GGS_switchCaseListIR & in_mCaseGenerationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionIR (inCompiler COMMA_THERE)) ;
  object->switchInstructionIR_init_21__21__21__21_ (in_mLabelIndex, in_mSwitchExpressionGenerationList, in_mSwitchExpression, in_mCaseGenerationList, inCompiler) ;
  const GGS_switchInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionIR::
switchInstructionIR_init_21__21__21__21_ (const GGS_uint & in_mLabelIndex,
                                          const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                          const GGS_objectIR & in_mSwitchExpression,
                                          const GGS_switchCaseListIR & in_mCaseGenerationList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR::GGS_switchInstructionIR (const cPtr_switchInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchInstructionIR::readProperty_mLabelIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mLabelIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mLabelIndex (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mLabelIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_switchInstructionIR::readProperty_mSwitchExpressionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpressionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mSwitchExpressionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpressionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_switchInstructionIR::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mSwitchExpression (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchCaseListIR GGS_switchInstructionIR::readProperty_mCaseGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchCaseListIR () ;
  }else{
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    return p->mProperty_mCaseGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchInstructionIR::setProperty_mCaseGenerationList (const GGS_switchCaseListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionIR) ;
    p->mProperty_mCaseGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionIR::cPtr_switchInstructionIR (const GGS_uint & in_mLabelIndex,
                                                    const GGS_instructionListIR & in_mSwitchExpressionGenerationList,
                                                    const GGS_objectIR & in_mSwitchExpression,
                                                    const GGS_switchCaseListIR & in_mCaseGenerationList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mLabelIndex (),
mProperty_mSwitchExpressionGenerationList (),
mProperty_mSwitchExpression (),
mProperty_mCaseGenerationList () {
  mProperty_mLabelIndex = in_mLabelIndex ;
  mProperty_mSwitchExpressionGenerationList = in_mSwitchExpressionGenerationList ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mCaseGenerationList = in_mCaseGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_switchInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

void cPtr_switchInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionIR:") ;
  mProperty_mLabelIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpressionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_switchInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionIR (mProperty_mLabelIndex, mProperty_mSwitchExpressionGenerationList, mProperty_mSwitchExpression, mProperty_mCaseGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLabelIndex.printNonNullClassInstanceProperties ("mLabelIndex") ;
    mProperty_mSwitchExpressionGenerationList.printNonNullClassInstanceProperties ("mSwitchExpressionGenerationList") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mCaseGenerationList.printNonNullClassInstanceProperties ("mCaseGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @switchInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR ("switchInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_switchInstructionIR result ;
  const GGS_switchInstructionIR * p = (const GGS_switchInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionIR_2E_weak::objectCompare (const GGS_switchInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak::GGS_switchInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak & GGS_switchInstructionIR_2E_weak::operator = (const GGS_switchInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak::GGS_switchInstructionIR_2E_weak (const GGS_switchInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak GGS_switchInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionIR result ;
  if (isValid ()) {
    const cPtr_switchInstructionIR * p = (cPtr_switchInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR GGS_switchInstructionIR_2E_weak::bang_switchInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionIR) ;
      result = GGS_switchInstructionIR ((cPtr_switchInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @switchInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ("switchInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionIR_2E_weak GGS_switchInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_switchInstructionIR_2E_weak result ;
  const GGS_switchInstructionIR_2E_weak * p = (const GGS_switchInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@instructionListIR appendSelectOperation'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendSelectOperation (GGS_instructionListIR & ioObject,
                                            const GGS_objectIR constinArgument_inTargetValue,
                                            const GGS_string constinArgument_in_5F_if_5F_variableLLVMName,
                                            const GGS_objectIR constinArgument_in_5F_then_5F_variable,
                                            const GGS_objectIR constinArgument_in_5F_else_5F_variable,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.addAssignOperation (GGS_selectInstructionIR::init_21__21__21__21_ (constinArgument_inTargetValue, constinArgument_in_5F_if_5F_variableLLVMName, constinArgument_in_5F_then_5F_variable, constinArgument_in_5F_else_5F_variable, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas3", 8)) ;
}


//--------------------------------------------------------------------------------------------------
// @selectInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR::objectCompare (const GGS_selectInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR::GGS_selectInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::
init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                      const GGS_string & in_m_5F_if_5F_variableLLVMName,
                      const GGS_objectIR & in_m_5F_then_5F_variable,
                      const GGS_objectIR & in_m_5F_else_5F_variable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionIR (inCompiler COMMA_THERE)) ;
  object->selectInstructionIR_init_21__21__21__21_ (in_mTargetValue, in_m_5F_if_5F_variableLLVMName, in_m_5F_then_5F_variable, in_m_5F_else_5F_variable, inCompiler) ;
  const GGS_selectInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionIR::
selectInstructionIR_init_21__21__21__21_ (const GGS_objectIR & in_mTargetValue,
                                          const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                          const GGS_objectIR & in_m_5F_then_5F_variable,
                                          const GGS_objectIR & in_m_5F_else_5F_variable,
                                          Compiler * /* inCompiler */) {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR::GGS_selectInstructionIR (const cPtr_selectInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_mTargetValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_mTargetValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_mTargetValue (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_mTargetValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionIR::readProperty_m_5F_if_5F_variableLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_if_5F_variableLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_if_5F_variableLLVMName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_if_5F_variableLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_then_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_then_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_then_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_then_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_selectInstructionIR::readProperty_m_5F_else_5F_variable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    return p->mProperty_m_5F_else_5F_variable ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectInstructionIR::setProperty_m_5F_else_5F_variable (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionIR) ;
    p->mProperty_m_5F_else_5F_variable = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionIR::cPtr_selectInstructionIR (const GGS_objectIR & in_mTargetValue,
                                                    const GGS_string & in_m_5F_if_5F_variableLLVMName,
                                                    const GGS_objectIR & in_m_5F_then_5F_variable,
                                                    const GGS_objectIR & in_m_5F_else_5F_variable,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTargetValue (),
mProperty_m_5F_if_5F_variableLLVMName (),
mProperty_m_5F_then_5F_variable (),
mProperty_m_5F_else_5F_variable () {
  mProperty_mTargetValue = in_mTargetValue ;
  mProperty_m_5F_if_5F_variableLLVMName = in_m_5F_if_5F_variableLLVMName ;
  mProperty_m_5F_then_5F_variable = in_m_5F_then_5F_variable ;
  mProperty_m_5F_else_5F_variable = in_m_5F_else_5F_variable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

void cPtr_selectInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionIR:") ;
  mProperty_mTargetValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_if_5F_variableLLVMName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_variable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_variable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selectInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionIR (mProperty_mTargetValue, mProperty_m_5F_if_5F_variableLLVMName, mProperty_m_5F_then_5F_variable, mProperty_m_5F_else_5F_variable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetValue.printNonNullClassInstanceProperties ("mTargetValue") ;
    mProperty_m_5F_if_5F_variableLLVMName.printNonNullClassInstanceProperties ("m_if_variableLLVMName") ;
    mProperty_m_5F_then_5F_variable.printNonNullClassInstanceProperties ("m_then_variable") ;
    mProperty_m_5F_else_5F_variable.printNonNullClassInstanceProperties ("m_else_variable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR ("selectInstructionIR",
                                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR result ;
  const GGS_selectInstructionIR * p = (const GGS_selectInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionIR_2E_weak::objectCompare (const GGS_selectInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak & GGS_selectInstructionIR_2E_weak::operator = (const GGS_selectInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak::GGS_selectInstructionIR_2E_weak (const GGS_selectInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionIR result ;
  if (isValid ()) {
    const cPtr_selectInstructionIR * p = (cPtr_selectInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR GGS_selectInstructionIR_2E_weak::bang_selectInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionIR) ;
      result = GGS_selectInstructionIR ((cPtr_selectInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ("selectInstructionIR.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionIR_2E_weak GGS_selectInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionIR_2E_weak result ;
  const GGS_selectInstructionIR_2E_weak * p = (const GGS_selectInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum llvmPrefixOperatorEnumeration
//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration::GGS_llvmPrefixOperatorEnumeration (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_notOp (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_notOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_bitWiseComplement (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_bitWiseComplement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_minusOp (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_minusOp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::class_func_minusOpNoOvf (UNUSED_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  result.mEnum = Enumeration::enum_minusOpNoOvf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_llvmPrefixOperatorEnumeration [5] = {
  "(not built)",
  "notOp",
  "bitWiseComplement",
  "minusOp",
  "minusOpNoOvf"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isNotOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isBitWiseComplement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bitWiseComplement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isMinusOp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusOp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_llvmPrefixOperatorEnumeration::getter_isMinusOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusOpNoOvf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorEnumeration::description (String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @llvmPrefixOperatorEnumeration: ") ;
  ioString.appendCString (gEnumNameArrayFor_llvmPrefixOperatorEnumeration [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @llvmPrefixOperatorEnumeration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ("llvmPrefixOperatorEnumeration",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmPrefixOperatorEnumeration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorEnumeration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorEnumeration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorEnumeration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorEnumeration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorEnumeration result ;
  const GGS_llvmPrefixOperatorEnumeration * p = (const GGS_llvmPrefixOperatorEnumeration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorEnumeration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorEnumeration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@llvmPrefixOperatorEnumeration string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_llvmPrefixOperatorEnumeration & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_llvmPrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_string ("not") ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_string ("-") ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOpNoOvf:
    {
      result_result = GGS_string ("-%") ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_bitWiseComplement:
    {
      result_result = GGS_string ("~") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@llvmPrefixOperatorEnumeration prefixOperator'
//--------------------------------------------------------------------------------------------------

GGS_prefixOperator extensionGetter_prefixOperator (const GGS_llvmPrefixOperatorEnumeration & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefixOperator result_result ; // Returned variable
  const GGS_llvmPrefixOperatorEnumeration temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::invalid:
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_notOp:
    {
      result_result = GGS_prefixOperator::class_func_notOp (SOURCE_FILE ("prefix-operator-llvm.galgas3", 27)) ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOp:
    {
      result_result = GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas3", 28)) ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_minusOpNoOvf:
    {
      result_result = GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas3", 29)) ;
    }
    break ;
  case GGS_llvmPrefixOperatorEnumeration::Enumeration::enum_bitWiseComplement:
    {
      result_result = GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas3", 30)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmPrefixOperatorAST_2E_weak::objectCompare (const GGS_llvmPrefixOperatorAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak::GGS_llvmPrefixOperatorAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak & GGS_llvmPrefixOperatorAST_2E_weak::operator = (const GGS_llvmPrefixOperatorAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak::GGS_llvmPrefixOperatorAST_2E_weak (const GGS_llvmPrefixOperatorAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak GGS_llvmPrefixOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmPrefixOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_llvmPrefixOperatorAST result ;
  if (isValid ()) {
    const cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmPrefixOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST_2E_weak::bang_llvmPrefixOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmPrefixOperatorAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmPrefixOperatorAST) ;
      result = GGS_llvmPrefixOperatorAST ((cPtr_llvmPrefixOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmPrefixOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ("llvmPrefixOperatorAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmPrefixOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST_2E_weak GGS_llvmPrefixOperatorAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorAST_2E_weak result ;
  const GGS_llvmPrefixOperatorAST_2E_weak * p = (const GGS_llvmPrefixOperatorAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmPrefixOperatorUsage_2E_weak::objectCompare (const GGS_llvmPrefixOperatorUsage_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak::GGS_llvmPrefixOperatorUsage_2E_weak (void) :
GGS_prefixOperatorUsage_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak & GGS_llvmPrefixOperatorUsage_2E_weak::operator = (const GGS_llvmPrefixOperatorUsage & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak::GGS_llvmPrefixOperatorUsage_2E_weak (const GGS_llvmPrefixOperatorUsage & inSource) :
GGS_prefixOperatorUsage_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak GGS_llvmPrefixOperatorUsage_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_llvmPrefixOperatorUsage_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage_2E_weak::unwrappedValue (void) const {
  GGS_llvmPrefixOperatorUsage result ;
  if (isValid ()) {
    const cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) ptr () ;
    if (nullptr != p) {
      result = GGS_llvmPrefixOperatorUsage (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage_2E_weak::bang_llvmPrefixOperatorUsage_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_llvmPrefixOperatorUsage result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_llvmPrefixOperatorUsage) ;
      result = GGS_llvmPrefixOperatorUsage ((cPtr_llvmPrefixOperatorUsage *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @llvmPrefixOperatorUsage.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ("llvmPrefixOperatorUsage.weak",
                                                                                    & kTypeDescriptor_GALGAS_prefixOperatorUsage_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_llvmPrefixOperatorUsage_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorUsage_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorUsage_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage_2E_weak GGS_llvmPrefixOperatorUsage_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorUsage_2E_weak result ;
  const GGS_llvmPrefixOperatorUsage_2E_weak * p = (const GGS_llvmPrefixOperatorUsage_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorUsage_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorUsage.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorRoutineIR_2E_weak::objectCompare (const GGS_prefixOperatorRoutineIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak::GGS_prefixOperatorRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak & GGS_prefixOperatorRoutineIR_2E_weak::operator = (const GGS_prefixOperatorRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak::GGS_prefixOperatorRoutineIR_2E_weak (const GGS_prefixOperatorRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak GGS_prefixOperatorRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefixOperatorRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_prefixOperatorRoutineIR result ;
  if (isValid ()) {
    const cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefixOperatorRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR_2E_weak::bang_prefixOperatorRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefixOperatorRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefixOperatorRoutineIR) ;
      result = GGS_prefixOperatorRoutineIR ((cPtr_prefixOperatorRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefixOperatorRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ("prefixOperatorRoutineIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefixOperatorRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR_2E_weak GGS_prefixOperatorRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorRoutineIR_2E_weak result ;
  const GGS_prefixOperatorRoutineIR_2E_weak * p = (const GGS_prefixOperatorRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_checkInstructionAST_2E_weak::objectCompare (const GGS_checkInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak::GGS_checkInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak & GGS_checkInstructionAST_2E_weak::operator = (const GGS_checkInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak::GGS_checkInstructionAST_2E_weak (const GGS_checkInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak GGS_checkInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_checkInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_checkInstructionAST result ;
  if (isValid ()) {
    const cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_checkInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST_2E_weak::bang_checkInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_checkInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_checkInstructionAST) ;
      result = GGS_checkInstructionAST ((cPtr_checkInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @checkInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ("checkInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_checkInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST_2E_weak GGS_checkInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_checkInstructionAST_2E_weak result ;
  const GGS_checkInstructionAST_2E_weak * p = (const GGS_checkInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum guardKind
//--------------------------------------------------------------------------------------------------

GGS_guardKind::GGS_guardKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardKind::class_func_baseGuard (UNUSED_LOCATION_ARGS) {
  GGS_guardKind result ;
  result.mEnum = Enumeration::enum_baseGuard ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardKind::class_func_convenienceGuard (const GGS_callInstructionAST & inAssociatedValue0
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKind result ;
  result.mEnum = Enumeration::enum_convenienceGuard ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardKind_2E_convenienceGuard (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind::method_extractConvenienceGuard (GGS_callInstructionAST & outAssociatedValue_base,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_convenienceGuard) {
    outAssociatedValue_base.drop () ;
    String s ;
    s.appendCString ("proc @guardKind.convenienceGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_guardKind_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_base = ptr->mProperty_base ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_guardKind_2E_convenienceGuard_3F_ GGS_guardKind::getter_getConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  GGS_guardKind_2E_convenienceGuard_3F_ result ;
  if (mEnum == Enumeration::enum_convenienceGuard) {
    const auto ptr = (const GGS_guardKind_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardKind_2E_convenienceGuard (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind::getAssociatedValuesFor_convenienceGuard (GGS_callInstructionAST & out_base) const {
  const auto ptr = (const GGS_guardKind_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
  out_base = ptr->mProperty_base ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardKind [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKind::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_baseGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKind::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_convenienceGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKind::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @guardKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKind ("guardKind",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_guardKind result ;
  const GGS_guardKind * p = (const GGS_guardKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardDeclarationAST_2E_weak::objectCompare (const GGS_guardDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak::GGS_guardDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak & GGS_guardDeclarationAST_2E_weak::operator = (const GGS_guardDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak::GGS_guardDeclarationAST_2E_weak (const GGS_guardDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak GGS_guardDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_guardDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_guardDeclarationAST result ;
  if (isValid ()) {
    const cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_guardDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST_2E_weak::bang_guardDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_guardDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardDeclarationAST) ;
      result = GGS_guardDeclarationAST ((cPtr_guardDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @guardDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ("guardDeclarationAST.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST_2E_weak GGS_guardDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_guardDeclarationAST_2E_weak result ;
  const GGS_guardDeclarationAST_2E_weak * p = (const GGS_guardDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @guardMapForContext
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext::GGS_guardMapForContext (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext::~ GGS_guardMapForContext (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext::GGS_guardMapForContext (const GGS_guardMapForContext & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext & GGS_guardMapForContext::operator = (const GGS_guardMapForContext & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardMapForContext::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardMapForContext::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guardMapForContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_guardMapForContext::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_guardMapForContext::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_guardMapForContext::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_guardMapForContext::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_guardMapForContext_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::performInsert (const GGS_guardMapForContext_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_guardMapForContext_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>
GGS_guardMapForContext::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_guardMapForContext::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>>
GGS_guardMapForContext::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_guardMapForContext::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element_3F_ GGS_guardMapForContext
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_guardMapForContext_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_guardMapForContext_2E_element_3F_::init_nil () ;
    }else{
      GGS_guardMapForContext_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIsPublic = info->mProperty_mIsPublic ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mUserRoutineLLVMName = info->mProperty_mUserRoutineLLVMName ;
      element.mProperty_mImplementationRoutineLLVMName = info->mProperty_mImplementationRoutineLLVMName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::class_func_mapWithMapToOverride (const GGS_guardMapForContext & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_guardMapForContext_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_guardMapForContext result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_insertKey (GGS_lstring inLKey,
                                               GGS_bool inArgument0,
                                               GGS_routineTypedSignature inArgument1,
                                               GGS_lstring inArgument2,
                                               GGS_lstring inArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_guardMapForContext_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' guard is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::method_searchKey (GGS_lstring inLKey,
                                               GGS_bool & outArgument0,
                                               GGS_routineTypedSignature & outArgument1,
                                               GGS_lstring & outArgument2,
                                               GGS_lstring & outArgument3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' guard" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mIsPublic ;
    outArgument1 = info->mProperty_mSignature ;
    outArgument2 = info->mProperty_mUserRoutineLLVMName ;
    outArgument3 = info->mProperty_mImplementationRoutineLLVMName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardMapForContext::getter_mIsPublicForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsPublic ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature GGS_guardMapForContext::getter_mSignatureForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_routineTypedSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guardMapForContext::getter_mUserRoutineLLVMNameForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUserRoutineLLVMName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guardMapForContext::getter_mImplementationRoutineLLVMNameForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mImplementationRoutineLLVMName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMIsPublicForKey (GGS_bool inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_guardMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsPublic = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMSignatureForKey (GGS_routineTypedSignature inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_guardMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMUserRoutineLLVMNameForKey (GGS_lstring inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_guardMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUserRoutineLLVMName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::setter_setMImplementationRoutineLLVMNameForKey (GGS_lstring inValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_guardMapForContext_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mImplementationRoutineLLVMName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_guardMapForContext_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsPublic:") ;
    inArray (i COMMA_HERE)->mProperty_mIsPublic.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUserRoutineLLVMName:") ;
    inArray (i COMMA_HERE)->mProperty_mUserRoutineLLVMName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mImplementationRoutineLLVMName:") ;
    inArray (i COMMA_HERE)->mProperty_mImplementationRoutineLLVMName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardMapForContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_guardMapForContext_2E_element>> array = sortedInfoArray () ;
    GGS_guardMapForContext_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_guardMapForContext_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_guardMapForContext_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @guardMapForContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_guardMapForContext::DownEnumerator_guardMapForContext (const GGS_guardMapForContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element DownEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature DownEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guardMapForContext::current_mUserRoutineLLVMName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_guardMapForContext::current_mImplementationRoutineLLVMName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mImplementationRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @guardMapForContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_guardMapForContext::UpEnumerator_guardMapForContext (const GGS_guardMapForContext & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext_2E_element UpEnumerator_guardMapForContext::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guardMapForContext::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_guardMapForContext::current_mIsPublic (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsPublic ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineTypedSignature UpEnumerator_guardMapForContext::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guardMapForContext::current_mUserRoutineLLVMName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserRoutineLLVMName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_guardMapForContext::current_mImplementationRoutineLLVMName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mImplementationRoutineLLVMName ;
}


//--------------------------------------------------------------------------------------------------
//     @guardMapForContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardMapForContext ("guardMapForContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardMapForContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardMapForContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardMapForContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardMapForContext GGS_guardMapForContext::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_guardMapForContext result ;
  const GGS_guardMapForContext * p = (const GGS_guardMapForContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardMapForContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedGuardDeclaration_2E_weak::objectCompare (const GGS_decoratedGuardDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak::GGS_decoratedGuardDeclaration_2E_weak (void) :
GGS_abstractDecoratedDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak & GGS_decoratedGuardDeclaration_2E_weak::operator = (const GGS_decoratedGuardDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak::GGS_decoratedGuardDeclaration_2E_weak (const GGS_decoratedGuardDeclaration & inSource) :
GGS_abstractDecoratedDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak GGS_decoratedGuardDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_decoratedGuardDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_decoratedGuardDeclaration result ;
  if (isValid ()) {
    const cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_decoratedGuardDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration_2E_weak::bang_decoratedGuardDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_decoratedGuardDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_decoratedGuardDeclaration) ;
      result = GGS_decoratedGuardDeclaration ((cPtr_decoratedGuardDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedGuardDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ("decoratedGuardDeclaration.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedGuardDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedGuardDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedGuardDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration_2E_weak GGS_decoratedGuardDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedGuardDeclaration_2E_weak result ;
  const GGS_decoratedGuardDeclaration_2E_weak * p = (const GGS_decoratedGuardDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedGuardDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedGuardDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @callInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_callInstructionAST::objectCompare (const GGS_callInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST::GGS_callInstructionAST (void) :
GGS_instructionAST () {
}


void cPtr_callInstructionAST::
callInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                     const GGS_effectiveArgumentListAST & in_mArguments,
                                     const GGS_location & in_mEndOfArguments,
                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST::GGS_callInstructionAST (const cPtr_callInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_callInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_callInstructionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_effectiveArgumentListAST () ;
  }else{
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    return p->mProperty_mArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_callInstructionAST::setProperty_mArguments (const GGS_effectiveArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_callInstructionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_callInstructionAST::setProperty_mEndOfArguments (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_callInstructionAST * p = (cPtr_callInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_callInstructionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @callInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_callInstructionAST::cPtr_callInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
}

//--------------------------------------------------------------------------------------------------

cPtr_callInstructionAST::cPtr_callInstructionAST (const GGS_location & in_mInstructionLocation,
                                                  const GGS_effectiveArgumentListAST & in_mArguments,
                                                  const GGS_location & in_mEndOfArguments,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_callInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @callInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_callInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_callInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_callInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_callInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_callInstructionAST GGS_callInstructionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_callInstructionAST result ;
  const GGS_callInstructionAST * p = (const GGS_callInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_callInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("callInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum guardKindGenerationIR
//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR::GGS_guardKindGenerationIR (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardKindGenerationIR::class_func_baseGuard (UNUSED_LOCATION_ARGS) {
  GGS_guardKindGenerationIR result ;
  result.mEnum = Enumeration::enum_baseGuard ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardKindGenerationIR::class_func_convenienceGuard (const GGS_allocaList & inAssociatedValue0,
                                                                                  const GGS_instructionListIR & inAssociatedValue1,
                                                                                  const GGS_string & inAssociatedValue2,
                                                                                  const GGS_procCallEffectiveParameterListIR & inAssociatedValue3
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardKindGenerationIR result ;
  result.mEnum = Enumeration::enum_convenienceGuard ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_guardKindGenerationIR_2E_convenienceGuard (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR::method_extractConvenienceGuard (GGS_allocaList & outAssociatedValue_baseGuardAllocaList,
                                                                GGS_instructionListIR & outAssociatedValue_baseGuardInstructionGenerationList,
                                                                GGS_string & outAssociatedValue_baseGuardMangledName,
                                                                GGS_procCallEffectiveParameterListIR & outAssociatedValue_baseGuardEffectiveParameterList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_convenienceGuard) {
    outAssociatedValue_baseGuardAllocaList.drop () ;
    outAssociatedValue_baseGuardInstructionGenerationList.drop () ;
    outAssociatedValue_baseGuardMangledName.drop () ;
    outAssociatedValue_baseGuardEffectiveParameterList.drop () ;
    String s ;
    s.appendCString ("proc @guardKindGenerationIR.convenienceGuard invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_guardKindGenerationIR_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_baseGuardAllocaList = ptr->mProperty_baseGuardAllocaList ;
    outAssociatedValue_baseGuardInstructionGenerationList = ptr->mProperty_baseGuardInstructionGenerationList ;
    outAssociatedValue_baseGuardMangledName = ptr->mProperty_baseGuardMangledName ;
    outAssociatedValue_baseGuardEffectiveParameterList = ptr->mProperty_baseGuardEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ GGS_guardKindGenerationIR::getter_getConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  GGS_guardKindGenerationIR_2E_convenienceGuard_3F_ result ;
  if (mEnum == Enumeration::enum_convenienceGuard) {
    const auto ptr = (const GGS_guardKindGenerationIR_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_guardKindGenerationIR_2E_convenienceGuard (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR::getAssociatedValuesFor_convenienceGuard (GGS_allocaList & out_baseGuardAllocaList,
                                                                         GGS_instructionListIR & out_baseGuardInstructionGenerationList,
                                                                         GGS_string & out_baseGuardMangledName,
                                                                         GGS_procCallEffectiveParameterListIR & out_baseGuardEffectiveParameterList) const {
  const auto ptr = (const GGS_guardKindGenerationIR_2E_convenienceGuard *) mAssociatedValues.associatedValuesPointer () ;
  out_baseGuardAllocaList = ptr->mProperty_baseGuardAllocaList ;
  out_baseGuardInstructionGenerationList = ptr->mProperty_baseGuardInstructionGenerationList ;
  out_baseGuardMangledName = ptr->mProperty_baseGuardMangledName ;
  out_baseGuardEffectiveParameterList = ptr->mProperty_baseGuardEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_guardKindGenerationIR [3] = {
  "(not built)",
  "baseGuard",
  "convenienceGuard"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKindGenerationIR::getter_isBaseGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_baseGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardKindGenerationIR::getter_isConvenienceGuard (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_convenienceGuard == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guardKindGenerationIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @guardKindGenerationIR: ") ;
  ioString.appendCString (gEnumNameArrayFor_guardKindGenerationIR [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @guardKindGenerationIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardKindGenerationIR ("guardKindGenerationIR",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardKindGenerationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardKindGenerationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardKindGenerationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardKindGenerationIR::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_guardKindGenerationIR result ;
  const GGS_guardKindGenerationIR * p = (const GGS_guardKindGenerationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardKindGenerationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardKindGenerationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardUserRoutineIR_2E_weak::objectCompare (const GGS_guardUserRoutineIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak::GGS_guardUserRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak & GGS_guardUserRoutineIR_2E_weak::operator = (const GGS_guardUserRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak::GGS_guardUserRoutineIR_2E_weak (const GGS_guardUserRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak GGS_guardUserRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_guardUserRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_guardUserRoutineIR result ;
  if (isValid ()) {
    const cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_guardUserRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR_2E_weak::bang_guardUserRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_guardUserRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardUserRoutineIR) ;
      result = GGS_guardUserRoutineIR ((cPtr_guardUserRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @guardUserRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ("guardUserRoutineIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardUserRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardUserRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardUserRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR_2E_weak GGS_guardUserRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_guardUserRoutineIR_2E_weak result ;
  const GGS_guardUserRoutineIR_2E_weak * p = (const GGS_guardUserRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardUserRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardUserRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardImplementationRoutineIR_2E_weak::objectCompare (const GGS_guardImplementationRoutineIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak::GGS_guardImplementationRoutineIR_2E_weak (void) :
GGS_abstractRoutineIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak & GGS_guardImplementationRoutineIR_2E_weak::operator = (const GGS_guardImplementationRoutineIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak::GGS_guardImplementationRoutineIR_2E_weak (const GGS_guardImplementationRoutineIR & inSource) :
GGS_abstractRoutineIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak GGS_guardImplementationRoutineIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR_2E_weak::unwrappedValue (void) const {
  GGS_guardImplementationRoutineIR result ;
  if (isValid ()) {
    const cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_guardImplementationRoutineIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR_2E_weak::bang_guardImplementationRoutineIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_guardImplementationRoutineIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_guardImplementationRoutineIR) ;
      result = GGS_guardImplementationRoutineIR ((cPtr_guardImplementationRoutineIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @guardImplementationRoutineIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ("guardImplementationRoutineIR.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractRoutineIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guardImplementationRoutineIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardImplementationRoutineIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardImplementationRoutineIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR_2E_weak GGS_guardImplementationRoutineIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR_2E_weak result ;
  const GGS_guardImplementationRoutineIR_2E_weak * p = (const GGS_guardImplementationRoutineIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardImplementationRoutineIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@expressionAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteExpressionTypesInPrecedenceGraph (cPtr_expressionAST * inObject,
                                                               GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_noteExpressionTypesInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@expressionAST analyzeExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpression (cPtr_expressionAST * inObject,
                                            const GGS_omnibusType constin_inSelfType,
                                            const GGS_routineAttributes constin_inRoutineAttributes,
                                            const GGS_omnibusType constin_inTargetType,
                                            const GGS_semanticContext constin_inContext,
                                            const GGS_mode constin_inMode,
                                            GGS_semanticTemporariesStruct & io_ioTemporaries,
                                            GGS_staticEntityMap & io_ioStaticEntityMap,
                                            GGS_universalValuedObjectMap & io_ioUniversalMap,
                                            GGS_allocaList & io_ioAllocaList,
                                            GGS_instructionListIR & io_ioInstructionGenerationList,
                                            GGS_objectIR & out_outResult,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResult.drop () ;
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    inObject->method_analyzeExpression (constin_inSelfType, constin_inRoutineAttributes, constin_inTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerInExpressionAST_2E_weak::objectCompare (const GGS_registerInExpressionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak::GGS_registerInExpressionAST_2E_weak (void) :
GGS_expressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak & GGS_registerInExpressionAST_2E_weak::operator = (const GGS_registerInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak::GGS_registerInExpressionAST_2E_weak (const GGS_registerInExpressionAST & inSource) :
GGS_expressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak GGS_registerInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_registerInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_registerInExpressionAST result ;
  if (isValid ()) {
    const cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_registerInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST_2E_weak::bang_registerInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_registerInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_registerInExpressionAST) ;
      result = GGS_registerInExpressionAST ((cPtr_registerInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @registerInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ("registerInExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_expressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST_2E_weak GGS_registerInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerInExpressionAST_2E_weak result ;
  const GGS_registerInExpressionAST_2E_weak * p = (const GGS_registerInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicInstructionAST::objectCompare (const GGS_panicInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST::GGS_panicInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_expressionAST & in_mCodeExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionAST (inCompiler COMMA_THERE)) ;
  object->panicInstructionAST_init_21__21_ (in_mInstructionLocation, in_mCodeExpression, inCompiler) ;
  const GGS_panicInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionAST::
panicInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_expressionAST & in_mCodeExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST::GGS_panicInstructionAST (const cPtr_panicInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_panicInstructionAST::readProperty_mCodeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    return p->mProperty_mCodeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicInstructionAST::setProperty_mCodeExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionAST) ;
    p->mProperty_mCodeExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCodeExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionAST::cPtr_panicInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_expressionAST & in_mCodeExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCodeExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCodeExpression = in_mCodeExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_panicInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

void cPtr_panicInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@panicInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCodeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_panicInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionAST (mProperty_mInstructionLocation, mProperty_mCodeExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCodeExpression.printNonNullClassInstanceProperties ("mCodeExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @panicInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST ("panicInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_panicInstructionAST result ;
  const GGS_panicInstructionAST * p = (const GGS_panicInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicInstructionAST_2E_weak::objectCompare (const GGS_panicInstructionAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak::GGS_panicInstructionAST_2E_weak (void) :
GGS_instructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak & GGS_panicInstructionAST_2E_weak::operator = (const GGS_panicInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak::GGS_panicInstructionAST_2E_weak (const GGS_panicInstructionAST & inSource) :
GGS_instructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak GGS_panicInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_panicInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_panicInstructionAST result ;
  if (isValid ()) {
    const cPtr_panicInstructionAST * p = (cPtr_panicInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_panicInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST GGS_panicInstructionAST_2E_weak::bang_panicInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_panicInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionAST) ;
      result = GGS_panicInstructionAST ((cPtr_panicInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @panicInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ("panicInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_instructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionAST_2E_weak GGS_panicInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_panicInstructionAST_2E_weak result ;
  const GGS_panicInstructionAST_2E_weak * p = (const GGS_panicInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicInstructionIR::objectCompare (const GGS_panicInstructionIR & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR::GGS_panicInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR::
init_21__21_ (const GGS_location & in_mThrowLocation,
              const GGS_bigint & in_mPanicCode,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_panicInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_panicInstructionIR (inCompiler COMMA_THERE)) ;
  object->panicInstructionIR_init_21__21_ (in_mThrowLocation, in_mPanicCode, inCompiler) ;
  const GGS_panicInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicInstructionIR::
panicInstructionIR_init_21__21_ (const GGS_location & in_mThrowLocation,
                                 const GGS_bigint & in_mPanicCode,
                                 Compiler * /* inCompiler */) {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR::GGS_panicInstructionIR (const cPtr_panicInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_panicInstructionIR::readProperty_mThrowLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mThrowLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicInstructionIR::setProperty_mThrowLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mThrowLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_panicInstructionIR::readProperty_mPanicCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    return p->mProperty_mPanicCode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicInstructionIR::setProperty_mPanicCode (const GGS_bigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicInstructionIR) ;
    p->mProperty_mPanicCode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_panicInstructionIR::cPtr_panicInstructionIR (const GGS_location & in_mThrowLocation,
                                                  const GGS_bigint & in_mPanicCode,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mThrowLocation (),
mProperty_mPanicCode () {
  mProperty_mThrowLocation = in_mThrowLocation ;
  mProperty_mPanicCode = in_mPanicCode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_panicInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

void cPtr_panicInstructionIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@panicInstructionIR:") ;
  mProperty_mThrowLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_panicInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicInstructionIR (mProperty_mThrowLocation, mProperty_mPanicCode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mThrowLocation.printNonNullClassInstanceProperties ("mThrowLocation") ;
    mProperty_mPanicCode.printNonNullClassInstanceProperties ("mPanicCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @panicInstructionIR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR ("panicInstructionIR",
                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_panicInstructionIR result ;
  const GGS_panicInstructionIR * p = (const GGS_panicInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicInstructionIR_2E_weak::objectCompare (const GGS_panicInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak::GGS_panicInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak & GGS_panicInstructionIR_2E_weak::operator = (const GGS_panicInstructionIR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak::GGS_panicInstructionIR_2E_weak (const GGS_panicInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak GGS_panicInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_panicInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR_2E_weak::unwrappedValue (void) const {
  GGS_panicInstructionIR result ;
  if (isValid ()) {
    const cPtr_panicInstructionIR * p = (cPtr_panicInstructionIR *) ptr () ;
    if (nullptr != p) {
      result = GGS_panicInstructionIR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR GGS_panicInstructionIR_2E_weak::bang_panicInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_panicInstructionIR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_panicInstructionIR) ;
      result = GGS_panicInstructionIR ((cPtr_panicInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @panicInstructionIR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ("panicInstructionIR.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_panicInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicInstructionIR_2E_weak GGS_panicInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_panicInstructionIR_2E_weak result ;
  const GGS_panicInstructionIR_2E_weak * p = (const GGS_panicInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @flatValuedObjectMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::GGS_flatValuedObjectMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::~ GGS_flatValuedObjectMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap::GGS_flatValuedObjectMap (const GGS_flatValuedObjectMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap & GGS_flatValuedObjectMap::operator = (const GGS_flatValuedObjectMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_flatValuedObjectMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_flatValuedObjectMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_flatValuedObjectMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_flatValuedObjectMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_flatValuedObjectMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::performInsert (const GGS_flatValuedObjectMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>
GGS_flatValuedObjectMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_flatValuedObjectMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>>
GGS_flatValuedObjectMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_flatValuedObjectMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element_3F_ GGS_flatValuedObjectMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_flatValuedObjectMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_flatValuedObjectMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mObjectState = info->mProperty_mObjectState ;
      element.mProperty_mObjectShouldBeValuedAtEndOfScope = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
      element.mProperty_mValuedObject = info->mProperty_mValuedObject ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::class_func_mapWithMapToOverride (const GGS_flatValuedObjectMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_flatValuedObjectMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_valuedObjectState inArgument0,
                                                GGS_bool inArgument1,
                                                GGS_valuedObject inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_flatValuedObjectMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' entity is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_valuedObjectState & outArgument0,
                                                GGS_bool & outArgument1,
                                                GGS_valuedObject & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' entity" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mObjectState ;
    outArgument1 = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = info->mProperty_mValuedObject ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_removeKey (GGS_lstring inLKey,
                                                GGS_valuedObjectState & outArgument0,
                                                GGS_bool & outArgument1,
                                                GGS_valuedObject & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' entity" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mObjectState ;
    outArgument1 = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    outArgument2 = info->mProperty_mValuedObject ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState GGS_flatValuedObjectMap::getter_mObjectStateForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_valuedObjectState result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mObjectState ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_flatValuedObjectMap::getter_mObjectShouldBeValuedAtEndOfScopeForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mObjectShouldBeValuedAtEndOfScope ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_valuedObject GGS_flatValuedObjectMap::getter_mValuedObjectForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_valuedObject result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValuedObject ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMObjectStateForKey (GGS_valuedObjectState inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mObjectState = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMObjectShouldBeValuedAtEndOfScopeForKey (GGS_bool inValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mObjectShouldBeValuedAtEndOfScope = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::setter_setMValuedObjectForKey (GGS_valuedObject inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_flatValuedObjectMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValuedObject = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_flatValuedObjectMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mObjectState:") ;
    inArray (i COMMA_HERE)->mProperty_mObjectState.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mObjectShouldBeValuedAtEndOfScope:") ;
    inArray (i COMMA_HERE)->mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mValuedObject:") ;
    inArray (i COMMA_HERE)->mProperty_mValuedObject.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_flatValuedObjectMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_flatValuedObjectMap_2E_element>> array = sortedInfoArray () ;
    GGS_flatValuedObjectMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_flatValuedObjectMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_flatValuedObjectMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @flatValuedObjectMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_flatValuedObjectMap::DownEnumerator_flatValuedObjectMap (const GGS_flatValuedObjectMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element DownEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState DownEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectState ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject DownEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValuedObject ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @flatValuedObjectMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_flatValuedObjectMap::UpEnumerator_flatValuedObjectMap (const GGS_flatValuedObjectMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap_2E_element UpEnumerator_flatValuedObjectMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_flatValuedObjectMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObjectState UpEnumerator_flatValuedObjectMap::current_mObjectState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectState ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_flatValuedObjectMap::current_mObjectShouldBeValuedAtEndOfScope (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mObjectShouldBeValuedAtEndOfScope ;
}

//--------------------------------------------------------------------------------------------------

GGS_valuedObject UpEnumerator_flatValuedObjectMap::current_mValuedObject (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValuedObject ;
}


//--------------------------------------------------------------------------------------------------
//     @flatValuedObjectMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_flatValuedObjectMap ("flatValuedObjectMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_flatValuedObjectMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_flatValuedObjectMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_flatValuedObjectMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_flatValuedObjectMap GGS_flatValuedObjectMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_flatValuedObjectMap result ;
  const GGS_flatValuedObjectMap * p = (const GGS_flatValuedObjectMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_flatValuedObjectMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

