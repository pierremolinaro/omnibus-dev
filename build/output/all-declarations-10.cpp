#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@externFunctionDeclarationListAST.element externProcedureSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_externProcedureSemanticAnalysis (const GGS_externFunctionDeclarationListAST_2E_element inObject,
                                                      const GGS_semanticContext constinArgument_inContext,
                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineFormalArgumentListIR temp_0 = GGS_routineFormalArgumentListIR::init (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 130)) ;
  GGS_routineFormalArgumentListIR var_formalArguments_5153 = temp_0 ;
  GGS_universalValuedObjectMap joker_5261 = GGS_universalValuedObjectMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_1 = inObject ;
  routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (constinArgument_inContext, temp_1.readProperty_mProcFormalArgumentList (), joker_5261, var_formalArguments_5153, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 131)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_2 = inObject ;
  GGS_unifiedTypeMapEntry temp_3 ;
  const enumGalgasBool test_4 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-extern-proc.galgas", 140)) ;
  }else if (kBoolFalse == test_4) {
    const GGS_externFunctionDeclarationListAST_2E_element temp_5 = inObject ;
    temp_3 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_5.readProperty_mReturnTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 142)) ;
  }
  GGS_unifiedTypeMapEntry var_returnType_5353 = temp_3 ;
  {
  const GGS_externFunctionDeclarationListAST_2E_element temp_6 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mExternProcedureMapIR.setter_insertKey (temp_6.readProperty_mRoutineNameForGeneration (), var_formalArguments_5153, var_returnType_5353, inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 145)) ;
  }
  const GGS_externFunctionDeclarationListAST_2E_element temp_7 = inObject ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GGS_externRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (temp_7.readProperty_mRoutineNameForGeneration (), GGS_bool (false), GGS_bool (false), var_formalArguments_5153, var_returnType_5353, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 150)) ;
}


//--------------------------------------------------------------------------------------------------
// @externRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externRoutineIR::objectCompare (const GGS_externRoutineIR & inOperand) const {
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

GGS_externRoutineIR::GGS_externRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                 const GGS_bool & in_isRequired,
                                                 const GGS_bool & in_warnsIfUnused,
                                                 const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_externRoutineIR (inCompiler COMMA_THERE)) ;
  object->externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReturnType, inCompiler) ;
  const GGS_externRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externRoutineIR::
externRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                 const GGS_bool & in_isRequired,
                                                                 const GGS_bool & in_warnsIfUnused,
                                                                 const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR::GGS_externRoutineIR (const cPtr_externRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                         const GGS_bool & in_isRequired,
                                                         const GGS_bool & in_warnsIfUnused,
                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                         const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_externRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_externRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReturnType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_externRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_externRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externRoutineIR::setProperty_mReturnType (const GGS_unifiedTypeMapEntry & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_externRoutineIR * p = (cPtr_externRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_externRoutineIR::cPtr_externRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externRoutineIR::cPtr_externRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                            const GGS_bool & in_isRequired,
                                            const GGS_bool & in_warnsIfUnused,
                                            const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                            const GGS_unifiedTypeMapEntry & in_mReturnType,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

void cPtr_externRoutineIR::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@externRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReturnType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @externRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externRoutineIR ("externRoutineIR",
                                                                       & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externRoutineIR GGS_externRoutineIR::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_externRoutineIR result ;
  const GGS_externRoutineIR * p = (const GGS_externRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element::GGS_externProcedureMapIR_2E_element (void) :
mProperty_lkey (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element::~ GGS_externProcedureMapIR_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element GGS_externProcedureMapIR_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                           const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                           const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externProcedureMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  result.mProperty_mReturnType = in_mReturnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element::GGS_externProcedureMapIR_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_routineFormalArgumentListIR & inOperand1,
                                                                          const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mFormalArgumentListForGeneration (inOperand1),
mProperty_mReturnType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element GGS_externProcedureMapIR_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                         const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externProcedureMapIR_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  result.mProperty_mReturnType = in_mReturnType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externProcedureMapIR_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalArgumentListForGeneration.isValid () && mProperty_mReturnType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalArgumentListForGeneration.drop () ;
  mProperty_mReturnType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externProcedureMapIR_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externProcedureMapIR.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externProcedureMapIR.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ("externProcedureMapIR.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_externProcedureMapIR_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureMapIR_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externProcedureMapIR_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externProcedureMapIR_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externProcedureMapIR_2E_element GGS_externProcedureMapIR_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_externProcedureMapIR_2E_element result ;
  const GGS_externProcedureMapIR_2E_element * p = (const GGS_externProcedureMapIR_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externProcedureMapIR_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureMapIR.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @isrDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_isrDeclarationAST::objectCompare (const GGS_isrDeclarationAST & inOperand) const {
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

GGS_isrDeclarationAST::GGS_isrDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mISRName,
                          const GGS_mode & in_mMode,
                          const GGS_lstring & in_mDriverName,
                          const GGS_instructionListAST & in_mISRInstructionList,
                          const GGS_location & in_mEndOfISRDeclaration,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_isrDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_isrDeclarationAST (inCompiler COMMA_THERE)) ;
  object->isrDeclarationAST_init_21__21__21__21__21_ (in_mISRName, in_mMode, in_mDriverName, in_mISRInstructionList, in_mEndOfISRDeclaration, inCompiler) ;
  const GGS_isrDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::
isrDeclarationAST_init_21__21__21__21__21_ (const GGS_lstring & in_mISRName,
                                            const GGS_mode & in_mMode,
                                            const GGS_lstring & in_mDriverName,
                                            const GGS_instructionListAST & in_mISRInstructionList,
                                            const GGS_location & in_mEndOfISRDeclaration,
                                            Compiler * /* inCompiler */) {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mISRInstructionList = in_mISRInstructionList ;
  mProperty_mEndOfISRDeclaration = in_mEndOfISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST::GGS_isrDeclarationAST (const cPtr_isrDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_isrDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST::class_func_new (const GGS_lstring & in_mISRName,
                                                             const GGS_mode & in_mMode,
                                                             const GGS_lstring & in_mDriverName,
                                                             const GGS_instructionListAST & in_mISRInstructionList,
                                                             const GGS_location & in_mEndOfISRDeclaration,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_isrDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_isrDeclarationAST (in_mISRName, in_mMode, in_mDriverName, in_mISRInstructionList, in_mEndOfISRDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_isrDeclarationAST::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mISRName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mISRName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mISRName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_isrDeclarationAST::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_isrDeclarationAST::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_isrDeclarationAST::readProperty_mISRInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mISRInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mISRInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mISRInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_isrDeclarationAST::readProperty_mEndOfISRDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    return p->mProperty_mEndOfISRDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_isrDeclarationAST::setProperty_mEndOfISRDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_isrDeclarationAST * p = (cPtr_isrDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_isrDeclarationAST) ;
    p->mProperty_mEndOfISRDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @isrDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_isrDeclarationAST::cPtr_isrDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName (),
mProperty_mISRInstructionList (),
mProperty_mEndOfISRDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_isrDeclarationAST::cPtr_isrDeclarationAST (const GGS_lstring & in_mISRName,
                                                const GGS_mode & in_mMode,
                                                const GGS_lstring & in_mDriverName,
                                                const GGS_instructionListAST & in_mISRInstructionList,
                                                const GGS_location & in_mEndOfISRDeclaration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName (),
mProperty_mISRInstructionList (),
mProperty_mEndOfISRDeclaration () {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
  mProperty_mISRInstructionList = in_mISRInstructionList ;
  mProperty_mEndOfISRDeclaration = in_mEndOfISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_isrDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST ;
}

void cPtr_isrDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@isrDeclarationAST:") ;
  mProperty_mISRName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mISRInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfISRDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_isrDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_isrDeclarationAST (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName, mProperty_mISRInstructionList, mProperty_mEndOfISRDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_isrDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mISRName.printNonNullClassInstanceProperties ("mISRName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
    mProperty_mISRInstructionList.printNonNullClassInstanceProperties ("mISRInstructionList") ;
    mProperty_mEndOfISRDeclaration.printNonNullClassInstanceProperties ("mEndOfISRDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @isrDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_isrDeclarationAST ("isrDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_isrDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_isrDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_isrDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_isrDeclarationAST GGS_isrDeclarationAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_isrDeclarationAST result ;
  const GGS_isrDeclarationAST * p = (const GGS_isrDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_isrDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedISRDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedISRDeclaration::objectCompare (const GGS_decoratedISRDeclaration & inOperand) const {
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

GGS_decoratedISRDeclaration::GGS_decoratedISRDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration::
init_21__21__21_ (const GGS_lstring & in_mISRName,
                  const GGS_mode & in_mMode,
                  const GGS_lstring & in_mDriverName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_decoratedISRDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedISRDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedISRDeclaration_init_21__21__21_ (in_mISRName, in_mMode, in_mDriverName, inCompiler) ;
  const GGS_decoratedISRDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::
decoratedISRDeclaration_init_21__21__21_ (const GGS_lstring & in_mISRName,
                                          const GGS_mode & in_mMode,
                                          const GGS_lstring & in_mDriverName,
                                          Compiler * /* inCompiler */) {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration::GGS_decoratedISRDeclaration (const cPtr_decoratedISRDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedISRDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration::class_func_new (const GGS_lstring & in_mISRName,
                                                                         const GGS_mode & in_mMode,
                                                                         const GGS_lstring & in_mDriverName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_decoratedISRDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedISRDeclaration (in_mISRName, in_mMode, in_mDriverName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedISRDeclaration::readProperty_mISRName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mISRName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedISRDeclaration::setProperty_mISRName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mISRName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mode GGS_decoratedISRDeclaration::readProperty_mMode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mode () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mMode ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedISRDeclaration::setProperty_mMode (const GGS_mode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mMode = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedISRDeclaration::readProperty_mDriverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    return p->mProperty_mDriverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedISRDeclaration::setProperty_mDriverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedISRDeclaration * p = (cPtr_decoratedISRDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedISRDeclaration) ;
    p->mProperty_mDriverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedISRDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedISRDeclaration::cPtr_decoratedISRDeclaration (const GGS_lstring & in_mISRName,
                                                            const GGS_mode & in_mMode,
                                                            const GGS_lstring & in_mDriverName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mISRName (),
mProperty_mMode (),
mProperty_mDriverName () {
  mProperty_mISRName = in_mISRName ;
  mProperty_mMode = in_mMode ;
  mProperty_mDriverName = in_mDriverName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedISRDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

void cPtr_decoratedISRDeclaration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedISRDeclaration:") ;
  mProperty_mISRName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDriverName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedISRDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedISRDeclaration (mProperty_mISRName, mProperty_mMode, mProperty_mDriverName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedISRDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mISRName.printNonNullClassInstanceProperties ("mISRName") ;
    mProperty_mMode.printNonNullClassInstanceProperties ("mMode") ;
    mProperty_mDriverName.printNonNullClassInstanceProperties ("mDriverName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedISRDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedISRDeclaration ("decoratedISRDeclaration",
                                                                               & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedISRDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedISRDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedISRDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedISRDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedISRDeclaration GGS_decoratedISRDeclaration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_decoratedISRDeclaration result ;
  const GGS_decoratedISRDeclaration * p = (const GGS_decoratedISRDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedISRDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedISRDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @guardDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardDeclarationAST::objectCompare (const GGS_guardDeclarationAST & inOperand) const {
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

GGS_guardDeclarationAST::GGS_guardDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                          const GGS_string & in_mReceiverLLVMBaseTypeName,
                                          const GGS_lstring & in_mGuardName,
                                          const GGS_bool & in_mIsPublic,
                                          const GGS_lstringlist & in_mGuardAttributeList,
                                          const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                          const GGS_guardKind & in_mGuardKind,
                                          const GGS_instructionListAST & in_mGuardInstructionList,
                                          const GGS_location & in_mEndOfGuardDeclaration,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_guardDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_guardDeclarationAST (inCompiler COMMA_THERE)) ;
  object->guardDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mReceiverLLVMBaseTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration, inCompiler) ;
  const GGS_guardDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardDeclarationAST::
guardDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                                              const GGS_string & in_mReceiverLLVMBaseTypeName,
                                                              const GGS_lstring & in_mGuardName,
                                                              const GGS_bool & in_mIsPublic,
                                                              const GGS_lstringlist & in_mGuardAttributeList,
                                                              const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                              const GGS_guardKind & in_mGuardKind,
                                                              const GGS_instructionListAST & in_mGuardInstructionList,
                                                              const GGS_location & in_mEndOfGuardDeclaration,
                                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mReceiverLLVMBaseTypeName = in_mReceiverLLVMBaseTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST::GGS_guardDeclarationAST (const cPtr_guardDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST::class_func_new (const GGS_lstring & in_mReceiverTypeName,
                                                                 const GGS_string & in_mReceiverLLVMBaseTypeName,
                                                                 const GGS_lstring & in_mGuardName,
                                                                 const GGS_bool & in_mIsPublic,
                                                                 const GGS_lstringlist & in_mGuardAttributeList,
                                                                 const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                 const GGS_guardKind & in_mGuardKind,
                                                                 const GGS_instructionListAST & in_mGuardInstructionList,
                                                                 const GGS_location & in_mEndOfGuardDeclaration,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_guardDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_guardDeclarationAST (in_mReceiverTypeName, in_mReceiverLLVMBaseTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guardDeclarationAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_guardDeclarationAST::readProperty_mReceiverLLVMBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mReceiverLLVMBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mReceiverLLVMBaseTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mReceiverLLVMBaseTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_guardDeclarationAST::readProperty_mGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mGuardName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_guardDeclarationAST::readProperty_mIsPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mIsPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mIsPublic (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mIsPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_guardDeclarationAST::readProperty_mGuardAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mGuardAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_guardDeclarationAST::readProperty_mGuardFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListAST () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mGuardFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_guardDeclarationAST::readProperty_mGuardKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_guardKind () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mGuardKind (const GGS_guardKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_guardDeclarationAST::readProperty_mGuardInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mGuardInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mGuardInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mGuardInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_guardDeclarationAST::readProperty_mEndOfGuardDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    return p->mProperty_mEndOfGuardDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardDeclarationAST::setProperty_mEndOfGuardDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardDeclarationAST * p = (cPtr_guardDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardDeclarationAST) ;
    p->mProperty_mEndOfGuardDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_guardDeclarationAST::cPtr_guardDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mReceiverLLVMBaseTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_guardDeclarationAST::cPtr_guardDeclarationAST (const GGS_lstring & in_mReceiverTypeName,
                                                    const GGS_string & in_mReceiverLLVMBaseTypeName,
                                                    const GGS_lstring & in_mGuardName,
                                                    const GGS_bool & in_mIsPublic,
                                                    const GGS_lstringlist & in_mGuardAttributeList,
                                                    const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                    const GGS_guardKind & in_mGuardKind,
                                                    const GGS_instructionListAST & in_mGuardInstructionList,
                                                    const GGS_location & in_mEndOfGuardDeclaration,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mReceiverLLVMBaseTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mReceiverLLVMBaseTypeName = in_mReceiverLLVMBaseTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST ;
}

void cPtr_guardDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@guardDeclarationAST:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverLLVMBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPublic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardDeclarationAST (mProperty_mReceiverTypeName, mProperty_mReceiverLLVMBaseTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mReceiverLLVMBaseTypeName.printNonNullClassInstanceProperties ("mReceiverLLVMBaseTypeName") ;
    mProperty_mGuardName.printNonNullClassInstanceProperties ("mGuardName") ;
    mProperty_mIsPublic.printNonNullClassInstanceProperties ("mIsPublic") ;
    mProperty_mGuardAttributeList.printNonNullClassInstanceProperties ("mGuardAttributeList") ;
    mProperty_mGuardFormalArgumentList.printNonNullClassInstanceProperties ("mGuardFormalArgumentList") ;
    mProperty_mGuardKind.printNonNullClassInstanceProperties ("mGuardKind") ;
    mProperty_mGuardInstructionList.printNonNullClassInstanceProperties ("mGuardInstructionList") ;
    mProperty_mEndOfGuardDeclaration.printNonNullClassInstanceProperties ("mEndOfGuardDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @guardDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardDeclarationAST ("guardDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardDeclarationAST GGS_guardDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_guardDeclarationAST result ;
  const GGS_guardDeclarationAST * p = (const GGS_guardDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @decoratedGuardDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedGuardDeclaration::objectCompare (const GGS_decoratedGuardDeclaration & inOperand) const {
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

GGS_decoratedGuardDeclaration::GGS_decoratedGuardDeclaration (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration::
init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                      const GGS_lstring & in_mGuardName,
                                      const GGS_bool & in_mIsPublic,
                                      const GGS_lstringlist & in_mGuardAttributeList,
                                      const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                      const GGS_guardKind & in_mGuardKind,
                                      const GGS_instructionListAST & in_mGuardInstructionList,
                                      const GGS_location & in_mEndOfGuardDeclaration,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_decoratedGuardDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_decoratedGuardDeclaration (inCompiler COMMA_THERE)) ;
  object->decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (in_mReceiverTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration, inCompiler) ;
  const GGS_decoratedGuardDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedGuardDeclaration::
decoratedGuardDeclaration_init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mReceiverTypeName,
                                                                const GGS_lstring & in_mGuardName,
                                                                const GGS_bool & in_mIsPublic,
                                                                const GGS_lstringlist & in_mGuardAttributeList,
                                                                const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                const GGS_guardKind & in_mGuardKind,
                                                                const GGS_instructionListAST & in_mGuardInstructionList,
                                                                const GGS_location & in_mEndOfGuardDeclaration,
                                                                Compiler * /* inCompiler */) {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration::GGS_decoratedGuardDeclaration (const cPtr_decoratedGuardDeclaration * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedGuardDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration::class_func_new (const GGS_lstring & in_mReceiverTypeName,
                                                                             const GGS_lstring & in_mGuardName,
                                                                             const GGS_bool & in_mIsPublic,
                                                                             const GGS_lstringlist & in_mGuardAttributeList,
                                                                             const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                             const GGS_guardKind & in_mGuardKind,
                                                                             const GGS_instructionListAST & in_mGuardInstructionList,
                                                                             const GGS_location & in_mEndOfGuardDeclaration,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_decoratedGuardDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedGuardDeclaration (in_mReceiverTypeName, in_mGuardName, in_mIsPublic, in_mGuardAttributeList, in_mGuardFormalArgumentList, in_mGuardKind, in_mGuardInstructionList, in_mEndOfGuardDeclaration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedGuardDeclaration::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_decoratedGuardDeclaration::readProperty_mGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mGuardName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_decoratedGuardDeclaration::readProperty_mIsPublic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mIsPublic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mIsPublic (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mIsPublic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_decoratedGuardDeclaration::readProperty_mGuardAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mGuardAttributeList (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardAttributeList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListAST GGS_decoratedGuardDeclaration::readProperty_mGuardFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListAST () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mGuardFormalArgumentList (const GGS_routineFormalArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardFormalArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardKind GGS_decoratedGuardDeclaration::readProperty_mGuardKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_guardKind () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mGuardKind (const GGS_guardKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_decoratedGuardDeclaration::readProperty_mGuardInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mGuardInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mGuardInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mGuardInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_decoratedGuardDeclaration::readProperty_mEndOfGuardDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    return p->mProperty_mEndOfGuardDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedGuardDeclaration::setProperty_mEndOfGuardDeclaration (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedGuardDeclaration * p = (cPtr_decoratedGuardDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedGuardDeclaration) ;
    p->mProperty_mEndOfGuardDeclaration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedGuardDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedGuardDeclaration::cPtr_decoratedGuardDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedGuardDeclaration::cPtr_decoratedGuardDeclaration (const GGS_lstring & in_mReceiverTypeName,
                                                                const GGS_lstring & in_mGuardName,
                                                                const GGS_bool & in_mIsPublic,
                                                                const GGS_lstringlist & in_mGuardAttributeList,
                                                                const GGS_routineFormalArgumentListAST & in_mGuardFormalArgumentList,
                                                                const GGS_guardKind & in_mGuardKind,
                                                                const GGS_instructionListAST & in_mGuardInstructionList,
                                                                const GGS_location & in_mEndOfGuardDeclaration,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mReceiverTypeName (),
mProperty_mGuardName (),
mProperty_mIsPublic (),
mProperty_mGuardAttributeList (),
mProperty_mGuardFormalArgumentList (),
mProperty_mGuardKind (),
mProperty_mGuardInstructionList (),
mProperty_mEndOfGuardDeclaration () {
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mGuardName = in_mGuardName ;
  mProperty_mIsPublic = in_mIsPublic ;
  mProperty_mGuardAttributeList = in_mGuardAttributeList ;
  mProperty_mGuardFormalArgumentList = in_mGuardFormalArgumentList ;
  mProperty_mGuardKind = in_mGuardKind ;
  mProperty_mGuardInstructionList = in_mGuardInstructionList ;
  mProperty_mEndOfGuardDeclaration = in_mEndOfGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedGuardDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

void cPtr_decoratedGuardDeclaration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedGuardDeclaration:") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPublic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfGuardDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedGuardDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedGuardDeclaration (mProperty_mReceiverTypeName, mProperty_mGuardName, mProperty_mIsPublic, mProperty_mGuardAttributeList, mProperty_mGuardFormalArgumentList, mProperty_mGuardKind, mProperty_mGuardInstructionList, mProperty_mEndOfGuardDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedGuardDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mGuardName.printNonNullClassInstanceProperties ("mGuardName") ;
    mProperty_mIsPublic.printNonNullClassInstanceProperties ("mIsPublic") ;
    mProperty_mGuardAttributeList.printNonNullClassInstanceProperties ("mGuardAttributeList") ;
    mProperty_mGuardFormalArgumentList.printNonNullClassInstanceProperties ("mGuardFormalArgumentList") ;
    mProperty_mGuardKind.printNonNullClassInstanceProperties ("mGuardKind") ;
    mProperty_mGuardInstructionList.printNonNullClassInstanceProperties ("mGuardInstructionList") ;
    mProperty_mEndOfGuardDeclaration.printNonNullClassInstanceProperties ("mEndOfGuardDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedGuardDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedGuardDeclaration ("decoratedGuardDeclaration",
                                                                                 & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedGuardDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedGuardDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedGuardDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedGuardDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedGuardDeclaration GGS_decoratedGuardDeclaration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedGuardDeclaration result ;
  const GGS_decoratedGuardDeclaration * p = (const GGS_decoratedGuardDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedGuardDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedGuardDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//
//     @callInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_callInstructionAST ("callInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_callInstructionAST::staticTypeDescriptor (void) const {
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
// @guardUserRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardUserRoutineIR::objectCompare (const GGS_guardUserRoutineIR & inOperand) const {
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

GGS_guardUserRoutineIR::GGS_guardUserRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                         const GGS_bool & in_isRequired,
                                                         const GGS_bool & in_warnsIfUnused,
                                                         const GGS_string & in_mMangledImplementationGuardName,
                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                         const GGS_omnibusType & in_mReceiverType,
                                                         const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cPtr_guardUserRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_guardUserRoutineIR (inCompiler COMMA_THERE)) ;
  object->guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationGuardName, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, inCompiler) ;
  const GGS_guardUserRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardUserRoutineIR::
guardUserRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                            const GGS_bool & in_isRequired,
                                                                            const GGS_bool & in_warnsIfUnused,
                                                                            const GGS_string & in_mMangledImplementationGuardName,
                                                                            const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                            const GGS_omnibusType & in_mReceiverType,
                                                                            const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationGuardName = in_mMangledImplementationGuardName ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR::GGS_guardUserRoutineIR (const cPtr_guardUserRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardUserRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                               const GGS_bool & in_isRequired,
                                                               const GGS_bool & in_warnsIfUnused,
                                                               const GGS_string & in_mMangledImplementationGuardName,
                                                               const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                               const GGS_omnibusType & in_mReceiverType,
                                                               const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_guardUserRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_guardUserRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mMangledImplementationGuardName, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_guardUserRoutineIR::readProperty_mMangledImplementationGuardName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mMangledImplementationGuardName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mMangledImplementationGuardName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mMangledImplementationGuardName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_guardUserRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_guardUserRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardUserRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_guardKindGenerationIR () ;
  }else{
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardUserRoutineIR::setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardUserRoutineIR * p = (cPtr_guardUserRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardUserRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardUserRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mMangledImplementationGuardName (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_guardUserRoutineIR::cPtr_guardUserRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                  const GGS_bool & in_isRequired,
                                                  const GGS_bool & in_warnsIfUnused,
                                                  const GGS_string & in_mMangledImplementationGuardName,
                                                  const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                  const GGS_omnibusType & in_mReceiverType,
                                                  const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mMangledImplementationGuardName (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mMangledImplementationGuardName = in_mMangledImplementationGuardName ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardUserRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

void cPtr_guardUserRoutineIR::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@guardUserRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMangledImplementationGuardName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardUserRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardUserRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mMangledImplementationGuardName, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardUserRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mMangledImplementationGuardName.printNonNullClassInstanceProperties ("mMangledImplementationGuardName") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mGuardKindGenerationIR.printNonNullClassInstanceProperties ("mGuardKindGenerationIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @guardUserRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardUserRoutineIR ("guardUserRoutineIR",
                                                                          & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardUserRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardUserRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardUserRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardUserRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardUserRoutineIR GGS_guardUserRoutineIR::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_guardUserRoutineIR result ;
  const GGS_guardUserRoutineIR * p = (const GGS_guardUserRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardUserRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardUserRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @guardImplementationRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_guardImplementationRoutineIR::objectCompare (const GGS_guardImplementationRoutineIR & inOperand) const {
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

GGS_guardImplementationRoutineIR::GGS_guardImplementationRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                             const GGS_bool & in_isRequired,
                                                             const GGS_bool & in_warnsIfUnused,
                                                             const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                             const GGS_omnibusType & in_mReceiverType,
                                                             const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                             const GGS_allocaList & in_mAllocaList,
                                                             const GGS_instructionListIR & in_mInstructionGenerationList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_guardImplementationRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_guardImplementationRoutineIR (inCompiler COMMA_THERE)) ;
  object->guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, in_mAllocaList, in_mInstructionGenerationList, inCompiler) ;
  const GGS_guardImplementationRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_guardImplementationRoutineIR::
guardImplementationRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                          const GGS_bool & in_isRequired,
                                                                                          const GGS_bool & in_warnsIfUnused,
                                                                                          const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                                          const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                                          const GGS_allocaList & in_mAllocaList,
                                                                                          const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR::GGS_guardImplementationRoutineIR (const cPtr_guardImplementationRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_guardImplementationRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                   const GGS_bool & in_isRequired,
                                                                                   const GGS_bool & in_warnsIfUnused,
                                                                                   const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                   const GGS_omnibusType & in_mReceiverType,
                                                                                   const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                                   const GGS_allocaList & in_mAllocaList,
                                                                                   const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_guardImplementationRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mFormalArgumentListForGeneration, in_mReceiverType, in_mGuardKindGenerationIR, in_mAllocaList, in_mInstructionGenerationList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_guardImplementationRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_guardImplementationRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_guardKindGenerationIR GGS_guardImplementationRoutineIR::readProperty_mGuardKindGenerationIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_guardKindGenerationIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mGuardKindGenerationIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mGuardKindGenerationIR (const GGS_guardKindGenerationIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mGuardKindGenerationIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_guardImplementationRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_guardImplementationRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_guardImplementationRoutineIR::setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_guardImplementationRoutineIR * p = (cPtr_guardImplementationRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_guardImplementationRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @guardImplementationRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_guardImplementationRoutineIR::cPtr_guardImplementationRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_guardImplementationRoutineIR::cPtr_guardImplementationRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                      const GGS_bool & in_isRequired,
                                                                      const GGS_bool & in_warnsIfUnused,
                                                                      const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                      const GGS_omnibusType & in_mReceiverType,
                                                                      const GGS_guardKindGenerationIR & in_mGuardKindGenerationIR,
                                                                      const GGS_allocaList & in_mAllocaList,
                                                                      const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mReceiverType (),
mProperty_mGuardKindGenerationIR (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mGuardKindGenerationIR = in_mGuardKindGenerationIR ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_guardImplementationRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

void cPtr_guardImplementationRoutineIR::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@guardImplementationRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGuardKindGenerationIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_guardImplementationRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_guardImplementationRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFormalArgumentListForGeneration, mProperty_mReceiverType, mProperty_mGuardKindGenerationIR, mProperty_mAllocaList, mProperty_mInstructionGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_guardImplementationRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mGuardKindGenerationIR.printNonNullClassInstanceProperties ("mGuardKindGenerationIR") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @guardImplementationRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardImplementationRoutineIR ("guardImplementationRoutineIR",
                                                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_guardImplementationRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardImplementationRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guardImplementationRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guardImplementationRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guardImplementationRoutineIR GGS_guardImplementationRoutineIR::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guardImplementationRoutineIR result ;
  const GGS_guardImplementationRoutineIR * p = (const GGS_guardImplementationRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guardImplementationRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardImplementationRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@effectiveArgumentListAST routineSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring extensionGetter_routineSignature (const GGS_effectiveArgumentListAST & inObject,
                                              const GGS_location & constinArgument_inRoutineNameLocation,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_key_8390 = GGS_string ("(") ;
  const GGS_effectiveArgumentListAST temp_0 = inObject ;
  cEnumerator_effectiveArgumentListAST enumerator_8419 (temp_0, EnumerationOrder::up) ;
  while (enumerator_8419.hasCurrentObject ()) {
    var_key_8390.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_8419.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (enumerator_8419.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 217)) ;
    enumerator_8419.gotoNextObject () ;
  }
  var_key_8390.plusAssign_operation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 219)) ;
  result_result = GGS_lstring::init_21__21_ (var_key_8390, constinArgument_inRoutineNameLocation, inCompiler COMMA_HERE) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (void) :
mProperty_receiverTypeName (),
mProperty_mode (),
mProperty_isRequired (),
mProperty_routineKind (),
mProperty_warnIfUnused (),
mProperty_exportedRoutine (),
mProperty_routineAttributes (),
mProperty_routineMangledLLVMName (),
mProperty_formalArgumentList (),
mProperty_warningOnUnusedArgs (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineDeclaration (),
mProperty_returnTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::~ GGS_decoratedRegularRoutineList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::init_21_receiverTypeName_21_mode_21_isRequired_21_routineKind_21_warnIfUnused_21_exportedRoutine_21_routineAttributes_21_routineMangledLLVMName_21_formalArgumentList_21_warningOnUnusedArgs_21__21__21_returnTypeName (const GGS_lstring & in_receiverTypeName,
                                                                                                                                                                                                                                                                                                               const GGS_mode & in_mode,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_isRequired,
                                                                                                                                                                                                                                                                                                               const GGS_routineKind & in_routineKind,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_warnIfUnused,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_exportedRoutine,
                                                                                                                                                                                                                                                                                                               const GGS_routineAttributes & in_routineAttributes,
                                                                                                                                                                                                                                                                                                               const GGS_lstring & in_routineMangledLLVMName,
                                                                                                                                                                                                                                                                                                               const GGS_routineFormalArgumentListAST & in_formalArgumentList,
                                                                                                                                                                                                                                                                                                               const GGS_bool & in_warningOnUnusedArgs,
                                                                                                                                                                                                                                                                                                               const GGS_instructionListAST & in_mInstructionList,
                                                                                                                                                                                                                                                                                                               const GGS_location & in_mEndOfRoutineDeclaration,
                                                                                                                                                                                                                                                                                                               const GGS_lstring & in_returnTypeName,
                                                                                                                                                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_receiverTypeName = in_receiverTypeName ;
  result.mProperty_mode = in_mode ;
  result.mProperty_isRequired = in_isRequired ;
  result.mProperty_routineKind = in_routineKind ;
  result.mProperty_warnIfUnused = in_warnIfUnused ;
  result.mProperty_exportedRoutine = in_exportedRoutine ;
  result.mProperty_routineAttributes = in_routineAttributes ;
  result.mProperty_routineMangledLLVMName = in_routineMangledLLVMName ;
  result.mProperty_formalArgumentList = in_formalArgumentList ;
  result.mProperty_warningOnUnusedArgs = in_warningOnUnusedArgs ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineDeclaration = in_mEndOfRoutineDeclaration ;
  result.mProperty_returnTypeName = in_returnTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element::GGS_decoratedRegularRoutineList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_mode & inOperand1,
                                                                                        const GGS_bool & inOperand2,
                                                                                        const GGS_routineKind & inOperand3,
                                                                                        const GGS_bool & inOperand4,
                                                                                        const GGS_bool & inOperand5,
                                                                                        const GGS_routineAttributes & inOperand6,
                                                                                        const GGS_lstring & inOperand7,
                                                                                        const GGS_routineFormalArgumentListAST & inOperand8,
                                                                                        const GGS_bool & inOperand9,
                                                                                        const GGS_instructionListAST & inOperand10,
                                                                                        const GGS_location & inOperand11,
                                                                                        const GGS_lstring & inOperand12) :
mProperty_receiverTypeName (inOperand0),
mProperty_mode (inOperand1),
mProperty_isRequired (inOperand2),
mProperty_routineKind (inOperand3),
mProperty_warnIfUnused (inOperand4),
mProperty_exportedRoutine (inOperand5),
mProperty_routineAttributes (inOperand6),
mProperty_routineMangledLLVMName (inOperand7),
mProperty_formalArgumentList (inOperand8),
mProperty_warningOnUnusedArgs (inOperand9),
mProperty_mInstructionList (inOperand10),
mProperty_mEndOfRoutineDeclaration (inOperand11),
mProperty_returnTypeName (inOperand12) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::class_func_new (const GGS_lstring & in_receiverTypeName,
                                                                                                       const GGS_mode & in_mode,
                                                                                                       const GGS_bool & in_isRequired,
                                                                                                       const GGS_routineKind & in_routineKind,
                                                                                                       const GGS_bool & in_warnIfUnused,
                                                                                                       const GGS_bool & in_exportedRoutine,
                                                                                                       const GGS_routineAttributes & in_routineAttributes,
                                                                                                       const GGS_lstring & in_routineMangledLLVMName,
                                                                                                       const GGS_routineFormalArgumentListAST & in_formalArgumentList,
                                                                                                       const GGS_bool & in_warningOnUnusedArgs,
                                                                                                       const GGS_instructionListAST & in_mInstructionList,
                                                                                                       const GGS_location & in_mEndOfRoutineDeclaration,
                                                                                                       const GGS_lstring & in_returnTypeName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_receiverTypeName = in_receiverTypeName ;
  result.mProperty_mode = in_mode ;
  result.mProperty_isRequired = in_isRequired ;
  result.mProperty_routineKind = in_routineKind ;
  result.mProperty_warnIfUnused = in_warnIfUnused ;
  result.mProperty_exportedRoutine = in_exportedRoutine ;
  result.mProperty_routineAttributes = in_routineAttributes ;
  result.mProperty_routineMangledLLVMName = in_routineMangledLLVMName ;
  result.mProperty_formalArgumentList = in_formalArgumentList ;
  result.mProperty_warningOnUnusedArgs = in_warningOnUnusedArgs ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineDeclaration = in_mEndOfRoutineDeclaration ;
  result.mProperty_returnTypeName = in_returnTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedRegularRoutineList_2E_element::isValid (void) const {
  return mProperty_receiverTypeName.isValid () && mProperty_mode.isValid () && mProperty_isRequired.isValid () && mProperty_routineKind.isValid () && mProperty_warnIfUnused.isValid () && mProperty_exportedRoutine.isValid () && mProperty_routineAttributes.isValid () && mProperty_routineMangledLLVMName.isValid () && mProperty_formalArgumentList.isValid () && mProperty_warningOnUnusedArgs.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineDeclaration.isValid () && mProperty_returnTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::drop (void) {
  mProperty_receiverTypeName.drop () ;
  mProperty_mode.drop () ;
  mProperty_isRequired.drop () ;
  mProperty_routineKind.drop () ;
  mProperty_warnIfUnused.drop () ;
  mProperty_exportedRoutine.drop () ;
  mProperty_routineAttributes.drop () ;
  mProperty_routineMangledLLVMName.drop () ;
  mProperty_formalArgumentList.drop () ;
  mProperty_warningOnUnusedArgs.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineDeclaration.drop () ;
  mProperty_returnTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedRegularRoutineList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedRegularRoutineList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_receiverTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isRequired.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warnIfUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exportedRoutine.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_routineMangledLLVMName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_formalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_warningOnUnusedArgs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfRoutineDeclaration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_returnTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedRegularRoutineList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ("decoratedRegularRoutineList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedRegularRoutineList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedRegularRoutineList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedRegularRoutineList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedRegularRoutineList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedRegularRoutineList_2E_element GGS_decoratedRegularRoutineList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_decoratedRegularRoutineList_2E_element result ;
  const GGS_decoratedRegularRoutineList_2E_element * p = (const GGS_decoratedRegularRoutineList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedRegularRoutineList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedRegularRoutineList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @regularRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_regularRoutineIR::objectCompare (const GGS_regularRoutineIR & inOperand) const {
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

GGS_regularRoutineIR::GGS_regularRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                         const GGS_bool & in_isRequired,
                                                                         const GGS_bool & in_warnsIfUnused,
                                                                         const GGS_omnibusType & in_mReceiverType,
                                                                         const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                         const GGS_allocaList & in_mAllocaList,
                                                                         const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                         const GGS_bool & in_mExportedFunction,
                                                                         const GGS_routineKind & in_mKind,
                                                                         const GGS_omnibusType & in_mReturnType,
                                                                         const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_regularRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_regularRoutineIR (inCompiler COMMA_THERE)) ;
  object->regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mAllocaList, in_mInstructionGenerationList, in_mExportedFunction, in_mKind, in_mReturnType, in_mAppendFileAndLineArgumentForPanicLocation, inCompiler) ;
  const GGS_regularRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_regularRoutineIR::
regularRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                          const GGS_bool & in_isRequired,
                                                                                          const GGS_bool & in_warnsIfUnused,
                                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                                          const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                                                          const GGS_allocaList & in_mAllocaList,
                                                                                          const GGS_instructionListIR & in_mInstructionGenerationList,
                                                                                          const GGS_bool & in_mExportedFunction,
                                                                                          const GGS_routineKind & in_mKind,
                                                                                          const GGS_omnibusType & in_mReturnType,
                                                                                          const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  mProperty_mExportedFunction = in_mExportedFunction ;
  mProperty_mKind = in_mKind ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation = in_mAppendFileAndLineArgumentForPanicLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR::GGS_regularRoutineIR (const cPtr_regularRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_regularRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                           const GGS_bool & in_isRequired,
                                                           const GGS_bool & in_warnsIfUnused,
                                                           const GGS_omnibusType & in_mReceiverType,
                                                           const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                                           const GGS_allocaList & in_mAllocaList,
                                                           const GGS_instructionListIR & in_mInstructionGenerationList,
                                                           const GGS_bool & in_mExportedFunction,
                                                           const GGS_routineKind & in_mKind,
                                                           const GGS_omnibusType & in_mReturnType,
                                                           const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_regularRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_regularRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mFormalArgumentListForGeneration, in_mAllocaList, in_mInstructionGenerationList, in_mExportedFunction, in_mKind, in_mReturnType, in_mAppendFileAndLineArgumentForPanicLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_regularRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineFormalArgumentListIR GGS_regularRoutineIR::readProperty_mFormalArgumentListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineFormalArgumentListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mFormalArgumentListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mFormalArgumentListForGeneration (const GGS_routineFormalArgumentListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mFormalArgumentListForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_regularRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListIR GGS_regularRoutineIR::readProperty_mInstructionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListIR () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mInstructionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mInstructionGenerationList (const GGS_instructionListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mInstructionGenerationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_regularRoutineIR::readProperty_mExportedFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mExportedFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mExportedFunction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mExportedFunction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineKind GGS_regularRoutineIR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_routineKind () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mKind (const GGS_routineKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_regularRoutineIR::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mReturnType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mReturnType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_regularRoutineIR::readProperty_mAppendFileAndLineArgumentForPanicLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    return p->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularRoutineIR::setProperty_mAppendFileAndLineArgumentForPanicLocation (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_regularRoutineIR * p = (cPtr_regularRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_regularRoutineIR) ;
    p->mProperty_mAppendFileAndLineArgumentForPanicLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @regularRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_regularRoutineIR::cPtr_regularRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_regularRoutineIR::cPtr_regularRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                              const GGS_bool & in_isRequired,
                                              const GGS_bool & in_warnsIfUnused,
                                              const GGS_omnibusType & in_mReceiverType,
                                              const GGS_routineFormalArgumentListIR & in_mFormalArgumentListForGeneration,
                                              const GGS_allocaList & in_mAllocaList,
                                              const GGS_instructionListIR & in_mInstructionGenerationList,
                                              const GGS_bool & in_mExportedFunction,
                                              const GGS_routineKind & in_mKind,
                                              const GGS_omnibusType & in_mReturnType,
                                              const GGS_bool & in_mAppendFileAndLineArgumentForPanicLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mFormalArgumentListForGeneration (),
mProperty_mAllocaList (),
mProperty_mInstructionGenerationList (),
mProperty_mExportedFunction (),
mProperty_mKind (),
mProperty_mReturnType (),
mProperty_mAppendFileAndLineArgumentForPanicLocation () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mFormalArgumentListForGeneration = in_mFormalArgumentListForGeneration ;
  mProperty_mAllocaList = in_mAllocaList ;
  mProperty_mInstructionGenerationList = in_mInstructionGenerationList ;
  mProperty_mExportedFunction = in_mExportedFunction ;
  mProperty_mKind = in_mKind ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation = in_mAppendFileAndLineArgumentForPanicLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_regularRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

void cPtr_regularRoutineIR::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@regularRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExportedFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_regularRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_regularRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mFormalArgumentListForGeneration, mProperty_mAllocaList, mProperty_mInstructionGenerationList, mProperty_mExportedFunction, mProperty_mKind, mProperty_mReturnType, mProperty_mAppendFileAndLineArgumentForPanicLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_regularRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mFormalArgumentListForGeneration.printNonNullClassInstanceProperties ("mFormalArgumentListForGeneration") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
    mProperty_mInstructionGenerationList.printNonNullClassInstanceProperties ("mInstructionGenerationList") ;
    mProperty_mExportedFunction.printNonNullClassInstanceProperties ("mExportedFunction") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mAppendFileAndLineArgumentForPanicLocation.printNonNullClassInstanceProperties ("mAppendFileAndLineArgumentForPanicLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @regularRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularRoutineIR ("regularRoutineIR",
                                                                        & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_regularRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularRoutineIR GGS_regularRoutineIR::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_regularRoutineIR result ;
  const GGS_regularRoutineIR * p = (const GGS_regularRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @panicAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_panicAST::objectCompare (const GGS_panicAST & inOperand) const {
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

GGS_panicAST::GGS_panicAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_panicAST GGS_panicAST::
init_21__21__21__21_ (const GGS_bool & in_mIsSetup,
                      const GGS_instructionListAST & in_mPanicInstructionList,
                      const GGS_location & in_mEndOfPanicInstructions,
                      const GGS_lbigint & in_mPriority,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_panicAST * object = nullptr ;
  macroMyNew (object, cPtr_panicAST (inCompiler COMMA_THERE)) ;
  object->panicAST_init_21__21__21__21_ (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority, inCompiler) ;
  const GGS_panicAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::
panicAST_init_21__21__21__21_ (const GGS_bool & in_mIsSetup,
                               const GGS_instructionListAST & in_mPanicInstructionList,
                               const GGS_location & in_mEndOfPanicInstructions,
                               const GGS_lbigint & in_mPriority,
                               Compiler * /* inCompiler */) {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPanicInstructionList = in_mPanicInstructionList ;
  mProperty_mEndOfPanicInstructions = in_mEndOfPanicInstructions ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST::GGS_panicAST (const cPtr_panicAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_panicAST GGS_panicAST::class_func_new (const GGS_bool & in_mIsSetup,
                                           const GGS_instructionListAST & in_mPanicInstructionList,
                                           const GGS_location & in_mEndOfPanicInstructions,
                                           const GGS_lbigint & in_mPriority,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_panicAST result ;
  macroMyNew (result.mObjectPtr, cPtr_panicAST (in_mIsSetup, in_mPanicInstructionList, in_mEndOfPanicInstructions, in_mPriority,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_panicAST::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mIsSetup ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mIsSetup (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_instructionListAST GGS_panicAST::readProperty_mPanicInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_instructionListAST () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPanicInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mPanicInstructionList (const GGS_instructionListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPanicInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_panicAST::readProperty_mEndOfPanicInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mEndOfPanicInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mEndOfPanicInstructions (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mEndOfPanicInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_panicAST::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    return p->mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_panicAST::setProperty_mPriority (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_panicAST * p = (cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    p->mProperty_mPriority = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @panicAST class
//--------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

cPtr_panicAST::cPtr_panicAST (const GGS_bool & in_mIsSetup,
                              const GGS_instructionListAST & in_mPanicInstructionList,
                              const GGS_location & in_mEndOfPanicInstructions,
                              const GGS_lbigint & in_mPriority,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPanicInstructionList (),
mProperty_mEndOfPanicInstructions (),
mProperty_mPriority () {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPanicInstructionList = in_mPanicInstructionList ;
  mProperty_mEndOfPanicInstructions = in_mEndOfPanicInstructions ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_panicAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

void cPtr_panicAST::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@panicAST:") ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_panicAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_panicAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPanicInstructionList.printNonNullClassInstanceProperties ("mPanicInstructionList") ;
    mProperty_mEndOfPanicInstructions.printNonNullClassInstanceProperties ("mEndOfPanicInstructions") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @panicAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_panicAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicAST GGS_panicAST::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_panicAST result ;
  const GGS_panicAST * p = (const GGS_panicAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_panicAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@panicAST noteTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_panicAST::method_noteTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_panicAST temp_0 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mPanicInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 53)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_noteTypesInPrecedenceGraph (cPtr_panicAST * inObject,
                                                     GGS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_panicAST) ;
    inObject->method_noteTypesInPrecedenceGraph  (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @decoratedPanicRoutine reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_decoratedPanicRoutine::objectCompare (const GGS_decoratedPanicRoutine & inOperand) const {
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

GGS_decoratedPanicRoutine::GGS_decoratedPanicRoutine (void) :
GGS_abstractDecoratedDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine::
init_21__21_ (const GGS_bool & in_mIsSetup,
              const GGS_lbigint & in_mPriority,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_decoratedPanicRoutine * object = nullptr ;
  macroMyNew (object, cPtr_decoratedPanicRoutine (inCompiler COMMA_THERE)) ;
  object->decoratedPanicRoutine_init_21__21_ (in_mIsSetup, in_mPriority, inCompiler) ;
  const GGS_decoratedPanicRoutine result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_decoratedPanicRoutine::
decoratedPanicRoutine_init_21__21_ (const GGS_bool & in_mIsSetup,
                                    const GGS_lbigint & in_mPriority,
                                    Compiler * /* inCompiler */) {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine::GGS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GGS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}
//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine::class_func_new (const GGS_bool & in_mIsSetup,
                                                                     const GGS_lbigint & in_mPriority,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_decoratedPanicRoutine result ;
  macroMyNew (result.mObjectPtr, cPtr_decoratedPanicRoutine (in_mIsSetup, in_mPriority,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_decoratedPanicRoutine::readProperty_mIsSetup (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mIsSetup ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedPanicRoutine::setProperty_mIsSetup (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mIsSetup = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_decoratedPanicRoutine::readProperty_mPriority (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    return p->mProperty_mPriority ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedPanicRoutine::setProperty_mPriority (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_decoratedPanicRoutine * p = (cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    p->mProperty_mPriority = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @decoratedPanicRoutine class
//--------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPriority () {
}

//--------------------------------------------------------------------------------------------------

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (const GGS_bool & in_mIsSetup,
                                                        const GGS_lbigint & in_mPriority,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (inCompiler COMMA_THERE),
mProperty_mIsSetup (),
mProperty_mPriority () {
  mProperty_mIsSetup = in_mIsSetup ;
  mProperty_mPriority = in_mPriority ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_decoratedPanicRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

void cPtr_decoratedPanicRoutine::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@decoratedPanicRoutine:") ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPriority, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_decoratedPanicRoutine::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDecoratedDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mIsSetup.printNonNullClassInstanceProperties ("mIsSetup") ;
    mProperty_mPriority.printNonNullClassInstanceProperties ("mPriority") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @decoratedPanicRoutine generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                                                             & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedPanicRoutine GGS_decoratedPanicRoutine::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedPanicRoutine result ;
  const GGS_decoratedPanicRoutine * p = (const GGS_decoratedPanicRoutine *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedPanicRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @fileSpecificPanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_fileSpecificPanicRoutineIR::objectCompare (const GGS_fileSpecificPanicRoutineIR & inOperand) const {
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

GGS_fileSpecificPanicRoutineIR::GGS_fileSpecificPanicRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR GGS_fileSpecificPanicRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                             const GGS_bool & in_isRequired,
                                             const GGS_bool & in_warnsIfUnused,
                                             const GGS_string & in_inFilePath,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_fileSpecificPanicRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_fileSpecificPanicRoutineIR (inCompiler COMMA_THERE)) ;
  object->fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_inFilePath, inCompiler) ;
  const GGS_fileSpecificPanicRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_fileSpecificPanicRoutineIR::
fileSpecificPanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                        const GGS_bool & in_isRequired,
                                                                        const GGS_bool & in_warnsIfUnused,
                                                                        const GGS_string & in_inFilePath,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_inFilePath = in_inFilePath ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR::GGS_fileSpecificPanicRoutineIR (const cPtr_fileSpecificPanicRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fileSpecificPanicRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR GGS_fileSpecificPanicRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                               const GGS_bool & in_isRequired,
                                                                               const GGS_bool & in_warnsIfUnused,
                                                                               const GGS_string & in_inFilePath,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_fileSpecificPanicRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_fileSpecificPanicRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_inFilePath,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_fileSpecificPanicRoutineIR::readProperty_inFilePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    return p->mProperty_inFilePath ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileSpecificPanicRoutineIR::setProperty_inFilePath (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_fileSpecificPanicRoutineIR * p = (cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    p->mProperty_inFilePath = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @fileSpecificPanicRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_fileSpecificPanicRoutineIR::cPtr_fileSpecificPanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_inFilePath () {
}

//--------------------------------------------------------------------------------------------------

cPtr_fileSpecificPanicRoutineIR::cPtr_fileSpecificPanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                  const GGS_bool & in_isRequired,
                                                                  const GGS_bool & in_warnsIfUnused,
                                                                  const GGS_string & in_inFilePath,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_inFilePath () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_inFilePath = in_inFilePath ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_fileSpecificPanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

void cPtr_fileSpecificPanicRoutineIR::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@fileSpecificPanicRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_inFilePath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_fileSpecificPanicRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_fileSpecificPanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_inFilePath, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_fileSpecificPanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_inFilePath.printNonNullClassInstanceProperties ("inFilePath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @fileSpecificPanicRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ("fileSpecificPanicRoutineIR",
                                                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fileSpecificPanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fileSpecificPanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fileSpecificPanicRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileSpecificPanicRoutineIR GGS_fileSpecificPanicRoutineIR::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_fileSpecificPanicRoutineIR result ;
  const GGS_fileSpecificPanicRoutineIR * p = (const GGS_fileSpecificPanicRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fileSpecificPanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileSpecificPanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @universalModePanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_universalModePanicRoutineIR::objectCompare (const GGS_universalModePanicRoutineIR & inOperand) const {
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

GGS_universalModePanicRoutineIR::GGS_universalModePanicRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_universalModePanicRoutineIR GGS_universalModePanicRoutineIR::
init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                         const GGS_bool & in_isRequired,
                                         const GGS_bool & in_warnsIfUnused,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cPtr_universalModePanicRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_universalModePanicRoutineIR (inCompiler COMMA_THERE)) ;
  object->universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler) ;
  const GGS_universalModePanicRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_universalModePanicRoutineIR::
universalModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused (const GGS_lstring & in_mRoutineMangledName,
                                                                     const GGS_bool & in_isRequired,
                                                                     const GGS_bool & in_warnsIfUnused,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR::GGS_universalModePanicRoutineIR (const cPtr_universalModePanicRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalModePanicRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR GGS_universalModePanicRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                                 const GGS_bool & in_isRequired,
                                                                                 const GGS_bool & in_warnsIfUnused,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_universalModePanicRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_universalModePanicRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @universalModePanicRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_universalModePanicRoutineIR::cPtr_universalModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_universalModePanicRoutineIR::cPtr_universalModePanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                    const GGS_bool & in_isRequired,
                                                                    const GGS_bool & in_warnsIfUnused,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_universalModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

void cPtr_universalModePanicRoutineIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@universalModePanicRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_universalModePanicRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_universalModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_universalModePanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @universalModePanicRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_universalModePanicRoutineIR ("universalModePanicRoutineIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_universalModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_universalModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_universalModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_universalModePanicRoutineIR GGS_universalModePanicRoutineIR::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_universalModePanicRoutineIR result ;
  const GGS_universalModePanicRoutineIR * p = (const GGS_universalModePanicRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_universalModePanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalModePanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sectionModePanicRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sectionModePanicRoutineIR::objectCompare (const GGS_sectionModePanicRoutineIR & inOperand) const {
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

GGS_sectionModePanicRoutineIR::GGS_sectionModePanicRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sectionModePanicRoutineIR GGS_sectionModePanicRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                 const GGS_bool & in_isRequired,
                                                 const GGS_bool & in_warnsIfUnused,
                                                 const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                                 const GGS_panicSortedListIR & in_mPanicLoopListIR,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_sectionModePanicRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_sectionModePanicRoutineIR (inCompiler COMMA_THERE)) ;
  object->sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mPanicSetupListIR, in_mPanicLoopListIR, inCompiler) ;
  const GGS_sectionModePanicRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sectionModePanicRoutineIR::
sectionModePanicRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                           const GGS_bool & in_isRequired,
                                                                           const GGS_bool & in_warnsIfUnused,
                                                                           const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                                                           const GGS_panicSortedListIR & in_mPanicLoopListIR,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mPanicSetupListIR = in_mPanicSetupListIR ;
  mProperty_mPanicLoopListIR = in_mPanicLoopListIR ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR::GGS_sectionModePanicRoutineIR (const cPtr_sectionModePanicRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sectionModePanicRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR GGS_sectionModePanicRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                             const GGS_bool & in_isRequired,
                                                                             const GGS_bool & in_warnsIfUnused,
                                                                             const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                                                             const GGS_panicSortedListIR & in_mPanicLoopListIR,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_sectionModePanicRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sectionModePanicRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mPanicSetupListIR, in_mPanicLoopListIR,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR GGS_sectionModePanicRoutineIR::readProperty_mPanicSetupListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_panicSortedListIR () ;
  }else{
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    return p->mProperty_mPanicSetupListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionModePanicRoutineIR::setProperty_mPanicSetupListIR (const GGS_panicSortedListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    p->mProperty_mPanicSetupListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_panicSortedListIR GGS_sectionModePanicRoutineIR::readProperty_mPanicLoopListIR (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_panicSortedListIR () ;
  }else{
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    return p->mProperty_mPanicLoopListIR ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sectionModePanicRoutineIR::setProperty_mPanicLoopListIR (const GGS_panicSortedListIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sectionModePanicRoutineIR * p = (cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    p->mProperty_mPanicLoopListIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sectionModePanicRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_sectionModePanicRoutineIR::cPtr_sectionModePanicRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sectionModePanicRoutineIR::cPtr_sectionModePanicRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                                const GGS_bool & in_isRequired,
                                                                const GGS_bool & in_warnsIfUnused,
                                                                const GGS_panicSortedListIR & in_mPanicSetupListIR,
                                                                const GGS_panicSortedListIR & in_mPanicLoopListIR,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mPanicSetupListIR (),
mProperty_mPanicLoopListIR () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mPanicSetupListIR = in_mPanicSetupListIR ;
  mProperty_mPanicLoopListIR = in_mPanicLoopListIR ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sectionModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

void cPtr_sectionModePanicRoutineIR::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@sectionModePanicRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sectionModePanicRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sectionModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mPanicSetupListIR, mProperty_mPanicLoopListIR, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sectionModePanicRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mPanicSetupListIR.printNonNullClassInstanceProperties ("mPanicSetupListIR") ;
    mProperty_mPanicLoopListIR.printNonNullClassInstanceProperties ("mPanicLoopListIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @sectionModePanicRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ("sectionModePanicRoutineIR",
                                                                                 & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sectionModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sectionModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sectionModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sectionModePanicRoutineIR GGS_sectionModePanicRoutineIR::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_sectionModePanicRoutineIR result ;
  const GGS_sectionModePanicRoutineIR * p = (const GGS_sectionModePanicRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sectionModePanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionModePanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeConvertToBooleanAST::objectCompare (const GGS_compileTimeConvertToBooleanAST & inOperand) const {
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

GGS_compileTimeConvertToBooleanAST::GGS_compileTimeConvertToBooleanAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST::
init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                      const GGS_lstring & in_mReceiverTypeName,
                      const GGS_lstring & in_mConverterName,
                      const GGS_ctExpressionAST & in_mExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_compileTimeConvertToBooleanAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeConvertToBooleanAST (inCompiler COMMA_THERE)) ;
  object->compileTimeConvertToBooleanAST_init_21__21__21__21_ (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mExpression, inCompiler) ;
  const GGS_compileTimeConvertToBooleanAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeConvertToBooleanAST::
compileTimeConvertToBooleanAST_init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                                                     const GGS_lstring & in_mReceiverTypeName,
                                                     const GGS_lstring & in_mConverterName,
                                                     const GGS_ctExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST::GGS_compileTimeConvertToBooleanAST (const cPtr_compileTimeConvertToBooleanAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeConvertToBooleanAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST::class_func_new (const GGS_lstring & in_mReceiverName,
                                                                                       const GGS_lstring & in_mReceiverTypeName,
                                                                                       const GGS_lstring & in_mConverterName,
                                                                                       const GGS_ctExpressionAST & in_mExpression,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_compileTimeConvertToBooleanAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeConvertToBooleanAST (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mConverterName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeConvertToBooleanAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeConvertToBooleanAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeConvertToBooleanAST * p = (cPtr_compileTimeConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeConvertToBooleanAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeConvertToBooleanAST::cPtr_compileTimeConvertToBooleanAST (const GGS_lstring & in_mReceiverName,
                                                                          const GGS_lstring & in_mReceiverTypeName,
                                                                          const GGS_lstring & in_mConverterName,
                                                                          const GGS_ctExpressionAST & in_mExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mExpression () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeConvertToBooleanAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

void cPtr_compileTimeConvertToBooleanAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeConvertToBooleanAST:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConverterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeConvertToBooleanAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeConvertToBooleanAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mConverterName.printNonNullClassInstanceProperties ("mConverterName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeConvertToBooleanAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ("compileTimeConvertToBooleanAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeConvertToBooleanAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeConvertToBooleanAST GGS_compileTimeConvertToBooleanAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimeConvertToBooleanAST result ;
  const GGS_compileTimeConvertToBooleanAST * p = (const GGS_compileTimeConvertToBooleanAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeConvertToBooleanAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeConvertToBooleanAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmConvertToBooleanAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmConvertToBooleanAST::objectCompare (const GGS_llvmConvertToBooleanAST & inOperand) const {
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

GGS_llvmConvertToBooleanAST::GGS_llvmConvertToBooleanAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST::
init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                      const GGS_lstring & in_mReceiverTypeName,
                      const GGS_lstring & in_mConverterName,
                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmConvertToBooleanAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmConvertToBooleanAST (inCompiler COMMA_THERE)) ;
  object->llvmConvertToBooleanAST_init_21__21__21__21_ (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mInstructionList, inCompiler) ;
  const GGS_llvmConvertToBooleanAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmConvertToBooleanAST::
llvmConvertToBooleanAST_init_21__21__21__21_ (const GGS_lstring & in_mReceiverName,
                                              const GGS_lstring & in_mReceiverTypeName,
                                              const GGS_lstring & in_mConverterName,
                                              const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST::GGS_llvmConvertToBooleanAST (const cPtr_llvmConvertToBooleanAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmConvertToBooleanAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST::class_func_new (const GGS_lstring & in_mReceiverName,
                                                                         const GGS_lstring & in_mReceiverTypeName,
                                                                         const GGS_lstring & in_mConverterName,
                                                                         const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_llvmConvertToBooleanAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmConvertToBooleanAST (in_mReceiverName, in_mReceiverTypeName, in_mConverterName, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmConvertToBooleanAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmConvertToBooleanAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmConvertToBooleanAST::readProperty_mConverterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mConverterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mConverterName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mConverterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmConvertToBooleanAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmConvertToBooleanAST::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmConvertToBooleanAST * p = (cPtr_llvmConvertToBooleanAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmConvertToBooleanAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmConvertToBooleanAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmConvertToBooleanAST::cPtr_llvmConvertToBooleanAST (const GGS_lstring & in_mReceiverName,
                                                            const GGS_lstring & in_mReceiverTypeName,
                                                            const GGS_lstring & in_mConverterName,
                                                            const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mConverterName (),
mProperty_mInstructionList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mConverterName = in_mConverterName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmConvertToBooleanAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

void cPtr_llvmConvertToBooleanAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmConvertToBooleanAST:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConverterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmConvertToBooleanAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmConvertToBooleanAST (mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mConverterName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmConvertToBooleanAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mConverterName.printNonNullClassInstanceProperties ("mConverterName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmConvertToBooleanAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ("llvmConvertToBooleanAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmConvertToBooleanAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmConvertToBooleanAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmConvertToBooleanAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmConvertToBooleanAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmConvertToBooleanAST GGS_llvmConvertToBooleanAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmConvertToBooleanAST result ;
  const GGS_llvmConvertToBooleanAST * p = (const GGS_llvmConvertToBooleanAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmConvertToBooleanAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmConvertToBooleanAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeImplicitConverterToBoolean::objectCompare (const GGS_compileTimeImplicitConverterToBoolean & inOperand) const {
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

GGS_compileTimeImplicitConverterToBoolean::GGS_compileTimeImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean::
init_21__21_ (const GGS_lstring & in_mReceiverName,
              const GGS_ctExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_compileTimeImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->compileTimeImplicitConverterToBoolean_init_21__21_ (in_mReceiverName, in_mExpression, inCompiler) ;
  const GGS_compileTimeImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeImplicitConverterToBoolean::
compileTimeImplicitConverterToBoolean_init_21__21_ (const GGS_lstring & in_mReceiverName,
                                                    const GGS_ctExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean::GGS_compileTimeImplicitConverterToBoolean (const cPtr_compileTimeImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean::class_func_new (const GGS_lstring & in_mReceiverName,
                                                                                                     const GGS_ctExpressionAST & in_mExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_compileTimeImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeImplicitConverterToBoolean (in_mReceiverName, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeImplicitConverterToBoolean::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeImplicitConverterToBoolean::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeImplicitConverterToBoolean::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeImplicitConverterToBoolean * p = (cPtr_compileTimeImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeImplicitConverterToBoolean) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeImplicitConverterToBoolean::cPtr_compileTimeImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                                                                        const GGS_ctExpressionAST & in_mExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mExpression () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

void cPtr_compileTimeImplicitConverterToBoolean::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeImplicitConverterToBoolean:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ("compileTimeImplicitConverterToBoolean",
                                                                                             & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeImplicitConverterToBoolean GGS_compileTimeImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeImplicitConverterToBoolean result ;
  const GGS_compileTimeImplicitConverterToBoolean * p = (const GGS_compileTimeImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmImplicitConverterToBoolean reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmImplicitConverterToBoolean::objectCompare (const GGS_llvmImplicitConverterToBoolean & inOperand) const {
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

GGS_llvmImplicitConverterToBoolean::GGS_llvmImplicitConverterToBoolean (void) :
GGS_abstractImplicitConverterToBoolean () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean::
init_21__21__21_ (const GGS_lstring & in_mReceiverName,
                  const GGS_omnibusType & in_mReceiverType,
                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmImplicitConverterToBoolean * object = nullptr ;
  macroMyNew (object, cPtr_llvmImplicitConverterToBoolean (inCompiler COMMA_THERE)) ;
  object->llvmImplicitConverterToBoolean_init_21__21__21_ (in_mReceiverName, in_mReceiverType, in_mInstructionList, inCompiler) ;
  const GGS_llvmImplicitConverterToBoolean result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmImplicitConverterToBoolean::
llvmImplicitConverterToBoolean_init_21__21__21_ (const GGS_lstring & in_mReceiverName,
                                                 const GGS_omnibusType & in_mReceiverType,
                                                 const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean::GGS_llvmImplicitConverterToBoolean (const cPtr_llvmImplicitConverterToBoolean * inSourcePtr) :
GGS_abstractImplicitConverterToBoolean (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmImplicitConverterToBoolean) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean::class_func_new (const GGS_lstring & in_mReceiverName,
                                                                                       const GGS_omnibusType & in_mReceiverType,
                                                                                       const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_llvmImplicitConverterToBoolean result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmImplicitConverterToBoolean (in_mReceiverName, in_mReceiverType, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmImplicitConverterToBoolean::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmImplicitConverterToBoolean::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_llvmImplicitConverterToBoolean::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmImplicitConverterToBoolean::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmImplicitConverterToBoolean::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmImplicitConverterToBoolean::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmImplicitConverterToBoolean * p = (cPtr_llvmImplicitConverterToBoolean *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmImplicitConverterToBoolean) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmImplicitConverterToBoolean class
//--------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverType (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmImplicitConverterToBoolean::cPtr_llvmImplicitConverterToBoolean (const GGS_lstring & in_mReceiverName,
                                                                          const GGS_omnibusType & in_mReceiverType,
                                                                          const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractImplicitConverterToBoolean (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mReceiverType (),
mProperty_mInstructionList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmImplicitConverterToBoolean::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

void cPtr_llvmImplicitConverterToBoolean::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmImplicitConverterToBoolean:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmImplicitConverterToBoolean::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmImplicitConverterToBoolean (mProperty_mReceiverName, mProperty_mReceiverType, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmImplicitConverterToBoolean::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractImplicitConverterToBoolean::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmImplicitConverterToBoolean generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ("llvmImplicitConverterToBoolean",
                                                                                      & kTypeDescriptor_GALGAS_abstractImplicitConverterToBoolean) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmImplicitConverterToBoolean::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmImplicitConverterToBoolean ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmImplicitConverterToBoolean::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmImplicitConverterToBoolean (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmImplicitConverterToBoolean GGS_llvmImplicitConverterToBoolean::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmImplicitConverterToBoolean result ;
  const GGS_llvmImplicitConverterToBoolean * p = (const GGS_llvmImplicitConverterToBoolean *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmImplicitConverterToBoolean *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmImplicitConverterToBoolean", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @convertExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_convertExpressionAST::objectCompare (const GGS_convertExpressionAST & inOperand) const {
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

GGS_convertExpressionAST::GGS_convertExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_convertExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_convertExpressionAST (inCompiler COMMA_THERE)) ;
  object->convertExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_convertExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_convertExpressionAST::
convertExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                       const GGS_lstring & in_mTypeName,
                                       const GGS_location & in_mEndOfExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST::GGS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST::class_func_new (const GGS_expressionAST & in_mExpression,
                                                                   const GGS_lstring & in_mTypeName,
                                                                   const GGS_location & in_mEndOfExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_convertExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_convertExpressionAST (in_mExpression, in_mTypeName, in_mEndOfExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_convertExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_convertExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_convertExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertExpressionAST * p = (cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @convertExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GGS_expressionAST & in_mExpression,
                                                      const GGS_lstring & in_mTypeName,
                                                      const GGS_location & in_mEndOfExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

void cPtr_convertExpressionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@convertExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_convertExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_convertExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @convertExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertExpressionAST GGS_convertExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_convertExpressionAST result ;
  const GGS_convertExpressionAST * p = (const GGS_convertExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_convertExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @convertInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_convertInstructionIR::objectCompare (const GGS_convertInstructionIR & inOperand) const {
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

GGS_convertInstructionIR::GGS_convertInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_convertInstructionIR GGS_convertInstructionIR::
init_21__21__21_ (const GGS_objectIR & in_mTarget,
                  const GGS_objectIR & in_mOperand,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_convertInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_convertInstructionIR (inCompiler COMMA_THERE)) ;
  object->convertInstructionIR_init_21__21__21_ (in_mTarget, in_mOperand, in_mLocation, inCompiler) ;
  const GGS_convertInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_convertInstructionIR::
convertInstructionIR_init_21__21__21_ (const GGS_objectIR & in_mTarget,
                                       const GGS_objectIR & in_mOperand,
                                       const GGS_location & in_mLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR::GGS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR GGS_convertInstructionIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                   const GGS_objectIR & in_mOperand,
                                                                   const GGS_location & in_mLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_convertInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (in_mTarget, in_mOperand, in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_convertInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertInstructionIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_convertInstructionIR::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertInstructionIR::setProperty_mOperand (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mOperand = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_convertInstructionIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_convertInstructionIR::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_convertInstructionIR * p = (cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @convertInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_convertInstructionIR::cPtr_convertInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperand (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GGS_objectIR & in_mTarget,
                                                      const GGS_objectIR & in_mOperand,
                                                      const GGS_location & in_mLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mOperand (),
mProperty_mLocation () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_convertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

void cPtr_convertInstructionIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@convertInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_convertInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mProperty_mTarget, mProperty_mOperand, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_convertInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @convertInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR GGS_convertInstructionIR::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_convertInstructionIR result ;
  const GGS_convertInstructionIR * p = (const GGS_convertInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_convertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_convertInstructionIR_2E_weak::objectCompare (const GGS_convertInstructionIR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_convertInstructionIR_2E_weak::GGS_convertInstructionIR_2E_weak (void) :
GGS_abstractInstructionIR_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR_2E_weak & GGS_convertInstructionIR_2E_weak::operator = (const GGS_convertInstructionIR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR_2E_weak::GGS_convertInstructionIR_2E_weak (const GGS_convertInstructionIR & inSource) :
GGS_abstractInstructionIR_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR_2E_weak GGS_convertInstructionIR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_convertInstructionIR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR GGS_convertInstructionIR_2E_weak::bang_convertInstructionIR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_convertInstructionIR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_convertInstructionIR) ;
      result = GGS_convertInstructionIR ((cPtr_convertInstructionIR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @convertInstructionIR.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_convertInstructionIR_2E_weak ("convertInstructionIR.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_convertInstructionIR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_convertInstructionIR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_convertInstructionIR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_convertInstructionIR_2E_weak GGS_convertInstructionIR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_convertInstructionIR_2E_weak result ;
  const GGS_convertInstructionIR_2E_weak * p = (const GGS_convertInstructionIR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_convertInstructionIR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extendExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extendExpressionAST::objectCompare (const GGS_extendExpressionAST & inOperand) const {
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

GGS_extendExpressionAST::GGS_extendExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_extendExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_extendExpressionAST (inCompiler COMMA_THERE)) ;
  object->extendExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_extendExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extendExpressionAST::
extendExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                      const GGS_lstring & in_mTypeName,
                                      const GGS_location & in_mEndOfExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST::GGS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::class_func_new (const GGS_expressionAST & in_mExpression,
                                                                 const GGS_lstring & in_mTypeName,
                                                                 const GGS_location & in_mEndOfExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_extendExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_extendExpressionAST (in_mExpression, in_mTypeName, in_mEndOfExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_extendExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_extendExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extendExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extendExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_extendExpressionAST * p = (cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extendExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GGS_expressionAST & in_mExpression,
                                                    const GGS_lstring & in_mTypeName,
                                                    const GGS_location & in_mEndOfExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@extendExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extendExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extendExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @extendExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extendExpressionAST GGS_extendExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_extendExpressionAST result ;
  const GGS_extendExpressionAST * p = (const GGS_extendExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @truncateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_truncateExpressionAST::objectCompare (const GGS_truncateExpressionAST & inOperand) const {
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

GGS_truncateExpressionAST::GGS_truncateExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST::
init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                  const GGS_lstring & in_mTypeName,
                  const GGS_location & in_mEndOfExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_truncateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_truncateExpressionAST (inCompiler COMMA_THERE)) ;
  object->truncateExpressionAST_init_21__21__21_ (in_mExpression, in_mTypeName, in_mEndOfExpression, inCompiler) ;
  const GGS_truncateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_truncateExpressionAST::
truncateExpressionAST_init_21__21__21_ (const GGS_expressionAST & in_mExpression,
                                        const GGS_lstring & in_mTypeName,
                                        const GGS_location & in_mEndOfExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST::GGS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST::class_func_new (const GGS_expressionAST & in_mExpression,
                                                                     const GGS_lstring & in_mTypeName,
                                                                     const GGS_location & in_mEndOfExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_truncateExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_truncateExpressionAST (in_mExpression, in_mTypeName, in_mEndOfExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_truncateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateExpressionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_truncateExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_truncateExpressionAST::readProperty_mEndOfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    return p->mProperty_mEndOfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_truncateExpressionAST::setProperty_mEndOfExpression (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_truncateExpressionAST * p = (cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    p->mProperty_mEndOfExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @truncateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GGS_expressionAST & in_mExpression,
                                                        const GGS_lstring & in_mTypeName,
                                                        const GGS_location & in_mEndOfExpression,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mTypeName (),
mProperty_mEndOfExpression () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mEndOfExpression = in_mEndOfExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

void cPtr_truncateExpressionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@truncateExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_truncateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_truncateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mEndOfExpression.printNonNullClassInstanceProperties ("mEndOfExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @truncateExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_truncateExpressionAST GGS_truncateExpressionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_truncateExpressionAST result ;
  const GGS_truncateExpressionAST * p = (const GGS_truncateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_truncateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST::GGS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST::~ GGS_controlRegisterLValueAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterLValueAST::init_21__21__21__21_ (const GGS_lstring & in_mRegisterGroupName,
                                                                                 const GGS_registerGroupIndexAST & in_mGroupIndex,
                                                                                 const GGS_lstring & in_mRegisterName,
                                                                                 const GGS_registerIndexAST & in_mRegisterIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterLValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mGroupIndex = in_mGroupIndex ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mRegisterIndex = in_mRegisterIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterLValueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST::GGS_controlRegisterLValueAST (const GGS_lstring & inOperand0,
                                                            const GGS_registerGroupIndexAST & inOperand1,
                                                            const GGS_lstring & inOperand2,
                                                            const GGS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterLValueAST::class_func_new (const GGS_lstring & in_mRegisterGroupName,
                                                                           const GGS_registerGroupIndexAST & in_mGroupIndex,
                                                                           const GGS_lstring & in_mRegisterName,
                                                                           const GGS_registerIndexAST & in_mRegisterIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterLValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  result.mProperty_mGroupIndex = in_mGroupIndex ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mRegisterIndex = in_mRegisterIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterLValueAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controlRegisterLValueAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterLValueAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterLValueAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_controlRegisterLValueAST result ;
  const GGS_controlRegisterLValueAST * p = (const GGS_controlRegisterLValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterLValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterLValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST::GGS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mOperand () {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST::~ GGS_LValueAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_LValueAST GGS_LValueAST::init_21__21_ (const GGS_lstring & in_mIdentifier,
                                           const GGS_LValueOperandAST & in_mOperand,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIdentifier = in_mIdentifier ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST::GGS_LValueAST (const GGS_lstring & inOperand0,
                              const GGS_LValueOperandAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mOperand (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_LValueAST::class_func_new (const GGS_lstring & in_mIdentifier,
                                             const GGS_LValueOperandAST & in_mOperand,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIdentifier = in_mIdentifier ;
  result.mProperty_mOperand = in_mOperand ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mOperand.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mOperand.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueAST::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_LValueAST::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_LValueAST result ;
  const GGS_LValueAST * p = (const GGS_LValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation::GGS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation::~ GGS_LValueRepresentation (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_LValueRepresentation GGS_LValueRepresentation::init_21__21_ (const GGS_omnibusType & in_type,
                                                                 const GGS_string & in_llvmName,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueRepresentation result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueRepresentation::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation::GGS_LValueRepresentation (const GGS_omnibusType & inOperand0,
                                                    const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_LValueRepresentation::class_func_new (const GGS_omnibusType & in_type,
                                                                   const GGS_string & in_llvmName,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_LValueRepresentation result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_llvmName = in_llvmName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_LValueRepresentation::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @LValueRepresentation:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @LValueRepresentation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueRepresentation GGS_LValueRepresentation::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_LValueRepresentation result ;
  const GGS_LValueRepresentation * p = (const GGS_LValueRepresentation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_LValueRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sizeofExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sizeofExpressionAST::objectCompare (const GGS_sizeofExpressionAST & inOperand) const {
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

GGS_sizeofExpressionAST::GGS_sizeofExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sizeofExpressionAST GGS_sizeofExpressionAST::
init_21_ (const GGS_LValueAST & in_mLValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sizeofExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_sizeofExpressionAST (inCompiler COMMA_THERE)) ;
  object->sizeofExpressionAST_init_21_ (in_mLValue, inCompiler) ;
  const GGS_sizeofExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::
sizeofExpressionAST_init_21_ (const GGS_LValueAST & in_mLValue,
                              Compiler * /* inCompiler */) {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST::GGS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST GGS_sizeofExpressionAST::class_func_new (const GGS_LValueAST & in_mLValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_sizeofExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sizeofExpressionAST (in_mLValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_sizeofExpressionAST::readProperty_mLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueAST () ;
  }else{
    cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    return p->mProperty_mLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sizeofExpressionAST::setProperty_mLValue (const GGS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofExpressionAST * p = (cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    p->mProperty_mLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sizeofExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (const GGS_LValueAST & in_mLValue,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLValue () {
  mProperty_mLValue = in_mLValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

void cPtr_sizeofExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@sizeofExpressionAST:") ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofExpressionAST (mProperty_mLValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLValue.printNonNullClassInstanceProperties ("mLValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @sizeofExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofExpressionAST ("sizeofExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sizeofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sizeofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sizeofExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofExpressionAST GGS_sizeofExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_sizeofExpressionAST result ;
  const GGS_sizeofExpressionAST * p = (const GGS_sizeofExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sizeofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sizeofTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sizeofTypeAST::objectCompare (const GGS_sizeofTypeAST & inOperand) const {
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

GGS_sizeofTypeAST::GGS_sizeofTypeAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sizeofTypeAST GGS_sizeofTypeAST::
init_21_ (const GGS_lstring & in_mTypeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_sizeofTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_sizeofTypeAST (inCompiler COMMA_THERE)) ;
  object->sizeofTypeAST_init_21_ (in_mTypeName, inCompiler) ;
  const GGS_sizeofTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::
sizeofTypeAST_init_21_ (const GGS_lstring & in_mTypeName,
                        Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST::GGS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST GGS_sizeofTypeAST::class_func_new (const GGS_lstring & in_mTypeName,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_sizeofTypeAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sizeofTypeAST (in_mTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sizeofTypeAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sizeofTypeAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofTypeAST * p = (cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sizeofTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (const GGS_lstring & in_mTypeName,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName () {
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

void cPtr_sizeofTypeAST::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@sizeofTypeAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofTypeAST (mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @sizeofTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofTypeAST ("sizeofTypeAST",
                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sizeofTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sizeofTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sizeofTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofTypeAST GGS_sizeofTypeAST::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_sizeofTypeAST result ;
  const GGS_sizeofTypeAST * p = (const GGS_sizeofTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sizeofTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sizeofInstructionIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sizeofInstructionIR::objectCompare (const GGS_sizeofInstructionIR & inOperand) const {
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

GGS_sizeofInstructionIR::GGS_sizeofInstructionIR (void) :
GGS_abstractInstructionIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sizeofInstructionIR GGS_sizeofInstructionIR::
init_21__21_ (const GGS_objectIR & in_mTarget,
              const GGS_omnibusType & in_mSourceType,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_sizeofInstructionIR * object = nullptr ;
  macroMyNew (object, cPtr_sizeofInstructionIR (inCompiler COMMA_THERE)) ;
  object->sizeofInstructionIR_init_21__21_ (in_mTarget, in_mSourceType, inCompiler) ;
  const GGS_sizeofInstructionIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sizeofInstructionIR::
sizeofInstructionIR_init_21__21_ (const GGS_objectIR & in_mTarget,
                                  const GGS_omnibusType & in_mSourceType,
                                  Compiler * /* inCompiler */) {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceType = in_mSourceType ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR::GGS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) :
GGS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofInstructionIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR GGS_sizeofInstructionIR::class_func_new (const GGS_objectIR & in_mTarget,
                                                                 const GGS_omnibusType & in_mSourceType,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_sizeofInstructionIR result ;
  macroMyNew (result.mObjectPtr, cPtr_sizeofInstructionIR (in_mTarget, in_mSourceType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_objectIR GGS_sizeofInstructionIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_objectIR () ;
  }else{
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sizeofInstructionIR::setProperty_mTarget (const GGS_objectIR & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_sizeofInstructionIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sizeofInstructionIR::setProperty_mSourceType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sizeofInstructionIR * p = (cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sizeofInstructionIR class
//--------------------------------------------------------------------------------------------------

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mSourceType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (const GGS_objectIR & in_mTarget,
                                                    const GGS_omnibusType & in_mSourceType,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (inCompiler COMMA_THERE),
mProperty_mTarget (),
mProperty_mSourceType () {
  mProperty_mTarget = in_mTarget ;
  mProperty_mSourceType = in_mSourceType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sizeofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

void cPtr_sizeofInstructionIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@sizeofInstructionIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sizeofInstructionIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sizeofInstructionIR (mProperty_mTarget, mProperty_mSourceType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sizeofInstructionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @sizeofInstructionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sizeofInstructionIR ("sizeofInstructionIR",
                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sizeofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sizeofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sizeofInstructionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sizeofInstructionIR GGS_sizeofInstructionIR::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_sizeofInstructionIR result ;
  const GGS_sizeofInstructionIR * p = (const GGS_sizeofInstructionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sizeofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typedConstantCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typedConstantCallAST::objectCompare (const GGS_typedConstantCallAST & inOperand) const {
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

GGS_typedConstantCallAST::GGS_typedConstantCallAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST::
init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                  const GGS_lstring & in_mConstructorName,
                  const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_typedConstantCallAST * object = nullptr ;
  macroMyNew (object, cPtr_typedConstantCallAST (inCompiler COMMA_THERE)) ;
  object->typedConstantCallAST_init_21__21__21_ (in_mOptionalTypeName, in_mConstructorName, in_mAccessList, inCompiler) ;
  const GGS_typedConstantCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::
typedConstantCallAST_init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                                       const GGS_lstring & in_mConstructorName,
                                       const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                       Compiler * /* inCompiler */) {
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mConstructorName = in_mConstructorName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST::GGS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST::class_func_new (const GGS_lstring & in_mOptionalTypeName,
                                                                   const GGS_lstring & in_mConstructorName,
                                                                   const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_typedConstantCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_typedConstantCallAST (in_mOptionalTypeName, in_mConstructorName, in_mAccessList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typedConstantCallAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typedConstantCallAST::setProperty_mOptionalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typedConstantCallAST::readProperty_mConstructorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mConstructorName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typedConstantCallAST::setProperty_mConstructorName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mConstructorName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_typedConstantCallAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typedConstantCallAST::setProperty_mAccessList (const GGS_primaryInExpressionAccessListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_typedConstantCallAST * p = (cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typedConstantCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOptionalTypeName (),
mProperty_mConstructorName (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GGS_lstring & in_mOptionalTypeName,
                                                      const GGS_lstring & in_mConstructorName,
                                                      const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mOptionalTypeName (),
mProperty_mConstructorName (),
mProperty_mAccessList () {
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mConstructorName = in_mConstructorName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typedConstantCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

void cPtr_typedConstantCallAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@typedConstantCallAST:") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typedConstantCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mOptionalTypeName, mProperty_mConstructorName, mProperty_mAccessList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typedConstantCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mConstructorName.printNonNullClassInstanceProperties ("mConstructorName") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @typedConstantCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedConstantCallAST GGS_typedConstantCallAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typedConstantCallAST result ;
  const GGS_typedConstantCallAST * p = (const GGS_typedConstantCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typedConstantCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @integerSliceExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerSliceExpressionAST::objectCompare (const GGS_integerSliceExpressionAST & inOperand) const {
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

GGS_integerSliceExpressionAST::GGS_integerSliceExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_integerSliceFieldListAST & in_mSliceValues,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_integerSliceExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_integerSliceExpressionAST (inCompiler COMMA_THERE)) ;
  object->integerSliceExpressionAST_init_21__21__21_ (in_mTypeName, in_mSliceValues, in_mLocation, inCompiler) ;
  const GGS_integerSliceExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerSliceExpressionAST::
integerSliceExpressionAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                            const GGS_integerSliceFieldListAST & in_mSliceValues,
                                            const GGS_location & in_mLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceValues = in_mSliceValues ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST::GGS_integerSliceExpressionAST (const cPtr_integerSliceExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerSliceExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST::class_func_new (const GGS_lstring & in_mTypeName,
                                                                             const GGS_integerSliceFieldListAST & in_mSliceValues,
                                                                             const GGS_location & in_mLocation,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_integerSliceExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_integerSliceExpressionAST (in_mTypeName, in_mSliceValues, in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_integerSliceExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceExpressionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceFieldListAST GGS_integerSliceExpressionAST::readProperty_mSliceValues (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_integerSliceFieldListAST () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mSliceValues ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceExpressionAST::setProperty_mSliceValues (const GGS_integerSliceFieldListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mSliceValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_integerSliceExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerSliceExpressionAST::setProperty_mLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerSliceExpressionAST * p = (cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerSliceExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceValues (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (const GGS_lstring & in_mTypeName,
                                                                const GGS_integerSliceFieldListAST & in_mSliceValues,
                                                                const GGS_location & in_mLocation,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceValues (),
mProperty_mLocation () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceValues = in_mSliceValues ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_integerSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

void cPtr_integerSliceExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@integerSliceExpressionAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceValues.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_integerSliceExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerSliceExpressionAST (mProperty_mTypeName, mProperty_mSliceValues, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerSliceExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceValues.printNonNullClassInstanceProperties ("mSliceValues") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @integerSliceExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceExpressionAST ("integerSliceExpressionAST",
                                                                                 & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_integerSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerSliceExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerSliceExpressionAST GGS_integerSliceExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_integerSliceExpressionAST result ;
  const GGS_integerSliceExpressionAST * p = (const GGS_integerSliceExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalIntegerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntegerInExpressionAST::objectCompare (const GGS_literalIntegerInExpressionAST & inOperand) const {
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

GGS_literalIntegerInExpressionAST::GGS_literalIntegerInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInteger,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalIntegerInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalIntegerInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalIntegerInExpressionAST_init_21_ (in_mLiteralInteger, inCompiler) ;
  const GGS_literalIntegerInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::
literalIntegerInExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInteger,
                                        Compiler * /* inCompiler */) {
  mProperty_mLiteralInteger = in_mLiteralInteger ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST::GGS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST::class_func_new (const GGS_lbigint & in_mLiteralInteger,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntegerInExpressionAST (in_mLiteralInteger,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_literalIntegerInExpressionAST::readProperty_mLiteralInteger (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    return p->mProperty_mLiteralInteger ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalIntegerInExpressionAST::setProperty_mLiteralInteger (const GGS_lbigint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntegerInExpressionAST * p = (cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    p->mProperty_mLiteralInteger = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalIntegerInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInteger () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GGS_lbigint & in_mLiteralInteger,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInteger () {
  mProperty_mLiteralInteger = in_mLiteralInteger ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@literalIntegerInExpressionAST:") ;
  mProperty_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mProperty_mLiteralInteger, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntegerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInteger.printNonNullClassInstanceProperties ("mLiteralInteger") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @literalIntegerInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntegerInExpressionAST GGS_literalIntegerInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_literalIntegerInExpressionAST result ;
  const GGS_literalIntegerInExpressionAST * p = (const GGS_literalIntegerInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntegerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringInExpressionAST::objectCompare (const GGS_literalStringInExpressionAST & inOperand) const {
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

GGS_literalStringInExpressionAST::GGS_literalStringInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST::
init_21_ (const GGS_lstring & in_mLiteralString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalStringInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalStringInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalStringInExpressionAST_init_21_ (in_mLiteralString, inCompiler) ;
  const GGS_literalStringInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringInExpressionAST::
literalStringInExpressionAST_init_21_ (const GGS_lstring & in_mLiteralString,
                                       Compiler * /* inCompiler */) {
  mProperty_mLiteralString = in_mLiteralString ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST::GGS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST::class_func_new (const GGS_lstring & in_mLiteralString,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_literalStringInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalStringInExpressionAST (in_mLiteralString,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_literalStringInExpressionAST::readProperty_mLiteralString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    return p->mProperty_mLiteralString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalStringInExpressionAST::setProperty_mLiteralString (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalStringInExpressionAST * p = (cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    p->mProperty_mLiteralString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GGS_lstring & in_mLiteralString,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralString () {
  mProperty_mLiteralString = in_mLiteralString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringInExpressionAST:") ;
  mProperty_mLiteralString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mProperty_mLiteralString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralString.printNonNullClassInstanceProperties ("mLiteralString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @literalStringInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                                                    & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringInExpressionAST GGS_literalStringInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringInExpressionAST result ;
  const GGS_literalStringInExpressionAST * p = (const GGS_literalStringInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @registerInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerInExpressionAST::objectCompare (const GGS_registerInExpressionAST & inOperand) const {
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

GGS_registerInExpressionAST::GGS_registerInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST::
init_21__21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
              const GGS_lstring & in_mFieldName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_registerInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_registerInExpressionAST (inCompiler COMMA_THERE)) ;
  object->registerInExpressionAST_init_21__21_ (in_mControlRegisterLValue, in_mFieldName, inCompiler) ;
  const GGS_registerInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::
registerInExpressionAST_init_21__21_ (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                      const GGS_lstring & in_mFieldName,
                                      Compiler * /* inCompiler */) {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mFieldName = in_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST::GGS_registerInExpressionAST (const cPtr_registerInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST::class_func_new (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                         const GGS_lstring & in_mFieldName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_registerInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_registerInExpressionAST (in_mControlRegisterLValue, in_mFieldName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_registerInExpressionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerInExpressionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerInExpressionAST::readProperty_mFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    return p->mProperty_mFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerInExpressionAST::setProperty_mFieldName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerInExpressionAST * p = (cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    p->mProperty_mFieldName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                            const GGS_lstring & in_mFieldName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mFieldName () {
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mFieldName = in_mFieldName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

void cPtr_registerInExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@registerInExpressionAST:") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerInExpressionAST (mProperty_mControlRegisterLValue, mProperty_mFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mFieldName.printNonNullClassInstanceProperties ("mFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @registerInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerInExpressionAST ("registerInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerInExpressionAST GGS_registerInExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_registerInExpressionAST result ;
  const GGS_registerInExpressionAST * p = (const GGS_registerInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @registerConstantExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_registerConstantExpressionAST::objectCompare (const GGS_registerConstantExpressionAST & inOperand) const {
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

GGS_registerConstantExpressionAST::GGS_registerConstantExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mRegisterGroupName,
                  const GGS_lstring & in_mRegisterName,
                  const GGS_registerIntegerFieldListAST & in_mFieldValues,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_registerConstantExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_registerConstantExpressionAST (inCompiler COMMA_THERE)) ;
  object->registerConstantExpressionAST_init_21__21__21_ (in_mRegisterGroupName, in_mRegisterName, in_mFieldValues, inCompiler) ;
  const GGS_registerConstantExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::
registerConstantExpressionAST_init_21__21__21_ (const GGS_lstring & in_mRegisterGroupName,
                                                const GGS_lstring & in_mRegisterName,
                                                const GGS_registerIntegerFieldListAST & in_mFieldValues,
                                                Compiler * /* inCompiler */) {
  mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mFieldValues = in_mFieldValues ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST::GGS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST::class_func_new (const GGS_lstring & in_mRegisterGroupName,
                                                                                     const GGS_lstring & in_mRegisterName,
                                                                                     const GGS_registerIntegerFieldListAST & in_mFieldValues,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_registerConstantExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (in_mRegisterGroupName, in_mRegisterName, in_mFieldValues,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerConstantExpressionAST::readProperty_mRegisterGroupName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterGroupName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerConstantExpressionAST::setProperty_mRegisterGroupName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterGroupName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_registerConstantExpressionAST::readProperty_mRegisterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mRegisterName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerConstantExpressionAST::setProperty_mRegisterName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mRegisterName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerIntegerFieldListAST GGS_registerConstantExpressionAST::readProperty_mFieldValues (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerIntegerFieldListAST () ;
  }else{
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    return p->mProperty_mFieldValues ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_registerConstantExpressionAST::setProperty_mFieldValues (const GGS_registerIntegerFieldListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_registerConstantExpressionAST * p = (cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    p->mProperty_mFieldValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @registerConstantExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupName (),
mProperty_mRegisterName (),
mProperty_mFieldValues () {
}

//--------------------------------------------------------------------------------------------------

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GGS_lstring & in_mRegisterGroupName,
                                                                        const GGS_lstring & in_mRegisterName,
                                                                        const GGS_registerIntegerFieldListAST & in_mFieldValues,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mRegisterGroupName (),
mProperty_mRegisterName (),
mProperty_mFieldValues () {
  mProperty_mRegisterGroupName = in_mRegisterGroupName ;
  mProperty_mRegisterName = in_mRegisterName ;
  mProperty_mFieldValues = in_mFieldValues ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

void cPtr_registerConstantExpressionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@registerConstantExpressionAST:") ;
  mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterGroupName, mProperty_mRegisterName, mProperty_mFieldValues, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_registerConstantExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterGroupName.printNonNullClassInstanceProperties ("mRegisterGroupName") ;
    mProperty_mRegisterName.printNonNullClassInstanceProperties ("mRegisterName") ;
    mProperty_mFieldValues.printNonNullClassInstanceProperties ("mFieldValues") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @registerConstantExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerConstantExpressionAST ("registerConstantExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_registerConstantExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerConstantExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerConstantExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerConstantExpressionAST GGS_registerConstantExpressionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_registerConstantExpressionAST result ;
  const GGS_registerConstantExpressionAST * p = (const GGS_registerConstantExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerConstantExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @primaryInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primaryInExpressionAST::objectCompare (const GGS_primaryInExpressionAST & inOperand) const {
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

GGS_primaryInExpressionAST::GGS_primaryInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST::
init_21__21_ (const GGS_lstring & in_mReceiverName,
              const GGS_primaryInExpressionAccessListAST & in_mAccessList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_primaryInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_primaryInExpressionAST (inCompiler COMMA_THERE)) ;
  object->primaryInExpressionAST_init_21__21_ (in_mReceiverName, in_mAccessList, inCompiler) ;
  const GGS_primaryInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::
primaryInExpressionAST_init_21__21_ (const GGS_lstring & in_mReceiverName,
                                     const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST::GGS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST::class_func_new (const GGS_lstring & in_mReceiverName,
                                                                       const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_primaryInExpressionAST (in_mReceiverName, in_mAccessList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_primaryInExpressionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAccessListAST GGS_primaryInExpressionAST::readProperty_mAccessList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_primaryInExpressionAccessListAST () ;
  }else{
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    return p->mProperty_mAccessList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_primaryInExpressionAST::setProperty_mAccessList (const GGS_primaryInExpressionAccessListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_primaryInExpressionAST * p = (cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    p->mProperty_mAccessList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primaryInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mAccessList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GGS_lstring & in_mReceiverName,
                                                          const GGS_primaryInExpressionAccessListAST & in_mAccessList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverName (),
mProperty_mAccessList () {
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mAccessList = in_mAccessList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

void cPtr_primaryInExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@primaryInExpressionAST:") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primaryInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mReceiverName, mProperty_mAccessList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primaryInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mAccessList.printNonNullClassInstanceProperties ("mAccessList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @primaryInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primaryInExpressionAST ("primaryInExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_primaryInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_primaryInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_primaryInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primaryInExpressionAST GGS_primaryInExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_primaryInExpressionAST result ;
  const GGS_primaryInExpressionAST * p = (const GGS_primaryInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_primaryInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzePrimaryExpressionNoSelf (const GGS_omnibusType constinArgument_inSelfType,
                                                                         const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                         const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                         const GGS_semanticContext constinArgument_inContext,
                                                                         const GGS_mode constinArgument_inMode,
                                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                         GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                         GGS_allocaList & ioArgument_ioAllocaList,
                                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         GGS_objectIR & outArgument_outResult,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_valuedObject var_entity_9447 ;
  const GGS_primaryInExpressionAST temp_0 = this ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_0.readProperty_mReceiverName (), var_entity_9447, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 232)) ;
  switch (var_entity_9447.enumValue ()) {
  case GGS_valuedObject::Enumeration::invalid:
    break ;
  case GGS_valuedObject::Enumeration::enum_task:
    {
      GGS_omnibusType extractedValue_9484_type_0 ;
      var_entity_9447.getAssociatedValuesFor_task (extractedValue_9484_type_0) ;
      const GGS_primaryInExpressionAST temp_1 = this ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_9484_type_0, function_llvmNameForGlobalVariable (temp_1.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 235))  COMMA_SOURCE_FILE ("expression-primary.galgas", 235)) ;
      {
      const GGS_primaryInExpressionAST temp_2 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_2.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 236)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_driver:
    {
      GGS_omnibusType extractedValue_10059_type_0 ;
      GGS_bool extractedValue_10064_instancied_1 ;
      var_entity_9447.getAssociatedValuesFor_driver (extractedValue_10059_type_0, extractedValue_10064_instancied_1) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = extractedValue_10064_instancied_1.operator_not (SOURCE_FILE ("expression-primary.galgas", 251)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GGS_primaryInExpressionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mReceiverName ().readProperty_location (), GGS_string ("the driver should be instancied"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 252)) ;
        }
      }
      const GGS_primaryInExpressionAST temp_6 = this ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_10059_type_0, function_llvmNameForGlobalVariable (temp_6.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 254))  COMMA_SOURCE_FILE ("expression-primary.galgas", 254)) ;
      {
      const GGS_primaryInExpressionAST temp_7 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_7.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 255)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalConstant:
    {
      GGS_objectIR extractedValue_10765_objectIR_0 ;
      var_entity_9447.getAssociatedValuesFor_globalConstant (extractedValue_10765_objectIR_0) ;
      outArgument_outResult = extractedValue_10765_objectIR_0 ;
      {
      const GGS_primaryInExpressionAST temp_8 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_8.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 271)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localConstant:
    {
      GGS_omnibusType extractedValue_11290_type_0 ;
      GGS_lstring extractedValue_11304_omnibusName_1 ;
      GGS_bool extractedValue_11316__2 ;
      var_entity_9447.getAssociatedValuesFor_localConstant (extractedValue_11290_type_0, extractedValue_11304_omnibusName_1, extractedValue_11316__2) ;
      {
      const GGS_primaryInExpressionAST temp_9 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_9.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 286)) ;
      }
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_11290_type_0, function_llvmNameForLocalVariable (extractedValue_11304_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 287))  COMMA_SOURCE_FILE ("expression-primary.galgas", 287)) ;
      {
      const GGS_primaryInExpressionAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 288)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_localVariable:
    {
      GGS_omnibusType extractedValue_11953_type_0 ;
      GGS_lstring extractedValue_11967_omnibusName_1 ;
      var_entity_9447.getAssociatedValuesFor_localVariable (extractedValue_11953_type_0, extractedValue_11967_omnibusName_1) ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_11953_type_0, function_llvmNameForLocalVariable (extractedValue_11967_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 303))  COMMA_SOURCE_FILE ("expression-primary.galgas", 303)) ;
      {
      const GGS_primaryInExpressionAST temp_11 = this ;
      extensionSetter_readAccess (ioArgument_ioUniversalMap, temp_11.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 304)) ;
      }
      {
      const GGS_primaryInExpressionAST temp_12 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_12.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 305)) ;
      }
    }
    break ;
  case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
    {
      GGS_omnibusType extractedValue_12620_type_0 ;
      GGS_lstring extractedValue_12634_omnibusName_1 ;
      var_entity_9447.getAssociatedValuesFor_globalSyncInstance (extractedValue_12620_type_0, extractedValue_12634_omnibusName_1) ;
      outArgument_outResult = GGS_objectIR::class_func_reference (extractedValue_12620_type_0, function_llvmNameForGlobalSyncInstance (extractedValue_12634_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 320))  COMMA_SOURCE_FILE ("expression-primary.galgas", 320)) ;
      {
      const GGS_primaryInExpressionAST temp_13 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_13.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 321)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionNoSelf (cPtr_primaryInExpressionAST * inObject,
                                                         const GGS_omnibusType constin_inSelfType,
                                                         const GGS_routineAttributes constin_inRoutineAttributes,
                                                         const GGS_omnibusType constin_inOptionalTargetType,
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
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionNoSelf  (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'
//
//--------------------------------------------------------------------------------------------------

void cPtr_primaryInExpressionAST::method_analyzePrimaryExpressionWithSelf (const GGS_omnibusType constinArgument_inSelfType,
                                                                           const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                           const GGS_semanticContext constinArgument_inContext,
                                                                           const GGS_mode constinArgument_inMode,
                                                                           GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GGS_allocaList & ioArgument_ioAllocaList,
                                                                           GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GGS_objectIR & outArgument_outResult,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 432))  COMMA_SOURCE_FILE ("expression-primary.galgas", 432)) ;
  const GGS_primaryInExpressionAST temp_0 = this ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_16741 (temp_0.readProperty_mAccessList (), EnumerationOrder::up) ;
  while (enumerator_16741.hasCurrentObject ()) {
    switch (enumerator_16741.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      {
        GGS_lbigint extractedValue_16822_low_0 ;
        GGS_lbigint extractedValue_16835_high_1 ;
        enumerator_16741.current_mAccess (HERE).getAssociatedValuesFor_integerSlice (extractedValue_16822_low_0, extractedValue_16835_high_1) ;
        {
        routine_handleSliceInExpression_3F_context_26__3F__3F__26_temporary_26_instructionListIR (constinArgument_inContext, outArgument_outResult, extractedValue_16822_low_0, extractedValue_16835_high_1, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 437)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      {
        GGS_lstring extractedValue_17078_propertyName_0 ;
        enumerator_16741.current_mAccess (HERE).getAssociatedValuesFor_property (extractedValue_17078_propertyName_0) ;
        {
        routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, outArgument_outResult, extractedValue_17078_propertyName_0, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 446)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_17387_indexExpression_0 ;
        GGS_location extractedValue_17413_endOfIndex_1 ;
        GGS_bool extractedValue_17424_checkIndexExpression_2 ;
        enumerator_16741.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_17387_indexExpression_0, extractedValue_17413_endOfIndex_1, extractedValue_17424_checkIndexExpression_2) ;
        {
        routine_handleArrayAccessInExpression_26__3F__3F__3F__3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (outArgument_outResult, extractedValue_17387_indexExpression_0, extractedValue_17413_endOfIndex_1, extractedValue_17424_checkIndexExpression_2, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 456)) ;
        }
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_17987_methodName_0 ;
        GGS_effectiveArgumentListAST extractedValue_18024_arguments_1 ;
        GGS_location extractedValue_18044_errorLocation_2 ;
        enumerator_16741.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_17987_methodName_0, extractedValue_18024_arguments_1, extractedValue_18044_errorLocation_2) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-primary.galgas", 473)) COMMA_SOURCE_FILE ("expression-primary.galgas", 473)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_18044_errorLocation_2, GGS_string ("a method cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
            outArgument_outResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_handleFunctionCallInExpression_3F__26__3F_self_3F_context_3F_mode_3F_routineAttributes_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__26_ (extractedValue_17987_methodName_0, outArgument_outResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_18024_arguments_1, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 476)) ;
          }
        }
      }
      break ;
    }
    enumerator_16741.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzePrimaryExpressionWithSelf (cPtr_primaryInExpressionAST * inObject,
                                                           const GGS_omnibusType constin_inSelfType,
                                                           const GGS_routineAttributes constin_inRoutineAttributes,
                                                           const GGS_omnibusType constin_inOptionalTargetType,
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
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    inObject->method_analyzePrimaryExpressionWithSelf  (constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @standaloneFunctionInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_standaloneFunctionInExpressionAST::objectCompare (const GGS_standaloneFunctionInExpressionAST & inOperand) const {
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

GGS_standaloneFunctionInExpressionAST::GGS_standaloneFunctionInExpressionAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mStandaloneFunctionName,
                  const GGS_effectiveArgumentListAST & in_mArguments,
                  const GGS_location & in_mEndOfArguments,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_standaloneFunctionInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_standaloneFunctionInExpressionAST (inCompiler COMMA_THERE)) ;
  object->standaloneFunctionInExpressionAST_init_21__21__21_ (in_mStandaloneFunctionName, in_mArguments, in_mEndOfArguments, inCompiler) ;
  const GGS_standaloneFunctionInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_standaloneFunctionInExpressionAST::
standaloneFunctionInExpressionAST_init_21__21__21_ (const GGS_lstring & in_mStandaloneFunctionName,
                                                    const GGS_effectiveArgumentListAST & in_mArguments,
                                                    const GGS_location & in_mEndOfArguments,
                                                    Compiler * /* inCompiler */) {
  mProperty_mStandaloneFunctionName = in_mStandaloneFunctionName ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST::GGS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneFunctionInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST::class_func_new (const GGS_lstring & in_mStandaloneFunctionName,
                                                                                             const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                             const GGS_location & in_mEndOfArguments,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_standaloneFunctionInExpressionAST (in_mStandaloneFunctionName, in_mArguments, in_mEndOfArguments,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_standaloneFunctionInExpressionAST::readProperty_mStandaloneFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mStandaloneFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneFunctionInExpressionAST::setProperty_mStandaloneFunctionName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mStandaloneFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_effectiveArgumentListAST GGS_standaloneFunctionInExpressionAST::readProperty_mArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_effectiveArgumentListAST () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneFunctionInExpressionAST::setProperty_mArguments (const GGS_effectiveArgumentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_standaloneFunctionInExpressionAST::readProperty_mEndOfArguments (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    return p->mProperty_mEndOfArguments ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_standaloneFunctionInExpressionAST::setProperty_mEndOfArguments (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneFunctionInExpressionAST * p = (cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    p->mProperty_mEndOfArguments = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standaloneFunctionInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mStandaloneFunctionName (),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
}

//--------------------------------------------------------------------------------------------------

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (const GGS_lstring & in_mStandaloneFunctionName,
                                                                                const GGS_effectiveArgumentListAST & in_mArguments,
                                                                                const GGS_location & in_mEndOfArguments,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mStandaloneFunctionName (),
mProperty_mArguments (),
mProperty_mEndOfArguments () {
  mProperty_mStandaloneFunctionName = in_mStandaloneFunctionName ;
  mProperty_mArguments = in_mArguments ;
  mProperty_mEndOfArguments = in_mEndOfArguments ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_standaloneFunctionInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

void cPtr_standaloneFunctionInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@standaloneFunctionInExpressionAST:") ;
  mProperty_mStandaloneFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standaloneFunctionInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standaloneFunctionInExpressionAST (mProperty_mStandaloneFunctionName, mProperty_mArguments, mProperty_mEndOfArguments, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standaloneFunctionInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mStandaloneFunctionName.printNonNullClassInstanceProperties ("mStandaloneFunctionName") ;
    mProperty_mArguments.printNonNullClassInstanceProperties ("mArguments") ;
    mProperty_mEndOfArguments.printNonNullClassInstanceProperties ("mEndOfArguments") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @standaloneFunctionInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ("standaloneFunctionInExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_standaloneFunctionInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_standaloneFunctionInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_standaloneFunctionInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_standaloneFunctionInExpressionAST GGS_standaloneFunctionInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_standaloneFunctionInExpressionAST result ;
  const GGS_standaloneFunctionInExpressionAST * p = (const GGS_standaloneFunctionInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_standaloneFunctionInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @constructorCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constructorCallAST::objectCompare (const GGS_constructorCallAST & inOperand) const {
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

GGS_constructorCallAST::GGS_constructorCallAST (void) :
GGS_expressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                  const GGS_location & in_mErrorLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_constructorCallAST * object = nullptr ;
  macroMyNew (object, cPtr_constructorCallAST (inCompiler COMMA_THERE)) ;
  object->constructorCallAST_init_21__21__21_ (in_mTypeName, in_mParameterList, in_mErrorLocation, inCompiler) ;
  const GGS_constructorCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_constructorCallAST::
constructorCallAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                                     const GGS_location & in_mErrorLocation,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mErrorLocation = in_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST::GGS_constructorCallAST (const cPtr_constructorCallAST * inSourcePtr) :
GGS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_constructorCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST::class_func_new (const GGS_lstring & in_mTypeName,
                                                               const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                               const GGS_location & in_mErrorLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_constructorCallAST result ;
  macroMyNew (result.mObjectPtr, cPtr_constructorCallAST (in_mTypeName, in_mParameterList, in_mErrorLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_constructorCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorCallAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallEffectiveParameterListAST GGS_constructorCallAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_functionCallEffectiveParameterListAST () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorCallAST::setProperty_mParameterList (const GGS_functionCallEffectiveParameterListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constructorCallAST::readProperty_mErrorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    return p->mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constructorCallAST::setProperty_mErrorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_constructorCallAST * p = (cPtr_constructorCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_constructorCallAST) ;
    p->mProperty_mErrorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @constructorCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mParameterList (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_constructorCallAST::cPtr_constructorCallAST (const GGS_lstring & in_mTypeName,
                                                  const GGS_functionCallEffectiveParameterListAST & in_mParameterList,
                                                  const GGS_location & in_mErrorLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_expressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mParameterList (),
mProperty_mErrorLocation () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mErrorLocation = in_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_constructorCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

void cPtr_constructorCallAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@constructorCallAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_constructorCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_constructorCallAST (mProperty_mTypeName, mProperty_mParameterList, mProperty_mErrorLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_constructorCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_expressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mErrorLocation.printNonNullClassInstanceProperties ("mErrorLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @constructorCallAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorCallAST ("constructorCallAST",
                                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_constructorCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constructorCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constructorCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constructorCallAST GGS_constructorCallAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_constructorCallAST result ;
  const GGS_constructorCallAST * p = (const GGS_constructorCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constructorCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixOperatorAST::objectCompare (const GGS_compileTimeInfixOperatorAST & inOperand) const {
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

GGS_compileTimeInfixOperatorAST::GGS_compileTimeInfixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST::
init_21__21__21__21__21__21__21__21_ (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                      const GGS_location & in_mInfixOperatorLocation,
                                      const GGS_lstring & in_mLeftOperandName,
                                      const GGS_lstring & in_mLeftTypeName,
                                      const GGS_lstring & in_mRightOperandName,
                                      const GGS_lstring & in_mRightTypeName,
                                      const GGS_ctExpressionAST & in_mExpression,
                                      const GGS_lstring & in_mResultTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixOperatorAST (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mRightOperandName, in_mRightTypeName, in_mExpression, in_mResultTypeName, inCompiler) ;
  const GGS_compileTimeInfixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::
compileTimeInfixOperatorAST_init_21__21__21__21__21__21__21__21_ (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                  const GGS_location & in_mInfixOperatorLocation,
                                                                  const GGS_lstring & in_mLeftOperandName,
                                                                  const GGS_lstring & in_mLeftTypeName,
                                                                  const GGS_lstring & in_mRightOperandName,
                                                                  const GGS_lstring & in_mRightTypeName,
                                                                  const GGS_ctExpressionAST & in_mExpression,
                                                                  const GGS_lstring & in_mResultTypeName,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST::GGS_compileTimeInfixOperatorAST (const cPtr_compileTimeInfixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST::class_func_new (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                                 const GGS_location & in_mInfixOperatorLocation,
                                                                                 const GGS_lstring & in_mLeftOperandName,
                                                                                 const GGS_lstring & in_mLeftTypeName,
                                                                                 const GGS_lstring & in_mRightOperandName,
                                                                                 const GGS_lstring & in_mRightTypeName,
                                                                                 const GGS_ctExpressionAST & in_mExpression,
                                                                                 const GGS_lstring & in_mResultTypeName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixOperatorAST (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mRightOperandName, in_mRightTypeName, in_mExpression, in_mResultTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorEnumeration GGS_compileTimeInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorEnumeration () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mInfixOperator (const GGS_compileTimeInfixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_compileTimeInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mInfixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mLeftTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mRightTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeInfixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorAST * p = (cPtr_compileTimeInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorAST::cPtr_compileTimeInfixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorAST::cPtr_compileTimeInfixOperatorAST (const GGS_compileTimeInfixOperatorEnumeration & in_mInfixOperator,
                                                                    const GGS_location & in_mInfixOperatorLocation,
                                                                    const GGS_lstring & in_mLeftOperandName,
                                                                    const GGS_lstring & in_mLeftTypeName,
                                                                    const GGS_lstring & in_mRightOperandName,
                                                                    const GGS_lstring & in_mRightTypeName,
                                                                    const GGS_ctExpressionAST & in_mExpression,
                                                                    const GGS_lstring & in_mResultTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

void cPtr_compileTimeInfixOperatorAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeInfixOperatorAST:") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInfixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mExpression, mProperty_mResultTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mInfixOperatorLocation.printNonNullClassInstanceProperties ("mInfixOperatorLocation") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mLeftTypeName.printNonNullClassInstanceProperties ("mLeftTypeName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mRightTypeName.printNonNullClassInstanceProperties ("mRightTypeName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ("compileTimeInfixOperatorAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorAST GGS_compileTimeInfixOperatorAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorAST result ;
  const GGS_compileTimeInfixOperatorAST * p = (const GGS_compileTimeInfixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimeInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixOperatorUsage::objectCompare (const GGS_compileTimeInfixOperatorUsage & inOperand) const {
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

GGS_compileTimeInfixOperatorUsage::GGS_compileTimeInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage::
init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                  const GGS_lstring & in_mRightOperandName,
                  const GGS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixOperatorUsage_init_21__21__21_ (in_mLeftOperandName, in_mRightOperandName, in_mExpression, inCompiler) ;
  const GGS_compileTimeInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::
compileTimeInfixOperatorUsage_init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                                                const GGS_lstring & in_mRightOperandName,
                                                const GGS_ctExpressionAST & in_mExpression,
                                                Compiler * /* inCompiler */) {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage::GGS_compileTimeInfixOperatorUsage (const cPtr_compileTimeInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage::class_func_new (const GGS_lstring & in_mLeftOperandName,
                                                                                     const GGS_lstring & in_mRightOperandName,
                                                                                     const GGS_ctExpressionAST & in_mExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixOperatorUsage (in_mLeftOperandName, in_mRightOperandName, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorUsage::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimeInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorUsage::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimeInfixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixOperatorUsage::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixOperatorUsage * p = (cPtr_compileTimeInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixOperatorUsage::cPtr_compileTimeInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                                                        const GGS_lstring & in_mRightOperandName,
                                                                        const GGS_ctExpressionAST & in_mExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mExpression () {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

void cPtr_compileTimeInfixOperatorUsage::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeInfixOperatorUsage:") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ("compileTimeInfixOperatorUsage",
                                                                                     & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixOperatorUsage result ;
  const GGS_compileTimeInfixOperatorUsage * p = (const GGS_compileTimeInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@compileTimeInfixOperatorUsage eval'
//
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_eval (const GGS_objectIR constinArgument_inLeftOperand,
                                                      const GGS_objectIR constinArgument_inRightOperand,
                                                      GGS_bigint & outArgument_outResult,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_10547 ;
  GGS_omnibusType joker_10531_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10531_1, var_leftValue_10547, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 273)) ;
  GGS_bigint var_rightValue_10614 ;
  GGS_omnibusType joker_10598_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10598_1, var_rightValue_10614, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 274)) ;
  GGS_ctMap temp_0 = GGS_ctMap::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 275)) ;
  GGS_ctMap var_varMap_10639 = temp_0 ;
  {
  const GGS_compileTimeInfixOperatorUsage temp_1 = this ;
  var_varMap_10639.setter_insertKey (temp_1.readProperty_mLeftOperandName (), var_leftValue_10547, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 276)) ;
  }
  {
  const GGS_compileTimeInfixOperatorUsage temp_2 = this ;
  var_varMap_10639.setter_insertKey (temp_2.readProperty_mRightOperandName (), var_rightValue_10614, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 277)) ;
  }
  const GGS_compileTimeInfixOperatorUsage temp_3 = this ;
  callExtensionMethod_computeCompileTimeExpression ((cPtr_ctExpressionAST *) temp_3.readProperty_mExpression ().ptr (), var_varMap_10639, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 278)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_eval (cPtr_compileTimeInfixOperatorUsage * inObject,
                               const GGS_objectIR constin_inLeftOperand,
                               const GGS_objectIR constin_inRightOperand,
                               GGS_bigint & out_outResult,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_compileTimeInfixOperatorUsage) ;
    inObject->method_eval  (constin_inLeftOperand, constin_inRightOperand, out_outResult, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @compileTimeInfixInfEqualOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimeInfixInfEqualOperatorUsage::objectCompare (const GGS_compileTimeInfixInfEqualOperatorUsage & inOperand) const {
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

GGS_compileTimeInfixInfEqualOperatorUsage::GGS_compileTimeInfixInfEqualOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::
init_21__21_ (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
              const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_compileTimeInfixInfEqualOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimeInfixInfEqualOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimeInfixInfEqualOperatorUsage_init_21__21_ (in_mEqualOperatorUsage, in_mLessThanOperatorUsage, inCompiler) ;
  const GGS_compileTimeInfixInfEqualOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::
compileTimeInfixInfEqualOperatorUsage_init_21__21_ (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                    const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
                                                    Compiler * /* inCompiler */) {
  mProperty_mEqualOperatorUsage = in_mEqualOperatorUsage ;
  mProperty_mLessThanOperatorUsage = in_mLessThanOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage::GGS_compileTimeInfixInfEqualOperatorUsage (const cPtr_compileTimeInfixInfEqualOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::class_func_new (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                                                                     const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixInfEqualOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimeInfixInfEqualOperatorUsage (in_mEqualOperatorUsage, in_mLessThanOperatorUsage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::readProperty_mEqualOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mEqualOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixInfEqualOperatorUsage::setProperty_mEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mEqualOperatorUsage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::readProperty_mLessThanOperatorUsage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimeInfixOperatorUsage () ;
  }else{
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    return p->mProperty_mLessThanOperatorUsage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimeInfixInfEqualOperatorUsage::setProperty_mLessThanOperatorUsage (const GGS_compileTimeInfixOperatorUsage & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimeInfixInfEqualOperatorUsage * p = (cPtr_compileTimeInfixInfEqualOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
    p->mProperty_mLessThanOperatorUsage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimeInfixInfEqualOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mEqualOperatorUsage (),
mProperty_mLessThanOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimeInfixInfEqualOperatorUsage::cPtr_compileTimeInfixInfEqualOperatorUsage (const GGS_compileTimeInfixOperatorUsage & in_mEqualOperatorUsage,
                                                                                        const GGS_compileTimeInfixOperatorUsage & in_mLessThanOperatorUsage,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mEqualOperatorUsage (),
mProperty_mLessThanOperatorUsage () {
  mProperty_mEqualOperatorUsage = in_mEqualOperatorUsage ;
  mProperty_mLessThanOperatorUsage = in_mLessThanOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimeInfixInfEqualOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

void cPtr_compileTimeInfixInfEqualOperatorUsage::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimeInfixInfEqualOperatorUsage:") ;
  mProperty_mEqualOperatorUsage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLessThanOperatorUsage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimeInfixInfEqualOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimeInfixInfEqualOperatorUsage (mProperty_mEqualOperatorUsage, mProperty_mLessThanOperatorUsage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimeInfixInfEqualOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mEqualOperatorUsage.printNonNullClassInstanceProperties ("mEqualOperatorUsage") ;
    mProperty_mLessThanOperatorUsage.printNonNullClassInstanceProperties ("mLessThanOperatorUsage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimeInfixInfEqualOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ("compileTimeInfixInfEqualOperatorUsage",
                                                                                             & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimeInfixInfEqualOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimeInfixInfEqualOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimeInfixInfEqualOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimeInfixInfEqualOperatorUsage GGS_compileTimeInfixInfEqualOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_compileTimeInfixInfEqualOperatorUsage result ;
  const GGS_compileTimeInfixInfEqualOperatorUsage * p = (const GGS_compileTimeInfixInfEqualOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimeInfixInfEqualOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimeInfixInfEqualOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmInfixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInfixOperatorAST::objectCompare (const GGS_llvmInfixOperatorAST & inOperand) const {
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

GGS_llvmInfixOperatorAST::GGS_llvmInfixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                  const GGS_location & in_mInfixOperatorLocation,
                                                  const GGS_lstring & in_mLeftOperandName,
                                                  const GGS_lstring & in_mLeftTypeName,
                                                  const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                  const GGS_lstring & in_mRightOperandName,
                                                  const GGS_lstring & in_mRightTypeName,
                                                  const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                  const GGS_lstring & in_mResultTypeName,
                                                  const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_llvmInfixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmInfixOperatorAST (inCompiler COMMA_THERE)) ;
  object->llvmInfixOperatorAST_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mLeftGenericFormalParameterList, in_mRightOperandName, in_mRightTypeName, in_mRightGenericFormalParameterList, in_mResultTypeName, in_mResultGenericFormalParameterList, in_mInstructionList, inCompiler) ;
  const GGS_llvmInfixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::
llvmInfixOperatorAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                                       const GGS_location & in_mInfixOperatorLocation,
                                                                       const GGS_lstring & in_mLeftOperandName,
                                                                       const GGS_lstring & in_mLeftTypeName,
                                                                       const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                                       const GGS_lstring & in_mRightOperandName,
                                                                       const GGS_lstring & in_mRightTypeName,
                                                                       const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                                       const GGS_lstring & in_mResultTypeName,
                                                                       const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                                       const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mLeftGenericFormalParameterList = in_mLeftGenericFormalParameterList ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mRightGenericFormalParameterList = in_mRightGenericFormalParameterList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultGenericFormalParameterList = in_mResultGenericFormalParameterList ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST::GGS_llvmInfixOperatorAST (const cPtr_llvmInfixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST::class_func_new (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                                   const GGS_location & in_mInfixOperatorLocation,
                                                                   const GGS_lstring & in_mLeftOperandName,
                                                                   const GGS_lstring & in_mLeftTypeName,
                                                                   const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                                   const GGS_lstring & in_mRightOperandName,
                                                                   const GGS_lstring & in_mRightTypeName,
                                                                   const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                                   const GGS_lstring & in_mResultTypeName,
                                                                   const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                                   const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmInfixOperatorAST (in_mInfixOperator, in_mInfixOperatorLocation, in_mLeftOperandName, in_mLeftTypeName, in_mLeftGenericFormalParameterList, in_mRightOperandName, in_mRightTypeName, in_mRightGenericFormalParameterList, in_mResultTypeName, in_mResultGenericFormalParameterList, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusInfixOperator GGS_llvmInfixOperatorAST::readProperty_mInfixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusInfixOperator () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mInfixOperator (const GGS_omnibusInfixOperator & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_llvmInfixOperatorAST::readProperty_mInfixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInfixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mInfixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInfixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mLeftTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mLeftTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmInfixOperatorAST::readProperty_mLeftGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mLeftGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mLeftGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mLeftGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mRightTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mRightTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmInfixOperatorAST::readProperty_mRightGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mRightGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mRightGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mRightGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_genericFormalParameterList GGS_llvmInfixOperatorAST::readProperty_mResultGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_genericFormalParameterList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mResultGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mResultGenericFormalParameterList (const GGS_genericFormalParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mResultGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmInfixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorAST::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorAST * p = (cPtr_llvmInfixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorAST::cPtr_llvmInfixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mLeftGenericFormalParameterList (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mRightGenericFormalParameterList (),
mProperty_mResultTypeName (),
mProperty_mResultGenericFormalParameterList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorAST::cPtr_llvmInfixOperatorAST (const GGS_omnibusInfixOperator & in_mInfixOperator,
                                                      const GGS_location & in_mInfixOperatorLocation,
                                                      const GGS_lstring & in_mLeftOperandName,
                                                      const GGS_lstring & in_mLeftTypeName,
                                                      const GGS_genericFormalParameterList & in_mLeftGenericFormalParameterList,
                                                      const GGS_lstring & in_mRightOperandName,
                                                      const GGS_lstring & in_mRightTypeName,
                                                      const GGS_genericFormalParameterList & in_mRightGenericFormalParameterList,
                                                      const GGS_lstring & in_mResultTypeName,
                                                      const GGS_genericFormalParameterList & in_mResultGenericFormalParameterList,
                                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mInfixOperator (),
mProperty_mInfixOperatorLocation (),
mProperty_mLeftOperandName (),
mProperty_mLeftTypeName (),
mProperty_mLeftGenericFormalParameterList (),
mProperty_mRightOperandName (),
mProperty_mRightTypeName (),
mProperty_mRightGenericFormalParameterList (),
mProperty_mResultTypeName (),
mProperty_mResultGenericFormalParameterList (),
mProperty_mInstructionList () {
  mProperty_mInfixOperator = in_mInfixOperator ;
  mProperty_mInfixOperatorLocation = in_mInfixOperatorLocation ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mLeftTypeName = in_mLeftTypeName ;
  mProperty_mLeftGenericFormalParameterList = in_mLeftGenericFormalParameterList ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mRightTypeName = in_mRightTypeName ;
  mProperty_mRightGenericFormalParameterList = in_mRightGenericFormalParameterList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultGenericFormalParameterList = in_mResultGenericFormalParameterList ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInfixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

void cPtr_llvmInfixOperatorAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmInfixOperatorAST:") ;
  mProperty_mInfixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInfixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInfixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorAST (mProperty_mInfixOperator, mProperty_mInfixOperatorLocation, mProperty_mLeftOperandName, mProperty_mLeftTypeName, mProperty_mLeftGenericFormalParameterList, mProperty_mRightOperandName, mProperty_mRightTypeName, mProperty_mRightGenericFormalParameterList, mProperty_mResultTypeName, mProperty_mResultGenericFormalParameterList, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInfixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mInfixOperator.printNonNullClassInstanceProperties ("mInfixOperator") ;
    mProperty_mInfixOperatorLocation.printNonNullClassInstanceProperties ("mInfixOperatorLocation") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mLeftTypeName.printNonNullClassInstanceProperties ("mLeftTypeName") ;
    mProperty_mLeftGenericFormalParameterList.printNonNullClassInstanceProperties ("mLeftGenericFormalParameterList") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mRightTypeName.printNonNullClassInstanceProperties ("mRightTypeName") ;
    mProperty_mRightGenericFormalParameterList.printNonNullClassInstanceProperties ("mRightGenericFormalParameterList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultGenericFormalParameterList.printNonNullClassInstanceProperties ("mResultGenericFormalParameterList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorAST ("llvmInfixOperatorAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmInfixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorAST GGS_llvmInfixOperatorAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorAST result ;
  const GGS_llvmInfixOperatorAST * p = (const GGS_llvmInfixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInfixOperatorUsage::objectCompare (const GGS_llvmInfixOperatorUsage & inOperand) const {
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

GGS_llvmInfixOperatorUsage::GGS_llvmInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage::
init_21__21__21__21_ (const GGS_string & in_mInfixMangledFunctionName,
                      const GGS_lstring & in_mLeftOperandName,
                      const GGS_lstring & in_mRightOperandName,
                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_llvmInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmInfixOperatorUsage_init_21__21__21__21_ (in_mInfixMangledFunctionName, in_mLeftOperandName, in_mRightOperandName, in_mInstructionList, inCompiler) ;
  const GGS_llvmInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::
llvmInfixOperatorUsage_init_21__21__21__21_ (const GGS_string & in_mInfixMangledFunctionName,
                                             const GGS_lstring & in_mLeftOperandName,
                                             const GGS_lstring & in_mRightOperandName,
                                             const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                             Compiler * /* inCompiler */) {
  mProperty_mInfixMangledFunctionName = in_mInfixMangledFunctionName ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage::GGS_llvmInfixOperatorUsage (const cPtr_llvmInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage::class_func_new (const GGS_string & in_mInfixMangledFunctionName,
                                                                       const GGS_lstring & in_mLeftOperandName,
                                                                       const GGS_lstring & in_mRightOperandName,
                                                                       const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmInfixOperatorUsage (in_mInfixMangledFunctionName, in_mLeftOperandName, in_mRightOperandName, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_llvmInfixOperatorUsage::readProperty_mInfixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInfixMangledFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mInfixMangledFunctionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInfixMangledFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInfixOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInfixOperatorUsage * p = (cPtr_llvmInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mInfixMangledFunctionName (),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmInfixOperatorUsage::cPtr_llvmInfixOperatorUsage (const GGS_string & in_mInfixMangledFunctionName,
                                                          const GGS_lstring & in_mLeftOperandName,
                                                          const GGS_lstring & in_mRightOperandName,
                                                          const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mInfixMangledFunctionName (),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
  mProperty_mInfixMangledFunctionName = in_mInfixMangledFunctionName ;
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

void cPtr_llvmInfixOperatorUsage::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmInfixOperatorUsage:") ;
  mProperty_mInfixMangledFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInfixOperatorUsage (mProperty_mInfixMangledFunctionName, mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mInfixMangledFunctionName.printNonNullClassInstanceProperties ("mInfixMangledFunctionName") ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ("llvmInfixOperatorUsage",
                                                                              & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInfixOperatorUsage GGS_llvmInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_llvmInfixOperatorUsage result ;
  const GGS_llvmInfixOperatorUsage * p = (const GGS_llvmInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmInlineInfixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmInlineInfixOperatorUsage::objectCompare (const GGS_llvmInlineInfixOperatorUsage & inOperand) const {
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

GGS_llvmInlineInfixOperatorUsage::GGS_llvmInlineInfixOperatorUsage (void) :
GGS_omnibusInfixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage::
init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                  const GGS_lstring & in_mRightOperandName,
                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmInlineInfixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmInlineInfixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmInlineInfixOperatorUsage_init_21__21__21_ (in_mLeftOperandName, in_mRightOperandName, in_mInstructionList, inCompiler) ;
  const GGS_llvmInlineInfixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::
llvmInlineInfixOperatorUsage_init_21__21__21_ (const GGS_lstring & in_mLeftOperandName,
                                               const GGS_lstring & in_mRightOperandName,
                                               const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                               Compiler * /* inCompiler */) {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage::GGS_llvmInlineInfixOperatorUsage (const cPtr_llvmInlineInfixOperatorUsage * inSourcePtr) :
GGS_omnibusInfixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmInlineInfixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage::class_func_new (const GGS_lstring & in_mLeftOperandName,
                                                                                   const GGS_lstring & in_mRightOperandName,
                                                                                   const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_llvmInlineInfixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmInlineInfixOperatorUsage (in_mLeftOperandName, in_mRightOperandName, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInlineInfixOperatorUsage::readProperty_mLeftOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mLeftOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInlineInfixOperatorUsage::setProperty_mLeftOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mLeftOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmInlineInfixOperatorUsage::readProperty_mRightOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mRightOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInlineInfixOperatorUsage::setProperty_mRightOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mRightOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmInlineInfixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmInlineInfixOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmInlineInfixOperatorUsage * p = (cPtr_llvmInlineInfixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmInlineInfixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmInlineInfixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmInlineInfixOperatorUsage::cPtr_llvmInlineInfixOperatorUsage (const GGS_lstring & in_mLeftOperandName,
                                                                      const GGS_lstring & in_mRightOperandName,
                                                                      const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_omnibusInfixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mLeftOperandName (),
mProperty_mRightOperandName (),
mProperty_mInstructionList () {
  mProperty_mLeftOperandName = in_mLeftOperandName ;
  mProperty_mRightOperandName = in_mRightOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmInlineInfixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

void cPtr_llvmInlineInfixOperatorUsage::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmInlineInfixOperatorUsage:") ;
  mProperty_mLeftOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmInlineInfixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmInlineInfixOperatorUsage (mProperty_mLeftOperandName, mProperty_mRightOperandName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmInlineInfixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_omnibusInfixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperandName.printNonNullClassInstanceProperties ("mLeftOperandName") ;
    mProperty_mRightOperandName.printNonNullClassInstanceProperties ("mRightOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmInlineInfixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ("llvmInlineInfixOperatorUsage",
                                                                                    & kTypeDescriptor_GALGAS_omnibusInfixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmInlineInfixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmInlineInfixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmInlineInfixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmInlineInfixOperatorUsage GGS_llvmInlineInfixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_llvmInlineInfixOperatorUsage result ;
  const GGS_llvmInlineInfixOperatorUsage * p = (const GGS_llvmInlineInfixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmInlineInfixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmInlineInfixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @infixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_infixOperatorRoutineIR::objectCompare (const GGS_infixOperatorRoutineIR & inOperand) const {
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

GGS_infixOperatorRoutineIR::GGS_infixOperatorRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                     const GGS_bool & in_isRequired,
                                                                     const GGS_bool & in_warnsIfUnused,
                                                                     const GGS_omnibusType & in_mTargetType,
                                                                     const GGS_string & in_mTargetVarName,
                                                                     const GGS_omnibusType & in_mSourceType,
                                                                     const GGS_string & in_mSourceVarName,
                                                                     const GGS_omnibusType & in_mResultType,
                                                                     const GGS_stringlist & in_mGeneratedInstructions,
                                                                     const GGS_allocaList & in_mAllocaList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_infixOperatorRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_infixOperatorRoutineIR (inCompiler COMMA_THERE)) ;
  object->infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GGS_infixOperatorRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::
infixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                            const GGS_bool & in_isRequired,
                                                                                            const GGS_bool & in_warnsIfUnused,
                                                                                            const GGS_omnibusType & in_mTargetType,
                                                                                            const GGS_string & in_mTargetVarName,
                                                                                            const GGS_omnibusType & in_mSourceType,
                                                                                            const GGS_string & in_mSourceVarName,
                                                                                            const GGS_omnibusType & in_mResultType,
                                                                                            const GGS_stringlist & in_mGeneratedInstructions,
                                                                                            const GGS_allocaList & in_mAllocaList,
                                                                                            Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR::GGS_infixOperatorRoutineIR (const cPtr_infixOperatorRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_infixOperatorRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                       const GGS_bool & in_isRequired,
                                                                       const GGS_bool & in_warnsIfUnused,
                                                                       const GGS_omnibusType & in_mTargetType,
                                                                       const GGS_string & in_mTargetVarName,
                                                                       const GGS_omnibusType & in_mSourceType,
                                                                       const GGS_string & in_mSourceVarName,
                                                                       const GGS_omnibusType & in_mResultType,
                                                                       const GGS_stringlist & in_mGeneratedInstructions,
                                                                       const GGS_allocaList & in_mAllocaList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_infixOperatorRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_infixOperatorRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mTargetType, in_mTargetVarName, in_mSourceType, in_mSourceVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mTargetType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_infixOperatorRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mTargetVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mSourceType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_infixOperatorRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mSourceVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_infixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mResultType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_infixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_infixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_infixOperatorRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_infixOperatorRoutineIR * p = (cPtr_infixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_infixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @infixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_infixOperatorRoutineIR::cPtr_infixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_infixOperatorRoutineIR::cPtr_infixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                          const GGS_bool & in_isRequired,
                                                          const GGS_bool & in_warnsIfUnused,
                                                          const GGS_omnibusType & in_mTargetType,
                                                          const GGS_string & in_mTargetVarName,
                                                          const GGS_omnibusType & in_mSourceType,
                                                          const GGS_string & in_mSourceVarName,
                                                          const GGS_omnibusType & in_mResultType,
                                                          const GGS_stringlist & in_mGeneratedInstructions,
                                                          const GGS_allocaList & in_mAllocaList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mTargetVarName (),
mProperty_mSourceType (),
mProperty_mSourceVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVarName = in_mTargetVarName ;
  mProperty_mSourceType = in_mSourceType ;
  mProperty_mSourceVarName = in_mSourceVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_infixOperatorRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

void cPtr_infixOperatorRoutineIR::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@infixOperatorRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_infixOperatorRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_infixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_infixOperatorRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorRoutineIR ("infixOperatorRoutineIR",
                                                                              & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_infixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_infixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_infixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_infixOperatorRoutineIR GGS_infixOperatorRoutineIR::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_infixOperatorRoutineIR result ;
  const GGS_infixOperatorRoutineIR * p = (const GGS_infixOperatorRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_infixOperatorRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compiletimePrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compiletimePrefixOperatorAST::objectCompare (const GGS_compiletimePrefixOperatorAST & inOperand) const {
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

GGS_compiletimePrefixOperatorAST::GGS_compiletimePrefixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST::
init_21__21__21__21__21__21_ (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                              const GGS_location & in_mPrefixOperatorLocation,
                              const GGS_lstring & in_mReceiverName,
                              const GGS_lstring & in_mReceiverTypeName,
                              const GGS_ctExpressionAST & in_mExpression,
                              const GGS_lstring & in_mResultTypeName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_compiletimePrefixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_compiletimePrefixOperatorAST (inCompiler COMMA_THERE)) ;
  object->compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mExpression, in_mResultTypeName, inCompiler) ;
  const GGS_compiletimePrefixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compiletimePrefixOperatorAST::
compiletimePrefixOperatorAST_init_21__21__21__21__21__21_ (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                           const GGS_location & in_mPrefixOperatorLocation,
                                                           const GGS_lstring & in_mReceiverName,
                                                           const GGS_lstring & in_mReceiverTypeName,
                                                           const GGS_ctExpressionAST & in_mExpression,
                                                           const GGS_lstring & in_mResultTypeName,
                                                           Compiler * /* inCompiler */) {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST::GGS_compiletimePrefixOperatorAST (const cPtr_compiletimePrefixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compiletimePrefixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST::class_func_new (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                                   const GGS_location & in_mPrefixOperatorLocation,
                                                                                   const GGS_lstring & in_mReceiverName,
                                                                                   const GGS_lstring & in_mReceiverTypeName,
                                                                                   const GGS_ctExpressionAST & in_mExpression,
                                                                                   const GGS_lstring & in_mResultTypeName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_compiletimePrefixOperatorAST (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mExpression, in_mResultTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorEnumeration GGS_compiletimePrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_compileTimePrefixOperatorEnumeration () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mPrefixOperator (const GGS_compileTimePrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_compiletimePrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mPrefixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compiletimePrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compiletimePrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compiletimePrefixOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compiletimePrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compiletimePrefixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compiletimePrefixOperatorAST * p = (cPtr_compiletimePrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compiletimePrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compiletimePrefixOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_compiletimePrefixOperatorAST::cPtr_compiletimePrefixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compiletimePrefixOperatorAST::cPtr_compiletimePrefixOperatorAST (const GGS_compileTimePrefixOperatorEnumeration & in_mPrefixOperator,
                                                                      const GGS_location & in_mPrefixOperatorLocation,
                                                                      const GGS_lstring & in_mReceiverName,
                                                                      const GGS_lstring & in_mReceiverTypeName,
                                                                      const GGS_ctExpressionAST & in_mExpression,
                                                                      const GGS_lstring & in_mResultTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mExpression (),
mProperty_mResultTypeName () {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compiletimePrefixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

void cPtr_compiletimePrefixOperatorAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@compiletimePrefixOperatorAST:") ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compiletimePrefixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compiletimePrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mExpression, mProperty_mResultTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compiletimePrefixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compiletimePrefixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ("compiletimePrefixOperatorAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compiletimePrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compiletimePrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compiletimePrefixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compiletimePrefixOperatorAST GGS_compiletimePrefixOperatorAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_compiletimePrefixOperatorAST result ;
  const GGS_compiletimePrefixOperatorAST * p = (const GGS_compiletimePrefixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compiletimePrefixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compiletimePrefixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @compileTimePrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_compileTimePrefixOperatorUsage::objectCompare (const GGS_compileTimePrefixOperatorUsage & inOperand) const {
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

GGS_compileTimePrefixOperatorUsage::GGS_compileTimePrefixOperatorUsage (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage::
init_21__21__21_ (const GGS_location & in_mPrefixOperatorLocation,
                  const GGS_lstring & in_mReceiverOperandName,
                  const GGS_ctExpressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_compileTimePrefixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_compileTimePrefixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->compileTimePrefixOperatorUsage_init_21__21__21_ (in_mPrefixOperatorLocation, in_mReceiverOperandName, in_mExpression, inCompiler) ;
  const GGS_compileTimePrefixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_compileTimePrefixOperatorUsage::
compileTimePrefixOperatorUsage_init_21__21__21_ (const GGS_location & in_mPrefixOperatorLocation,
                                                 const GGS_lstring & in_mReceiverOperandName,
                                                 const GGS_ctExpressionAST & in_mExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage::GGS_compileTimePrefixOperatorUsage (const cPtr_compileTimePrefixOperatorUsage * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_compileTimePrefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage::class_func_new (const GGS_location & in_mPrefixOperatorLocation,
                                                                                       const GGS_lstring & in_mReceiverOperandName,
                                                                                       const GGS_ctExpressionAST & in_mExpression,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_compileTimePrefixOperatorUsage (in_mPrefixOperatorLocation, in_mReceiverOperandName, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_compileTimePrefixOperatorUsage::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorUsage::setProperty_mPrefixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_compileTimePrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorUsage::setProperty_mReceiverOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ctExpressionAST GGS_compileTimePrefixOperatorUsage::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ctExpressionAST () ;
  }else{
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_compileTimePrefixOperatorUsage::setProperty_mExpression (const GGS_ctExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_compileTimePrefixOperatorUsage * p = (cPtr_compileTimePrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_compileTimePrefixOperatorUsage) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @compileTimePrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverOperandName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_compileTimePrefixOperatorUsage::cPtr_compileTimePrefixOperatorUsage (const GGS_location & in_mPrefixOperatorLocation,
                                                                          const GGS_lstring & in_mReceiverOperandName,
                                                                          const GGS_ctExpressionAST & in_mExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverOperandName (),
mProperty_mExpression () {
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_compileTimePrefixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

void cPtr_compileTimePrefixOperatorUsage::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@compileTimePrefixOperatorUsage:") ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_compileTimePrefixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_compileTimePrefixOperatorUsage (mProperty_mPrefixOperatorLocation, mProperty_mReceiverOperandName, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_compileTimePrefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverOperandName.printNonNullClassInstanceProperties ("mReceiverOperandName") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @compileTimePrefixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ("compileTimePrefixOperatorUsage",
                                                                                      & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_compileTimePrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_compileTimePrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_compileTimePrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_compileTimePrefixOperatorUsage GGS_compileTimePrefixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_compileTimePrefixOperatorUsage result ;
  const GGS_compileTimePrefixOperatorUsage * p = (const GGS_compileTimePrefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_compileTimePrefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("compileTimePrefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmPrefixOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmPrefixOperatorAST::objectCompare (const GGS_llvmPrefixOperatorAST & inOperand) const {
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

GGS_llvmPrefixOperatorAST::GGS_llvmPrefixOperatorAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST::
init_21__21__21__21__21__21_ (const GGS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                              const GGS_location & in_mPrefixOperatorLocation,
                              const GGS_lstring & in_mReceiverName,
                              const GGS_lstring & in_mReceiverTypeName,
                              const GGS_llvmGenerationInstructionList & in_mInstructionList,
                              const GGS_lstring & in_mResultTypeName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_llvmPrefixOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_llvmPrefixOperatorAST (inCompiler COMMA_THERE)) ;
  object->llvmPrefixOperatorAST_init_21__21__21__21__21__21_ (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mInstructionList, in_mResultTypeName, inCompiler) ;
  const GGS_llvmPrefixOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorAST::
llvmPrefixOperatorAST_init_21__21__21__21__21__21_ (const GGS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                    const GGS_location & in_mPrefixOperatorLocation,
                                                    const GGS_lstring & in_mReceiverName,
                                                    const GGS_lstring & in_mReceiverTypeName,
                                                    const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                    const GGS_lstring & in_mResultTypeName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST::GGS_llvmPrefixOperatorAST (const cPtr_llvmPrefixOperatorAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmPrefixOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST::class_func_new (const GGS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                                     const GGS_location & in_mPrefixOperatorLocation,
                                                                     const GGS_lstring & in_mReceiverName,
                                                                     const GGS_lstring & in_mReceiverTypeName,
                                                                     const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                     const GGS_lstring & in_mResultTypeName,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorAST result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmPrefixOperatorAST (in_mPrefixOperator, in_mPrefixOperatorLocation, in_mReceiverName, in_mReceiverTypeName, in_mInstructionList, in_mResultTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorEnumeration GGS_llvmPrefixOperatorAST::readProperty_mPrefixOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmPrefixOperatorEnumeration () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mPrefixOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorAST::setProperty_mPrefixOperator (const GGS_llvmPrefixOperatorEnumeration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mPrefixOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_llvmPrefixOperatorAST::readProperty_mPrefixOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mPrefixOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorAST::setProperty_mPrefixOperatorLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mPrefixOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmPrefixOperatorAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorAST::setProperty_mReceiverName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mReceiverName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmPrefixOperatorAST::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorAST::setProperty_mReceiverTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mReceiverTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmPrefixOperatorAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorAST::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmPrefixOperatorAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorAST::setProperty_mResultTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorAST * p = (cPtr_llvmPrefixOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorAST) ;
    p->mProperty_mResultTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmPrefixOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorAST::cPtr_llvmPrefixOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mInstructionList (),
mProperty_mResultTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorAST::cPtr_llvmPrefixOperatorAST (const GGS_llvmPrefixOperatorEnumeration & in_mPrefixOperator,
                                                        const GGS_location & in_mPrefixOperatorLocation,
                                                        const GGS_lstring & in_mReceiverName,
                                                        const GGS_lstring & in_mReceiverTypeName,
                                                        const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                        const GGS_lstring & in_mResultTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPrefixOperator (),
mProperty_mPrefixOperatorLocation (),
mProperty_mReceiverName (),
mProperty_mReceiverTypeName (),
mProperty_mInstructionList (),
mProperty_mResultTypeName () {
  mProperty_mPrefixOperator = in_mPrefixOperator ;
  mProperty_mPrefixOperatorLocation = in_mPrefixOperatorLocation ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmPrefixOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;
}

void cPtr_llvmPrefixOperatorAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmPrefixOperatorAST:") ;
  mProperty_mPrefixOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmPrefixOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmPrefixOperatorAST (mProperty_mPrefixOperator, mProperty_mPrefixOperatorLocation, mProperty_mReceiverName, mProperty_mReceiverTypeName, mProperty_mInstructionList, mProperty_mResultTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmPrefixOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixOperator.printNonNullClassInstanceProperties ("mPrefixOperator") ;
    mProperty_mPrefixOperatorLocation.printNonNullClassInstanceProperties ("mPrefixOperatorLocation") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ("llvmPrefixOperatorAST",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmPrefixOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorAST GGS_llvmPrefixOperatorAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorAST result ;
  const GGS_llvmPrefixOperatorAST * p = (const GGS_llvmPrefixOperatorAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmPrefixOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_llvmPrefixOperatorUsage::objectCompare (const GGS_llvmPrefixOperatorUsage & inOperand) const {
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

GGS_llvmPrefixOperatorUsage::GGS_llvmPrefixOperatorUsage (void) :
GGS_prefixOperatorUsage () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage::
init_21__21__21_ (const GGS_string & in_mPrefixMangledFunctionName,
                  const GGS_lstring & in_mReceiverOperandName,
                  const GGS_llvmGenerationInstructionList & in_mInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_llvmPrefixOperatorUsage * object = nullptr ;
  macroMyNew (object, cPtr_llvmPrefixOperatorUsage (inCompiler COMMA_THERE)) ;
  object->llvmPrefixOperatorUsage_init_21__21__21_ (in_mPrefixMangledFunctionName, in_mReceiverOperandName, in_mInstructionList, inCompiler) ;
  const GGS_llvmPrefixOperatorUsage result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_llvmPrefixOperatorUsage::
llvmPrefixOperatorUsage_init_21__21__21_ (const GGS_string & in_mPrefixMangledFunctionName,
                                          const GGS_lstring & in_mReceiverOperandName,
                                          const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mPrefixMangledFunctionName = in_mPrefixMangledFunctionName ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage::GGS_llvmPrefixOperatorUsage (const cPtr_llvmPrefixOperatorUsage * inSourcePtr) :
GGS_prefixOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmPrefixOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage::class_func_new (const GGS_string & in_mPrefixMangledFunctionName,
                                                                         const GGS_lstring & in_mReceiverOperandName,
                                                                         const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorUsage result ;
  macroMyNew (result.mObjectPtr, cPtr_llvmPrefixOperatorUsage (in_mPrefixMangledFunctionName, in_mReceiverOperandName, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_llvmPrefixOperatorUsage::readProperty_mPrefixMangledFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mPrefixMangledFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorUsage::setProperty_mPrefixMangledFunctionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mPrefixMangledFunctionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_llvmPrefixOperatorUsage::readProperty_mReceiverOperandName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mReceiverOperandName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorUsage::setProperty_mReceiverOperandName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mReceiverOperandName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_llvmGenerationInstructionList GGS_llvmPrefixOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_llvmPrefixOperatorUsage::setProperty_mInstructionList (const GGS_llvmGenerationInstructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmPrefixOperatorUsage * p = (cPtr_llvmPrefixOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmPrefixOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmPrefixOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorUsage::cPtr_llvmPrefixOperatorUsage (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixMangledFunctionName (),
mProperty_mReceiverOperandName (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_llvmPrefixOperatorUsage::cPtr_llvmPrefixOperatorUsage (const GGS_string & in_mPrefixMangledFunctionName,
                                                            const GGS_lstring & in_mReceiverOperandName,
                                                            const GGS_llvmGenerationInstructionList & in_mInstructionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_prefixOperatorUsage (inCompiler COMMA_THERE),
mProperty_mPrefixMangledFunctionName (),
mProperty_mReceiverOperandName (),
mProperty_mInstructionList () {
  mProperty_mPrefixMangledFunctionName = in_mPrefixMangledFunctionName ;
  mProperty_mReceiverOperandName = in_mReceiverOperandName ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmPrefixOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;
}

void cPtr_llvmPrefixOperatorUsage::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@llvmPrefixOperatorUsage:") ;
  mProperty_mPrefixMangledFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverOperandName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmPrefixOperatorUsage::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmPrefixOperatorUsage (mProperty_mPrefixMangledFunctionName, mProperty_mReceiverOperandName, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmPrefixOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_prefixOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixMangledFunctionName.printNonNullClassInstanceProperties ("mPrefixMangledFunctionName") ;
    mProperty_mReceiverOperandName.printNonNullClassInstanceProperties ("mReceiverOperandName") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @llvmPrefixOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ("llvmPrefixOperatorUsage",
                                                                               & kTypeDescriptor_GALGAS_prefixOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_llvmPrefixOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_llvmPrefixOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_llvmPrefixOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_llvmPrefixOperatorUsage GGS_llvmPrefixOperatorUsage::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_llvmPrefixOperatorUsage result ;
  const GGS_llvmPrefixOperatorUsage * p = (const GGS_llvmPrefixOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_llvmPrefixOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmPrefixOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefixOperatorRoutineIR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefixOperatorRoutineIR::objectCompare (const GGS_prefixOperatorRoutineIR & inOperand) const {
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

GGS_prefixOperatorRoutineIR::GGS_prefixOperatorRoutineIR (void) :
GGS_abstractRoutineIR () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR::
init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                             const GGS_bool & in_isRequired,
                                                             const GGS_bool & in_warnsIfUnused,
                                                             const GGS_omnibusType & in_mReceiverType,
                                                             const GGS_string & in_mReceiverVarName,
                                                             const GGS_omnibusType & in_mResultType,
                                                             const GGS_stringlist & in_mGeneratedInstructions,
                                                             const GGS_allocaList & in_mAllocaList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_prefixOperatorRoutineIR * object = nullptr ;
  macroMyNew (object, cPtr_prefixOperatorRoutineIR (inCompiler COMMA_THERE)) ;
  object->prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mReceiverVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList, inCompiler) ;
  const GGS_prefixOperatorRoutineIR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefixOperatorRoutineIR::
prefixOperatorRoutineIR_init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21_ (const GGS_lstring & in_mRoutineMangledName,
                                                                                     const GGS_bool & in_isRequired,
                                                                                     const GGS_bool & in_warnsIfUnused,
                                                                                     const GGS_omnibusType & in_mReceiverType,
                                                                                     const GGS_string & in_mReceiverVarName,
                                                                                     const GGS_omnibusType & in_mResultType,
                                                                                     const GGS_stringlist & in_mGeneratedInstructions,
                                                                                     const GGS_allocaList & in_mAllocaList,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverVarName = in_mReceiverVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR::GGS_prefixOperatorRoutineIR (const cPtr_prefixOperatorRoutineIR * inSourcePtr) :
GGS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefixOperatorRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR::class_func_new (const GGS_lstring & in_mRoutineMangledName,
                                                                         const GGS_bool & in_isRequired,
                                                                         const GGS_bool & in_warnsIfUnused,
                                                                         const GGS_omnibusType & in_mReceiverType,
                                                                         const GGS_string & in_mReceiverVarName,
                                                                         const GGS_omnibusType & in_mResultType,
                                                                         const GGS_stringlist & in_mGeneratedInstructions,
                                                                         const GGS_allocaList & in_mAllocaList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorRoutineIR result ;
  macroMyNew (result.mObjectPtr, cPtr_prefixOperatorRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, in_mReceiverType, in_mReceiverVarName, in_mResultType, in_mGeneratedInstructions, in_mAllocaList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_prefixOperatorRoutineIR::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorRoutineIR::setProperty_mReceiverType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_prefixOperatorRoutineIR::readProperty_mReceiverVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mReceiverVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorRoutineIR::setProperty_mReceiverVarName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mReceiverVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_omnibusType GGS_prefixOperatorRoutineIR::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_omnibusType () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorRoutineIR::setProperty_mResultType (const GGS_omnibusType & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mResultType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_prefixOperatorRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorRoutineIR::setProperty_mGeneratedInstructions (const GGS_stringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_allocaList GGS_prefixOperatorRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_allocaList () ;
  }else{
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefixOperatorRoutineIR::setProperty_mAllocaList (const GGS_allocaList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefixOperatorRoutineIR * p = (cPtr_prefixOperatorRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefixOperatorRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefixOperatorRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorRoutineIR::cPtr_prefixOperatorRoutineIR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mReceiverVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_prefixOperatorRoutineIR::cPtr_prefixOperatorRoutineIR (const GGS_lstring & in_mRoutineMangledName,
                                                            const GGS_bool & in_isRequired,
                                                            const GGS_bool & in_warnsIfUnused,
                                                            const GGS_omnibusType & in_mReceiverType,
                                                            const GGS_string & in_mReceiverVarName,
                                                            const GGS_omnibusType & in_mResultType,
                                                            const GGS_stringlist & in_mGeneratedInstructions,
                                                            const GGS_allocaList & in_mAllocaList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mReceiverVarName (),
mProperty_mResultType (),
mProperty_mGeneratedInstructions (),
mProperty_mAllocaList () {
  mProperty_mRoutineMangledName = in_mRoutineMangledName ;
  mProperty_isRequired = in_isRequired ;
  mProperty_warnsIfUnused = in_warnsIfUnused ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverVarName = in_mReceiverVarName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mGeneratedInstructions = in_mGeneratedInstructions ;
  mProperty_mAllocaList = in_mAllocaList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefixOperatorRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;
}

void cPtr_prefixOperatorRoutineIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@prefixOperatorRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefixOperatorRoutineIR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefixOperatorRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mReceiverType, mProperty_mReceiverVarName, mProperty_mResultType, mProperty_mGeneratedInstructions, mProperty_mAllocaList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefixOperatorRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mReceiverVarName.printNonNullClassInstanceProperties ("mReceiverVarName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ("prefixOperatorRoutineIR",
                                                                               & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefixOperatorRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefixOperatorRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefixOperatorRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefixOperatorRoutineIR GGS_prefixOperatorRoutineIR::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_prefixOperatorRoutineIR result ;
  const GGS_prefixOperatorRoutineIR * p = (const GGS_prefixOperatorRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefixOperatorRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @checkInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_checkInstructionAST::objectCompare (const GGS_checkInstructionAST & inOperand) const {
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

GGS_checkInstructionAST::GGS_checkInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mCheckMessage,
                  const GGS_expressionAST & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_checkInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_checkInstructionAST (inCompiler COMMA_THERE)) ;
  object->checkInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mCheckMessage, in_mExpression, inCompiler) ;
  const GGS_checkInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_checkInstructionAST::
checkInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_lstring & in_mCheckMessage,
                                      const GGS_expressionAST & in_mExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCheckMessage = in_mCheckMessage ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST::GGS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_lstring & in_mCheckMessage,
                                                                 const GGS_expressionAST & in_mExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_checkInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (in_mInstructionLocation, in_mCheckMessage, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_checkInstructionAST::readProperty_mCheckMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mCheckMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkInstructionAST::setProperty_mCheckMessage (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mCheckMessage = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_checkInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkInstructionAST::setProperty_mExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_checkInstructionAST * p = (cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @checkInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mCheckMessage (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_lstring & in_mCheckMessage,
                                                    const GGS_expressionAST & in_mExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCheckMessage (),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCheckMessage = in_mCheckMessage ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@checkInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCheckMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_checkInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mProperty_mInstructionLocation, mProperty_mCheckMessage, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_checkInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCheckMessage.printNonNullClassInstanceProperties ("mCheckMessage") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @checkInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkInstructionAST GGS_checkInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_checkInstructionAST result ;
  const GGS_checkInstructionAST * p = (const GGS_checkInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST::objectCompare (const GGS_assignmentInstructionAST & inOperand) const {
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

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_LValueAST & in_mTargetAST,
                  const GGS_expressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mTargetAST, in_mSourceExpression, inCompiler) ;
  const GGS_assignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::
assignmentInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_LValueAST & in_mTargetAST,
                                           const GGS_expressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetAST = in_mTargetAST ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_LValueAST & in_mTargetAST,
                                                                           const GGS_expressionAST & in_mSourceExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (in_mInstructionLocation, in_mTargetAST, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_LValueAST GGS_assignmentInstructionAST::readProperty_mTargetAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_LValueAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetAST ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentInstructionAST::setProperty_mTargetAST (const GGS_LValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mTargetAST = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTargetAST (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_LValueAST & in_mTargetAST,
                                                              const GGS_expressionAST & in_mSourceExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetAST (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetAST = in_mTargetAST ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetAST, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetAST.printNonNullClassInstanceProperties ("mTargetAST") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @assignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionAST result ;
  const GGS_assignmentInstructionAST * p = (const GGS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@LValueAST analyzeLValueInAssignment'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeLValueInAssignment (const GGS_LValueAST inObject,
                                                const GGS_omnibusType constinArgument_inSelfType,
                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                const GGS_semanticContext constinArgument_inContext,
                                                const GGS_mode constinArgument_inMode,
                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                GGS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_LValueAST temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::equal, constinArgument_inSelfType.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("instruction-assignment.galgas", 122)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GGS_LValueAST temp_3 = inObject ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GGS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        {
        const GGS_LValueAST temp_5 = inObject ;
        routine_analyzeSelfLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_5.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 125)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GGS_valuedObject var_entity_6144 ;
    const GGS_LValueAST temp_6 = inObject ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_6.readProperty_mIdentifier (), var_entity_6144, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 141)) ;
    switch (var_entity_6144.enumValue ()) {
    case GGS_valuedObject::Enumeration::invalid:
      break ;
    case GGS_valuedObject::Enumeration::enum_task:
      {
        GGS_omnibusType extractedValue_6185__0 ;
        var_entity_6144.getAssociatedValuesFor_task (extractedValue_6185__0) ;
        const GGS_LValueAST temp_7 = inObject ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a task has no value"), fixItArray8  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_driver:
      {
        GGS_omnibusType extractedValue_6288__0 ;
        GGS_bool extractedValue_6290__1 ;
        var_entity_6144.getAssociatedValuesFor_driver (extractedValue_6288__0, extractedValue_6290__1) ;
        const GGS_LValueAST temp_9 = inObject ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a driver has no value"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 146)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalConstant:
      {
        GGS_objectIR extractedValue_6403__0 ;
        var_entity_6144.getAssociatedValuesFor_globalConstant (extractedValue_6403__0) ;
        const GGS_LValueAST temp_11 = inObject ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global constant cannot be written"), fixItArray12  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 148)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localConstant:
      {
        GGS_omnibusType extractedValue_6530__0 ;
        GGS_lstring extractedValue_6530__1 ;
        GGS_bool extractedValue_6530__2 ;
        var_entity_6144.getAssociatedValuesFor_localConstant (extractedValue_6530__0, extractedValue_6530__1, extractedValue_6530__2) ;
        const GGS_LValueAST temp_13 = inObject ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a local constant cannot be written"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_globalSyncInstance:
      {
        GGS_omnibusType extractedValue_6661__0 ;
        GGS_lstring extractedValue_6661__1 ;
        var_entity_6144.getAssociatedValuesFor_globalSyncInstance (extractedValue_6661__0, extractedValue_6661__1) ;
        const GGS_LValueAST temp_15 = inObject ;
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mIdentifier ().readProperty_location (), GGS_string ("a global sync instance is not allowed here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 152)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GGS_valuedObject::Enumeration::enum_localVariable:
      {
        GGS_omnibusType extractedValue_6807_variableType_0 ;
        GGS_lstring extractedValue_6829_omnibusName_1 ;
        var_entity_6144.getAssociatedValuesFor_localVariable (extractedValue_6807_variableType_0, extractedValue_6829_omnibusName_1) ;
        {
        const GGS_LValueAST temp_17 = inObject ;
        const GGS_LValueAST temp_18 = inObject ;
        routine_analyzeVariableInLValueInAssignment_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_pendingStoreComputedPropertyList_3F_variableName_3F_llvmName_3F_type_3F__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, temp_17.readProperty_mIdentifier (), function_llvmNameForLocalVariable (extractedValue_6829_omnibusName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 166)), extractedValue_6807_variableType_0, temp_18.readProperty_mOperand (), outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 154)) ;
        }
      }
      break ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @controlRegisterAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_controlRegisterAssignmentInstructionAST::objectCompare (const GGS_controlRegisterAssignmentInstructionAST & inOperand) const {
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

GGS_controlRegisterAssignmentInstructionAST::GGS_controlRegisterAssignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                      const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_controlRegisterAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_controlRegisterAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression, inCompiler) ;
  const GGS_controlRegisterAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_controlRegisterAssignmentInstructionAST::
controlRegisterAssignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                              const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                              const GGS_expressionAST & in_mSourceExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST::GGS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                                         const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                                         const GGS_expressionAST & in_mSourceExpression,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_controlRegisterAssignmentInstructionAST (in_mInstructionLocation, in_mControlRegisterLValue, in_mAssignmentKind, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_controlRegisterAssignmentInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentOperatorKind GGS_controlRegisterAssignmentInstructionAST::readProperty_mAssignmentKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterAssignmentOperatorKind () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mAssignmentKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mAssignmentKind (const GGS_controlRegisterAssignmentOperatorKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mAssignmentKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_controlRegisterAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controlRegisterAssignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_controlRegisterAssignmentInstructionAST * p = (cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @controlRegisterAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GGS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mAssignmentKind (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mAssignmentKind = in_mAssignmentKind ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

void cPtr_controlRegisterAssignmentInstructionAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@controlRegisterAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignmentKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_controlRegisterAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_controlRegisterAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mAssignmentKind.printNonNullClassInstanceProperties ("mAssignmentKind") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                                               & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterAssignmentInstructionAST GGS_controlRegisterAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controlRegisterAssignmentInstructionAST result ;
  const GGS_controlRegisterAssignmentInstructionAST * p = (const GGS_controlRegisterAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controlRegisterAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sliceAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sliceAssignmentInstructionAST::objectCompare (const GGS_sliceAssignmentInstructionAST & inOperand) const {
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

GGS_sliceAssignmentInstructionAST::GGS_sliceAssignmentInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_lstring & in_mTypeName,
                          const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                          const GGS_expressionAST & in_mSourceExpression,
                          const GGS_location & in_mSourceExpressionLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sliceAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_sliceAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->sliceAssignmentInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GGS_sliceAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sliceAssignmentInstructionAST::
sliceAssignmentInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_lstring & in_mTypeName,
                                                        const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                        const GGS_expressionAST & in_mSourceExpression,
                                                        const GGS_location & in_mSourceExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST::GGS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_lstring & in_mTypeName,
                                                                                     const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                                     const GGS_expressionAST & in_mSourceExpression,
                                                                                     const GGS_location & in_mSourceExpressionLocation,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sliceAssignmentInstructionAST (in_mInstructionLocation, in_mTypeName, in_mSliceAssignmentList, in_mSourceExpression, in_mSourceExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sliceAssignmentInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentListAST GGS_sliceAssignmentInstructionAST::readProperty_mSliceAssignmentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sliceAssignmentListAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSliceAssignmentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSliceAssignmentList (const GGS_sliceAssignmentListAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSliceAssignmentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_sliceAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_sliceAssignmentInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sliceAssignmentInstructionAST::setProperty_mSourceExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_sliceAssignmentInstructionAST * p = (cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sliceAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTypeName,
                                                                        const GGS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GGS_expressionAST & in_mSourceExpression,
                                                                        const GGS_location & in_mSourceExpressionLocation,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mSliceAssignmentList (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mSliceAssignmentList = in_mSliceAssignmentList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

void cPtr_sliceAssignmentInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@sliceAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSliceAssignmentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sliceAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sliceAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mSliceAssignmentList.printNonNullClassInstanceProperties ("mSliceAssignmentList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sliceAssignmentInstructionAST GGS_sliceAssignmentInstructionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_sliceAssignmentInstructionAST result ;
  const GGS_sliceAssignmentInstructionAST * p = (const GGS_sliceAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sliceAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bitbandInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bitbandInstructionAST::objectCompare (const GGS_bitbandInstructionAST & inOperand) const {
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

GGS_bitbandInstructionAST::GGS_bitbandInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                              const GGS_expressionAST & in_mBitExpression,
                              const GGS_location & in_mBitExpressionLocation,
                              const GGS_expressionAST & in_mSourceExpression,
                              const GGS_location & in_mSourceExpressionLocation,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_bitbandInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_bitbandInstructionAST (inCompiler COMMA_THERE)) ;
  object->bitbandInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation, inCompiler) ;
  const GGS_bitbandInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bitbandInstructionAST::
bitbandInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                    const GGS_expressionAST & in_mBitExpression,
                                                    const GGS_location & in_mBitExpressionLocation,
                                                    const GGS_expressionAST & in_mSourceExpression,
                                                    const GGS_location & in_mSourceExpressionLocation,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST::GGS_bitbandInstructionAST (const cPtr_bitbandInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                     const GGS_expressionAST & in_mBitExpression,
                                                                     const GGS_location & in_mBitExpressionLocation,
                                                                     const GGS_expressionAST & in_mSourceExpression,
                                                                     const GGS_location & in_mSourceExpressionLocation,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionAST (in_mInstructionLocation, in_mControlRegisterLValue, in_mBitExpression, in_mBitExpressionLocation, in_mSourceExpression, in_mSourceExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controlRegisterLValueAST GGS_bitbandInstructionAST::readProperty_mControlRegisterLValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_controlRegisterLValueAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mControlRegisterLValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mControlRegisterLValue (const GGS_controlRegisterLValueAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mControlRegisterLValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_bitbandInstructionAST::readProperty_mBitExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mBitExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitbandInstructionAST::readProperty_mBitExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mBitExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mBitExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mBitExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_bitbandInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bitbandInstructionAST::readProperty_mSourceExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    return p->mProperty_mSourceExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bitbandInstructionAST::setProperty_mSourceExpressionLocation (const GGS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_bitbandInstructionAST * p = (cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    p->mProperty_mSourceExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bitbandInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mBitExpression (),
mProperty_mBitExpressionLocation (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GGS_expressionAST & in_mBitExpression,
                                                        const GGS_location & in_mBitExpressionLocation,
                                                        const GGS_expressionAST & in_mSourceExpression,
                                                        const GGS_location & in_mSourceExpressionLocation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mControlRegisterLValue (),
mProperty_mBitExpression (),
mProperty_mBitExpressionLocation (),
mProperty_mSourceExpression (),
mProperty_mSourceExpressionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mControlRegisterLValue = in_mControlRegisterLValue ;
  mProperty_mBitExpression = in_mBitExpression ;
  mProperty_mBitExpressionLocation = in_mBitExpressionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceExpressionLocation = in_mSourceExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bitbandInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

void cPtr_bitbandInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@bitbandInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bitbandInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bitbandInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mBitExpression, mProperty_mBitExpressionLocation, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bitbandInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mControlRegisterLValue.printNonNullClassInstanceProperties ("mControlRegisterLValue") ;
    mProperty_mBitExpression.printNonNullClassInstanceProperties ("mBitExpression") ;
    mProperty_mBitExpressionLocation.printNonNullClassInstanceProperties ("mBitExpressionLocation") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceExpressionLocation.printNonNullClassInstanceProperties ("mSourceExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @bitbandInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bitbandInstructionAST ("bitbandInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bitbandInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitbandInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitbandInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitbandInstructionAST GGS_bitbandInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bitbandInstructionAST result ;
  const GGS_bitbandInstructionAST * p = (const GGS_bitbandInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitbandInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInstructionWithAssignmentAST::objectCompare (const GGS_varInstructionWithAssignmentAST & inOperand) const {
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

GGS_varInstructionWithAssignmentAST::GGS_varInstructionWithAssignmentAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mVarName,
                      const GGS_lstring & in_mOptionalTypeName,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_varInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->varInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GGS_varInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInstructionWithAssignmentAST::
varInstructionWithAssignmentAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mVarName,
                                                      const GGS_lstring & in_mOptionalTypeName,
                                                      const GGS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST::GGS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mVarName,
                                                                                         const GGS_lstring & in_mOptionalTypeName,
                                                                                         const GGS_expressionAST & in_mSourceExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_varInstructionWithAssignmentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (in_mInstructionLocation, in_mVarName, in_mOptionalTypeName, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInstructionWithAssignmentAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInstructionWithAssignmentAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_varInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInstructionWithAssignmentAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInstructionWithAssignmentAST * p = (cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mVarName,
                                                                            const GGS_lstring & in_mOptionalTypeName,
                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@varInstructionWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @varInstructionWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInstructionWithAssignmentAST GGS_varInstructionWithAssignmentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_varInstructionWithAssignmentAST result ;
  const GGS_varInstructionWithAssignmentAST * p = (const GGS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varDeclarationInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varDeclarationInstructionAST::objectCompare (const GGS_varDeclarationInstructionAST & inOperand) const {
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

GGS_varDeclarationInstructionAST::GGS_varDeclarationInstructionAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mVarName,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_varDeclarationInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_varDeclarationInstructionAST (inCompiler COMMA_THERE)) ;
  object->varDeclarationInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mVarName, in_mTypeName, inCompiler) ;
  const GGS_varDeclarationInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varDeclarationInstructionAST::
varDeclarationInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mVarName,
                                               const GGS_lstring & in_mTypeName,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST::GGS_varDeclarationInstructionAST (const cPtr_varDeclarationInstructionAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varDeclarationInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_lstring & in_mVarName,
                                                                                   const GGS_lstring & in_mTypeName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_varDeclarationInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varDeclarationInstructionAST (in_mInstructionLocation, in_mVarName, in_mTypeName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varDeclarationInstructionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varDeclarationInstructionAST::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varDeclarationInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varDeclarationInstructionAST::setProperty_mTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varDeclarationInstructionAST * p = (cPtr_varDeclarationInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varDeclarationInstructionAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varDeclarationInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varDeclarationInstructionAST::cPtr_varDeclarationInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mVarName,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVarName = in_mVarName ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varDeclarationInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

void cPtr_varDeclarationInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varDeclarationInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varDeclarationInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varDeclarationInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varDeclarationInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @varDeclarationInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varDeclarationInstructionAST ("varDeclarationInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varDeclarationInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varDeclarationInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varDeclarationInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varDeclarationInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varDeclarationInstructionAST GGS_varDeclarationInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_varDeclarationInstructionAST result ;
  const GGS_varDeclarationInstructionAST * p = (const GGS_varDeclarationInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varDeclarationInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varDeclarationInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @letInstructionWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_letInstructionWithAssignmentAST::objectCompare (const GGS_letInstructionWithAssignmentAST & inOperand) const {
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

GGS_letInstructionWithAssignmentAST::GGS_letInstructionWithAssignmentAST (void) :
GGS_instructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mConstantName,
                      const GGS_lstring & in_mOptionalTypeName,
                      const GGS_expressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_letInstructionWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_letInstructionWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->letInstructionWithAssignmentAST_init_21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression, inCompiler) ;
  const GGS_letInstructionWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::
letInstructionWithAssignmentAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mConstantName,
                                                      const GGS_lstring & in_mOptionalTypeName,
                                                      const GGS_expressionAST & in_mSourceExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST::GGS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GGS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mConstantName,
                                                                                         const GGS_lstring & in_mOptionalTypeName,
                                                                                         const GGS_expressionAST & in_mSourceExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_letInstructionWithAssignmentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (in_mInstructionLocation, in_mConstantName, in_mOptionalTypeName, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_letInstructionWithAssignmentAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_letInstructionWithAssignmentAST::setProperty_mConstantName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mConstantName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_letInstructionWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_letInstructionWithAssignmentAST::setProperty_mOptionalTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mOptionalTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expressionAST GGS_letInstructionWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expressionAST () ;
  }else{
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_letInstructionWithAssignmentAST::setProperty_mSourceExpression (const GGS_expressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_letInstructionWithAssignmentAST * p = (cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    p->mProperty_mSourceExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @letInstructionWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instructionAST (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mConstantName,
                                                                            const GGS_lstring & in_mOptionalTypeName,
                                                                            const GGS_expressionAST & in_mSourceExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mOptionalTypeName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@letInstructionWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_letInstructionWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_instructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @letInstructionWithAssignmentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                                                       & kTypeDescriptor_GALGAS_instructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_letInstructionWithAssignmentAST GGS_letInstructionWithAssignmentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_letInstructionWithAssignmentAST result ;
  const GGS_letInstructionWithAssignmentAST * p = (const GGS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

