#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-7.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension method '@PLMType generateRelease'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_PLMType_generateRelease> gExtensionMethodTable_PLMType_generateRelease ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateRelease (const int32_t inClassIndex,
                                           extensionMethodSignature_PLMType_generateRelease inMethod) {
  gExtensionMethodTable_PLMType_generateRelease.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateRelease (const cPtr_PLMType * inObject,
                                          const GALGAS_string constin_inPLMName,
                                          GALGAS_string & io_ioLLVMcode,
                                          GALGAS_generationAdds & io_ioGenerationAdds,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_PLMType_generateRelease f = NULL ;
    if (classIndex < gExtensionMethodTable_PLMType_generateRelease.count ()) {
      f = gExtensionMethodTable_PLMType_generateRelease (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_PLMType_generateRelease.count ()) {
           f = gExtensionMethodTable_PLMType_generateRelease (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_PLMType_generateRelease.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPLMName, io_ioLLVMcode, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_PLMType_generateRelease (const cPtr_PLMType * inObject,
                                                     const GALGAS_string constinArgument_inPLMName,
                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  const GALGAS_PLMType temp_0 = object ;
  GALGAS_string var_llvmTypeName_11803 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 300)) ;
  GALGAS_string var_LLVMVariable_11844 = function_llvmNameForLocalVariable (constinArgument_inPLMName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 301)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_PLMType temp_2 = object ;
    test_1 = temp_2.getter_kind (HERE).getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 302)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_tempLLVMVariable_11951 = GALGAS_string ("%temp.").add_operation (constinArgument_inPLMName.getter_assemblerRepresentation (SOURCE_FILE ("types.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 303)).add_operation (GALGAS_string (".loaded."), inCompiler COMMA_SOURCE_FILE ("types.galgas", 303)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 303)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 304)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempLLVMVariable_11951, inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (var_llvmTypeName_11803, inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (var_llvmTypeName_11803, inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (var_LLVMVariable_11844, inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 305)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_llvmTypeName_11803, inCompiler COMMA_SOURCE_FILE ("types.galgas", 306)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 306)).add_operation (var_tempLLVMVariable_11951, inCompiler COMMA_SOURCE_FILE ("types.galgas", 306)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 306)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_PLMType temp_3 = object ;
    GALGAS_arcAssignmentList var_arcAssignmentList_12336 = callExtensionGetter_arcList ((const cPtr_PLMType *) temp_3.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 308)) ;
    cEnumerator_arcAssignmentList enumerator_12424 (var_arcAssignmentList_12336, kENUMERATION_UP) ;
    while (enumerator_12424.hasCurrentObject ()) {
      GALGAS_string var_llvmVarName_12450 = GALGAS_string ("%arc.release.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("types.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 310)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 311)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_12450, inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (var_llvmTypeName_11803, inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (var_llvmTypeName_11803, inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (var_LLVMVariable_11844, inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 312)) ;
      cEnumerator_uintlist enumerator_12709 (enumerator_12424.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
      while (enumerator_12709.hasCurrentObject ()) {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_12709.current_mValue (HERE).getter_string (SOURCE_FILE ("types.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 314)) ;
        enumerator_12709.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_12424.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 316)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 316)) ;
      GALGAS_string var_propertyTypeLLVMName_12838 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_12424.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 317)) ;
      GALGAS_string var_llvmLoadedVarName_12896 = var_llvmVarName_12450.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 318)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_12896, inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (var_propertyTypeLLVMName_12838, inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (var_propertyTypeLLVMName_12838, inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (var_llvmVarName_12450, inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 319)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_12838, inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (var_llvmLoadedVarName_12896, inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 320)) ;
      enumerator_12424.gotoNextObject () ;
    }
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_PLMType_generateRelease (void) {
  enterExtensionMethod_generateRelease (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                        extensionMethod_PLMType_generateRelease) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_PLMType_generateRelease (void) {
  gExtensionMethodTable_PLMType_generateRelease.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_PLMType_generateRelease (defineExtensionMethod_PLMType_generateRelease,
                                                    freeExtensionMethod_PLMType_generateRelease) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension getter '@PLMType descriptionForHTMLFile'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_descriptionForHTMLFile> gExtensionGetterTable_PLMType_descriptionForHTMLFile ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_descriptionForHTMLFile (const int32_t inClassIndex,
                                                  enterExtensionGetter_PLMType_descriptionForHTMLFile inGetter) {
  gExtensionGetterTable_PLMType_descriptionForHTMLFile.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_descriptionForHTMLFile (const cPtr_PLMType * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_descriptionForHTMLFile f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_descriptionForHTMLFile.count ()) {
      f = gExtensionGetterTable_PLMType_descriptionForHTMLFile (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_descriptionForHTMLFile.count ()) {
           f = gExtensionGetterTable_PLMType_descriptionForHTMLFile (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_descriptionForHTMLFile.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_PLMType_descriptionForHTMLFile (const cPtr_PLMType * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  const GALGAS_PLMType temp_0 = object ;
  switch (temp_0.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_string ("Void") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_string ("Boolean") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_string ("Literal String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      result_result = GALGAS_string ("Enumeration") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      result_result = GALGAS_string ("Structure") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      result_result = GALGAS_string ("Synchronization tool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_13869 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_13869->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_13869->mAssociatedValue3 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = extractedValue_unsigned.boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("unsigned") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string ("signed") ;
      }
      result_result = GALGAS_string ("Integer (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 342)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 342)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("types.galgas", 342)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("types.galgas", 342)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 343)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 343)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_string ("Static Integer") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_14003 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_14003->mAssociatedValue0 ;
      result_result = GALGAS_string ("Opaque (").add_operation (extractedValue_bitCount.getter_string (SOURCE_FILE ("types.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 347)).add_operation (GALGAS_string (" bits)"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 347)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      result_result = GALGAS_string ("Static array") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_string ("Dynamic array") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      result_result = GALGAS_string ("Function") ;
    }
    break ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_descriptionForHTMLFile (void) {
  enterExtensionGetter_descriptionForHTMLFile (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                               extensionGetter_PLMType_descriptionForHTMLFile) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_descriptionForHTMLFile (void) {
  gExtensionGetterTable_PLMType_descriptionForHTMLFile.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_descriptionForHTMLFile (defineExtensionGetter_PLMType_descriptionForHTMLFile,
                                                           freeExtensionGetter_PLMType_descriptionForHTMLFile) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Extension getter '@PLMType defaultAlignment'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_defaultAlignment> gExtensionGetterTable_PLMType_defaultAlignment ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_defaultAlignment (const int32_t inClassIndex,
                                            enterExtensionGetter_PLMType_defaultAlignment inGetter) {
  gExtensionGetterTable_PLMType_defaultAlignment.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint callExtensionGetter_defaultAlignment (const cPtr_PLMType * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_defaultAlignment f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_defaultAlignment.count ()) {
      f = gExtensionGetterTable_PLMType_defaultAlignment (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_defaultAlignment.count ()) {
           f = gExtensionGetterTable_PLMType_defaultAlignment (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_defaultAlignment.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_uint extensionGetter_PLMType_defaultAlignment (const cPtr_PLMType * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  const GALGAS_PLMType temp_0 = object ;
  switch (temp_0.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_void:
    {
      result_result = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      result_result = GALGAS_uint ((uint32_t) 1U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      const cEnumAssociatedValues_typeKind_enumeration * extractPtr_14616 = (const cEnumAssociatedValues_typeKind_enumeration *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_14616->mAssociatedValue0 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = GALGAS_uint ((uint32_t) 1U) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result_result = GALGAS_uint ((uint32_t) 2U) ;
          }
        }
        if (kBoolFalse == test_2) {
          result_result = GALGAS_uint ((uint32_t) 4U) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_14848 = (const cEnumAssociatedValues_typeKind_integer *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_14848->mAssociatedValue3 ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 8U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result = GALGAS_uint ((uint32_t) 1U) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 16U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            result_result = GALGAS_uint ((uint32_t) 2U) ;
          }
        }
        if (kBoolFalse == test_4) {
          result_result = GALGAS_uint ((uint32_t) 4U) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      result_result = GALGAS_uint ((uint32_t) 0U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const cEnumAssociatedValues_typeKind_opaque * extractPtr_15045 = (const cEnumAssociatedValues_typeKind_opaque *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_bitCount = extractPtr_15045->mAssociatedValue0 ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 8U).getter_bigint (SOURCE_FILE ("types.galgas", 390)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result_result = GALGAS_uint ((uint32_t) 1U) ;
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsInfOrEqual, extractedValue_bitCount.objectCompare (GALGAS_uint ((uint32_t) 16U).getter_bigint (SOURCE_FILE ("types.galgas", 392)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result_result = GALGAS_uint ((uint32_t) 2U) ;
          }
        }
        if (kBoolFalse == test_6) {
          result_result = GALGAS_uint ((uint32_t) 4U) ;
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      const cEnumAssociatedValues_typeKind_staticArrayType * extractPtr_15130 = (const cEnumAssociatedValues_typeKind_staticArrayType *) (temp_0.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_elementType = extractPtr_15130->mAssociatedValue0 ;
      result_result = callExtensionGetter_defaultAlignment ((const cPtr_PLMType *) extractedValue_elementType.ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      result_result = GALGAS_uint ((uint32_t) 4U) ;
    }
    break ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_defaultAlignment (void) {
  enterExtensionGetter_defaultAlignment (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                         extensionGetter_PLMType_defaultAlignment) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_defaultAlignment (void) {
  gExtensionGetterTable_PLMType_defaultAlignment.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_defaultAlignment (defineExtensionGetter_PLMType_defaultAlignment,
                                                     freeExtensionGetter_PLMType_defaultAlignment) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Extension getter '@PLMType arcList'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_arcList> gExtensionGetterTable_PLMType_arcList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_arcList (const int32_t inClassIndex,
                                   enterExtensionGetter_PLMType_arcList inGetter) {
  gExtensionGetterTable_PLMType_arcList.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arcAssignmentList callExtensionGetter_arcList (const cPtr_PLMType * inObject,
                                                      const GALGAS_uintlist in_inPropertyIndexPath,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_arcList f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_arcList.count ()) {
      f = gExtensionGetterTable_PLMType_arcList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_arcList.count ()) {
           f = gExtensionGetterTable_PLMType_arcList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_arcList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inPropertyIndexPath, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_arcAssignmentList extensionGetter_PLMType_arcList (const cPtr_PLMType * inObject,
                                                                 const GALGAS_uintlist constinArgument_inPropertyIndexPath,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  result_result = GALGAS_arcAssignmentList::constructor_emptyList (SOURCE_FILE ("types.galgas", 417)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_kind.getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 418)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_PLMType temp_1 = object ;
      result_result.addAssign_operation (GALGAS_string::makeEmptyString (), temp_1, constinArgument_inPropertyIndexPath  COMMA_SOURCE_FILE ("types.galgas", 419)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = object->mProperty_kind.getter_isStructure (SOURCE_FILE ("types.galgas", 420)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_propertyList var_propertyList_15850 ;
        object->mProperty_kind.method_structure (var_propertyList_15850, inCompiler COMMA_SOURCE_FILE ("types.galgas", 421)) ;
        cEnumerator_propertyList enumerator_15903 (var_propertyList_15850, kENUMERATION_UP) ;
        GALGAS_uint index_15859 ((uint32_t) 0) ;
        while (enumerator_15903.hasCurrentObject ()) {
          GALGAS_uintlist temp_3 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("types.galgas", 423)) ;
          temp_3.addAssign_operation (index_15859  COMMA_SOURCE_FILE ("types.galgas", 423)) ;
          GALGAS_uintlist var_indexPath_15932 = constinArgument_inPropertyIndexPath.add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("types.galgas", 423)) ;
          result_result.plusAssign_operation(callExtensionGetter_arcList ((const cPtr_PLMType *) enumerator_15903.current_mType (HERE).ptr (), var_indexPath_15932, inCompiler COMMA_SOURCE_FILE ("types.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 424)) ;
          enumerator_15903.gotoNextObject () ;
          index_15859.increment_operation (inCompiler  COMMA_SOURCE_FILE ("types.galgas", 422)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_arcList (void) {
  enterExtensionGetter_arcList (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                extensionGetter_PLMType_arcList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_arcList (void) {
  gExtensionGetterTable_PLMType_arcList.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_arcList (defineExtensionGetter_PLMType_arcList,
                                            freeExtensionGetter_PLMType_arcList) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Extension getter '@PLMType deinitNeeded'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_PLMType_deinitNeeded> gExtensionGetterTable_PLMType_deinitNeeded ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_deinitNeeded (const int32_t inClassIndex,
                                        enterExtensionGetter_PLMType_deinitNeeded inGetter) {
  gExtensionGetterTable_PLMType_deinitNeeded.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool callExtensionGetter_deinitNeeded (const cPtr_PLMType * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_PLMType) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_PLMType_deinitNeeded f = NULL ;
    if (classIndex < gExtensionGetterTable_PLMType_deinitNeeded.count ()) {
      f = gExtensionGetterTable_PLMType_deinitNeeded (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_PLMType_deinitNeeded.count ()) {
           f = gExtensionGetterTable_PLMType_deinitNeeded (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_PLMType_deinitNeeded.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_PLMType_deinitNeeded (const cPtr_PLMType * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_PLMType * object = inObject ;
  macroValidSharedObject (object, cPtr_PLMType) ;
  result_result = object->mProperty_kind.getter_isDynamicArrayType (SOURCE_FILE ("types.galgas", 432)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_kind.getter_isStructure (SOURCE_FILE ("types.galgas", 433)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyList var_propertyList_16323 ;
      object->mProperty_kind.method_structure (var_propertyList_16323, inCompiler COMMA_SOURCE_FILE ("types.galgas", 434)) ;
      cEnumerator_propertyList enumerator_16376 (var_propertyList_16323, kENUMERATION_UP) ;
      bool bool_1 = result_result.operator_not (SOURCE_FILE ("types.galgas", 435)).isValidAndTrue () ;
      if (enumerator_16376.hasCurrentObject () && bool_1) {
        while (enumerator_16376.hasCurrentObject () && bool_1) {
          result_result = callExtensionGetter_deinitNeeded ((const cPtr_PLMType *) enumerator_16376.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("types.galgas", 436)) ;
          enumerator_16376.gotoNextObject () ;
          if (enumerator_16376.hasCurrentObject ()) {
            bool_1 = result_result.operator_not (SOURCE_FILE ("types.galgas", 435)).isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_PLMType_deinitNeeded (void) {
  enterExtensionGetter_deinitNeeded (kTypeDescriptor_GALGAS_PLMType.mSlotID,
                                     extensionGetter_PLMType_deinitNeeded) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_PLMType_deinitNeeded (void) {
  gExtensionGetterTable_PLMType_deinitNeeded.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_PLMType_deinitNeeded (defineExtensionGetter_PLMType_deinitNeeded,
                                                 freeExtensionGetter_PLMType_deinitNeeded) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Abstract extension method '@userLLVMTypeDefinitionIR generateLLVMType'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_userLLVMTypeDefinitionIR_generateLLVMType> gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateLLVMType (const int32_t inClassIndex,
                                            extensionMethodSignature_userLLVMTypeDefinitionIR_generateLLVMType inMethod) {
  gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_userLLVMTypeDefinitionIR_generateLLVMType (void) {
  gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMTypeDefinitionIR_generateLLVMType (NULL,
                                                                      freeExtensionMethod_userLLVMTypeDefinitionIR_generateLLVMType) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                           GALGAS_string & io_ioLLVMcode,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_userLLVMTypeDefinitionIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_userLLVMTypeDefinitionIR_generateLLVMType f = NULL ;
    if (classIndex < gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType.count ()) {
      f = gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType.count ()) {
          f = gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_userLLVMTypeDefinitionIR_generateLLVMType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLLVMcode, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_panicAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_panicAST * p = (const cPtr_panicAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_panicAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSetup.objectCompare (p->mProperty_mIsSetup) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicInstructionList.objectCompare (p->mProperty_mPanicInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfPanicInstructions.objectCompare (p->mProperty_mEndOfPanicInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (p->mProperty_mPriority) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_panicAST::objectCompare (const GALGAS_panicAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST::GALGAS_panicAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST GALGAS_panicAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_panicAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                           GALGAS_instructionListAST::constructor_emptyList (HERE),
                                           GALGAS_location::constructor_nowhere (HERE),
                                           GALGAS_lbigint::constructor_default (HERE)
                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST::GALGAS_panicAST (const cPtr_panicAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_panicAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST GALGAS_panicAST::constructor_new (const GALGAS_bool & inAttribute_mIsSetup,
                                                  const GALGAS_instructionListAST & inAttribute_mPanicInstructionList,
                                                  const GALGAS_location & inAttribute_mEndOfPanicInstructions,
                                                  const GALGAS_lbigint & inAttribute_mPriority
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  if (inAttribute_mIsSetup.isValid () && inAttribute_mPanicInstructionList.isValid () && inAttribute_mEndOfPanicInstructions.isValid () && inAttribute_mPriority.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_panicAST (inAttribute_mIsSetup, inAttribute_mPanicInstructionList, inAttribute_mEndOfPanicInstructions, inAttribute_mPriority COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_panicAST::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mIsSetup ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_panicAST::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_panicAST::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mPanicInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_panicAST::getter_mPanicInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_panicAST::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mEndOfPanicInstructions ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_panicAST::getter_mEndOfPanicInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfPanicInstructions ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_panicAST::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_panicAST * p = (const cPtr_panicAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_panicAST) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cPtr_panicAST::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                          Pointer class for @panicAST class                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_panicAST::cPtr_panicAST (const GALGAS_bool & in_mIsSetup,
                              const GALGAS_instructionListAST & in_mPanicInstructionList,
                              const GALGAS_location & in_mEndOfPanicInstructions,
                              const GALGAS_lbigint & in_mPriority
                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSetup (in_mIsSetup),
mProperty_mPanicInstructionList (in_mPanicInstructionList),
mProperty_mEndOfPanicInstructions (in_mEndOfPanicInstructions),
mProperty_mPriority (in_mPriority) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_panicAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

void cPtr_panicAST::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@panicAST:" ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfPanicInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_panicAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_panicAST (mProperty_mIsSetup, mProperty_mPanicInstructionList, mProperty_mEndOfPanicInstructions, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @panicAST type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicAST ("panicAST",
                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_panicAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_panicAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicAST GALGAS_panicAST::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_panicAST result ;
  const GALGAS_panicAST * p = (const GALGAS_panicAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@panicAST noteTypesInPrecedenceGraph'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_panicAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_panicAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_panicAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_panicAST_noteTypesInPrecedenceGraph (const cPtr_panicAST * inObject,
                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mPanicInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 53)) ;
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_panicAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                   extensionMethod_panicAST_noteTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_panicAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_panicAST_noteTypesInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_panicAST_noteTypesInPrecedenceGraph (defineExtensionMethod_panicAST_noteTypesInPrecedenceGraph,
                                                                freeExtensionMethod_panicAST_noteTypesInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_decoratedPanicRoutine::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSetup.objectCompare (p->mProperty_mIsSetup) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPriority.objectCompare (p->mProperty_mPriority) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_decoratedPanicRoutine::objectCompare (const GALGAS_decoratedPanicRoutine & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (void) :
GALGAS_abstractDecoratedDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::constructor_default (LOCATION_ARGS) {
  return GALGAS_decoratedPanicRoutine::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lbigint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine::GALGAS_decoratedPanicRoutine (const cPtr_decoratedPanicRoutine * inSourcePtr) :
GALGAS_abstractDecoratedDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_decoratedPanicRoutine) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::constructor_new (const GALGAS_bool & inAttribute_mIsSetup,
                                                                            const GALGAS_lbigint & inAttribute_mPriority
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  if (inAttribute_mIsSetup.isValid () && inAttribute_mPriority.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_decoratedPanicRoutine (inAttribute_mIsSetup, inAttribute_mPriority COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_decoratedPanicRoutine::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mIsSetup ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_decoratedPanicRoutine::getter_mIsSetup (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSetup ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_decoratedPanicRoutine::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_decoratedPanicRoutine * p = (const cPtr_decoratedPanicRoutine *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_decoratedPanicRoutine) ;
    result = p->mProperty_mPriority ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cPtr_decoratedPanicRoutine::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPriority ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @decoratedPanicRoutine class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_decoratedPanicRoutine::cPtr_decoratedPanicRoutine (const GALGAS_bool & in_mIsSetup,
                                                        const GALGAS_lbigint & in_mPriority
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDecoratedDeclaration (THERE),
mProperty_mIsSetup (in_mIsSetup),
mProperty_mPriority (in_mPriority) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_decoratedPanicRoutine::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

void cPtr_decoratedPanicRoutine::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@decoratedPanicRoutine:" ;
  mProperty_mIsSetup.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPriority.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_decoratedPanicRoutine::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_decoratedPanicRoutine (mProperty_mIsSetup, mProperty_mPriority COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @decoratedPanicRoutine type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedPanicRoutine ("decoratedPanicRoutine",
                                              & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedPanicRoutine::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedPanicRoutine ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedPanicRoutine::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedPanicRoutine (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedPanicRoutine GALGAS_decoratedPanicRoutine::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedPanicRoutine result ;
  const GALGAS_decoratedPanicRoutine * p = (const GALGAS_decoratedPanicRoutine *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedPanicRoutine *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedPanicRoutine", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_fileSpecificPanicRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_fileSpecificPanicRoutineIR * p = (const cPtr_fileSpecificPanicRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_inFilePath.objectCompare (p->mProperty_inFilePath) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_fileSpecificPanicRoutineIR::objectCompare (const GALGAS_fileSpecificPanicRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileSpecificPanicRoutineIR::GALGAS_fileSpecificPanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_fileSpecificPanicRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileSpecificPanicRoutineIR::GALGAS_fileSpecificPanicRoutineIR (const cPtr_fileSpecificPanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_fileSpecificPanicRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                      const GALGAS_bool & inAttribute_isRequired,
                                                                                      const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                      const GALGAS_string & inAttribute_inFilePath
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_inFilePath.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_fileSpecificPanicRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_inFilePath COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_fileSpecificPanicRoutineIR::getter_inFilePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_fileSpecificPanicRoutineIR * p = (const cPtr_fileSpecificPanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_fileSpecificPanicRoutineIR) ;
    result = p->mProperty_inFilePath ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_fileSpecificPanicRoutineIR::getter_inFilePath (UNUSED_LOCATION_ARGS) const {
  return mProperty_inFilePath ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @fileSpecificPanicRoutineIR class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_fileSpecificPanicRoutineIR::cPtr_fileSpecificPanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                  const GALGAS_bool & in_isRequired,
                                                                  const GALGAS_bool & in_warnsIfUnused,
                                                                  const GALGAS_string & in_inFilePath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_inFilePath (in_inFilePath) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_fileSpecificPanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

void cPtr_fileSpecificPanicRoutineIR::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@fileSpecificPanicRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_inFilePath.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_fileSpecificPanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_fileSpecificPanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_inFilePath COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @fileSpecificPanicRoutineIR type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ("fileSpecificPanicRoutineIR",
                                                   & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_fileSpecificPanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileSpecificPanicRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_fileSpecificPanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileSpecificPanicRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileSpecificPanicRoutineIR GALGAS_fileSpecificPanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fileSpecificPanicRoutineIR result ;
  const GALGAS_fileSpecificPanicRoutineIR * p = (const GALGAS_fileSpecificPanicRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fileSpecificPanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileSpecificPanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_universalModePanicRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_universalModePanicRoutineIR * p = (const cPtr_universalModePanicRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_universalModePanicRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_universalModePanicRoutineIR::objectCompare (const GALGAS_universalModePanicRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalModePanicRoutineIR::GALGAS_universalModePanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_universalModePanicRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalModePanicRoutineIR::GALGAS_universalModePanicRoutineIR (const cPtr_universalModePanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_universalModePanicRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                        const GALGAS_bool & inAttribute_isRequired,
                                                                                        const GALGAS_bool & inAttribute_warnsIfUnused
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_universalModePanicRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @universalModePanicRoutineIR class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_universalModePanicRoutineIR::cPtr_universalModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                    const GALGAS_bool & in_isRequired,
                                                                    const GALGAS_bool & in_warnsIfUnused
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_universalModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

void cPtr_universalModePanicRoutineIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@universalModePanicRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_universalModePanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_universalModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @universalModePanicRoutineIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_universalModePanicRoutineIR ("universalModePanicRoutineIR",
                                                    & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_universalModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_universalModePanicRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_universalModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_universalModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_universalModePanicRoutineIR GALGAS_universalModePanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_universalModePanicRoutineIR result ;
  const GALGAS_universalModePanicRoutineIR * p = (const GALGAS_universalModePanicRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_universalModePanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("universalModePanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sectionModePanicRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sectionModePanicRoutineIR * p = (const cPtr_sectionModePanicRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicSetupListIR.objectCompare (p->mProperty_mPanicSetupListIR) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicLoopListIR.objectCompare (p->mProperty_mPanicLoopListIR) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sectionModePanicRoutineIR::objectCompare (const GALGAS_sectionModePanicRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionModePanicRoutineIR::GALGAS_sectionModePanicRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_sectionModePanicRoutineIR::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_panicSortedListIR::constructor_emptySortedList (HERE),
                                                            GALGAS_panicSortedListIR::constructor_emptySortedList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionModePanicRoutineIR::GALGAS_sectionModePanicRoutineIR (const cPtr_sectionModePanicRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sectionModePanicRoutineIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::constructor_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                    const GALGAS_bool & inAttribute_isRequired,
                                                                                    const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                    const GALGAS_panicSortedListIR & inAttribute_mPanicSetupListIR,
                                                                                    const GALGAS_panicSortedListIR & inAttribute_mPanicLoopListIR
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mPanicSetupListIR.isValid () && inAttribute_mPanicLoopListIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sectionModePanicRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mPanicSetupListIR, inAttribute_mPanicLoopListIR COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR GALGAS_sectionModePanicRoutineIR::getter_mPanicSetupListIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_panicSortedListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_sectionModePanicRoutineIR * p = (const cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    result = p->mProperty_mPanicSetupListIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR cPtr_sectionModePanicRoutineIR::getter_mPanicSetupListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicSetupListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR GALGAS_sectionModePanicRoutineIR::getter_mPanicLoopListIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_panicSortedListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_sectionModePanicRoutineIR * p = (const cPtr_sectionModePanicRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sectionModePanicRoutineIR) ;
    result = p->mProperty_mPanicLoopListIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_panicSortedListIR cPtr_sectionModePanicRoutineIR::getter_mPanicLoopListIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLoopListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @sectionModePanicRoutineIR class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sectionModePanicRoutineIR::cPtr_sectionModePanicRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                const GALGAS_bool & in_isRequired,
                                                                const GALGAS_bool & in_warnsIfUnused,
                                                                const GALGAS_panicSortedListIR & in_mPanicSetupListIR,
                                                                const GALGAS_panicSortedListIR & in_mPanicLoopListIR
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mPanicSetupListIR (in_mPanicSetupListIR),
mProperty_mPanicLoopListIR (in_mPanicLoopListIR) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sectionModePanicRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

void cPtr_sectionModePanicRoutineIR::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@sectionModePanicRoutineIR:" ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicSetupListIR.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPanicLoopListIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sectionModePanicRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sectionModePanicRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mPanicSetupListIR, mProperty_mPanicLoopListIR COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @sectionModePanicRoutineIR type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ("sectionModePanicRoutineIR",
                                                  & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sectionModePanicRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionModePanicRoutineIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sectionModePanicRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionModePanicRoutineIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sectionModePanicRoutineIR GALGAS_sectionModePanicRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sectionModePanicRoutineIR result ;
  const GALGAS_sectionModePanicRoutineIR * p = (const GALGAS_sectionModePanicRoutineIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionModePanicRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionModePanicRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_convertExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_convertExpressionAST::objectCompare (const GALGAS_convertExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertExpressionAST::GALGAS_convertExpressionAST (const cPtr_convertExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                          const GALGAS_lstring & inAttribute_mTypeName,
                                                                          const GALGAS_location & inAttribute_mEndOfExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_convertExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_convertExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertExpressionAST * p = (const cPtr_convertExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_convertExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @convertExpressionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_convertExpressionAST::cPtr_convertExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      const GALGAS_location & in_mEndOfExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_convertExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

void cPtr_convertExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_convertExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @convertExpressionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertExpressionAST ("convertExpressionAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_convertExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_convertExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertExpressionAST GALGAS_convertExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertExpressionAST result ;
  const GALGAS_convertExpressionAST * p = (const GALGAS_convertExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_convertExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_convertInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_convertInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperand.objectCompare (p->mProperty_mOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_convertInstructionIR::objectCompare (const GALGAS_convertInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertInstructionIR::GALGAS_convertInstructionIR (const cPtr_convertInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_convertInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                          const GALGAS_objectIR & inAttribute_mOperand,
                                                                          const GALGAS_location & inAttribute_mLocation
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperand.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_convertInstructionIR (inAttribute_mTarget, inAttribute_mOperand, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_convertInstructionIR::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_convertInstructionIR * p = (const cPtr_convertInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_convertInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_convertInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @convertInstructionIR class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_convertInstructionIR::cPtr_convertInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                      const GALGAS_objectIR & in_mOperand,
                                                      const GALGAS_location & in_mLocation
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperand (in_mOperand),
mProperty_mLocation (in_mLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_convertInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

void cPtr_convertInstructionIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@convertInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_convertInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_convertInstructionIR (mProperty_mTarget, mProperty_mOperand, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @convertInstructionIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_convertInstructionIR ("convertInstructionIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_convertInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_convertInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_convertInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_convertInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_convertInstructionIR GALGAS_convertInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_convertInstructionIR result ;
  const GALGAS_convertInstructionIR * p = (const GALGAS_convertInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_convertInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("convertInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_extendExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extendExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_extendExpressionAST::objectCompare (const GALGAS_extendExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendExpressionAST::GALGAS_extendExpressionAST (const cPtr_extendExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extendExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                        const GALGAS_location & inAttribute_mEndOfExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extendExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_extendExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_extendExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_extendExpressionAST * p = (const cPtr_extendExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extendExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_extendExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @extendExpressionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_extendExpressionAST::cPtr_extendExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                    const GALGAS_lstring & in_mTypeName,
                                                    const GALGAS_location & in_mEndOfExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_extendExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

void cPtr_extendExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@extendExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_extendExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extendExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @extendExpressionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extendExpressionAST ("extendExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_extendExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extendExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_extendExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extendExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_extendExpressionAST GALGAS_extendExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extendExpressionAST result ;
  const GALGAS_extendExpressionAST * p = (const GALGAS_extendExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extendExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extendExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_truncateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpression.objectCompare (p->mProperty_mEndOfExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_truncateExpressionAST::objectCompare (const GALGAS_truncateExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_truncateExpressionAST::GALGAS_truncateExpressionAST (const cPtr_truncateExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_truncateExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::constructor_new (const GALGAS_expressionAST & inAttribute_mExpression,
                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                            const GALGAS_location & inAttribute_mEndOfExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mEndOfExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_truncateExpressionAST (inAttribute_mExpression, inAttribute_mTypeName, inAttribute_mEndOfExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_truncateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_truncateExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_truncateExpressionAST * p = (const cPtr_truncateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_truncateExpressionAST) ;
    result = p->mProperty_mEndOfExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_truncateExpressionAST::getter_mEndOfExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @truncateExpressionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_truncateExpressionAST::cPtr_truncateExpressionAST (const GALGAS_expressionAST & in_mExpression,
                                                        const GALGAS_lstring & in_mTypeName,
                                                        const GALGAS_location & in_mEndOfExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mTypeName (in_mTypeName),
mProperty_mEndOfExpression (in_mEndOfExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_truncateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

void cPtr_truncateExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@truncateExpressionAST:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_truncateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_truncateExpressionAST (mProperty_mExpression, mProperty_mTypeName, mProperty_mEndOfExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @truncateExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_truncateExpressionAST ("truncateExpressionAST",
                                              & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_truncateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_truncateExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_truncateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_truncateExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_truncateExpressionAST GALGAS_truncateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_truncateExpressionAST result ;
  const GALGAS_truncateExpressionAST * p = (const GALGAS_truncateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_truncateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("truncateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (void) :
mProperty_mRegisterGroupName (),
mProperty_mGroupIndex (),
mProperty_mRegisterName (),
mProperty_mRegisterIndex () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST::~ GALGAS_controlRegisterLValueAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST::GALGAS_controlRegisterLValueAST (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                  const GALGAS_lstring & inOperand2,
                                                                  const GALGAS_registerIndexAST & inOperand3) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mGroupIndex (inOperand1),
mProperty_mRegisterName (inOperand2),
mProperty_mRegisterIndex (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_registerGroupIndexAST & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_registerIndexAST & inOperand3 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterLValueAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterLValueAST::objectCompare (const GALGAS_controlRegisterLValueAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterGroupName.objectCompare (inOperand.mProperty_mRegisterGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupIndex.objectCompare (inOperand.mProperty_mGroupIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterIndex.objectCompare (inOperand.mProperty_mRegisterIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterLValueAST::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mGroupIndex.isValid () && mProperty_mRegisterName.isValid () && mProperty_mRegisterIndex.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterLValueAST::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mGroupIndex.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mRegisterIndex.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterLValueAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterLValueAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterLValueAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupIndexAST GALGAS_controlRegisterLValueAST::getter_mGroupIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterLValueAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIndexAST GALGAS_controlRegisterLValueAST::getter_mRegisterIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @controlRegisterLValueAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterLValueAST ("controlRegisterLValueAST",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterLValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterLValueAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterLValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterLValueAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterLValueAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterLValueAST result ;
  const GALGAS_controlRegisterLValueAST * p = (const GALGAS_controlRegisterLValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterLValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterLValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST::GALGAS_LValueAST (void) :
mProperty_mIdentifier (),
mProperty_mOperand () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST::~ GALGAS_LValueAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST::GALGAS_LValueAST (const GALGAS_lstring & inOperand0,
                                    const GALGAS_LValueOperandAST & inOperand1) :
mProperty_mIdentifier (inOperand0),
mProperty_mOperand (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_LValueAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_LValueOperandAST & inOperand1 
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueAST (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_LValueAST::objectCompare (const GALGAS_LValueAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIdentifier.objectCompare (inOperand.mProperty_mIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperand.objectCompare (inOperand.mProperty_mOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_LValueAST::isValid (void) const {
  return mProperty_mIdentifier.isValid () && mProperty_mOperand.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_LValueAST::drop (void) {
  mProperty_mIdentifier.drop () ;
  mProperty_mOperand.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_LValueAST::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "<struct @LValueAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_LValueAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueOperandAST GALGAS_LValueAST::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperand ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @LValueAST type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueAST ("LValueAST",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_LValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_LValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_LValueAST::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_LValueAST result ;
  const GALGAS_LValueAST * p = (const GALGAS_LValueAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (void) :
mProperty_type (),
mProperty_llvmName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation::~ GALGAS_LValueRepresentation (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation::GALGAS_LValueRepresentation (const GALGAS_PLMType & inOperand0,
                                                          const GALGAS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_llvmName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_LValueRepresentation (GALGAS_PLMType::constructor_default (HERE),
                                      GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                          const GALGAS_string & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_LValueRepresentation (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_LValueRepresentation::objectCompare (const GALGAS_LValueRepresentation & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_llvmName.objectCompare (inOperand.mProperty_llvmName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_LValueRepresentation::isValid (void) const {
  return mProperty_type.isValid () && mProperty_llvmName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_LValueRepresentation::drop (void) {
  mProperty_type.drop () ;
  mProperty_llvmName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_LValueRepresentation::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @LValueRepresentation:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_llvmName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_LValueRepresentation::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_LValueRepresentation::getter_llvmName (UNUSED_LOCATION_ARGS) const {
  return mProperty_llvmName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @LValueRepresentation type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_LValueRepresentation ("LValueRepresentation",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_LValueRepresentation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_LValueRepresentation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_LValueRepresentation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_LValueRepresentation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_LValueRepresentation::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_LValueRepresentation result ;
  const GALGAS_LValueRepresentation * p = (const GALGAS_LValueRepresentation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_LValueRepresentation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("LValueRepresentation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sizeofExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLValue.objectCompare (p->mProperty_mLValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sizeofExpressionAST::objectCompare (const GALGAS_sizeofExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST::GALGAS_sizeofExpressionAST (const cPtr_sizeofExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::constructor_new (const GALGAS_LValueAST & inAttribute_mLValue
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  if (inAttribute_mLValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofExpressionAST (inAttribute_mLValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_sizeofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofExpressionAST * p = (const cPtr_sizeofExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofExpressionAST) ;
    result = p->mProperty_mLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST cPtr_sizeofExpressionAST::getter_mLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @sizeofExpressionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sizeofExpressionAST::cPtr_sizeofExpressionAST (const GALGAS_LValueAST & in_mLValue
                                                    COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLValue (in_mLValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sizeofExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

void cPtr_sizeofExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofExpressionAST:" ;
  mProperty_mLValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sizeofExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofExpressionAST (mProperty_mLValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @sizeofExpressionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofExpressionAST ("sizeofExpressionAST",
                                            & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sizeofExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sizeofExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofExpressionAST GALGAS_sizeofExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofExpressionAST result ;
  const GALGAS_sizeofExpressionAST * p = (const GALGAS_sizeofExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sizeofExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sizeofTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sizeofTypeAST::objectCompare (const GALGAS_sizeofTypeAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sizeofTypeAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST::GALGAS_sizeofTypeAST (const cPtr_sizeofTypeAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofTypeAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  if (inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofTypeAST (inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sizeofTypeAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofTypeAST * p = (const cPtr_sizeofTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofTypeAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_sizeofTypeAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @sizeofTypeAST class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sizeofTypeAST::cPtr_sizeofTypeAST (const GALGAS_lstring & in_mTypeName
                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sizeofTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

void cPtr_sizeofTypeAST::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@sizeofTypeAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sizeofTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofTypeAST (mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @sizeofTypeAST type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofTypeAST ("sizeofTypeAST",
                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sizeofTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofTypeAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sizeofTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofTypeAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofTypeAST GALGAS_sizeofTypeAST::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sizeofTypeAST result ;
  const GALGAS_sizeofTypeAST * p = (const GALGAS_sizeofTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sizeofTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sizeofInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceType.objectCompare (p->mProperty_mSourceType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sizeofInstructionIR::objectCompare (const GALGAS_sizeofInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR::GALGAS_sizeofInstructionIR (const cPtr_sizeofInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sizeofInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                        const GALGAS_PLMType & inAttribute_mSourceType
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSourceType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sizeofInstructionIR (inAttribute_mTarget, inAttribute_mSourceType COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_sizeofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_sizeofInstructionIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_sizeofInstructionIR::getter_mSourceType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_sizeofInstructionIR * p = (const cPtr_sizeofInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sizeofInstructionIR) ;
    result = p->mProperty_mSourceType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_sizeofInstructionIR::getter_mSourceType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @sizeofInstructionIR class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sizeofInstructionIR::cPtr_sizeofInstructionIR (const GALGAS_objectIR & in_mTarget,
                                                    const GALGAS_PLMType & in_mSourceType
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSourceType (in_mSourceType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sizeofInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

void cPtr_sizeofInstructionIR::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@sizeofInstructionIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sizeofInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sizeofInstructionIR (mProperty_mTarget, mProperty_mSourceType COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @sizeofInstructionIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sizeofInstructionIR ("sizeofInstructionIR",
                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sizeofInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sizeofInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sizeofInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sizeofInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sizeofInstructionIR GALGAS_sizeofInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sizeofInstructionIR result ;
  const GALGAS_sizeofInstructionIR * p = (const GALGAS_sizeofInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sizeofInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sizeofInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_typedConstantCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mConstructorName.objectCompare (p->mProperty_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_typedConstantCallAST::objectCompare (const GALGAS_typedConstantCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_typedConstantCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST::GALGAS_typedConstantCallAST (const cPtr_typedConstantCallAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typedConstantCallAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::constructor_new (const GALGAS_lstring & inAttribute_mConstructorName,
                                                                          const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  if (inAttribute_mConstructorName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typedConstantCallAST (inAttribute_mConstructorName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_typedConstantCallAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mConstructorName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_typedConstantCallAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstructorName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAccessListAST GALGAS_typedConstantCallAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_typedConstantCallAST * p = (const cPtr_typedConstantCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typedConstantCallAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAccessListAST cPtr_typedConstantCallAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @typedConstantCallAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_typedConstantCallAST::cPtr_typedConstantCallAST (const GALGAS_lstring & in_mConstructorName,
                                                      const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mConstructorName (in_mConstructorName),
mProperty_mAccessList (in_mAccessList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_typedConstantCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

void cPtr_typedConstantCallAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@typedConstantCallAST:" ;
  mProperty_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_typedConstantCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typedConstantCallAST (mProperty_mConstructorName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @typedConstantCallAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typedConstantCallAST ("typedConstantCallAST",
                                             & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_typedConstantCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedConstantCallAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_typedConstantCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typedConstantCallAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typedConstantCallAST GALGAS_typedConstantCallAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typedConstantCallAST result ;
  const GALGAS_typedConstantCallAST * p = (const GALGAS_typedConstantCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typedConstantCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typedConstantCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Abstract extension method '@infixOperatorDescription generateInfixOperatorCode'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode> gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateInfixOperatorCode (const int32_t inClassIndex,
                                                     extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode inMethod) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode (void) {
  gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_infixOperatorDescription_generateInfixOperatorCode (NULL,
                                                                               freeExtensionMethod_infixOperatorDescription_generateInfixOperatorCode) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                    GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                    GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                    const GALGAS_objectIR constin_inLeftOperand,
                                                    const GALGAS_location constin_inOperatorLocation,
                                                    const GALGAS_objectIR constin_inRightOperand,
                                                    const GALGAS_PLMType constin_inResultType,
                                                    GALGAS_objectIR & out_outResultValue,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outResultValue.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_infixOperatorDescription_generateInfixOperatorCode f = NULL ;
    if (classIndex < gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
      f = gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.count ()) {
          f = gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_infixOperatorDescription_generateInfixOperatorCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTemporaries, io_ioInstructionGenerationList, constin_inLeftOperand, constin_inOperatorLocation, constin_inRightOperand, constin_inResultType, out_outResultValue, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension getter '@infixOperatorDescription performStaticOperation'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_infixOperatorDescription_performStaticOperation> gExtensionGetterTable_infixOperatorDescription_performStaticOperation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_performStaticOperation (const int32_t inClassIndex,
                                                  enterExtensionGetter_infixOperatorDescription_performStaticOperation inGetter) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint callExtensionGetter_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                          const GALGAS_bigint in_inLeft,
                                                          const GALGAS_bigint in_inRight,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_infixOperatorDescription) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_infixOperatorDescription_performStaticOperation f = NULL ;
    if (classIndex < gExtensionGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
      f = gExtensionGetterTable_infixOperatorDescription_performStaticOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_infixOperatorDescription_performStaticOperation.count ()) {
           f = gExtensionGetterTable_infixOperatorDescription_performStaticOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_infixOperatorDescription_performStaticOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inLeft, in_inRight, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bigint extensionGetter_infixOperatorDescription_performStaticOperation (const cPtr_infixOperatorDescription * inObject,
                                                                                      const GALGAS_bigint constinArgument_inLeft,
                                                                                      const GALGAS_bigint constinArgument_inRight,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_infixOperatorDescription * object = inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorDescription) ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 268)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 269)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 270)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 271)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 272)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 273)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 274)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 276)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      result_result = constinArgument_inLeft.add_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 277)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 278)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      result_result = constinArgument_inLeft.substract_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 279)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 280)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      result_result = constinArgument_inLeft.multiply_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 281)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 282)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      result_result = constinArgument_inLeft.divide_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 283)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 284)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      result_result = constinArgument_inLeft.modulo_operation (constinArgument_inRight, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 285)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      result_result = constinArgument_inLeft.operator_and (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 287)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      result_result = constinArgument_inLeft.operator_or (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 288)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      result_result = constinArgument_inLeft.operator_xor (constinArgument_inRight COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 289)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      result_result = constinArgument_inLeft.left_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 290)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 290)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      result_result = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 291)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 291)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      result_result = constinArgument_inLeft.right_shift_operation (constinArgument_inRight.getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 292)) COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 292)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      result_result = GALGAS_bool (kIsEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 294)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      result_result = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 296)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      result_result = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 297)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      result_result = GALGAS_bool (kIsStrictInf, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 300)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      result_result = GALGAS_bool (kIsInfOrEqual, constinArgument_inLeft.objectCompare (constinArgument_inRight)).getter_bigint (SOURCE_FILE ("expression-infix-operators.galgas", 301)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  enterExtensionGetter_performStaticOperation (kTypeDescriptor_GALGAS_infixOperatorDescription.mSlotID,
                                               extensionGetter_infixOperatorDescription_performStaticOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_infixOperatorDescription_performStaticOperation (void) {
  gExtensionGetterTable_infixOperatorDescription_performStaticOperation.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_infixOperatorDescription_performStaticOperation (defineExtensionGetter_infixOperatorDescription_performStaticOperation,
                                                                            freeExtensionGetter_infixOperatorDescription_performStaticOperation) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_integerSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceValues.objectCompare (p->mProperty_mSliceValues) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_integerSliceExpressionAST::objectCompare (const GALGAS_integerSliceExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerSliceExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_integerSliceFieldListAST::constructor_emptyList (HERE),
                                                            GALGAS_location::constructor_nowhere (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceExpressionAST::GALGAS_integerSliceExpressionAST (const cPtr_integerSliceExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerSliceExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                                    const GALGAS_integerSliceFieldListAST & inAttribute_mSliceValues,
                                                                                    const GALGAS_location & inAttribute_mLocation
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mSliceValues.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerSliceExpressionAST (inAttribute_mTypeName, inAttribute_mSliceValues, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_integerSliceExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_integerSliceExpressionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST GALGAS_integerSliceExpressionAST::getter_mSliceValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_integerSliceFieldListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    result = p->mProperty_mSliceValues ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceFieldListAST cPtr_integerSliceExpressionAST::getter_mSliceValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceValues ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_integerSliceExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerSliceExpressionAST * p = (const cPtr_integerSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerSliceExpressionAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_integerSliceExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @integerSliceExpressionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerSliceExpressionAST::cPtr_integerSliceExpressionAST (const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_integerSliceFieldListAST & in_mSliceValues,
                                                                const GALGAS_location & in_mLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mSliceValues (in_mSliceValues),
mProperty_mLocation (in_mLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_integerSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

void cPtr_integerSliceExpressionAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@integerSliceExpressionAST:" ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSliceValues.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerSliceExpressionAST (mProperty_mTypeName, mProperty_mSliceValues, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @integerSliceExpressionAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerSliceExpressionAST ("integerSliceExpressionAST",
                                                  & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerSliceExpressionAST GALGAS_integerSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceExpressionAST result ;
  const GALGAS_integerSliceExpressionAST * p = (const GALGAS_integerSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalIntegerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInteger.objectCompare (p->mProperty_mLiteralInteger) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalIntegerInExpressionAST::objectCompare (const GALGAS_literalIntegerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntegerInExpressionAST::constructor_new (GALGAS_lbigint::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerInExpressionAST::GALGAS_literalIntegerInExpressionAST (const cPtr_literalIntegerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::constructor_new (const GALGAS_lbigint & inAttribute_mLiteralInteger
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  if (inAttribute_mLiteralInteger.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntegerInExpressionAST (inAttribute_mLiteralInteger COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_literalIntegerInExpressionAST::getter_mLiteralInteger (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalIntegerInExpressionAST * p = (const cPtr_literalIntegerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntegerInExpressionAST) ;
    result = p->mProperty_mLiteralInteger ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cPtr_literalIntegerInExpressionAST::getter_mLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralInteger ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @literalIntegerInExpressionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalIntegerInExpressionAST::cPtr_literalIntegerInExpressionAST (const GALGAS_lbigint & in_mLiteralInteger
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralInteger (in_mLiteralInteger) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalIntegerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

void cPtr_literalIntegerInExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@literalIntegerInExpressionAST:" ;
  mProperty_mLiteralInteger.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalIntegerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntegerInExpressionAST (mProperty_mLiteralInteger COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @literalIntegerInExpressionAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ("literalIntegerInExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalIntegerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalIntegerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerInExpressionAST GALGAS_literalIntegerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInExpressionAST result ;
  const GALGAS_literalIntegerInExpressionAST * p = (const GALGAS_literalIntegerInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalStringInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLiteralString.objectCompare (p->mProperty_mLiteralString) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalStringInExpressionAST::objectCompare (const GALGAS_literalStringInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringInExpressionAST::GALGAS_literalStringInExpressionAST (const cPtr_literalStringInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mLiteralString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  if (inAttribute_mLiteralString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringInExpressionAST (inAttribute_mLiteralString COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_literalStringInExpressionAST::getter_mLiteralString (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalStringInExpressionAST * p = (const cPtr_literalStringInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringInExpressionAST) ;
    result = p->mProperty_mLiteralString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_literalStringInExpressionAST::getter_mLiteralString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @literalStringInExpressionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalStringInExpressionAST::cPtr_literalStringInExpressionAST (const GALGAS_lstring & in_mLiteralString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mLiteralString (in_mLiteralString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalStringInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

void cPtr_literalStringInExpressionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@literalStringInExpressionAST:" ;
  mProperty_mLiteralString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalStringInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringInExpressionAST (mProperty_mLiteralString COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @literalStringInExpressionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringInExpressionAST ("literalStringInExpressionAST",
                                                     & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalStringInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalStringInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringInExpressionAST GALGAS_literalStringInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringInExpressionAST result ;
  const GALGAS_literalStringInExpressionAST * p = (const GALGAS_literalStringInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_registerInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldName.objectCompare (p->mProperty_mFieldName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_registerInExpressionAST::objectCompare (const GALGAS_registerInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerInExpressionAST::GALGAS_registerInExpressionAST (const cPtr_registerInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::constructor_new (const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                                const GALGAS_lstring & inAttribute_mFieldName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  if (inAttribute_mControlRegisterLValue.isValid () && inAttribute_mFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerInExpressionAST (inAttribute_mControlRegisterLValue, inAttribute_mFieldName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_registerInExpressionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST cPtr_registerInExpressionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_registerInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerInExpressionAST * p = (const cPtr_registerInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerInExpressionAST) ;
    result = p->mProperty_mFieldName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_registerInExpressionAST::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @registerInExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_registerInExpressionAST::cPtr_registerInExpressionAST (const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                            const GALGAS_lstring & in_mFieldName
                                                            COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mFieldName (in_mFieldName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_registerInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

void cPtr_registerInExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@registerInExpressionAST:" ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_registerInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerInExpressionAST (mProperty_mControlRegisterLValue, mProperty_mFieldName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @registerInExpressionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerInExpressionAST ("registerInExpressionAST",
                                                & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerInExpressionAST GALGAS_registerInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerInExpressionAST result ;
  const GALGAS_registerInExpressionAST * p = (const GALGAS_registerInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_registerConstantExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterGroupName.objectCompare (p->mProperty_mRegisterGroupName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterName.objectCompare (p->mProperty_mRegisterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldValues.objectCompare (p->mProperty_mFieldValues) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_registerConstantExpressionAST::objectCompare (const GALGAS_registerConstantExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_registerConstantExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_registerIntegerFieldListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerConstantExpressionAST::GALGAS_registerConstantExpressionAST (const cPtr_registerConstantExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_registerConstantExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mRegisterGroupName,
                                                                                            const GALGAS_lstring & inAttribute_mRegisterName,
                                                                                            const GALGAS_registerIntegerFieldListAST & inAttribute_mFieldValues
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  if (inAttribute_mRegisterGroupName.isValid () && inAttribute_mRegisterName.isValid () && inAttribute_mFieldValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_registerConstantExpressionAST (inAttribute_mRegisterGroupName, inAttribute_mRegisterName, inAttribute_mFieldValues COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_registerConstantExpressionAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mRegisterGroupName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_registerConstantExpressionAST::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_registerConstantExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mRegisterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_registerConstantExpressionAST::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIntegerFieldListAST GALGAS_registerConstantExpressionAST::getter_mFieldValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerIntegerFieldListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_registerConstantExpressionAST * p = (const cPtr_registerConstantExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_registerConstantExpressionAST) ;
    result = p->mProperty_mFieldValues ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerIntegerFieldListAST cPtr_registerConstantExpressionAST::getter_mFieldValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFieldValues ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @registerConstantExpressionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_registerConstantExpressionAST::cPtr_registerConstantExpressionAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                        const GALGAS_lstring & in_mRegisterName,
                                                                        const GALGAS_registerIntegerFieldListAST & in_mFieldValues
                                                                        COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mRegisterGroupName (in_mRegisterGroupName),
mProperty_mRegisterName (in_mRegisterName),
mProperty_mFieldValues (in_mFieldValues) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_registerConstantExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

void cPtr_registerConstantExpressionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@registerConstantExpressionAST:" ;
  mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_registerConstantExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_registerConstantExpressionAST (mProperty_mRegisterGroupName, mProperty_mRegisterName, mProperty_mFieldValues COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @registerConstantExpressionAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerConstantExpressionAST ("registerConstantExpressionAST",
                                                      & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerConstantExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerConstantExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerConstantExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerConstantExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerConstantExpressionAST GALGAS_registerConstantExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerConstantExpressionAST result ;
  const GALGAS_registerConstantExpressionAST * p = (const GALGAS_registerConstantExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerConstantExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerConstantExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_primaryInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mReceiverName.objectCompare (p->mProperty_mReceiverName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_primaryInExpressionAST::objectCompare (const GALGAS_primaryInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_primaryInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_primaryInExpressionAccessListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAST::GALGAS_primaryInExpressionAST (const cPtr_primaryInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primaryInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mReceiverName,
                                                                              const GALGAS_primaryInExpressionAccessListAST & inAttribute_mAccessList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  if (inAttribute_mReceiverName.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_primaryInExpressionAST (inAttribute_mReceiverName, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_primaryInExpressionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    result = p->mProperty_mReceiverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_primaryInExpressionAST::getter_mReceiverName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mReceiverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAccessListAST GALGAS_primaryInExpressionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_primaryInExpressionAccessListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_primaryInExpressionAST * p = (const cPtr_primaryInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primaryInExpressionAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAccessListAST cPtr_primaryInExpressionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @primaryInExpressionAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_primaryInExpressionAST::cPtr_primaryInExpressionAST (const GALGAS_lstring & in_mReceiverName,
                                                          const GALGAS_primaryInExpressionAccessListAST & in_mAccessList
                                                          COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mReceiverName (in_mReceiverName),
mProperty_mAccessList (in_mAccessList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_primaryInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

void cPtr_primaryInExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@primaryInExpressionAST:" ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_primaryInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_primaryInExpressionAST (mProperty_mReceiverName, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @primaryInExpressionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAST ("primaryInExpressionAST",
                                               & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_primaryInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_primaryInExpressionAST GALGAS_primaryInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAST result ;
  const GALGAS_primaryInExpressionAST * p = (const GALGAS_primaryInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Extension method '@primaryInExpressionAST analyzePrimaryExpressionNoSelf'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf> gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzePrimaryExpressionNoSelf (const int32_t inClassIndex,
                                                          extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf inMethod) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzePrimaryExpressionNoSelf (const cPtr_primaryInExpressionAST * inObject,
                                                         const GALGAS_PLMType constin_inSelfType,
                                                         const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                         const GALGAS_PLMType constin_inOptionalTargetType,
                                                         const GALGAS_semanticContext constin_inContext,
                                                         const GALGAS_mode constin_inMode,
                                                         GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                         GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                         GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                         GALGAS_allocaList & io_ioAllocaList,
                                                         GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                         GALGAS_objectIR & out_outResult,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionNoSelf f = NULL ;
    if (classIndex < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.count ()) {
      f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.count ()) {
           f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (const cPtr_primaryInExpressionAST * inObject,
                                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                   const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                                   const GALGAS_mode constinArgument_inMode,
                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_valuedObject var_entity_9360 ;
  extensionMethod_searchEntity (ioArgument_ioUniversalMap, object->mProperty_mReceiverName, var_entity_9360, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 232)) ;
  switch (var_entity_9360.enumValue ()) {
  case GALGAS_valuedObject::kNotBuilt:
    break ;
  case GALGAS_valuedObject::kEnum_type:
    {
      const cEnumAssociatedValues_valuedObject_type * extractPtr_9882 = (const cEnumAssociatedValues_valuedObject_type *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_9882->mAssociatedValue0 ;
      outArgument_outResult = GALGAS_objectIR::constructor_type (extractedValue_type  COMMA_SOURCE_FILE ("expression-primary.galgas", 235)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 236)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_task:
    {
      const cEnumAssociatedValues_valuedObject_task * extractPtr_10445 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_10445->mAssociatedValue0 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("expression-primary.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 251))  COMMA_SOURCE_FILE ("expression-primary.galgas", 251)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 252)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_driver:
    {
      const cEnumAssociatedValues_valuedObject_driver * extractPtr_11118 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_11118->mAssociatedValue0 ;
      const GALGAS_bool extractedValue_instancied = extractPtr_11118->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = extractedValue_instancied.operator_not (SOURCE_FILE ("expression-primary.galgas", 267)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 268)), GALGAS_string ("the driver should be instancied"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 268)) ;
        }
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalVariable (object->mProperty_mReceiverName.getter_string (SOURCE_FILE ("expression-primary.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 270))  COMMA_SOURCE_FILE ("expression-primary.galgas", 270)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 271)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalConstant:
    {
      const cEnumAssociatedValues_valuedObject_globalConstant * extractPtr_11636 = (const cEnumAssociatedValues_valuedObject_globalConstant *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_objectIR = extractPtr_11636->mAssociatedValue0 ;
      outArgument_outResult = extractedValue_objectIR ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 287)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localConstant:
    {
      const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_12277 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12277->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_12277->mAssociatedValue1 ;
      {
      extensionSetter_readAccess (ioArgument_ioUniversalMap, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 302)) ;
      }
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 303))  COMMA_SOURCE_FILE ("expression-primary.galgas", 303)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 304)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_localVariable:
    {
      const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_12917 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_12917->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_12917->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 319))  COMMA_SOURCE_FILE ("expression-primary.galgas", 319)) ;
      {
      extensionSetter_readAccess (ioArgument_ioUniversalMap, object->mProperty_mReceiverName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 320)) ;
      }
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 321)) ;
      }
    }
    break ;
  case GALGAS_valuedObject::kEnum_globalSyncInstance:
    {
      const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_13518 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_9360.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_13518->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_13518->mAssociatedValue1 ;
      outArgument_outResult = GALGAS_objectIR::constructor_reference (extractedValue_type, function_llvmNameForGlobalSyncInstance (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 336))  COMMA_SOURCE_FILE ("expression-primary.galgas", 336)) ;
      {
      routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 337)) ;
      }
    }
    break ;
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (void) {
  enterExtensionMethod_analyzePrimaryExpressionNoSelf (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                       extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (void) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionNoSelf.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf (defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf,
                                                                                  freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionNoSelf) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension method '@primaryInExpressionAST analyzePrimaryExpressionWithSelf'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf> gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzePrimaryExpressionWithSelf (const int32_t inClassIndex,
                                                            extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf inMethod) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzePrimaryExpressionWithSelf (const cPtr_primaryInExpressionAST * inObject,
                                                           const GALGAS_PLMType constin_inSelfType,
                                                           const GALGAS_routineAttributes constin_inRoutineAttributes,
                                                           const GALGAS_PLMType constin_inOptionalTargetType,
                                                           const GALGAS_semanticContext constin_inContext,
                                                           const GALGAS_mode constin_inMode,
                                                           GALGAS_semanticTemporariesStruct & io_ioTemporaries,
                                                           GALGAS_staticEntityMap & io_ioStaticEntityMap,
                                                           GALGAS_universalValuedObjectMap & io_ioUniversalMap,
                                                           GALGAS_allocaList & io_ioAllocaList,
                                                           GALGAS_instructionListIR & io_ioInstructionGenerationList,
                                                           GALGAS_objectIR & out_outResult,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  out_outResult.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_primaryInExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_primaryInExpressionAST_analyzePrimaryExpressionWithSelf f = NULL ;
    if (classIndex < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.count ()) {
      f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.count ()) {
           f = gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSelfType, constin_inRoutineAttributes, constin_inOptionalTargetType, constin_inContext, constin_inMode, io_ioTemporaries, io_ioStaticEntityMap, io_ioUniversalMap, io_ioAllocaList, io_ioInstructionGenerationList, out_outResult, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (const cPtr_primaryInExpressionAST * inObject,
                                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                     const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                                     const GALGAS_mode constinArgument_inMode,
                                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 447))  COMMA_SOURCE_FILE ("expression-primary.galgas", 447)) ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_17027 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_17027.hasCurrentObject ()) {
    switch (enumerator_17027.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_17308 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_17027.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_low = extractPtr_17308->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_high = extractPtr_17308->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, outArgument_outResult, extractedValue_low, extractedValue_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 452)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_17580 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_17027.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_17580->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (outArgument_outResult, extractedValue_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 461)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_18189 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_17027.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_18189->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_18189->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_18189->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression (outArgument_outResult, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 470)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_18871 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_17027.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_18871->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_18871->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_18871->mAssociatedValue2 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 487)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 488)) ;
            outArgument_outResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, outArgument_outResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 490)) ;
          }
        }
      }
      break ;
    }
    enumerator_17027.gotoNextObject () ;
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (void) {
  enterExtensionMethod_analyzePrimaryExpressionWithSelf (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                         extensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (void) {
  gExtensionMethodTable_primaryInExpressionAST_analyzePrimaryExpressionWithSelf.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf (defineExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf,
                                                                                    freeExtensionMethod_primaryInExpressionAST_analyzePrimaryExpressionWithSelf) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_standaloneFunctionInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mStandaloneFunctionName.objectCompare (p->mProperty_mStandaloneFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_standaloneFunctionInExpressionAST::objectCompare (const GALGAS_standaloneFunctionInExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (void) :
GALGAS_expressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_standaloneFunctionInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                    GALGAS_location::constructor_nowhere (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneFunctionInExpressionAST::GALGAS_standaloneFunctionInExpressionAST (const cPtr_standaloneFunctionInExpressionAST * inSourcePtr) :
GALGAS_expressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneFunctionInExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mStandaloneFunctionName,
                                                                                                    const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                    const GALGAS_location & inAttribute_mEndOfArguments
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  if (inAttribute_mStandaloneFunctionName.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standaloneFunctionInExpressionAST (inAttribute_mStandaloneFunctionName, inAttribute_mArguments, inAttribute_mEndOfArguments COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_standaloneFunctionInExpressionAST::getter_mStandaloneFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    result = p->mProperty_mStandaloneFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_standaloneFunctionInExpressionAST::getter_mStandaloneFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStandaloneFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST GALGAS_standaloneFunctionInExpressionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_effectiveArgumentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    result = p->mProperty_mArguments ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_effectiveArgumentListAST cPtr_standaloneFunctionInExpressionAST::getter_mArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArguments ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_standaloneFunctionInExpressionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneFunctionInExpressionAST * p = (const cPtr_standaloneFunctionInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneFunctionInExpressionAST) ;
    result = p->mProperty_mEndOfArguments ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_standaloneFunctionInExpressionAST::getter_mEndOfArguments (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfArguments ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @standaloneFunctionInExpressionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_standaloneFunctionInExpressionAST::cPtr_standaloneFunctionInExpressionAST (const GALGAS_lstring & in_mStandaloneFunctionName,
                                                                                const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                const GALGAS_location & in_mEndOfArguments
                                                                                COMMA_LOCATION_ARGS) :
cPtr_expressionAST (THERE),
mProperty_mStandaloneFunctionName (in_mStandaloneFunctionName),
mProperty_mArguments (in_mArguments),
mProperty_mEndOfArguments (in_mEndOfArguments) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_standaloneFunctionInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

void cPtr_standaloneFunctionInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@standaloneFunctionInExpressionAST:" ;
  mProperty_mStandaloneFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_standaloneFunctionInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_standaloneFunctionInExpressionAST (mProperty_mStandaloneFunctionName, mProperty_mArguments, mProperty_mEndOfArguments COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @standaloneFunctionInExpressionAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ("standaloneFunctionInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_expressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_standaloneFunctionInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_standaloneFunctionInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneFunctionInExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneFunctionInExpressionAST GALGAS_standaloneFunctionInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_standaloneFunctionInExpressionAST result ;
  const GALGAS_standaloneFunctionInExpressionAST * p = (const GALGAS_standaloneFunctionInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standaloneFunctionInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneFunctionInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_checkInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_checkInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCheckMessage.objectCompare (p->mProperty_mCheckMessage) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_checkInstructionAST::objectCompare (const GALGAS_checkInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkInstructionAST::GALGAS_checkInstructionAST (const cPtr_checkInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_checkInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_lstring & inAttribute_mCheckMessage,
                                                                        const GALGAS_expressionAST & inAttribute_mExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCheckMessage.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_checkInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCheckMessage, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_checkInstructionAST::getter_mCheckMessage (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mProperty_mCheckMessage ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_checkInstructionAST::getter_mCheckMessage (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCheckMessage ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_checkInstructionAST * p = (const cPtr_checkInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_checkInstructionAST) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_checkInstructionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @checkInstructionAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_checkInstructionAST::cPtr_checkInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_lstring & in_mCheckMessage,
                                                    const GALGAS_expressionAST & in_mExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCheckMessage (in_mCheckMessage),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_checkInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

void cPtr_checkInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@checkInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCheckMessage.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_checkInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_checkInstructionAST (mProperty_mInstructionLocation, mProperty_mCheckMessage, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @checkInstructionAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_checkInstructionAST ("checkInstructionAST",
                                            & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_checkInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_checkInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_checkInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_checkInstructionAST GALGAS_checkInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_checkInstructionAST result ;
  const GALGAS_checkInstructionAST * p = (const GALGAS_checkInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_checkInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_assignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetAST.objectCompare (p->mProperty_mTargetAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_assignmentInstructionAST::objectCompare (const GALGAS_assignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST::GALGAS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                  const GALGAS_LValueAST & inAttribute_mTargetAST,
                                                                                  const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetAST.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTargetAST, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST GALGAS_assignmentInstructionAST::getter_mTargetAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mTargetAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueAST cPtr_assignmentInstructionAST::getter_mTargetAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentInstructionAST * p = (const cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_assignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @assignmentInstructionAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_LValueAST & in_mTargetAST,
                                                              const GALGAS_expressionAST & in_mSourceExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetAST (in_mTargetAST),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@assignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_assignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetAST, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @assignmentInstructionAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                 & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_assignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_assignmentInstructionAST GALGAS_assignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentInstructionAST result ;
  const GALGAS_assignmentInstructionAST * p = (const GALGAS_assignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_controlRegisterAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_controlRegisterAssignmentInstructionAST * p = (const cPtr_controlRegisterAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssignmentKind.objectCompare (p->mProperty_mAssignmentKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_controlRegisterAssignmentInstructionAST::objectCompare (const GALGAS_controlRegisterAssignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterAssignmentInstructionAST::GALGAS_controlRegisterAssignmentInstructionAST (const cPtr_controlRegisterAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterAssignmentInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                                                                const GALGAS_controlRegisterAssignmentOperatorKind & inAttribute_mAssignmentKind,
                                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mControlRegisterLValue.isValid () && inAttribute_mAssignmentKind.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_controlRegisterAssignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mControlRegisterLValue, inAttribute_mAssignmentKind, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_controlRegisterAssignmentInstructionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterAssignmentInstructionAST * p = (const cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST cPtr_controlRegisterAssignmentInstructionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterAssignmentOperatorKind GALGAS_controlRegisterAssignmentInstructionAST::getter_mAssignmentKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterAssignmentOperatorKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterAssignmentInstructionAST * p = (const cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    result = p->mProperty_mAssignmentKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterAssignmentOperatorKind cPtr_controlRegisterAssignmentInstructionAST::getter_mAssignmentKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAssignmentKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_controlRegisterAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterAssignmentInstructionAST * p = (const cPtr_controlRegisterAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterAssignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_controlRegisterAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                          Pointer class for @controlRegisterAssignmentInstructionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_controlRegisterAssignmentInstructionAST::cPtr_controlRegisterAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                                                            const GALGAS_controlRegisterAssignmentOperatorKind & in_mAssignmentKind,
                                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mAssignmentKind (in_mAssignmentKind),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_controlRegisterAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

void cPtr_controlRegisterAssignmentInstructionAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@controlRegisterAssignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssignmentKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_controlRegisterAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_controlRegisterAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mAssignmentKind, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @controlRegisterAssignmentInstructionAST type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ("controlRegisterAssignmentInstructionAST",
                                                                & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterAssignmentInstructionAST GALGAS_controlRegisterAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterAssignmentInstructionAST result ;
  const GALGAS_controlRegisterAssignmentInstructionAST * p = (const GALGAS_controlRegisterAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_sliceAssignmentInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSliceAssignmentList.objectCompare (p->mProperty_mSliceAssignmentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpressionLocation.objectCompare (p->mProperty_mSourceExpressionLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_sliceAssignmentInstructionAST::objectCompare (const GALGAS_sliceAssignmentInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentInstructionAST::GALGAS_sliceAssignmentInstructionAST (const cPtr_sliceAssignmentInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sliceAssignmentInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                                            const GALGAS_sliceAssignmentListAST & inAttribute_mSliceAssignmentList,
                                                                                            const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                                            const GALGAS_location & inAttribute_mSourceExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mSliceAssignmentList.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mSourceExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sliceAssignmentInstructionAST (inAttribute_mInstructionLocation, inAttribute_mTypeName, inAttribute_mSliceAssignmentList, inAttribute_mSourceExpression, inAttribute_mSourceExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sliceAssignmentInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_sliceAssignmentInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST GALGAS_sliceAssignmentInstructionAST::getter_mSliceAssignmentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sliceAssignmentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    result = p->mProperty_mSliceAssignmentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentListAST cPtr_sliceAssignmentInstructionAST::getter_mSliceAssignmentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSliceAssignmentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_sliceAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_sliceAssignmentInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_sliceAssignmentInstructionAST::getter_mSourceExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_sliceAssignmentInstructionAST * p = (const cPtr_sliceAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sliceAssignmentInstructionAST) ;
    result = p->mProperty_mSourceExpressionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_sliceAssignmentInstructionAST::getter_mSourceExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpressionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @sliceAssignmentInstructionAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_sliceAssignmentInstructionAST::cPtr_sliceAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_lstring & in_mTypeName,
                                                                        const GALGAS_sliceAssignmentListAST & in_mSliceAssignmentList,
                                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mSliceAssignmentList (in_mSliceAssignmentList),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mSourceExpressionLocation (in_mSourceExpressionLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_sliceAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

void cPtr_sliceAssignmentInstructionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@sliceAssignmentInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSliceAssignmentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_sliceAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sliceAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mSliceAssignmentList, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @sliceAssignmentInstructionAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ("sliceAssignmentInstructionAST",
                                                      & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sliceAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sliceAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceAssignmentInstructionAST GALGAS_sliceAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentInstructionAST result ;
  const GALGAS_sliceAssignmentInstructionAST * p = (const GALGAS_sliceAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_bitbandInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterLValue.objectCompare (p->mProperty_mControlRegisterLValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitExpression.objectCompare (p->mProperty_mBitExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitExpressionLocation.objectCompare (p->mProperty_mBitExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpressionLocation.objectCompare (p->mProperty_mSourceExpressionLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_bitbandInstructionAST::objectCompare (const GALGAS_bitbandInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bitbandInstructionAST::GALGAS_bitbandInstructionAST (const cPtr_bitbandInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bitbandInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_controlRegisterLValueAST & inAttribute_mControlRegisterLValue,
                                                                            const GALGAS_expressionAST & inAttribute_mBitExpression,
                                                                            const GALGAS_location & inAttribute_mBitExpressionLocation,
                                                                            const GALGAS_expressionAST & inAttribute_mSourceExpression,
                                                                            const GALGAS_location & inAttribute_mSourceExpressionLocation
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mControlRegisterLValue.isValid () && inAttribute_mBitExpression.isValid () && inAttribute_mBitExpressionLocation.isValid () && inAttribute_mSourceExpression.isValid () && inAttribute_mSourceExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bitbandInstructionAST (inAttribute_mInstructionLocation, inAttribute_mControlRegisterLValue, inAttribute_mBitExpression, inAttribute_mBitExpressionLocation, inAttribute_mSourceExpression, inAttribute_mSourceExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST GALGAS_bitbandInstructionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterLValueAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    result = p->mProperty_mControlRegisterLValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterLValueAST cPtr_bitbandInstructionAST::getter_mControlRegisterLValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterLValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_bitbandInstructionAST::getter_mBitExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    result = p->mProperty_mBitExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_bitbandInstructionAST::getter_mBitExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_bitbandInstructionAST::getter_mBitExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    result = p->mProperty_mBitExpressionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_bitbandInstructionAST::getter_mBitExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitExpressionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_bitbandInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_bitbandInstructionAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_bitbandInstructionAST::getter_mSourceExpressionLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_bitbandInstructionAST * p = (const cPtr_bitbandInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bitbandInstructionAST) ;
    result = p->mProperty_mSourceExpressionLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_bitbandInstructionAST::getter_mSourceExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpressionLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @bitbandInstructionAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_bitbandInstructionAST::cPtr_bitbandInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_controlRegisterLValueAST & in_mControlRegisterLValue,
                                                        const GALGAS_expressionAST & in_mBitExpression,
                                                        const GALGAS_location & in_mBitExpressionLocation,
                                                        const GALGAS_expressionAST & in_mSourceExpression,
                                                        const GALGAS_location & in_mSourceExpressionLocation
                                                        COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mControlRegisterLValue (in_mControlRegisterLValue),
mProperty_mBitExpression (in_mBitExpression),
mProperty_mBitExpressionLocation (in_mBitExpressionLocation),
mProperty_mSourceExpression (in_mSourceExpression),
mProperty_mSourceExpressionLocation (in_mSourceExpressionLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_bitbandInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

void cPtr_bitbandInstructionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@bitbandInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControlRegisterLValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBitExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_bitbandInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bitbandInstructionAST (mProperty_mInstructionLocation, mProperty_mControlRegisterLValue, mProperty_mBitExpression, mProperty_mBitExpressionLocation, mProperty_mSourceExpression, mProperty_mSourceExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @bitbandInstructionAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bitbandInstructionAST ("bitbandInstructionAST",
                                              & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bitbandInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitbandInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bitbandInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bitbandInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bitbandInstructionAST GALGAS_bitbandInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_bitbandInstructionAST result ;
  const GALGAS_bitbandInstructionAST * p = (const GALGAS_bitbandInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bitbandInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitbandInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_varInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_varInstructionWithAssignmentAST::objectCompare (const GALGAS_varInstructionWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionWithAssignmentAST::GALGAS_varInstructionWithAssignmentAST (const cPtr_varInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionWithAssignmentAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mVarName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_varInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionWithAssignmentAST * p = (const cPtr_varInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_varInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @varInstructionWithAssignmentAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_varInstructionWithAssignmentAST::cPtr_varInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mVarName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_varInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

void cPtr_varInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@varInstructionWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_varInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @varInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ("varInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionWithAssignmentAST GALGAS_varInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionWithAssignmentAST result ;
  const GALGAS_varInstructionWithAssignmentAST * p = (const GALGAS_varInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_varInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_varInstructionAST::objectCompare (const GALGAS_varInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionAST::GALGAS_varInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionAST::GALGAS_varInstructionAST (const cPtr_varInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionAST GALGAS_varInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mTypeName
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_varInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInstructionAST * p = (const cPtr_varInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_varInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @varInstructionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_varInstructionAST::cPtr_varInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mTypeName
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_varInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

void cPtr_varInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@varInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_varInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @varInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInstructionAST ("varInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_varInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_varInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_varInstructionAST GALGAS_varInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varInstructionAST result ;
  const GALGAS_varInstructionAST * p = (const GALGAS_varInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_letInstructionWithAssignmentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantName.objectCompare (p->mProperty_mConstantName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionalTypeName.objectCompare (p->mProperty_mOptionalTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceExpression.objectCompare (p->mProperty_mSourceExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_letInstructionWithAssignmentAST::objectCompare (const GALGAS_letInstructionWithAssignmentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_letInstructionWithAssignmentAST::GALGAS_letInstructionWithAssignmentAST (const cPtr_letInstructionWithAssignmentAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_letInstructionWithAssignmentAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                const GALGAS_lstring & inAttribute_mConstantName,
                                                                                                const GALGAS_lstring & inAttribute_mOptionalTypeName,
                                                                                                const GALGAS_expressionAST & inAttribute_mSourceExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mConstantName.isValid () && inAttribute_mOptionalTypeName.isValid () && inAttribute_mSourceExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_letInstructionWithAssignmentAST (inAttribute_mInstructionLocation, inAttribute_mConstantName, inAttribute_mOptionalTypeName, inAttribute_mSourceExpression COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mProperty_mConstantName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mProperty_mOptionalTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_letInstructionWithAssignmentAST::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionalTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_letInstructionWithAssignmentAST * p = (const cPtr_letInstructionWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_letInstructionWithAssignmentAST) ;
    result = p->mProperty_mSourceExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_letInstructionWithAssignmentAST::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @letInstructionWithAssignmentAST class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_letInstructionWithAssignmentAST::cPtr_letInstructionWithAssignmentAST (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_lstring & in_mConstantName,
                                                                            const GALGAS_lstring & in_mOptionalTypeName,
                                                                            const GALGAS_expressionAST & in_mSourceExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mConstantName (in_mConstantName),
mProperty_mOptionalTypeName (in_mOptionalTypeName),
mProperty_mSourceExpression (in_mSourceExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_letInstructionWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

void cPtr_letInstructionWithAssignmentAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@letInstructionWithAssignmentAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_letInstructionWithAssignmentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_letInstructionWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mOptionalTypeName, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @letInstructionWithAssignmentAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ("letInstructionWithAssignmentAST",
                                                        & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_letInstructionWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_letInstructionWithAssignmentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_letInstructionWithAssignmentAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_letInstructionWithAssignmentAST GALGAS_letInstructionWithAssignmentAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_letInstructionWithAssignmentAST result ;
  const GALGAS_letInstructionWithAssignmentAST * p = (const GALGAS_letInstructionWithAssignmentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_letInstructionWithAssignmentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("letInstructionWithAssignmentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_whileExpression.objectCompare (p->mProperty_mEndOf_5F_whileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStaticWhileExpression.objectCompare (p->mProperty_mStaticWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_for_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_for_5F_instruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forInstructionAST::objectCompare (const GALGAS_forInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST::GALGAS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST GALGAS_forInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_lstring & inAttribute_mVarName,
                                                                    const GALGAS_lstring & inAttribute_mIteratedObject,
                                                                    const GALGAS_expressionAST & inAttribute_mWhileExpression,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_whileExpression,
                                                                    const GALGAS_bool & inAttribute_mStaticWhileExpression,
                                                                    const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_for_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOf_5F_whileExpression.isValid () && inAttribute_mStaticWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_for_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mIteratedObject, inAttribute_mWhileExpression, inAttribute_mEndOf_5F_whileExpression, inAttribute_mStaticWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_forInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_forInstructionAST::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_forInstructionAST::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_forInstructionAST::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_whileExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_whileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_whileExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_forInstructionAST::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mStaticWhileExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_forInstructionAST::getter_mStaticWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticWhileExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_forInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionAST::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionAST * p = (const cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    result = p->mProperty_mEndOf_5F_for_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionAST::getter_mEndOf_5F_for_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_for_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @forInstructionAST class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forInstructionAST::cPtr_forInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_lstring & in_mVarName,
                                                const GALGAS_lstring & in_mIteratedObject,
                                                const GALGAS_expressionAST & in_mWhileExpression,
                                                const GALGAS_location & in_mEndOf_5F_whileExpression,
                                                const GALGAS_bool & in_mStaticWhileExpression,
                                                const GALGAS_instructionListAST & in_mDoInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_for_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOf_5F_whileExpression (in_mEndOf_5F_whileExpression),
mProperty_mStaticWhileExpression (in_mStaticWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_for_5F_instruction (in_mEndOf_5F_for_5F_instruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@forInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_whileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStaticWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_for_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mIteratedObject, mProperty_mWhileExpression, mProperty_mEndOf_5F_whileExpression, mProperty_mStaticWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOf_5F_for_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @forInstructionAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                          & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionAST GALGAS_forInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionAST result ;
  const GALGAS_forInstructionAST * p = (const GALGAS_forInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forInstructionOnArrayIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedValueName.objectCompare (p->mProperty_mEnumeratedValueName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObjectName.objectCompare (p->mProperty_mIteratedObjectName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIteratedObject.objectCompare (p->mProperty_mIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpressionResult.objectCompare (p->mProperty_mWhileExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInvokedFunctionSet.objectCompare (p->mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forInstructionOnArrayIR::objectCompare (const GALGAS_forInstructionOnArrayIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnArrayIR::GALGAS_forInstructionOnArrayIR (const cPtr_forInstructionOnArrayIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnArrayIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::constructor_new (const GALGAS_string & inAttribute_mEnumeratedValueName,
                                                                                const GALGAS_lstring & inAttribute_mIteratedObjectName,
                                                                                const GALGAS_objectIR & inAttribute_mIteratedObject,
                                                                                const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                const GALGAS_objectIR & inAttribute_mWhileExpressionResult,
                                                                                const GALGAS_instructionListIR & inAttribute_mDoInstructionList,
                                                                                const GALGAS_PLMType & inAttribute_mElementType,
                                                                                const GALGAS_uint & inAttribute_mArraySize,
                                                                                const GALGAS_stringset & inAttribute_mInvokedFunctionSet
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  if (inAttribute_mEnumeratedValueName.isValid () && inAttribute_mIteratedObjectName.isValid () && inAttribute_mIteratedObject.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionResult.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid () && inAttribute_mInvokedFunctionSet.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnArrayIR (inAttribute_mEnumeratedValueName, inAttribute_mIteratedObjectName, inAttribute_mIteratedObject, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionResult, inAttribute_mDoInstructionList, inAttribute_mElementType, inAttribute_mArraySize, inAttribute_mInvokedFunctionSet COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forInstructionOnArrayIR::getter_mEnumeratedValueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mEnumeratedValueName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_forInstructionOnArrayIR::getter_mEnumeratedValueName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumeratedValueName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_forInstructionOnArrayIR::getter_mIteratedObjectName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mIteratedObjectName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_forInstructionOnArrayIR::getter_mIteratedObjectName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObjectName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mIteratedObject ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forInstructionOnArrayIR::getter_mIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIteratedObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forInstructionOnArrayIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forInstructionOnArrayIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mWhileExpressionResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forInstructionOnArrayIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpressionResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forInstructionOnArrayIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forInstructionOnArrayIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_forInstructionOnArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_forInstructionOnArrayIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_forInstructionOnArrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_forInstructionOnArrayIR::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_forInstructionOnArrayIR::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnArrayIR * p = (const cPtr_forInstructionOnArrayIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnArrayIR) ;
    result = p->mProperty_mInvokedFunctionSet ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_forInstructionOnArrayIR::getter_mInvokedFunctionSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInvokedFunctionSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @forInstructionOnArrayIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forInstructionOnArrayIR::cPtr_forInstructionOnArrayIR (const GALGAS_string & in_mEnumeratedValueName,
                                                            const GALGAS_lstring & in_mIteratedObjectName,
                                                            const GALGAS_objectIR & in_mIteratedObject,
                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                            const GALGAS_objectIR & in_mWhileExpressionResult,
                                                            const GALGAS_instructionListIR & in_mDoInstructionList,
                                                            const GALGAS_PLMType & in_mElementType,
                                                            const GALGAS_uint & in_mArraySize,
                                                            const GALGAS_stringset & in_mInvokedFunctionSet
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mEnumeratedValueName (in_mEnumeratedValueName),
mProperty_mIteratedObjectName (in_mIteratedObjectName),
mProperty_mIteratedObject (in_mIteratedObject),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionResult (in_mWhileExpressionResult),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize),
mProperty_mInvokedFunctionSet (in_mInvokedFunctionSet) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forInstructionOnArrayIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

void cPtr_forInstructionOnArrayIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@forInstructionOnArrayIR:" ;
  mProperty_mEnumeratedValueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObjectName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forInstructionOnArrayIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionOnArrayIR (mProperty_mEnumeratedValueName, mProperty_mIteratedObjectName, mProperty_mIteratedObject, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList, mProperty_mElementType, mProperty_mArraySize, mProperty_mInvokedFunctionSet COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @forInstructionOnArrayIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnArrayIR ("forInstructionOnArrayIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionOnArrayIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnArrayIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionOnArrayIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnArrayIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnArrayIR GALGAS_forInstructionOnArrayIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnArrayIR result ;
  const GALGAS_forInstructionOnArrayIR * p = (const GALGAS_forInstructionOnArrayIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionOnArrayIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnArrayIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forInstructionOnLiteralStringIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringElementIteratedObject.objectCompare (p->mProperty_mStringElementIteratedObject) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralStringType.objectCompare (p->mProperty_mLiteralStringType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileInstructionList.objectCompare (p->mProperty_mWhileInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpressionResult.objectCompare (p->mProperty_mWhileExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forInstructionOnLiteralStringIR::objectCompare (const GALGAS_forInstructionOnLiteralStringIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnLiteralStringIR::GALGAS_forInstructionOnLiteralStringIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnLiteralStringIR::GALGAS_forInstructionOnLiteralStringIR (const cPtr_forInstructionOnLiteralStringIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionOnLiteralStringIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_objectIR & inAttribute_mStringElementIteratedObject,
                                                                                                const GALGAS_PLMType & inAttribute_mLiteralStringType,
                                                                                                const GALGAS_instructionListIR & inAttribute_mWhileInstructionList,
                                                                                                const GALGAS_objectIR & inAttribute_mWhileExpressionResult,
                                                                                                const GALGAS_instructionListIR & inAttribute_mDoInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mLocation.isValid () && inAttribute_mStringElementIteratedObject.isValid () && inAttribute_mLiteralStringType.isValid () && inAttribute_mWhileInstructionList.isValid () && inAttribute_mWhileExpressionResult.isValid () && inAttribute_mDoInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forInstructionOnLiteralStringIR (inAttribute_mVarName, inAttribute_mLocation, inAttribute_mStringElementIteratedObject, inAttribute_mLiteralStringType, inAttribute_mWhileInstructionList, inAttribute_mWhileExpressionResult, inAttribute_mDoInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forInstructionOnLiteralStringIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_forInstructionOnLiteralStringIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forInstructionOnLiteralStringIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forInstructionOnLiteralStringIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forInstructionOnLiteralStringIR::getter_mStringElementIteratedObject (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mStringElementIteratedObject ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forInstructionOnLiteralStringIR::getter_mStringElementIteratedObject (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStringElementIteratedObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_forInstructionOnLiteralStringIR::getter_mLiteralStringType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mLiteralStringType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_forInstructionOnLiteralStringIR::getter_mLiteralStringType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLiteralStringType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forInstructionOnLiteralStringIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mWhileInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forInstructionOnLiteralStringIR::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forInstructionOnLiteralStringIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mWhileExpressionResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forInstructionOnLiteralStringIR::getter_mWhileExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpressionResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forInstructionOnLiteralStringIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forInstructionOnLiteralStringIR * p = (const cPtr_forInstructionOnLiteralStringIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionOnLiteralStringIR) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forInstructionOnLiteralStringIR::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @forInstructionOnLiteralStringIR class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forInstructionOnLiteralStringIR::cPtr_forInstructionOnLiteralStringIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mStringElementIteratedObject,
                                                                            const GALGAS_PLMType & in_mLiteralStringType,
                                                                            const GALGAS_instructionListIR & in_mWhileInstructionList,
                                                                            const GALGAS_objectIR & in_mWhileExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mDoInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mLocation (in_mLocation),
mProperty_mStringElementIteratedObject (in_mStringElementIteratedObject),
mProperty_mLiteralStringType (in_mLiteralStringType),
mProperty_mWhileInstructionList (in_mWhileInstructionList),
mProperty_mWhileExpressionResult (in_mWhileExpressionResult),
mProperty_mDoInstructionList (in_mDoInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forInstructionOnLiteralStringIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

void cPtr_forInstructionOnLiteralStringIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forInstructionOnLiteralStringIR:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStringElementIteratedObject.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLiteralStringType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forInstructionOnLiteralStringIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forInstructionOnLiteralStringIR (mProperty_mVarName, mProperty_mLocation, mProperty_mStringElementIteratedObject, mProperty_mLiteralStringType, mProperty_mWhileInstructionList, mProperty_mWhileExpressionResult, mProperty_mDoInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @forInstructionOnLiteralStringIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ("forInstructionOnLiteralStringIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forInstructionOnLiteralStringIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forInstructionOnLiteralStringIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionOnLiteralStringIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forInstructionOnLiteralStringIR GALGAS_forInstructionOnLiteralStringIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionOnLiteralStringIR result ;
  const GALGAS_forInstructionOnLiteralStringIR * p = (const GALGAS_forInstructionOnLiteralStringIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionOnLiteralStringIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionOnLiteralStringIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forLowerUpperBoundInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerBoundExpression.objectCompare (p->mProperty_mLowerBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBoundExpression.objectCompare (p->mProperty_mUpperBoundExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_do_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_do_5F_instruction) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionAST::objectCompare (const GALGAS_forLowerUpperBoundInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (void) :
GALGAS_instructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionAST::GALGAS_forLowerUpperBoundInstructionAST (const cPtr_forLowerUpperBoundInstructionAST * inSourcePtr) :
GALGAS_instructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                  const GALGAS_lstring & inAttribute_mVarName,
                                                                                                  const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                  const GALGAS_expressionAST & inAttribute_mLowerBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                                                  const GALGAS_expressionAST & inAttribute_mUpperBoundExpression,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                                                  const GALGAS_instructionListAST & inAttribute_mDoInstructionList,
                                                                                                  const GALGAS_location & inAttribute_mEndOf_5F_do_5F_instruction
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVarName.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mLowerBoundExpression.isValid () && inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction.isValid () && inAttribute_mUpperBoundExpression.isValid () && inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOf_5F_do_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionAST (inAttribute_mInstructionLocation, inAttribute_mVarName, inAttribute_mTypeName, inAttribute_mLowerBoundExpression, inAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, inAttribute_mUpperBoundExpression, inAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, inAttribute_mDoInstructionList, inAttribute_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_forLowerUpperBoundInstructionAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mLowerBoundExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mLowerBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerBoundExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_lowerBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mUpperBoundExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cPtr_forLowerUpperBoundInstructionAST::getter_mUpperBoundExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperBoundExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_upperBoundExpression_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_upperBoundExpression_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST cPtr_forLowerUpperBoundInstructionAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionAST * p = (const cPtr_forLowerUpperBoundInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionAST) ;
    result = p->mProperty_mEndOf_5F_do_5F_instruction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forLowerUpperBoundInstructionAST::getter_mEndOf_5F_do_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_do_5F_instruction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @forLowerUpperBoundInstructionAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forLowerUpperBoundInstructionAST::cPtr_forLowerUpperBoundInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_lstring & in_mVarName,
                                                                              const GALGAS_lstring & in_mTypeName,
                                                                              const GALGAS_expressionAST & in_mLowerBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_lowerBoundExpression_5F_instruction,
                                                                              const GALGAS_expressionAST & in_mUpperBoundExpression,
                                                                              const GALGAS_location & in_mEndOf_5F_upperBoundExpression_5F_instruction,
                                                                              const GALGAS_instructionListAST & in_mDoInstructionList,
                                                                              const GALGAS_location & in_mEndOf_5F_do_5F_instruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_instructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVarName (in_mVarName),
mProperty_mTypeName (in_mTypeName),
mProperty_mLowerBoundExpression (in_mLowerBoundExpression),
mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (in_mEndOf_5F_lowerBoundExpression_5F_instruction),
mProperty_mUpperBoundExpression (in_mUpperBoundExpression),
mProperty_mEndOf_5F_upperBoundExpression_5F_instruction (in_mEndOf_5F_upperBoundExpression_5F_instruction),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOf_5F_do_5F_instruction (in_mEndOf_5F_do_5F_instruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

void cPtr_forLowerUpperBoundInstructionAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_upperBoundExpression_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_do_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forLowerUpperBoundInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionAST (mProperty_mInstructionLocation, mProperty_mVarName, mProperty_mTypeName, mProperty_mLowerBoundExpression, mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, mProperty_mUpperBoundExpression, mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @forLowerUpperBoundInstructionAST type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ("forLowerUpperBoundInstructionAST",
                                                         & kTypeDescriptor_GALGAS_instructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionAST GALGAS_forLowerUpperBoundInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionAST result ;
  const GALGAS_forLowerUpperBoundInstructionAST * p = (const GALGAS_forLowerUpperBoundInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_forLowerUpperBoundInstructionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUnsigned.objectCompare (p->mProperty_mUnsigned) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLowerExpressionResult.objectCompare (p->mProperty_mLowerExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperExpressionResult.objectCompare (p->mProperty_mUpperExpressionResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_forLowerUpperBoundInstructionIR::objectCompare (const GALGAS_forLowerUpperBoundInstructionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionIR::GALGAS_forLowerUpperBoundInstructionIR (const cPtr_forLowerUpperBoundInstructionIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forLowerUpperBoundInstructionIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::constructor_new (const GALGAS_string & inAttribute_mVarName,
                                                                                                const GALGAS_PLMType & inAttribute_mType,
                                                                                                const GALGAS_bool & inAttribute_mUnsigned,
                                                                                                const GALGAS_location & inAttribute_mLocation,
                                                                                                const GALGAS_objectIR & inAttribute_mLowerExpressionResult,
                                                                                                const GALGAS_objectIR & inAttribute_mUpperExpressionResult,
                                                                                                const GALGAS_instructionListIR & inAttribute_mInstructionList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mType.isValid () && inAttribute_mUnsigned.isValid () && inAttribute_mLocation.isValid () && inAttribute_mLowerExpressionResult.isValid () && inAttribute_mUpperExpressionResult.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forLowerUpperBoundInstructionIR (inAttribute_mVarName, inAttribute_mType, inAttribute_mUnsigned, inAttribute_mLocation, inAttribute_mLowerExpressionResult, inAttribute_mUpperExpressionResult, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_forLowerUpperBoundInstructionIR::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_forLowerUpperBoundInstructionIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mUnsigned ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_forLowerUpperBoundInstructionIR::getter_mUnsigned (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUnsigned ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_forLowerUpperBoundInstructionIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mLowerExpressionResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mLowerExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLowerExpressionResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mUpperExpressionResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_forLowerUpperBoundInstructionIR::getter_mUpperExpressionResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUpperExpressionResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR GALGAS_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_forLowerUpperBoundInstructionIR * p = (const cPtr_forLowerUpperBoundInstructionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forLowerUpperBoundInstructionIR) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListIR cPtr_forLowerUpperBoundInstructionIR::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @forLowerUpperBoundInstructionIR class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_forLowerUpperBoundInstructionIR::cPtr_forLowerUpperBoundInstructionIR (const GALGAS_string & in_mVarName,
                                                                            const GALGAS_PLMType & in_mType,
                                                                            const GALGAS_bool & in_mUnsigned,
                                                                            const GALGAS_location & in_mLocation,
                                                                            const GALGAS_objectIR & in_mLowerExpressionResult,
                                                                            const GALGAS_objectIR & in_mUpperExpressionResult,
                                                                            const GALGAS_instructionListIR & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mType (in_mType),
mProperty_mUnsigned (in_mUnsigned),
mProperty_mLocation (in_mLocation),
mProperty_mLowerExpressionResult (in_mLowerExpressionResult),
mProperty_mUpperExpressionResult (in_mUpperExpressionResult),
mProperty_mInstructionList (in_mInstructionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_forLowerUpperBoundInstructionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

void cPtr_forLowerUpperBoundInstructionIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@forLowerUpperBoundInstructionIR:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLowerExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperExpressionResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_forLowerUpperBoundInstructionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forLowerUpperBoundInstructionIR (mProperty_mVarName, mProperty_mType, mProperty_mUnsigned, mProperty_mLocation, mProperty_mLowerExpressionResult, mProperty_mUpperExpressionResult, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @forLowerUpperBoundInstructionIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ("forLowerUpperBoundInstructionIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_forLowerUpperBoundInstructionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_forLowerUpperBoundInstructionIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forLowerUpperBoundInstructionIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_forLowerUpperBoundInstructionIR GALGAS_forLowerUpperBoundInstructionIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_forLowerUpperBoundInstructionIR result ;
  const GALGAS_forLowerUpperBoundInstructionIR * p = (const GALGAS_forLowerUpperBoundInstructionIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forLowerUpperBoundInstructionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forLowerUpperBoundInstructionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_standAloneProcedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSandAloneRoutineName.objectCompare (p->mProperty_mSandAloneRoutineName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_standAloneProcedureCallInstructionAST::objectCompare (const GALGAS_standAloneProcedureCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_standAloneProcedureCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                                        GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_lstring::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standAloneProcedureCallInstructionAST::GALGAS_standAloneProcedureCallInstructionAST (const cPtr_standAloneProcedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standAloneProcedureCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                            const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                                            const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                                            const GALGAS_lstring & inAttribute_mSandAloneRoutineName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mSandAloneRoutineName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standAloneProcedureCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mSandAloneRoutineName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_standAloneProcedureCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_standAloneProcedureCallInstructionAST * p = (const cPtr_standAloneProcedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standAloneProcedureCallInstructionAST) ;
    result = p->mProperty_mSandAloneRoutineName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_standAloneProcedureCallInstructionAST::getter_mSandAloneRoutineName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSandAloneRoutineName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @standAloneProcedureCallInstructionAST class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_standAloneProcedureCallInstructionAST::cPtr_standAloneProcedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                                        const GALGAS_location & in_mEndOfArguments,
                                                                                        const GALGAS_lstring & in_mSandAloneRoutineName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mSandAloneRoutineName (in_mSandAloneRoutineName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_standAloneProcedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

void cPtr_standAloneProcedureCallInstructionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@standAloneProcedureCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSandAloneRoutineName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_standAloneProcedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_standAloneProcedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mSandAloneRoutineName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @standAloneProcedureCallInstructionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ("standAloneProcedureCallInstructionAST",
                                                              & kTypeDescriptor_GALGAS_callInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_standAloneProcedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_standAloneProcedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standAloneProcedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standAloneProcedureCallInstructionAST GALGAS_standAloneProcedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_standAloneProcedureCallInstructionAST result ;
  const GALGAS_standAloneProcedureCallInstructionAST * p = (const GALGAS_standAloneProcedureCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standAloneProcedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standAloneProcedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_procedureCallInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArguments.objectCompare (p->mProperty_mArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfArguments.objectCompare (p->mProperty_mEndOfArguments) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessList.objectCompare (p->mProperty_mAccessList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_procedureCallInstructionAST::objectCompare (const GALGAS_procedureCallInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (void) :
GALGAS_callInstructionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_procedureCallInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_effectiveArgumentListAST::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_accessInAssignmentListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procedureCallInstructionAST::GALGAS_procedureCallInstructionAST (const cPtr_procedureCallInstructionAST * inSourcePtr) :
GALGAS_callInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procedureCallInstructionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                        const GALGAS_effectiveArgumentListAST & inAttribute_mArguments,
                                                                                        const GALGAS_location & inAttribute_mEndOfArguments,
                                                                                        const GALGAS_lstring & inAttribute_mIdentifier,
                                                                                        const GALGAS_accessInAssignmentListAST & inAttribute_mAccessList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mArguments.isValid () && inAttribute_mEndOfArguments.isValid () && inAttribute_mIdentifier.isValid () && inAttribute_mAccessList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_procedureCallInstructionAST (inAttribute_mInstructionLocation, inAttribute_mArguments, inAttribute_mEndOfArguments, inAttribute_mIdentifier, inAttribute_mAccessList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_procedureCallInstructionAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    result = p->mProperty_mIdentifier ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_procedureCallInstructionAST::getter_mIdentifier (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIdentifier ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST GALGAS_procedureCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  GALGAS_accessInAssignmentListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_procedureCallInstructionAST * p = (const cPtr_procedureCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procedureCallInstructionAST) ;
    result = p->mProperty_mAccessList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_accessInAssignmentListAST cPtr_procedureCallInstructionAST::getter_mAccessList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @procedureCallInstructionAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_procedureCallInstructionAST::cPtr_procedureCallInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_effectiveArgumentListAST & in_mArguments,
                                                                    const GALGAS_location & in_mEndOfArguments,
                                                                    const GALGAS_lstring & in_mIdentifier,
                                                                    const GALGAS_accessInAssignmentListAST & in_mAccessList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_callInstructionAST (in_mInstructionLocation, in_mArguments, in_mEndOfArguments COMMA_THERE),
mProperty_mIdentifier (in_mIdentifier),
mProperty_mAccessList (in_mAccessList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_procedureCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

void cPtr_procedureCallInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@procedureCallInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfArguments.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAccessList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_procedureCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_procedureCallInstructionAST (mProperty_mInstructionLocation, mProperty_mArguments, mProperty_mEndOfArguments, mProperty_mIdentifier, mProperty_mAccessList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @procedureCallInstructionAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureCallInstructionAST ("procedureCallInstructionAST",
                                                    & kTypeDescriptor_GALGAS_callInstructionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_procedureCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureCallInstructionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_procedureCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureCallInstructionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procedureCallInstructionAST GALGAS_procedureCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procedureCallInstructionAST result ;
  const GALGAS_procedureCallInstructionAST * p = (const GALGAS_procedureCallInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension Getter '@effectiveArgumentPassingModeAST passingModeForActualSelector'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_effectiveArgumentPassingModeAST & inObject,
                                                            const GALGAS_lstring & constinArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_effectiveArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(constinArgument_inSelector.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 141)) ;
    }
  }
//---
  return result_result ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@LValueAST noteInstructionTypesInPrecedenceGraph'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_LValueAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_noteInstructionTypesInPrecedenceGraph (inObject.mProperty_mOperand, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 99)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Extension method '@LValueAST analyzeLValue'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_analyzeLValue (const GALGAS_LValueAST inObject,
                                    const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_bool constinArgument_inIsAddressOf,
                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                    const GALGAS_semanticContext constinArgument_inContext,
                                    const GALGAS_mode constinArgument_inMode,
                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                    GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, inObject.mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("lvalue.galgas", 140)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 141)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 141)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          GALGAS_bool test_4 = constinArgument_inRoutineAttributes.getter_mutating (SOURCE_FILE ("lvalue.galgas", 142)).operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          if (kBoolTrue == test_4.boolEnum ()) {
            test_4 = constinArgument_inIsAddressOf.operator_not (SOURCE_FILE ("lvalue.galgas", 142)) ;
          }
          test_3 = test_4.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 143)), GALGAS_string ("cannot mutate properties, current method is not declared with @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 144)), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 143)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_3) {
          {
          routine_analyzeSelfAssignmentTarget (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mOperand, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 147)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_6617 ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, inObject.mProperty_mIdentifier, var_entity_6617, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 162)) ;
    switch (var_entity_6617.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_type:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 165)), GALGAS_string ("<<@LValueAST analyzeLValue type>>"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 165)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 167)), GALGAS_string ("a task has no value"), fixItArray7  COMMA_SOURCE_FILE ("lvalue.galgas", 167)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 169)), GALGAS_string ("a driver has no value"), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 169)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 171)), GALGAS_string ("a global constant cannot be written"), fixItArray9  COMMA_SOURCE_FILE ("lvalue.galgas", 171)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 173)), GALGAS_string ("a local constant cannot be written"), fixItArray10  COMMA_SOURCE_FILE ("lvalue.galgas", 173)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (inObject.mProperty_mIdentifier.getter_location (SOURCE_FILE ("lvalue.galgas", 175)), GALGAS_string ("a global sync instance is not allowed here"), fixItArray11  COMMA_SOURCE_FILE ("lvalue.galgas", 175)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_7959 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_6617.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_variableType = extractPtr_7959->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_7959->mAssociatedValue1 ;
        {
        routine_analyzeVariableInLValue (constinArgument_inSelfType, constinArgument_inIsAddressOf, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inObject.mProperty_mIdentifier, function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("lvalue.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 189)), extractedValue_variableType, inObject.mProperty_mOperand, outArgument_outInternalRepresentation, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 177)) ;
        }
      }
      break ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GALGAS_controlRegisterLValueAST inObject,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  switch (inObject.mProperty_mGroupIndex.enumValue ()) {
  case GALGAS_registerGroupIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_3517 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (inObject.mProperty_mGroupIndex.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3517->mAssociatedValue0 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 93)) ;
    }
    break ;
  }
  switch (inObject.mProperty_mRegisterIndex.enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_3670 = (const cEnumAssociatedValues_registerIndexAST_index *) (inObject.mProperty_mRegisterIndex.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3670->mAssociatedValue0 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 98)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_addDependenceEdgeForStaticExpression (const GALGAS_controlRegisterLValueAST inObject,
                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, inObject.mProperty_mRegisterGroupName COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 110)) ;
  }
  switch (inObject.mProperty_mGroupIndex.enumValue ()) {
  case GALGAS_registerGroupIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_4420 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (inObject.mProperty_mGroupIndex.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_4420->mAssociatedValue0 ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 114)) ;
    }
    break ;
  }
  switch (inObject.mProperty_mRegisterIndex.enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_4604 = (const cEnumAssociatedValues_registerIndexAST_index *) (inObject.mProperty_mRegisterIndex.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_4604->mAssociatedValue0 ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 119)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_controlRegisterLValueSemanticAnalysis (const GALGAS_controlRegisterLValueAST inObject,
                                                            const GALGAS_bool constinArgument_inWriteAccess,
                                                            const GALGAS_PLMType constinArgument_inSelfType,
                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_PLMType & outArgument_outRegisterType,
                                                            GALGAS_uint & outArgument_outRegisterTypeBitCount,
                                                            GALGAS_sliceMap & outArgument_outSliceMap,
                                                            GALGAS_string & outArgument_outllvmRegisterAddressName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterTypeBitCount.drop () ; // Release 'out' argument
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  outArgument_outllvmRegisterAddressName.drop () ; // Release 'out' argument
  GALGAS_registerGroupKind var_groupKind_5859 ;
  GALGAS_controlRegisterMap var_controlRegisterMap_5883 ;
  constinArgument_inContext.getter_mControlRegisterGroupMap (HERE).method_searchKey (inObject.mProperty_mRegisterGroupName, var_groupKind_5859, var_controlRegisterMap_5883, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 144)) ;
  GALGAS_bool var_readOnly_6023 ;
  GALGAS_bool var_userAccess_6049 ;
  GALGAS_bigint var_addressOffset_6104 ;
  GALGAS_uint var_registerArraySize_6173 ;
  GALGAS_uint var_registerElementSize_6228 ;
  GALGAS_controlRegisterFieldMap joker_6072 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_6110 ; // Joker input parameter
  var_controlRegisterMap_5883.method_searchKey (inObject.mProperty_mRegisterName, outArgument_outRegisterType, var_readOnly_6023, var_userAccess_6049, outArgument_outSliceMap, joker_6072, var_addressOffset_6104, joker_6110, outArgument_outRegisterTypeBitCount, var_registerArraySize_6173, var_registerElementSize_6228, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 146)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inWriteAccess.operator_and (var_readOnly_6023 COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 160)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (inObject.mProperty_mRegisterName.getter_location (SOURCE_FILE ("lvalue-control-register.galgas", 161)), GALGAS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray1  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 161)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = var_userAccess_6049.operator_not (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        GALGAS_bool test_4 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        }
        test_3 = test_4 ;
      }
      test_2 = test_3.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (inObject.mProperty_mRegisterName.getter_location (SOURCE_FILE ("lvalue-control-register.galgas", 164)), GALGAS_string ("this control register is not accessible in user mode"), fixItArray5  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 164)) ;
      }
    }
  }
  GALGAS_string var_registerAddress_6651 ;
  switch (var_groupKind_5859.enumValue ()) {
  case GALGAS_registerGroupKind::kNotBuilt:
    break ;
  case GALGAS_registerGroupKind::kEnum_single:
    {
      const cEnumAssociatedValues_registerGroupKind_single * extractPtr_7115 = (const cEnumAssociatedValues_registerGroupKind_single *) (var_groupKind_5859.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_baseAddress = extractPtr_7115->mAssociatedValue0 ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = inObject.mProperty_mGroupIndex.getter_isIndex (SOURCE_FILE ("lvalue-control-register.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (inObject.mProperty_mRegisterGroupName.getter_location (SOURCE_FILE ("lvalue-control-register.galgas", 171)), GALGAS_string ("subscripting not allowed, group is not an array"), fixItArray7  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 171)) ;
          var_registerAddress_6651.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_6) {
        GALGAS_string var_regName_6870 = inObject.mProperty_mRegisterGroupName.getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)).add_operation (inObject.mProperty_mRegisterName.getter_string (SOURCE_FILE ("lvalue-control-register.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)) ;
        {
        extensionSetter_appendEnterRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6651, extractedValue_baseAddress, var_addressOffset_6104, var_regName_6870, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 174)) ;
        }
      }
    }
    break ;
  case GALGAS_registerGroupKind::kEnum_arrayGroup:
    {
      const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_8141 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (var_groupKind_5859.unsafePointer ()) ;
      const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_8141->mAssociatedValue0 ;
      switch (inObject.mProperty_mGroupIndex.enumValue ()) {
      case GALGAS_registerGroupIndexAST::kNotBuilt:
        break ;
      case GALGAS_registerGroupIndexAST::kEnum_noIndex:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (inObject.mProperty_mRegisterGroupName.getter_location (SOURCE_FILE ("lvalue-control-register.galgas", 185)), GALGAS_string ("subscripting required, group is an array"), fixItArray8  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 185)) ;
          var_registerAddress_6651.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_registerGroupIndexAST::kEnum_index:
        {
          const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_8133 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (inObject.mProperty_mGroupIndex.unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_8133->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_8133->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_8133->mAssociatedValue2 ;
          GALGAS_objectIR var_groupIndexIR_7899 ;
          {
          routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, extractedValue_baseAddresses.getter_length (SOURCE_FILE ("lvalue-control-register.galgas", 199)).getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 199)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_groupIndexIR_7899, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 187)) ;
          }
          {
          extensionSetter_appendEnterRegisterGroupSubscriptedAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6651, inObject.mProperty_mRegisterGroupName.getter_string (HERE), extractedValue_baseAddresses.getter_length (SOURCE_FILE ("lvalue-control-register.galgas", 208)), var_groupIndexIR_7899, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 204)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
  switch (inObject.mProperty_mRegisterIndex.enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, var_registerArraySize_6173.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          outArgument_outllvmRegisterAddressName = var_registerAddress_6651 ;
        }
      }
      if (kBoolFalse == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (inObject.mProperty_mRegisterName.getter_location (SOURCE_FILE ("lvalue-control-register.galgas", 219)), GALGAS_string ("the control register is an array"), fixItArray10  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 219)) ;
        outArgument_outllvmRegisterAddressName.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_9208 = (const cEnumAssociatedValues_registerIndexAST_index *) (inObject.mProperty_mRegisterIndex.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_9208->mAssociatedValue0 ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_9208->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_checkIndexExpression = extractPtr_9208->mAssociatedValue2 ;
      GALGAS_objectIR var_indexIR_8992 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, extractedValue_checkIndexExpression, var_registerArraySize_6173.getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 234)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_8992, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 222)) ;
      }
      {
      extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, outArgument_outllvmRegisterAddressName, var_indexIR_8992, var_registerAddress_6651, var_registerElementSize_6228, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 239)) ;
      }
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@abstractRoutineIR svcDeclarationGeneration'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration> gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_svcDeclarationGeneration (const int32_t inClassIndex,
                                                    extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration inMethod) {
  gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                   GALGAS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   GALGAS_sectionIRlist & io_ioSectionList,
                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractRoutineIR_svcDeclarationGeneration f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration.count ()) {
      f = gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration.count ()) {
           f = gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioPrimitiveAndServiceList, io_ioSectionList, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * /* inObject */,
                                                                        GALGAS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                                        GALGAS_sectionIRlist & /* ioArgument_ioSectionList */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_abstractRoutineIR.mSlotID,
                                                 extensionMethod_abstractRoutineIR_svcDeclarationGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractRoutineIR_svcDeclarationGeneration (void) {
  gExtensionMethodTable_abstractRoutineIR_svcDeclarationGeneration.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractRoutineIR_svcDeclarationGeneration (defineExtensionMethod_abstractRoutineIR_svcDeclarationGeneration,
                                                                       freeExtensionMethod_abstractRoutineIR_svcDeclarationGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension method '@abstractRoutineIR llvmCodeGeneration'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractRoutineIR_llvmCodeGeneration> gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_llvmCodeGeneration (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractRoutineIR_llvmCodeGeneration inMethod) {
  gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractRoutineIR_llvmCodeGeneration (void) {
  gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractRoutineIR_llvmCodeGeneration (NULL,
                                                                 freeExtensionMethod_abstractRoutineIR_llvmCodeGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                             GALGAS_string & io_ioLLVMcode,
                                             const GALGAS_generationContext constin_inGenerationContext,
                                             GALGAS_generationAdds & io_ioGenerationAdds,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractRoutineIR_llvmCodeGeneration f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration.count ()) {
      f = gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration.count ()) {
          f = gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractRoutineIR_llvmCodeGeneration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@abstractRoutineIR enterAccessibleEntities'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities> gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterAccessibleEntities (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities inMethod) {
  gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractRoutineIR_enterAccessibleEntities f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities.count ()) {
      f = gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities.count ()) {
           f = gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * /* inObject */,
                                                                       GALGAS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_abstractRoutineIR.mSlotID,
                                                extensionMethod_abstractRoutineIR_enterAccessibleEntities) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractRoutineIR_enterAccessibleEntities (void) {
  gExtensionMethodTable_abstractRoutineIR_enterAccessibleEntities.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractRoutineIR_enterAccessibleEntities (defineExtensionMethod_abstractRoutineIR_enterAccessibleEntities,
                                                                      freeExtensionMethod_abstractRoutineIR_enterAccessibleEntities) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_binaryOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binaryOperationIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperandType.objectCompare (p->mProperty_mOperandType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperation.objectCompare (p->mProperty_mOperation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_binaryOperationIR::objectCompare (const GALGAS_binaryOperationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::constructor_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                    const GALGAS_PLMType & inAttribute_mOperandType,
                                                                    const GALGAS_objectIR & inAttribute_mLeft,
                                                                    const GALGAS_llvmBinaryOperation & inAttribute_mOperation,
                                                                    const GALGAS_objectIR & inAttribute_mRight,
                                                                    const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperandType.isValid () && inAttribute_mLeft.isValid () && inAttribute_mOperation.isValid () && inAttribute_mRight.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (inAttribute_mTarget, inAttribute_mOperandType, inAttribute_mLeft, inAttribute_mOperation, inAttribute_mRight, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_binaryOperationIR::getter_mOperandType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mOperandType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_binaryOperationIR::getter_mOperandType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperandType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mLeft ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mLeft (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeft ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_binaryOperationIR::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  GALGAS_llvmBinaryOperation result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mOperation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation cPtr_binaryOperationIR::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mRight ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_binaryOperationIR::getter_mRight (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRight ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_binaryOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cPtr_binaryOperationIR::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @binaryOperationIR class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                                const GALGAS_PLMType & in_mOperandType,
                                                const GALGAS_objectIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_objectIR & in_mRight,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperandType (in_mOperandType),
mProperty_mLeft (in_mLeft),
mProperty_mOperation (in_mOperation),
mProperty_mRight (in_mRight),
mProperty_mLocation (in_mLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_binaryOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

void cPtr_binaryOperationIR::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@binaryOperationIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperandType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_binaryOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binaryOperationIR (mProperty_mTarget, mProperty_mOperandType, mProperty_mLeft, mProperty_mOperation, mProperty_mRight, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @binaryOperationIR type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperationIR ("binaryOperationIR",
                                          & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  const GALGAS_binaryOperationIR * p = (const GALGAS_binaryOperationIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@binaryOperationIR enterCodeForOverflowOperation'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation> gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation f = NULL ;
    if (classIndex < gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
      f = gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
           f = gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_binaryOperationIR_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                                             const GALGAS_string constinArgument_inOperation,
                                                                             const GALGAS_bigint constinArgument_inPanicCode,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType_2057 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mOperandType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  GALGAS_string var_labelName_2469 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2469, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2469, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".noovf\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2469.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2469.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("{").add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2057, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  enterExtensionMethod_enterCodeForOverflowOperation (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                      extensionMethod_binaryOperationIR_enterCodeForOverflowOperation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForOverflowOperation (defineExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation,
                                                                            freeExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic> gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic f = NULL ;
    if (classIndex < gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.count ()) {
      f = gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.count ()) {
           f = gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (const cPtr_binaryOperationIR * inObject,
                                                                                        const GALGAS_string constinArgument_inOperation,
                                                                                        const GALGAS_bigint constinArgument_inPanicCode,
                                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                                        const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType_3771 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mOperandType.ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (var_llvmType_3771, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  GALGAS_string var_labelName_3928 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_3928, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_3928, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_3928.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (object->mProperty_mLocation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_3928.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType_3771, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (void) {
  enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                                 extensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (void) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (defineExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic,
                                                                                       freeExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_storeToUniversalReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_storeToUniversalReferenceIR::objectCompare (const GALGAS_storeToUniversalReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeToUniversalReferenceIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::constructor_new (const GALGAS_string & inAttribute_mLLVMTargetVarName,
                                                                                        const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                                        const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  if (inAttribute_mLLVMTargetVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeToUniversalReferenceIR (inAttribute_mLLVMTargetVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_storeToUniversalReferenceIR::getter_mLLVMTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    result = p->mProperty_mLLVMTargetVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_storeToUniversalReferenceIR::getter_mLLVMTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTargetVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_storeToUniversalReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_storeToUniversalReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_storeToUniversalReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_storeToUniversalReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @storeToUniversalReferenceIR class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMTargetVarName,
                                                                    const GALGAS_PLMType & in_mTargetVarType,
                                                                    const GALGAS_objectIR & in_mSourceValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMTargetVarName (in_mLLVMTargetVarName),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mSourceValue (in_mSourceValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_storeToUniversalReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

void cPtr_storeToUniversalReferenceIR::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@storeToUniversalReferenceIR:" ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_storeToUniversalReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeToUniversalReferenceIR (mProperty_mLLVMTargetVarName, mProperty_mTargetVarType, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @storeToUniversalReferenceIR type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ("storeToUniversalReferenceIR",
                                                    & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storeToUniversalReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeToUniversalReferenceIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  const GALGAS_storeToUniversalReferenceIR * p = (const GALGAS_storeToUniversalReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeToUniversalReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_storeFromTemporaryReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_storeFromTemporaryReferenceIR::objectCompare (const GALGAS_storeFromTemporaryReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeFromTemporaryReferenceIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::constructor_new (const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                                            const GALGAS_string & inAttribute_mLLVMTargetVarName,
                                                                                            const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMTargetVarName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeFromTemporaryReferenceIR (inAttribute_mTargetVarType, inAttribute_mLLVMTargetVarName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_storeFromTemporaryReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_storeFromTemporaryReferenceIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_storeFromTemporaryReferenceIR::getter_mLLVMTargetVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    result = p->mProperty_mLLVMTargetVarName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_storeFromTemporaryReferenceIR::getter_mLLVMTargetVarName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMTargetVarName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_storeFromTemporaryReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_storeFromTemporaryReferenceIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @storeFromTemporaryReferenceIR class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (const GALGAS_PLMType & in_mTargetVarType,
                                                                        const GALGAS_string & in_mLLVMTargetVarName,
                                                                        const GALGAS_objectIR & in_mSourceValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mLLVMTargetVarName (in_mLLVMTargetVarName),
mProperty_mSourceValue (in_mSourceValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_storeFromTemporaryReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

void cPtr_storeFromTemporaryReferenceIR::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@storeFromTemporaryReferenceIR:" ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_storeFromTemporaryReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeFromTemporaryReferenceIR (mProperty_mTargetVarType, mProperty_mLLVMTargetVarName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @storeFromTemporaryReferenceIR type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ("storeFromTemporaryReferenceIR",
                                                      & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storeFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storeFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  const GALGAS_storeFromTemporaryReferenceIR * p = (const GALGAS_storeFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeFromTemporaryReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_standaloneRoutineCallIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionMangledName.objectCompare (p->mProperty_mFunctionMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionNameForGeneration.objectCompare (p->mProperty_mFunctionNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_standaloneRoutineCallIR::objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneRoutineCallIR::GALGAS_standaloneRoutineCallIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneRoutineCallIR::GALGAS_standaloneRoutineCallIR (const cPtr_standaloneRoutineCallIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneRoutineCallIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::constructor_new (const GALGAS_objectIR & inAttribute_mResult,
                                                                                const GALGAS_lstring & inAttribute_mFunctionMangledName,
                                                                                const GALGAS_string & inAttribute_mFunctionNameForGeneration,
                                                                                const GALGAS_procCallEffectiveParameterListIR & inAttribute_mArgumentList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mFunctionMangledName.isValid () && inAttribute_mFunctionNameForGeneration.isValid () && inAttribute_mArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standaloneRoutineCallIR (inAttribute_mResult, inAttribute_mFunctionMangledName, inAttribute_mFunctionNameForGeneration, inAttribute_mArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_standaloneRoutineCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    result = p->mProperty_mResult ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_standaloneRoutineCallIR::getter_mResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResult ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_standaloneRoutineCallIR::getter_mFunctionMangledName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    result = p->mProperty_mFunctionMangledName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_standaloneRoutineCallIR::getter_mFunctionMangledName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionMangledName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_standaloneRoutineCallIR::getter_mFunctionNameForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    result = p->mProperty_mFunctionNameForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_standaloneRoutineCallIR::getter_mFunctionNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionNameForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR GALGAS_standaloneRoutineCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    result = p->mProperty_mArgumentList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_procCallEffectiveParameterListIR cPtr_standaloneRoutineCallIR::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArgumentList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @standaloneRoutineCallIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_standaloneRoutineCallIR::cPtr_standaloneRoutineCallIR (const GALGAS_objectIR & in_mResult,
                                                            const GALGAS_lstring & in_mFunctionMangledName,
                                                            const GALGAS_string & in_mFunctionNameForGeneration,
                                                            const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mFunctionMangledName (in_mFunctionMangledName),
mProperty_mFunctionNameForGeneration (in_mFunctionNameForGeneration),
mProperty_mArgumentList (in_mArgumentList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_standaloneRoutineCallIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

void cPtr_standaloneRoutineCallIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@standaloneRoutineCallIR:" ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionNameForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_standaloneRoutineCallIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_standaloneRoutineCallIR (mProperty_mResult, mProperty_mFunctionMangledName, mProperty_mFunctionNameForGeneration, mProperty_mArgumentList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @standaloneRoutineCallIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_standaloneRoutineCallIR ("standaloneRoutineCallIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_standaloneRoutineCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_standaloneRoutineCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneRoutineCallIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR result ;
  const GALGAS_standaloneRoutineCallIR * p = (const GALGAS_standaloneRoutineCallIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_standaloneRoutineCallIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneRoutineCallIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_releaseIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_releaseIR * p = (const cPtr_releaseIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_releaseIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPLMName.objectCompare (p->mProperty_mPLMName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_releaseIR::objectCompare (const GALGAS_releaseIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_releaseIR::GALGAS_releaseIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_releaseIR GALGAS_releaseIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_releaseIR::constructor_new (GALGAS_PLMType::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_releaseIR::GALGAS_releaseIR (const cPtr_releaseIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_releaseIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_releaseIR GALGAS_releaseIR::constructor_new (const GALGAS_PLMType & inAttribute_mType,
                                                    const GALGAS_lstring & inAttribute_mPLMName
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mPLMName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_releaseIR (inAttribute_mType, inAttribute_mPLMName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_releaseIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_releaseIR * p = (const cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_releaseIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_releaseIR::getter_mPLMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_releaseIR * p = (const cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    result = p->mProperty_mPLMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_releaseIR::getter_mPLMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPLMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                         Pointer class for @releaseIR class                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_releaseIR::cPtr_releaseIR (const GALGAS_PLMType & in_mType,
                                const GALGAS_lstring & in_mPLMName
                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mPLMName (in_mPLMName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_releaseIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

void cPtr_releaseIR::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@releaseIR:" ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPLMName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_releaseIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_releaseIR (mProperty_mType, mProperty_mPLMName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @releaseIR type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_releaseIR ("releaseIR",
                                  & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_releaseIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_releaseIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_releaseIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_releaseIR GALGAS_releaseIR::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR result ;
  const GALGAS_releaseIR * p = (const GALGAS_releaseIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_releaseIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_storeIndirectVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_storeIndirectVolatileIR::objectCompare (const GALGAS_storeIndirectVolatileIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeIndirectVolatileIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::constructor_new (const GALGAS_PLMType & inAttribute_mTargetVarType,
                                                                                const GALGAS_string & inAttribute_mLLVMName,
                                                                                const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeIndirectVolatileIR (inAttribute_mTargetVarType, inAttribute_mLLVMName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_storeIndirectVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    result = p->mProperty_mTargetVarType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_storeIndirectVolatileIR::getter_mTargetVarType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetVarType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_storeIndirectVolatileIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_storeIndirectVolatileIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_storeIndirectVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    result = p->mProperty_mSourceValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_storeIndirectVolatileIR::getter_mSourceValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @storeIndirectVolatileIR class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (const GALGAS_PLMType & in_mTargetVarType,
                                                            const GALGAS_string & in_mLLVMName,
                                                            const GALGAS_objectIR & in_mSourceValue
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mSourceValue (in_mSourceValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_storeIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

void cPtr_storeIndirectVolatileIR::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@storeIndirectVolatileIR:" ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_storeIndirectVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_storeIndirectVolatileIR (mProperty_mTargetVarType, mProperty_mLLVMName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @storeIndirectVolatileIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storeIndirectVolatileIR ("storeIndirectVolatileIR",
                                                & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storeIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storeIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  const GALGAS_storeIndirectVolatileIR * p = (const GALGAS_storeIndirectVolatileIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storeIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_copyFromReferencesIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceLLVMName.objectCompare (p->mProperty_mSourceLLVMName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_copyFromReferencesIR::objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_copyFromReferencesIR::constructor_new (GALGAS_LValueRepresentation::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_copyFromReferencesIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::constructor_new (const GALGAS_LValueRepresentation & inAttribute_mTarget,
                                                                          const GALGAS_string & inAttribute_mSourceLLVMName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSourceLLVMName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_copyFromReferencesIR (inAttribute_mTarget, inAttribute_mSourceLLVMName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation GALGAS_copyFromReferencesIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  GALGAS_LValueRepresentation result ;
  if (NULL != mObjectPtr) {
    const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    result = p->mProperty_mTarget ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_LValueRepresentation cPtr_copyFromReferencesIR::getter_mTarget (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTarget ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_copyFromReferencesIR::getter_mSourceLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    result = p->mProperty_mSourceLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_copyFromReferencesIR::getter_mSourceLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSourceLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @copyFromReferencesIR class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (const GALGAS_LValueRepresentation & in_mTarget,
                                                      const GALGAS_string & in_mSourceLLVMName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSourceLLVMName (in_mSourceLLVMName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_copyFromReferencesIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

void cPtr_copyFromReferencesIR::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@copyFromReferencesIR:" ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSourceLLVMName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_copyFromReferencesIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_copyFromReferencesIR (mProperty_mTarget, mProperty_mSourceLLVMName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @copyFromReferencesIR type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_copyFromReferencesIR ("copyFromReferencesIR",
                                             & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_copyFromReferencesIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_copyFromReferencesIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_copyFromReferencesIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  const GALGAS_copyFromReferencesIR * p = (const GALGAS_copyFromReferencesIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_copyFromReferencesIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_getUniversalPropertyReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyIndex.objectCompare (p->mProperty_mPropertyIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_getUniversalPropertyReferenceIR::objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::constructor_default (LOCATION_ARGS) {
  return GALGAS_getUniversalPropertyReferenceIR::constructor_new (GALGAS_PLMType::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_uint::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalPropertyReferenceIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::constructor_new (const GALGAS_PLMType & inAttribute_mType,
                                                                                                const GALGAS_string & inAttribute_mLLVMName,
                                                                                                const GALGAS_string & inAttribute_mElementLLVMName,
                                                                                                const GALGAS_uint & inAttribute_mPropertyIndex,
                                                                                                const GALGAS_string & inAttribute_mPropertyName
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mElementLLVMName.isValid () && inAttribute_mPropertyIndex.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getUniversalPropertyReferenceIR (inAttribute_mType, inAttribute_mLLVMName, inAttribute_mElementLLVMName, inAttribute_mPropertyIndex, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_getUniversalPropertyReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_getUniversalPropertyReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_getUniversalPropertyReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mElementLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_getUniversalPropertyReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_getUniversalPropertyReferenceIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mPropertyIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_getUniversalPropertyReferenceIR::getter_mPropertyIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_getUniversalPropertyReferenceIR::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @getUniversalPropertyReferenceIR class                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (const GALGAS_PLMType & in_mType,
                                                                            const GALGAS_string & in_mLLVMName,
                                                                            const GALGAS_string & in_mElementLLVMName,
                                                                            const GALGAS_uint & in_mPropertyIndex,
                                                                            const GALGAS_string & in_mPropertyName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mElementLLVMName (in_mElementLLVMName),
mProperty_mPropertyIndex (in_mPropertyIndex),
mProperty_mPropertyName (in_mPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_getUniversalPropertyReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

void cPtr_getUniversalPropertyReferenceIR::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@getUniversalPropertyReferenceIR:" ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_getUniversalPropertyReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getUniversalPropertyReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementLLVMName, mProperty_mPropertyIndex, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @getUniversalPropertyReferenceIR type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ("getUniversalPropertyReferenceIR",
                                                        & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_getUniversalPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_getUniversalPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  const GALGAS_getUniversalPropertyReferenceIR * p = (const GALGAS_getUniversalPropertyReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getUniversalPropertyReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_getUniversalArrayElementReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexIR.objectCompare (p->mProperty_mIndexIR) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_getUniversalArrayElementReferenceIR::objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalArrayElementReferenceIR) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::constructor_new (const GALGAS_PLMType & inAttribute_mType,
                                                                                                        const GALGAS_string & inAttribute_mLLVMName,
                                                                                                        const GALGAS_PLMType & inAttribute_mElementType,
                                                                                                        const GALGAS_string & inAttribute_mElementLLVMName,
                                                                                                        const GALGAS_objectIR & inAttribute_mIndexIR
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mElementType.isValid () && inAttribute_mElementLLVMName.isValid () && inAttribute_mIndexIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getUniversalArrayElementReferenceIR (inAttribute_mType, inAttribute_mLLVMName, inAttribute_mElementType, inAttribute_mElementLLVMName, inAttribute_mIndexIR COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_getUniversalArrayElementReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_getUniversalArrayElementReferenceIR::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_getUniversalArrayElementReferenceIR::getter_mLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_getUniversalArrayElementReferenceIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  GALGAS_PLMType result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mElementType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cPtr_getUniversalArrayElementReferenceIR::getter_mElementType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mElementLLVMName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_getUniversalArrayElementReferenceIR::getter_mElementLLVMName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementLLVMName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_getUniversalArrayElementReferenceIR::getter_mIndexIR (UNUSED_LOCATION_ARGS) const {
  GALGAS_objectIR result ;
  if (NULL != mObjectPtr) {
    const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    result = p->mProperty_mIndexIR ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cPtr_getUniversalArrayElementReferenceIR::getter_mIndexIR (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndexIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                            Pointer class for @getUniversalArrayElementReferenceIR class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (const GALGAS_PLMType & in_mType,
                                                                                    const GALGAS_string & in_mLLVMName,
                                                                                    const GALGAS_PLMType & in_mElementType,
                                                                                    const GALGAS_string & in_mElementLLVMName,
                                                                                    const GALGAS_objectIR & in_mIndexIR
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mElementType (in_mElementType),
mProperty_mElementLLVMName (in_mElementLLVMName),
mProperty_mIndexIR (in_mIndexIR) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_getUniversalArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

void cPtr_getUniversalArrayElementReferenceIR::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@getUniversalArrayElementReferenceIR:" ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexIR.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_getUniversalArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_getUniversalArrayElementReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementType, mProperty_mElementLLVMName, mProperty_mIndexIR COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @getUniversalArrayElementReferenceIR type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ("getUniversalArrayElementReferenceIR",
                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_getUniversalArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_getUniversalArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  const GALGAS_getUniversalArrayElementReferenceIR * p = (const GALGAS_getUniversalArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_getUniversalArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationAdds::GALGAS_generationAdds (void) :
mProperty_mUniqueIndex (),
mProperty_mExternFunctionDeclarationSet (),
mProperty_mStaticEntityMap (),
mProperty_mUsesGuards (),
mProperty_mNeedsDynamicMemoryAllocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationAdds::~ GALGAS_generationAdds (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationAdds::GALGAS_generationAdds (const GALGAS_uint & inOperand0,
                                              const GALGAS_stringset & inOperand1,
                                              const GALGAS_staticEntityMap & inOperand2,
                                              const GALGAS_bool & inOperand3,
                                              const GALGAS_bool & inOperand4) :
mProperty_mUniqueIndex (inOperand0),
mProperty_mExternFunctionDeclarationSet (inOperand1),
mProperty_mStaticEntityMap (inOperand2),
mProperty_mUsesGuards (inOperand3),
mProperty_mNeedsDynamicMemoryAllocation (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationAdds GALGAS_generationAdds::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationAdds (GALGAS_uint::constructor_default (HERE),
                                GALGAS_stringset::constructor_emptySet (HERE),
                                GALGAS_staticEntityMap::constructor_default (HERE),
                                GALGAS_bool::constructor_default (HERE),
                                GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationAdds GALGAS_generationAdds::constructor_new (const GALGAS_uint & inOperand0,
                                                              const GALGAS_stringset & inOperand1,
                                                              const GALGAS_staticEntityMap & inOperand2,
                                                              const GALGAS_bool & inOperand3,
                                                              const GALGAS_bool & inOperand4 
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_generationAdds (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_generationAdds::objectCompare (const GALGAS_generationAdds & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mUniqueIndex.objectCompare (inOperand.mProperty_mUniqueIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternFunctionDeclarationSet.objectCompare (inOperand.mProperty_mExternFunctionDeclarationSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUsesGuards.objectCompare (inOperand.mProperty_mUsesGuards) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsDynamicMemoryAllocation.objectCompare (inOperand.mProperty_mNeedsDynamicMemoryAllocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_generationAdds::isValid (void) const {
  return mProperty_mUniqueIndex.isValid () && mProperty_mExternFunctionDeclarationSet.isValid () && mProperty_mStaticEntityMap.isValid () && mProperty_mUsesGuards.isValid () && mProperty_mNeedsDynamicMemoryAllocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_generationAdds::drop (void) {
  mProperty_mUniqueIndex.drop () ;
  mProperty_mExternFunctionDeclarationSet.drop () ;
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mUsesGuards.drop () ;
  mProperty_mNeedsDynamicMemoryAllocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_generationAdds::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<struct @generationAdds:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mUniqueIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternFunctionDeclarationSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUsesGuards.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsDynamicMemoryAllocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_generationAdds::getter_mUniqueIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUniqueIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_generationAdds::getter_mExternFunctionDeclarationSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionDeclarationSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticEntityMap GALGAS_generationAdds::getter_mStaticEntityMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStaticEntityMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_generationAdds::getter_mUsesGuards (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsesGuards ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_generationAdds::getter_mNeedsDynamicMemoryAllocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsDynamicMemoryAllocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @generationAdds type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationAdds ("generationAdds",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_generationAdds::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationAdds ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_generationAdds::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationAdds (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationAdds GALGAS_generationAdds::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  const GALGAS_generationAdds * p = (const GALGAS_generationAdds *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generationAdds *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationAdds", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationContext::GALGAS_generationContext (void) :
mProperty_mPanicCodeLLVMType (),
mProperty_mPanicLineLLVMType (),
mProperty_mNopInstructionInLLVM (),
mProperty_mGlobalTaskVariableList (),
mProperty_mAvailableInterruptMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationContext::~ GALGAS_generationContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationContext::GALGAS_generationContext (const GALGAS_PLMType & inOperand0,
                                                    const GALGAS_PLMType & inOperand1,
                                                    const GALGAS_string & inOperand2,
                                                    const GALGAS_globalTaskVariableList & inOperand3,
                                                    const GALGAS_availableInterruptMap & inOperand4) :
mProperty_mPanicCodeLLVMType (inOperand0),
mProperty_mPanicLineLLVMType (inOperand1),
mProperty_mNopInstructionInLLVM (inOperand2),
mProperty_mGlobalTaskVariableList (inOperand3),
mProperty_mAvailableInterruptMap (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationContext GALGAS_generationContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationContext (GALGAS_PLMType::constructor_default (HERE),
                                   GALGAS_PLMType::constructor_default (HERE),
                                   GALGAS_string::constructor_default (HERE),
                                   GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                   GALGAS_availableInterruptMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationContext GALGAS_generationContext::constructor_new (const GALGAS_PLMType & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_globalTaskVariableList & inOperand3,
                                                                    const GALGAS_availableInterruptMap & inOperand4 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_generationContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_generationContext::objectCompare (const GALGAS_generationContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeLLVMType.objectCompare (inOperand.mProperty_mPanicCodeLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineLLVMType.objectCompare (inOperand.mProperty_mPanicLineLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNopInstructionInLLVM.objectCompare (inOperand.mProperty_mNopInstructionInLLVM) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_generationContext::isValid (void) const {
  return mProperty_mPanicCodeLLVMType.isValid () && mProperty_mPanicLineLLVMType.isValid () && mProperty_mNopInstructionInLLVM.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mAvailableInterruptMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_generationContext::drop (void) {
  mProperty_mPanicCodeLLVMType.drop () ;
  mProperty_mPanicLineLLVMType.drop () ;
  mProperty_mNopInstructionInLLVM.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_generationContext::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @generationContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPanicCodeLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPanicLineLLVMType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNopInstructionInLLVM.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_generationContext::getter_mPanicCodeLLVMType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicCodeLLVMType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_generationContext::getter_mPanicLineLLVMType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPanicLineLLVMType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_generationContext::getter_mNopInstructionInLLVM (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNopInstructionInLLVM ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalTaskVariableList GALGAS_generationContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGlobalTaskVariableList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_availableInterruptMap GALGAS_generationContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAvailableInterruptMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @generationContext type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationContext ("generationContext",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_generationContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_generationContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationContext GALGAS_generationContext::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  const GALGAS_generationContext * p = (const GALGAS_generationContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generationContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList_2D_element::~ GALGAS_interruptionConfigurationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_interruptionPanicCode & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_interruptionConfigurationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_interruptionConfigurationList_2D_element::objectCompare (const GALGAS_interruptionConfigurationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_interruptionConfigurationList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptionConfigurationList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_interruptionConfigurationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @interruptionConfigurationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_interruptionConfigurationList_2D_element::getter_mInterruptName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionPanicCode GALGAS_interruptionConfigurationList_2D_element::getter_mInterruptionPanicCode (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInterruptionPanicCode ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @interruptionConfigurationList-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ("interruptionConfigurationList-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_interruptionConfigurationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  const GALGAS_interruptionConfigurationList_2D_element * p = (const GALGAS_interruptionConfigurationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptionConfigurationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mConstantValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element::~ GALGAS_enumerationConstantList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bigint & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mConstantValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumerationConstantList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_bigint::constructor_zero (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_bigint & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumerationConstantList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumerationConstantList_2D_element::objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantValue.objectCompare (inOperand.mProperty_mConstantValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumerationConstantList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mConstantValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumerationConstantList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mConstantValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumerationConstantList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @enumerationConstantList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mConstantValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumerationConstantList_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_enumerationConstantList_2D_element::getter_mConstantValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mConstantValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @enumerationConstantList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ("enumerationConstantList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumerationConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumerationConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  const GALGAS_enumerationConstantList_2D_element * p = (const GALGAS_enumerationConstantList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element::~ GALGAS_classConstantMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_bigint & inOperand1,
                                                                        const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_bigint::constructor_zero (HERE),
                                             GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_bigint & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_classConstantMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_classConstantMap_2D_element::objectCompare (const GALGAS_classConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassTypeName.objectCompare (inOperand.mProperty_mClassTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_classConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classConstantMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @classConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_classConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_mClassTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @classConstantMap-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap_2D_element ("classConstantMap-element",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  const GALGAS_classConstantMap_2D_element * p = (const GALGAS_classConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element::GALGAS_propertyAttributeList_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element::~ GALGAS_propertyAttributeList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element::GALGAS_propertyAttributeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lbigint & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyAttributeList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lbigint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lbigint & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyAttributeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyAttributeList_2D_element::objectCompare (const GALGAS_propertyAttributeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeValue.objectCompare (inOperand.mProperty_mAttributeValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_propertyAttributeList_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @propertyAttributeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyAttributeList_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_propertyAttributeList_2D_element::getter_mAttributeValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @propertyAttributeList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ("propertyAttributeList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyAttributeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyAttributeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAttributeList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  const GALGAS_propertyAttributeList_2D_element * p = (const GALGAS_propertyAttributeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyAttributeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_PLMType & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_PLMType::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_PLMType & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_propertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_propertyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @propertyList-element type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST_2D_element::GALGAS_controlRegisterNameListAST_2D_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mIsReadOnly (),
mProperty_mRegisterOffset (),
mProperty_mRegisterOffsetLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST_2D_element::~ GALGAS_controlRegisterNameListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST_2D_element::GALGAS_controlRegisterNameListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_controlRegisterKind & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_expressionAST & inOperand3,
                                                                                            const GALGAS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mRegisterOffset (inOperand3),
mProperty_mRegisterOffsetLocation (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_controlRegisterKind & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_expressionAST & inOperand3,
                                                                                                            const GALGAS_location & inOperand4 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterNameListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterNameListAST_2D_element::objectCompare (const GALGAS_controlRegisterNameListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterKind.objectCompare (inOperand.mProperty_mControlRegisterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterOffset.objectCompare (inOperand.mProperty_mRegisterOffset) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterOffsetLocation.objectCompare (inOperand.mProperty_mRegisterOffsetLocation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterNameListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mRegisterOffset.isValid () && mProperty_mRegisterOffsetLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST_2D_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mRegisterOffset.drop () ;
  mProperty_mRegisterOffsetLocation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterNameListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterOffset.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterOffsetLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterNameListAST_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind GALGAS_controlRegisterNameListAST_2D_element::getter_mControlRegisterKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterNameListAST_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsReadOnly ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_controlRegisterNameListAST_2D_element::getter_mRegisterOffset (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterOffset ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_controlRegisterNameListAST_2D_element::getter_mRegisterOffsetLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterOffsetLocation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @controlRegisterNameListAST-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ("controlRegisterNameListAST-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterNameListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterNameListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  const GALGAS_controlRegisterNameListAST_2D_element * p = (const GALGAS_controlRegisterNameListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterNameListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (void) :
mProperty_mRegisterGroupName (),
mProperty_mControlRegisterGroupKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST_2D_element::~ GALGAS_registerGroupListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_controlRegisterGroupKindAST & inOperand1) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mControlRegisterGroupKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_controlRegisterGroupKindAST & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_registerGroupListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_registerGroupListAST_2D_element::objectCompare (const GALGAS_registerGroupListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterGroupName.objectCompare (inOperand.mProperty_mRegisterGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupKind.objectCompare (inOperand.mProperty_mControlRegisterGroupKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_registerGroupListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mControlRegisterGroupKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST_2D_element::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mControlRegisterGroupKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @registerGroupListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterGroupKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_registerGroupListAST_2D_element::getter_mRegisterGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST GALGAS_registerGroupListAST_2D_element::getter_mControlRegisterGroupKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterGroupKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @registerGroupListAST-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ("registerGroupListAST-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerGroupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerGroupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  const GALGAS_registerGroupListAST_2D_element * p = (const GALGAS_registerGroupListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerGroupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element::~ GALGAS_controlRegisterUserAccesMapAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterUserAccesMapAST_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterUserAccesMapAST_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterUserAccesMapAST_2D_element::objectCompare (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterUserAccesMapAST_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterUserAccesMapAST_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterUserAccesMapAST_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterUserAccesMapAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterUserAccesMapAST_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @controlRegisterUserAccesMapAST-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ("controlRegisterUserAccesMapAST-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  const GALGAS_controlRegisterUserAccesMapAST_2D_element * p = (const GALGAS_controlRegisterUserAccesMapAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                      const GALGAS_uint & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterFieldMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterFieldMap_2D_element::objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBitCount ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @controlRegisterFieldMap-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mResultType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_PLMType & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mResultType (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                                        const GALGAS_bigint & inOperand2,
                                                                        const GALGAS_PLMType & inOperand3 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_sliceMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_sliceMap_2D_element::objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessOperator.objectCompare (inOperand.mProperty_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessRightOperand.objectCompare (inOperand.mProperty_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mResultType.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @sliceMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_sliceMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_sliceMap_2D_element::getter_mAccessOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_sliceMap_2D_element::getter_mAccessRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAccessRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_sliceMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResultType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @sliceMap-element type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mIsReadOnly (),
mProperty_mUserAccess (),
mProperty_mRegisterFieldAccessMap (),
mProperty_mRegisterFieldMap (),
mProperty_mAddressOffset (),
mProperty_mControlRegisterFieldList (),
mProperty_mRegisterBitCount (),
mProperty_mArraySize (),
mProperty_mElementArraySize () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_PLMType & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_sliceMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8,
                                                                            const GALGAS_uint & inOperand9,
                                                                            const GALGAS_uint & inOperand10) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mUserAccess (inOperand3),
mProperty_mRegisterFieldAccessMap (inOperand4),
mProperty_mRegisterFieldMap (inOperand5),
mProperty_mAddressOffset (inOperand6),
mProperty_mControlRegisterFieldList (inOperand7),
mProperty_mRegisterBitCount (inOperand8),
mProperty_mArraySize (inOperand9),
mProperty_mElementArraySize (inOperand10) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_PLMType::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_sliceMap::constructor_emptyMap (HERE),
                                               GALGAS_controlRegisterFieldMap::constructor_emptyMap (HERE),
                                               GALGAS_bigint::constructor_zero (HERE),
                                               GALGAS_controlRegisterFieldList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_PLMType & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_sliceMap & inOperand4,
                                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                                            const GALGAS_bigint & inOperand6,
                                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                                            const GALGAS_uint & inOperand8,
                                                                                            const GALGAS_uint & inOperand9,
                                                                                            const GALGAS_uint & inOperand10 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_controlRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUserAccess.objectCompare (inOperand.mProperty_mUserAccess) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (inOperand.mProperty_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldMap.objectCompare (inOperand.mProperty_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddressOffset.objectCompare (inOperand.mProperty_mAddressOffset) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterFieldList.objectCompare (inOperand.mProperty_mControlRegisterFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitCount.objectCompare (inOperand.mProperty_mRegisterBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArraySize.objectCompare (inOperand.mProperty_mArraySize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElementArraySize.objectCompare (inOperand.mProperty_mElementArraySize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mUserAccess.drop () ;
  mProperty_mRegisterFieldAccessMap.drop () ;
  mProperty_mRegisterFieldMap.drop () ;
  mProperty_mAddressOffset.drop () ;
  mProperty_mControlRegisterFieldList.drop () ;
  mProperty_mRegisterBitCount.drop () ;
  mProperty_mArraySize.drop () ;
  mProperty_mElementArraySize.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUserAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAddressOffset.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArraySize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_controlRegisterMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsReadOnly ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mUserAccess (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserAccess ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldAccessMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterFieldAccessMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterFieldMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_controlRegisterMap_2D_element::getter_mAddressOffset (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddressOffset ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap_2D_element::getter_mControlRegisterFieldList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterFieldList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mRegisterBitCount (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArraySize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementArraySize ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @controlRegisterMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (void) :
mProperty_lkey (),
mProperty_mGroupKind (),
mProperty_mControlRegisterMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap_2D_element::~ GALGAS_controlRegisterGroupMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_registerGroupKind & inOperand1,
                                                                                      const GALGAS_controlRegisterMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mGroupKind (inOperand1),
mProperty_mControlRegisterMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_registerGroupKind & inOperand1,
                                                                                                      const GALGAS_controlRegisterMap & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterGroupMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterGroupMap_2D_element::objectCompare (const GALGAS_controlRegisterGroupMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupKind.objectCompare (inOperand.mProperty_mGroupKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterMap.objectCompare (inOperand.mProperty_mControlRegisterMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controlRegisterGroupMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGroupKind.drop () ;
  mProperty_mControlRegisterMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterGroupMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControlRegisterMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterGroupMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind GALGAS_controlRegisterGroupMap_2D_element::getter_mGroupKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap GALGAS_controlRegisterGroupMap_2D_element::getter_mControlRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControlRegisterMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @controlRegisterGroupMap-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ("controlRegisterGroupMap-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  const GALGAS_controlRegisterGroupMap_2D_element * p = (const GALGAS_controlRegisterGroupMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

