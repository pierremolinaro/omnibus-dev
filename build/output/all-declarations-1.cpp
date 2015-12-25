#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation::GALGAS_llvmBinaryOperation (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_addNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_addNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_subNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_subNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_mulNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremNoOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uaddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uaddOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_saddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_saddOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_usubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_usubOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ssubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ssubOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_umulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_umulOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_smulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_smulOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremOVF ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_and (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_and ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ior (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ior ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_xor ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_shl (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_shl ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ashr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ashr ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_lshr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_lshr ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_eq ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ne ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ult ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ule ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ugt ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_uge ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_slt ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sle ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sgt ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sge ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_llvmBinaryOperation [34] = {
  "(not built)",
  "addNoOVF",
  "subNoOVF",
  "mulNoOVF",
  "udivNoOVF",
  "sdivNoOVF",
  "uremNoOVF",
  "sremNoOVF",
  "uaddOVF",
  "saddOVF",
  "usubOVF",
  "ssubOVF",
  "umulOVF",
  "smulOVF",
  "udivOVF",
  "sdivOVF",
  "uremOVF",
  "sremOVF",
  "and",
  "ior",
  "xor",
  "shl",
  "ashr",
  "lshr",
  "icmp_eq",
  "icmp_ne",
  "icmp_ult",
  "icmp_ule",
  "icmp_ugt",
  "icmp_uge",
  "icmp_slt",
  "icmp_sle",
  "icmp_sgt",
  "icmp_sge"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremNoOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uaddOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_saddOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_usubOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ssubOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_umulOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_smulOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremOVF == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_and == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ior == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xor == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_shl == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ashr == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lshr == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_eq == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ne == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ult == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ule == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ugt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ugt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_uge (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_uge == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_slt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sle == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sgt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sgt == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sge (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sge == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_llvmBinaryOperation::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @llvmBinaryOperation: " << gEnumNameArrayFor_llvmBinaryOperation [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_llvmBinaryOperation::objectCompare (const GALGAS_llvmBinaryOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @llvmBinaryOperation type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  const GALGAS_llvmBinaryOperation * p = (const GALGAS_llvmBinaryOperation *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_llvmBinaryOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmBinaryOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator::GALGAS_literalIntegerInfixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_nonEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_nonEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_strictInf (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_strictInf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_strictSup (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_strictSup ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_infEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_infEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_supEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_supEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_and (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_and ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_ior (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_ior ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_xor ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_add (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_add ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_sub (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_sub ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_mul (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_mul ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_div (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_div ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_rem (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_rem ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_leftShift (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_leftShift ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::constructor_rightShift (UNUSED_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  result.mEnum = kEnum_rightShift ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_literalIntegerInfixOperator [17] = {
  "(not built)",
  "equal",
  "nonEqual",
  "strictInf",
  "strictSup",
  "infEqual",
  "supEqual",
  "and",
  "ior",
  "xor",
  "add",
  "sub",
  "mul",
  "div",
  "rem",
  "leftShift",
  "rightShift"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isNonEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_nonEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isStrictInf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictInf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isStrictSup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictSup == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isInfEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_infEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isSupEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_supEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_and == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ior == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xor == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isAdd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_add == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isSub (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sub == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isMul (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mul == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isDiv (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_div == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isRem (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rem == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShift == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_literalIntegerInfixOperator::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShift == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_literalIntegerInfixOperator::description (C_String & ioString,
                                                      const int32_t /* inIndentation */) const {
  ioString << "<enum @literalIntegerInfixOperator: " << gEnumNameArrayFor_literalIntegerInfixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_literalIntegerInfixOperator::objectCompare (const GALGAS_literalIntegerInfixOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @literalIntegerInfixOperator type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerInfixOperator ("literalIntegerInfixOperator",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalIntegerInfixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerInfixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalIntegerInfixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerInfixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntegerInfixOperator GALGAS_literalIntegerInfixOperator::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerInfixOperator result ;
  const GALGAS_literalIntegerInfixOperator * p = (const GALGAS_literalIntegerInfixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerInfixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerInfixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instructionListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_instructionListAST : public cCollectionElement {
  public : GALGAS_instructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_instructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_instructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_instructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListAST * operand = (cCollectionElement_instructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST::GALGAS_instructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST::GALGAS_instructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_listWithValue (const GALGAS_instructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_instructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_instructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::addAssign_operation (const GALGAS_instructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::modifier_insertAtIndex (const GALGAS_instructionAST inOperand0,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::modifier_removeAtIndex (GALGAS_instructionAST & outOperand0,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::modifier_popFirst (GALGAS_instructionAST & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::modifier_popLast (GALGAS_instructionAST & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::method_first (GALGAS_instructionAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::method_last (GALGAS_instructionAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::operator_concat (const GALGAS_instructionListAST & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::add_operation (const GALGAS_instructionListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListAST::dotAssign_operation (const GALGAS_instructionListAST inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST GALGAS_instructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  GALGAS_instructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    result = p->mObject.mAttribute_mInstruction ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListAST::cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST_2D_element cEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionAST cEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @instructionListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_instructionListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  const GALGAS_instructionListAST * p = (const GALGAS_instructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bootRoutinePriorityMap::cMapElement_bootRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_bootRoutinePriorityMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_bootRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_bootRoutinePriorityMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_bootRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_bootRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_bootRoutinePriorityMap * operand = (cMapElement_bootRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap::GALGAS_bootRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap::GALGAS_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap & GALGAS_bootRoutinePriorityMap::operator = (const GALGAS_bootRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_bootRoutinePriorityMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_bootRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_bootRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@bootRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap::modifier_insertKey (GALGAS_lstring inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_bootRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "a boot routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_bootRoutinePriorityMap * GALGAS_bootRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_bootRoutinePriorityMap * result = (cMapElement_bootRoutinePriorityMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_bootRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootRoutinePriorityMap::cEnumerator_bootRoutinePriorityMap (const GALGAS_bootRoutinePriorityMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element cEnumerator_bootRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_bootRoutinePriorityMap * p = (const cMapElement_bootRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_bootRoutinePriorityMap) ;
  return GALGAS_bootRoutinePriorityMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_bootRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bootRoutinePriorityMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootRoutinePriorityMap ("bootRoutinePriorityMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_bootRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap result ;
  const GALGAS_bootRoutinePriorityMap * p = (const GALGAS_bootRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@bootListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_bootListIR : public cCollectionElement {
  public : GALGAS_bootListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_bootListIR (const GALGAS_location & in_mInitLocation,
                                          const GALGAS_instructionListIR & in_mInstructionListIR,
                                          const GALGAS_location & in_mEndOfInitLocation
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_bootListIR::cCollectionElement_bootListIR (const GALGAS_location & in_mInitLocation,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR,
                                                              const GALGAS_location & in_mEndOfInitLocation
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInitLocation, in_mInstructionListIR, in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_bootListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_bootListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bootListIR (mObject.mAttribute_mInitLocation, mObject.mAttribute_mInstructionListIR, mObject.mAttribute_mEndOfInitLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_bootListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitLocation" ":" ;
  mObject.mAttribute_mInitLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListIR" ":" ;
  mObject.mAttribute_mInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInitLocation" ":" ;
  mObject.mAttribute_mEndOfInitLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_bootListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bootListIR * operand = (cCollectionElement_bootListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bootListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR::GALGAS_bootListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR::GALGAS_bootListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::constructor_listWithValue (const GALGAS_location & inOperand0,
                                                                const GALGAS_instructionListIR & inOperand1,
                                                                const GALGAS_location & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_bootListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_location & in_mInitLocation,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR,
                                                   const GALGAS_location & in_mEndOfInitLocation
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_bootListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_bootListIR (in_mInitLocation,
                                                in_mInstructionListIR,
                                                in_mEndOfInitLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::addAssign_operation (const GALGAS_location & inOperand0,
                                             const GALGAS_instructionListIR & inOperand1,
                                             const GALGAS_location & inOperand2
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::modifier_insertAtIndex (const GALGAS_location inOperand0,
                                                const GALGAS_instructionListIR inOperand1,
                                                const GALGAS_location inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bootListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::modifier_removeAtIndex (GALGAS_location & outOperand0,
                                                GALGAS_instructionListIR & outOperand1,
                                                GALGAS_location & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bootListIR) ;
      outOperand0 = p->mObject.mAttribute_mInitLocation ;
      outOperand1 = p->mObject.mAttribute_mInstructionListIR ;
      outOperand2 = p->mObject.mAttribute_mEndOfInitLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::modifier_popFirst (GALGAS_location & outOperand0,
                                           GALGAS_instructionListIR & outOperand1,
                                           GALGAS_location & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitLocation ;
    outOperand1 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand2 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::modifier_popLast (GALGAS_location & outOperand0,
                                          GALGAS_instructionListIR & outOperand1,
                                          GALGAS_location & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitLocation ;
    outOperand1 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand2 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_first (GALGAS_location & outOperand0,
                                      GALGAS_instructionListIR & outOperand1,
                                      GALGAS_location & outOperand2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitLocation ;
    outOperand1 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand2 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::method_last (GALGAS_location & outOperand0,
                                     GALGAS_instructionListIR & outOperand1,
                                     GALGAS_location & outOperand2,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitLocation ;
    outOperand1 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand2 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::operator_concat (const GALGAS_bootListIR & inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bootListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::add_operation (const GALGAS_bootListIR & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bootListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bootListIR result = GALGAS_bootListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootListIR::dotAssign_operation (const GALGAS_bootListIR inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR::getter_mInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mInitLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_bootListIR::getter_mInstructionListIRAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mInstructionListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_bootListIR::getter_mEndOfInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bootListIR * p = (cCollectionElement_bootListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bootListIR) ;
    result = p->mObject.mAttribute_mEndOfInitLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bootListIR::cEnumerator_bootListIR (const GALGAS_bootListIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR_2D_element cEnumerator_bootListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootListIR::current_mInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_bootListIR::current_mInstructionListIR (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_bootListIR::current_mEndOfInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_bootListIR * p = (const cCollectionElement_bootListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bootListIR) ;
  return p->mObject.mAttribute_mEndOfInitLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @bootListIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootListIR ("bootListIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_bootListIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bootListIR result ;
  const GALGAS_bootListIR * p = (const GALGAS_bootListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@instructionListIR' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_instructionListIR : public cCollectionElement {
  public : GALGAS_instructionListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_instructionListIR::cCollectionElement_instructionListIR (const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_instructionListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_instructionListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListIR (mObject.mAttribute_mInstructionGeneration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_instructionListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionGeneration" ":" ;
  mObject.mAttribute_mInstructionGeneration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_instructionListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListIR * operand = (cCollectionElement_instructionListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR::GALGAS_instructionListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR::GALGAS_instructionListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::constructor_listWithValue (const GALGAS_abstractInstructionIR & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_instructionListIR::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_abstractInstructionIR & in_mInstructionGeneration
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListIR (in_mInstructionGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::addAssign_operation (const GALGAS_abstractInstructionIR & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::modifier_insertAtIndex (const GALGAS_abstractInstructionIR inOperand0,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListIR (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::modifier_removeAtIndex (GALGAS_abstractInstructionIR & outOperand0,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
      outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::modifier_popFirst (GALGAS_abstractInstructionIR & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::modifier_popLast (GALGAS_abstractInstructionIR & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::method_first (GALGAS_abstractInstructionIR & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::method_last (GALGAS_abstractInstructionIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    outOperand0 = p->mObject.mAttribute_mInstructionGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::operator_concat (const GALGAS_instructionListIR & inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::add_operation (const GALGAS_instructionListIR & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_instructionListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListIR result = GALGAS_instructionListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_instructionListIR::dotAssign_operation (const GALGAS_instructionListIR inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR GALGAS_instructionListIR::getter_mInstructionGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListIR * p = (cCollectionElement_instructionListIR *) attributes.ptr () ;
  GALGAS_abstractInstructionIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
    result = p->mObject.mAttribute_mInstructionGeneration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_instructionListIR::cEnumerator_instructionListIR (const GALGAS_instructionListIR & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR_2D_element cEnumerator_instructionListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractInstructionIR cEnumerator_instructionListIR::current_mInstructionGeneration (LOCATION_ARGS) const {
  const cCollectionElement_instructionListIR * p = (const cCollectionElement_instructionListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListIR) ;
  return p->mObject.mAttribute_mInstructionGeneration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @instructionListIR type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListIR ("instructionListIR",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_instructionListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_instructionListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_instructionListIR::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_instructionListIR result ;
  const GALGAS_instructionListIR * p = (const GALGAS_instructionListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instructionListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instructionListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@initRequiredByProcList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_initRequiredByProcList : public cCollectionElement {
  public : GALGAS_initRequiredByProcList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_initRequiredByProcList (const GALGAS_lstring & in_mProcName,
                                                      const GALGAS_procFormalArgumentList & in_mProcFormalArgumentList
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_initRequiredByProcList::cCollectionElement_initRequiredByProcList (const GALGAS_lstring & in_mProcName,
                                                                                      const GALGAS_procFormalArgumentList & in_mProcFormalArgumentList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProcName, in_mProcFormalArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_initRequiredByProcList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_initRequiredByProcList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_initRequiredByProcList (mObject.mAttribute_mProcName, mObject.mAttribute_mProcFormalArgumentList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_initRequiredByProcList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcName" ":" ;
  mObject.mAttribute_mProcName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcFormalArgumentList" ":" ;
  mObject.mAttribute_mProcFormalArgumentList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_initRequiredByProcList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_initRequiredByProcList * operand = (cCollectionElement_initRequiredByProcList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_initRequiredByProcList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList::GALGAS_initRequiredByProcList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList::GALGAS_initRequiredByProcList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_initRequiredByProcList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_procFormalArgumentList & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_initRequiredByProcList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_initRequiredByProcList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mProcName,
                                                               const GALGAS_procFormalArgumentList & in_mProcFormalArgumentList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_initRequiredByProcList * p = NULL ;
  macroMyNew (p, cCollectionElement_initRequiredByProcList (in_mProcName,
                                                            in_mProcFormalArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_procFormalArgumentList & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initRequiredByProcList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_procFormalArgumentList inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initRequiredByProcList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_procFormalArgumentList & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
      outOperand0 = p->mObject.mAttribute_mProcName ;
      outOperand1 = p->mObject.mAttribute_mProcFormalArgumentList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_procFormalArgumentList & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
    outOperand0 = p->mObject.mAttribute_mProcName ;
    outOperand1 = p->mObject.mAttribute_mProcFormalArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_procFormalArgumentList & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
    outOperand0 = p->mObject.mAttribute_mProcName ;
    outOperand1 = p->mObject.mAttribute_mProcFormalArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_procFormalArgumentList & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
    outOperand0 = p->mObject.mAttribute_mProcName ;
    outOperand1 = p->mObject.mAttribute_mProcFormalArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_procFormalArgumentList & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
    outOperand0 = p->mObject.mAttribute_mProcName ;
    outOperand1 = p->mObject.mAttribute_mProcFormalArgumentList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::operator_concat (const GALGAS_initRequiredByProcList & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initRequiredByProcList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::add_operation (const GALGAS_initRequiredByProcList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initRequiredByProcList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_initRequiredByProcList result = GALGAS_initRequiredByProcList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_initRequiredByProcList result = GALGAS_initRequiredByProcList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_initRequiredByProcList result = GALGAS_initRequiredByProcList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRequiredByProcList::dotAssign_operation (const GALGAS_initRequiredByProcList inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRequiredByProcList::getter_mProcNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
    result = p->mObject.mAttribute_mProcName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_initRequiredByProcList::getter_mProcFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initRequiredByProcList * p = (cCollectionElement_initRequiredByProcList *) attributes.ptr () ;
  GALGAS_procFormalArgumentList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
    result = p->mObject.mAttribute_mProcFormalArgumentList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRequiredByProcList::cEnumerator_initRequiredByProcList (const GALGAS_initRequiredByProcList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList_2D_element cEnumerator_initRequiredByProcList::current (LOCATION_ARGS) const {
  const cCollectionElement_initRequiredByProcList * p = (const cCollectionElement_initRequiredByProcList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRequiredByProcList::current_mProcName (LOCATION_ARGS) const {
  const cCollectionElement_initRequiredByProcList * p = (const cCollectionElement_initRequiredByProcList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
  return p->mObject.mAttribute_mProcName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList cEnumerator_initRequiredByProcList::current_mProcFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_initRequiredByProcList * p = (const cCollectionElement_initRequiredByProcList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initRequiredByProcList) ;
  return p->mObject.mAttribute_mProcFormalArgumentList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRequiredByProcList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRequiredByProcList ("initRequiredByProcList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRequiredByProcList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRequiredByProcList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRequiredByProcList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initRequiredByProcList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRequiredByProcList result ;
  const GALGAS_initRequiredByProcList * p = (const GALGAS_initRequiredByProcList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRequiredByProcList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRequiredByProcList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@procFormalArgumentList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procFormalArgumentList : public cCollectionElement {
  public : GALGAS_procFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procFormalArgumentList (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                      const GALGAS_lstring & in_mSelector,
                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                      const GALGAS_lstring & in_mFormalArgumentName
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procFormalArgumentList::cCollectionElement_procFormalArgumentList (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                      const GALGAS_lstring & in_mSelector,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procFormalArgumentList (mObject.mAttribute_mFormalArgumentPassingMode, mObject.mAttribute_mSelector, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentPassingMode" ":" ;
  mObject.mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procFormalArgumentList * operand = (cCollectionElement_procFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList::GALGAS_procFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList::GALGAS_procFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                               const GALGAS_lstring & in_mSelector,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_procFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_procFormalArgumentList (in_mFormalArgumentPassingMode,
                                                            in_mSelector,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2,
                                                         const GALGAS_lstring & inOperand3
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::modifier_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lstring inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::modifier_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
      outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::modifier_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::modifier_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  GALGAS_lstring & outOperand3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand3 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::operator_concat (const GALGAS_procFormalArgumentList & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::add_operation (const GALGAS_procFormalArgumentList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result = GALGAS_procFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result = GALGAS_procFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentList result = GALGAS_procFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList::dotAssign_operation (const GALGAS_procFormalArgumentList inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentList::getter_mFormalArgumentPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentList * p = (cCollectionElement_procFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procFormalArgumentList::cEnumerator_procFormalArgumentList (const GALGAS_procFormalArgumentList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element cEnumerator_procFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_procFormalArgumentList::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procFormalArgumentList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procFormalArgumentList::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procFormalArgumentList::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentList * p = (const cCollectionElement_procFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @procFormalArgumentList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentList ("procFormalArgumentList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_procFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList result ;
  const GALGAS_procFormalArgumentList * p = (const GALGAS_procFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutineMap::cMapElement_initRoutineMap (const GALGAS_lstring & inKey
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_initRoutineMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_initRoutineMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_initRoutineMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_initRoutineMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_initRoutineMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_initRoutineMap * operand = (cMapElement_initRoutineMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap::GALGAS_initRoutineMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap::GALGAS_initRoutineMap (const GALGAS_initRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap & GALGAS_initRoutineMap::operator = (const GALGAS_initRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::constructor_mapWithMapToOverride (const GALGAS_initRoutineMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_initRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@initRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::modifier_insertKey (GALGAS_lstring inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutineMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%%%K' init routine is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_initRoutineMap_searchKey = "there is no '%%%K' init routine" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_initRoutineMap * p = (const cMapElement_initRoutineMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_initRoutineMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_initRoutineMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutineMap * GALGAS_initRoutineMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_initRoutineMap * result = (cMapElement_initRoutineMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_initRoutineMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRoutineMap::cEnumerator_initRoutineMap (const GALGAS_initRoutineMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element cEnumerator_initRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_initRoutineMap * p = (const cMapElement_initRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_initRoutineMap) ;
  return GALGAS_initRoutineMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @initRoutineMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutineMap ("initRoutineMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutineMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_initRoutineMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap result ;
  const GALGAS_initRoutineMap * p = (const GALGAS_initRoutineMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutinePriorityMap::cMapElement_initRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_initRoutinePriorityMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_initRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_initRoutinePriorityMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_initRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_initRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_initRoutinePriorityMap * operand = (cMapElement_initRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap::GALGAS_initRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap::GALGAS_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap & GALGAS_initRoutinePriorityMap::operator = (const GALGAS_initRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_initRoutinePriorityMap & inMapToOverride
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_initRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@initRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap::modifier_insertKey (GALGAS_lstring inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_initRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "an init routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_initRoutinePriorityMap * GALGAS_initRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_initRoutinePriorityMap * result = (cMapElement_initRoutinePriorityMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_initRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initRoutinePriorityMap::cEnumerator_initRoutinePriorityMap (const GALGAS_initRoutinePriorityMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element cEnumerator_initRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_initRoutinePriorityMap * p = (const cMapElement_initRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_initRoutinePriorityMap) ;
  return GALGAS_initRoutinePriorityMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_initRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRoutinePriorityMap type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutinePriorityMap ("initRoutinePriorityMap",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_initRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap result ;
  const GALGAS_initRoutinePriorityMap * p = (const GALGAS_initRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@initListIR' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_initListIR : public cCollectionElement {
  public : GALGAS_initListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_initListIR (const GALGAS_initRequiredByProcList & in_mInitRequiredByProcList,
                                          const GALGAS_location & in_mInitLocation,
                                          const GALGAS_instructionListIR & in_mInstructionListIR,
                                          const GALGAS_location & in_mEndOfInitLocation
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_initListIR::cCollectionElement_initListIR (const GALGAS_initRequiredByProcList & in_mInitRequiredByProcList,
                                                              const GALGAS_location & in_mInitLocation,
                                                              const GALGAS_instructionListIR & in_mInstructionListIR,
                                                              const GALGAS_location & in_mEndOfInitLocation
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInitRequiredByProcList, in_mInitLocation, in_mInstructionListIR, in_mEndOfInitLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_initListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_initListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_initListIR (mObject.mAttribute_mInitRequiredByProcList, mObject.mAttribute_mInitLocation, mObject.mAttribute_mInstructionListIR, mObject.mAttribute_mEndOfInitLocation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_initListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitRequiredByProcList" ":" ;
  mObject.mAttribute_mInitRequiredByProcList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitLocation" ":" ;
  mObject.mAttribute_mInitLocation.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionListIR" ":" ;
  mObject.mAttribute_mInstructionListIR.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInitLocation" ":" ;
  mObject.mAttribute_mEndOfInitLocation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_initListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_initListIR * operand = (cCollectionElement_initListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_initListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR::GALGAS_initListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR::GALGAS_initListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_initListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::constructor_listWithValue (const GALGAS_initRequiredByProcList & inOperand0,
                                                                const GALGAS_location & inOperand1,
                                                                const GALGAS_instructionListIR & inOperand2,
                                                                const GALGAS_location & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_initListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_initRequiredByProcList & in_mInitRequiredByProcList,
                                                   const GALGAS_location & in_mInitLocation,
                                                   const GALGAS_instructionListIR & in_mInstructionListIR,
                                                   const GALGAS_location & in_mEndOfInitLocation
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_initListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_initListIR (in_mInitRequiredByProcList,
                                                in_mInitLocation,
                                                in_mInstructionListIR,
                                                in_mEndOfInitLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::addAssign_operation (const GALGAS_initRequiredByProcList & inOperand0,
                                             const GALGAS_location & inOperand1,
                                             const GALGAS_instructionListIR & inOperand2,
                                             const GALGAS_location & inOperand3
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::modifier_insertAtIndex (const GALGAS_initRequiredByProcList inOperand0,
                                                const GALGAS_location inOperand1,
                                                const GALGAS_instructionListIR inOperand2,
                                                const GALGAS_location inOperand3,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_initListIR (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::modifier_removeAtIndex (GALGAS_initRequiredByProcList & outOperand0,
                                                GALGAS_location & outOperand1,
                                                GALGAS_instructionListIR & outOperand2,
                                                GALGAS_location & outOperand3,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_initListIR) ;
      outOperand0 = p->mObject.mAttribute_mInitRequiredByProcList ;
      outOperand1 = p->mObject.mAttribute_mInitLocation ;
      outOperand2 = p->mObject.mAttribute_mInstructionListIR ;
      outOperand3 = p->mObject.mAttribute_mEndOfInitLocation ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::modifier_popFirst (GALGAS_initRequiredByProcList & outOperand0,
                                           GALGAS_location & outOperand1,
                                           GALGAS_instructionListIR & outOperand2,
                                           GALGAS_location & outOperand3,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand3 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::modifier_popLast (GALGAS_initRequiredByProcList & outOperand0,
                                          GALGAS_location & outOperand1,
                                          GALGAS_instructionListIR & outOperand2,
                                          GALGAS_location & outOperand3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand3 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_first (GALGAS_initRequiredByProcList & outOperand0,
                                      GALGAS_location & outOperand1,
                                      GALGAS_instructionListIR & outOperand2,
                                      GALGAS_location & outOperand3,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand3 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::method_last (GALGAS_initRequiredByProcList & outOperand0,
                                     GALGAS_location & outOperand1,
                                     GALGAS_instructionListIR & outOperand2,
                                     GALGAS_location & outOperand3,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    outOperand0 = p->mObject.mAttribute_mInitRequiredByProcList ;
    outOperand1 = p->mObject.mAttribute_mInitLocation ;
    outOperand2 = p->mObject.mAttribute_mInstructionListIR ;
    outOperand3 = p->mObject.mAttribute_mEndOfInitLocation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::operator_concat (const GALGAS_initListIR & inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::add_operation (const GALGAS_initListIR & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_initListIR result = GALGAS_initListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR::dotAssign_operation (const GALGAS_initListIR inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList GALGAS_initListIR::getter_mInitRequiredByProcListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_initRequiredByProcList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mInitRequiredByProcList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR::getter_mInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mInitLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR::getter_mInstructionListIRAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_instructionListIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mInstructionListIR ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_initListIR::getter_mEndOfInitLocationAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_initListIR * p = (cCollectionElement_initListIR *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_initListIR) ;
    result = p->mObject.mAttribute_mEndOfInitLocation ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_initListIR::cEnumerator_initListIR (const GALGAS_initListIR & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element cEnumerator_initListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRequiredByProcList cEnumerator_initListIR::current_mInitRequiredByProcList (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mInitRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_initListIR::current_mInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mInitLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR cEnumerator_initListIR::current_mInstructionListIR (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cEnumerator_initListIR::current_mEndOfInitLocation (LOCATION_ARGS) const {
  const cCollectionElement_initListIR * p = (const cCollectionElement_initListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_initListIR) ;
  return p->mObject.mAttribute_mEndOfInitLocation ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @initListIR type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListIR ("initListIR",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_initListIR::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_initListIR result ;
  const GALGAS_initListIR * p = (const GALGAS_initListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_exceptionRoutinePriorityMap::cMapElement_exceptionRoutinePriorityMap (const GALGAS_lstring & inKey
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_exceptionRoutinePriorityMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_exceptionRoutinePriorityMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_exceptionRoutinePriorityMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_exceptionRoutinePriorityMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_exceptionRoutinePriorityMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_exceptionRoutinePriorityMap * operand = (cMapElement_exceptionRoutinePriorityMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap::GALGAS_exceptionRoutinePriorityMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap::GALGAS_exceptionRoutinePriorityMap (const GALGAS_exceptionRoutinePriorityMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap & GALGAS_exceptionRoutinePriorityMap::operator = (const GALGAS_exceptionRoutinePriorityMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_exceptionRoutinePriorityMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_exceptionRoutinePriorityMap::constructor_mapWithMapToOverride (const GALGAS_exceptionRoutinePriorityMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_exceptionRoutinePriorityMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_exceptionRoutinePriorityMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_exceptionRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_exceptionRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@exceptionRoutinePriorityMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap::modifier_insertSetupKey (GALGAS_lstring inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_exceptionRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_exceptionRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "an exception setup routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap::modifier_insertLoopKey (GALGAS_lstring inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_exceptionRoutinePriorityMap * p = NULL ;
  macroMyNew (p, cMapElement_exceptionRoutinePriorityMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "an exception loop routine with priority %K has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_exceptionRoutinePriorityMap_searchSetupKey = "there is no exception setup routine with priority %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap::method_searchSetupKey (GALGAS_lstring inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_exceptionRoutinePriorityMap * p = (const cMapElement_exceptionRoutinePriorityMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_exceptionRoutinePriorityMap_searchSetupKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_exceptionRoutinePriorityMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_exceptionRoutinePriorityMap_searchLoopKey = "there is no  exception loop routine with priority %K" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_exceptionRoutinePriorityMap::method_searchLoopKey (GALGAS_lstring inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_exceptionRoutinePriorityMap * p = (const cMapElement_exceptionRoutinePriorityMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_exceptionRoutinePriorityMap_searchLoopKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_exceptionRoutinePriorityMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_exceptionRoutinePriorityMap * GALGAS_exceptionRoutinePriorityMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_exceptionRoutinePriorityMap * result = (cMapElement_exceptionRoutinePriorityMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_exceptionRoutinePriorityMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_exceptionRoutinePriorityMap::cEnumerator_exceptionRoutinePriorityMap (const GALGAS_exceptionRoutinePriorityMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap_2D_element cEnumerator_exceptionRoutinePriorityMap::current (LOCATION_ARGS) const {
  const cMapElement_exceptionRoutinePriorityMap * p = (const cMapElement_exceptionRoutinePriorityMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_exceptionRoutinePriorityMap) ;
  return GALGAS_exceptionRoutinePriorityMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_exceptionRoutinePriorityMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @exceptionRoutinePriorityMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_exceptionRoutinePriorityMap ("exceptionRoutinePriorityMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_exceptionRoutinePriorityMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exceptionRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_exceptionRoutinePriorityMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_exceptionRoutinePriorityMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_exceptionRoutinePriorityMap GALGAS_exceptionRoutinePriorityMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_exceptionRoutinePriorityMap result ;
  const GALGAS_exceptionRoutinePriorityMap * p = (const GALGAS_exceptionRoutinePriorityMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_exceptionRoutinePriorityMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exceptionRoutinePriorityMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@funcFormalArgumentList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_funcFormalArgumentList : public cCollectionElement {
  public : GALGAS_funcFormalArgumentList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_funcFormalArgumentList (const GALGAS_lstring & in_mSelector,
                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                      const GALGAS_lstring & in_mFormalArgumentName
                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_funcFormalArgumentList::cCollectionElement_funcFormalArgumentList (const GALGAS_lstring & in_mSelector,
                                                                                      const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                      const GALGAS_lstring & in_mFormalArgumentName
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_funcFormalArgumentList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_funcFormalArgumentList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_funcFormalArgumentList (mObject.mAttribute_mSelector, mObject.mAttribute_mFormalArgumentTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_funcFormalArgumentList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentTypeName" ":" ;
  mObject.mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_funcFormalArgumentList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_funcFormalArgumentList * operand = (cCollectionElement_funcFormalArgumentList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_funcFormalArgumentList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList::GALGAS_funcFormalArgumentList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList::GALGAS_funcFormalArgumentList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_funcFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mSelector,
                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                               const GALGAS_lstring & in_mFormalArgumentName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_funcFormalArgumentList * p = NULL ;
  macroMyNew (p, cCollectionElement_funcFormalArgumentList (in_mSelector,
                                                            in_mFormalArgumentTypeName,
                                                            in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_lstring & inOperand1,
                                                         const GALGAS_lstring & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_funcFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lstring inOperand2,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_funcFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
      outOperand0 = p->mObject.mAttribute_mSelector ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lstring & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstring & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_lstring & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    outOperand0 = p->mObject.mAttribute_mSelector ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::operator_concat (const GALGAS_funcFormalArgumentList & inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::add_operation (const GALGAS_funcFormalArgumentList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentList result = GALGAS_funcFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentList result = GALGAS_funcFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentList result = GALGAS_funcFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentList::dotAssign_operation (const GALGAS_funcFormalArgumentList inOperand
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcFormalArgumentList::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentList * p = (cCollectionElement_funcFormalArgumentList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_funcFormalArgumentList::cEnumerator_funcFormalArgumentList (const GALGAS_funcFormalArgumentList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList_2D_element cEnumerator_funcFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentList * p = (const cCollectionElement_funcFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_funcFormalArgumentList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentList * p = (const cCollectionElement_funcFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_funcFormalArgumentList::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentList * p = (const cCollectionElement_funcFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_funcFormalArgumentList::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentList * p = (const cCollectionElement_funcFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentList) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @funcFormalArgumentList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentList ("funcFormalArgumentList",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentList GALGAS_funcFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentList result ;
  const GALGAS_funcFormalArgumentList * p = (const GALGAS_funcFormalArgumentList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@funcSignature' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_funcSignature : public cCollectionElement {
  public : GALGAS_funcSignature_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_funcSignature (const GALGAS_lstring & in_mFormalSelector,
                                             const GALGAS_unifiedTypeMap_2D_proxy & in_mArgumentType
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_funcSignature::cCollectionElement_funcSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mArgumentType
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mArgumentType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_funcSignature::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_funcSignature::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_funcSignature (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mArgumentType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_funcSignature::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArgumentType" ":" ;
  mObject.mAttribute_mArgumentType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_funcSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_funcSignature * operand = (cCollectionElement_funcSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_funcSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature::GALGAS_funcSignature (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature::GALGAS_funcSignature (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_funcSignature result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_funcSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_funcSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_lstring & in_mFormalSelector,
                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mArgumentType
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_funcSignature * p = NULL ;
  macroMyNew (p, cCollectionElement_funcSignature (in_mFormalSelector,
                                                   in_mArgumentType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_funcSignature (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_funcSignature (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_funcSignature) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mArgumentType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::modifier_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mArgumentType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::modifier_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mArgumentType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::method_first (GALGAS_lstring & outOperand0,
                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mArgumentType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::method_last (GALGAS_lstring & outOperand0,
                                        GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcSignature) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mArgumentType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::operator_concat (const GALGAS_funcSignature & inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_funcSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::add_operation (const GALGAS_funcSignature & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_funcSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_funcSignature result = GALGAS_funcSignature::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_funcSignature result = GALGAS_funcSignature::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_funcSignature result = GALGAS_funcSignature::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcSignature::dotAssign_operation (const GALGAS_funcSignature inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_funcSignature::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcSignature) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcSignature::getter_mArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcSignature * p = (cCollectionElement_funcSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcSignature) ;
    result = p->mObject.mAttribute_mArgumentType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_funcSignature::cEnumerator_funcSignature (const GALGAS_funcSignature & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature_2D_element cEnumerator_funcSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_funcSignature * p = (const cCollectionElement_funcSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcSignature) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_funcSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_funcSignature * p = (const cCollectionElement_funcSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcSignature) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_funcSignature::current_mArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_funcSignature * p = (const cCollectionElement_funcSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcSignature) ;
  return p->mObject.mAttribute_mArgumentType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @funcSignature type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcSignature ("funcSignature",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcSignature::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcSignature (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_funcSignature::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_funcSignature result ;
  const GALGAS_funcSignature * p = (const GALGAS_funcSignature *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_functionMap::cMapElement_functionMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_modeMap & in_mFunctionModeMap,
                                                  const GALGAS_funcSignature & in_mSignature,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mFunctionModeMap (in_mFunctionModeMap),
mAttribute_mSignature (in_mSignature),
mAttribute_mResultType (in_mResultType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_functionMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mFunctionModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_functionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_functionMap (mAttribute_lkey, mAttribute_mFunctionModeMap, mAttribute_mSignature, mAttribute_mResultType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_functionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionModeMap" ":" ;
  mAttribute_mFunctionModeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mAttribute_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_functionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_functionMap * operand = (cMapElement_functionMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionModeMap.objectCompare (operand->mAttribute_mFunctionModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSignature.objectCompare (operand->mAttribute_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap::GALGAS_functionMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap::GALGAS_functionMap (const GALGAS_functionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap & GALGAS_functionMap::operator = (const GALGAS_functionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::constructor_mapWithMapToOverride (const GALGAS_functionMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_functionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_modeMap & inArgument0,
                                              const GALGAS_funcSignature & inArgument1,
                                              const GALGAS_unifiedTypeMap_2D_proxy & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@functionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_insertKey (GALGAS_lstring inKey,
                                             GALGAS_modeMap inArgument0,
                                             GALGAS_funcSignature inArgument1,
                                             GALGAS_unifiedTypeMap_2D_proxy inArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * p = NULL ;
  macroMyNew (p, cMapElement_functionMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' func is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_functionMap_searchKey = "there is no '%K' func" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_modeMap & outArgument0,
                                           GALGAS_funcSignature & outArgument1,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_functionMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_functionMap) ;
    outArgument0 = p->mAttribute_mFunctionModeMap ;
    outArgument1 = p->mAttribute_mSignature ;
    outArgument2 = p->mAttribute_mResultType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_functionMap::getter_mFunctionModeMapForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_modeMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mFunctionModeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature GALGAS_functionMap::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_funcSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_setMFunctionModeMapForKey (GALGAS_modeMap inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mFunctionModeMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_setMSignatureForKey (GALGAS_funcSignature inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionMap::modifier_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_functionMap * p = (cMapElement_functionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_functionMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_functionMap * GALGAS_functionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_functionMap * result = (cMapElement_functionMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_functionMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionMap::cEnumerator_functionMap (const GALGAS_functionMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap_2D_element cEnumerator_functionMap::current (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return GALGAS_functionMap_2D_element (p->mAttribute_lkey, p->mAttribute_mFunctionModeMap, p->mAttribute_mSignature, p->mAttribute_mResultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_functionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap cEnumerator_functionMap::current_mFunctionModeMap (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mFunctionModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcSignature cEnumerator_functionMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_functionMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_functionMap * p = (const cMapElement_functionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_functionMap) ;
  return p->mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @functionMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionMap ("functionMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionMap GALGAS_functionMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionMap result ;
  const GALGAS_functionMap * p = (const GALGAS_functionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_modeMap::cMapElement_modeMap (const GALGAS_lstring & inKey
                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_modeMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_modeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_modeMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_modeMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_modeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_modeMap * operand = (cMapElement_modeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap::GALGAS_modeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap::GALGAS_modeMap (const GALGAS_modeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap & GALGAS_modeMap::operator = (const GALGAS_modeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_modeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::constructor_mapWithMapToOverride (const GALGAS_modeMap & inMapToOverride
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_modeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_modeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_modeMap * p = NULL ;
  macroMyNew (p, cMapElement_modeMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@modeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap::modifier_insertKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_modeMap * p = NULL ;
  macroMyNew (p, cMapElement_modeMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%%%K' mode is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_modeMap_searchKey = "there is no '%%%K' mode" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap::method_searchKey (GALGAS_lstring inKey,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_modeMap * p = (const cMapElement_modeMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_modeMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_modeMap) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_modeMap * GALGAS_modeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                         const GALGAS_string & inKey
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_modeMap * result = (cMapElement_modeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_modeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_modeMap::cEnumerator_modeMap (const GALGAS_modeMap & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element cEnumerator_modeMap::current (LOCATION_ARGS) const {
  const cMapElement_modeMap * p = (const cMapElement_modeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_modeMap) ;
  return GALGAS_modeMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_modeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @modeMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modeMap ("modeMap",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_modeMap::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_modeMap result ;
  const GALGAS_modeMap * p = (const GALGAS_modeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@funcFormalArgumentListForGeneration' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_funcFormalArgumentListForGeneration : public cCollectionElement {
  public : GALGAS_funcFormalArgumentListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_funcFormalArgumentListForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                   const GALGAS_string & in_mFormalArgumentName
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_funcFormalArgumentListForGeneration::cCollectionElement_funcFormalArgumentListForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_funcFormalArgumentListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_funcFormalArgumentListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_funcFormalArgumentListForGeneration (mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_funcFormalArgumentListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_funcFormalArgumentListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_funcFormalArgumentListForGeneration * operand = (cCollectionElement_funcFormalArgumentListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_funcFormalArgumentListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration::GALGAS_funcFormalArgumentListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration::GALGAS_funcFormalArgumentListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_funcFormalArgumentListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_funcFormalArgumentListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_funcFormalArgumentListForGeneration (in_mFormalArgumentType,
                                                                         in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::addAssign_operation (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                      const GALGAS_string & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_funcFormalArgumentListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::modifier_insertAtIndex (const GALGAS_unifiedTypeMap_2D_proxy inOperand0,
                                                                         const GALGAS_string inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_funcFormalArgumentListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::modifier_removeAtIndex (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                         GALGAS_string & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::modifier_popFirst (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::modifier_popLast (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                                   GALGAS_string & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::method_first (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::method_last (GALGAS_unifiedTypeMap_2D_proxy & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::operator_concat (const GALGAS_funcFormalArgumentListForGeneration & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::add_operation (const GALGAS_funcFormalArgumentListForGeneration & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentListForGeneration result = GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentListForGeneration result = GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_funcFormalArgumentListForGeneration result = GALGAS_funcFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_funcFormalArgumentListForGeneration::dotAssign_operation (const GALGAS_funcFormalArgumentListForGeneration inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_funcFormalArgumentListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_funcFormalArgumentListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_funcFormalArgumentListForGeneration * p = (cCollectionElement_funcFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_funcFormalArgumentListForGeneration::cEnumerator_funcFormalArgumentListForGeneration (const GALGAS_funcFormalArgumentListForGeneration & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration_2D_element cEnumerator_funcFormalArgumentListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentListForGeneration * p = (const cCollectionElement_funcFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_funcFormalArgumentListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentListForGeneration * p = (const cCollectionElement_funcFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_funcFormalArgumentListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_funcFormalArgumentListForGeneration * p = (const cCollectionElement_funcFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_funcFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @funcFormalArgumentListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration ("funcFormalArgumentListForGeneration",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_funcFormalArgumentListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_funcFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_funcFormalArgumentListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_funcFormalArgumentListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_funcFormalArgumentListForGeneration GALGAS_funcFormalArgumentListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_funcFormalArgumentListForGeneration result ;
  const GALGAS_funcFormalArgumentListForGeneration * p = (const GALGAS_funcFormalArgumentListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_funcFormalArgumentListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("funcFormalArgumentListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_labelMap::cMapElement_labelMap (const GALGAS_lstring & inKey
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_labelMap::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_labelMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_labelMap (mAttribute_lkey COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_labelMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_labelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_labelMap * operand = (cMapElement_labelMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap::GALGAS_labelMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap::GALGAS_labelMap (const GALGAS_labelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap & GALGAS_labelMap::operator = (const GALGAS_labelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::constructor_mapWithMapToOverride (const GALGAS_labelMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_labelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = NULL ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@labelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap::modifier_insertKey (GALGAS_lstring inKey,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * p = NULL ;
  macroMyNew (p, cMapElement_labelMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_labelMap * GALGAS_labelMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_labelMap * result = (cMapElement_labelMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_labelMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_labelMap::cEnumerator_labelMap (const GALGAS_labelMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element cEnumerator_labelMap::current (LOCATION_ARGS) const {
  const cMapElement_labelMap * p = (const cMapElement_labelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_labelMap) ;
  return GALGAS_labelMap_2D_element (p->mAttribute_lkey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_labelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @labelMap type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap ("labelMap",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap GALGAS_labelMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_labelMap result ;
  const GALGAS_labelMap * p = (const GALGAS_labelMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_procedureMap::cMapElement_procedureMap (const GALGAS_lstring & inKey,
                                                    const GALGAS_bool & in_mMutating,
                                                    const GALGAS_modeMap & in_mProcedureModeMap,
                                                    const GALGAS_procedureSignature & in_mSignature,
                                                    const GALGAS_bool & in_mWeakProcedure
                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mMutating (in_mMutating),
mAttribute_mProcedureModeMap (in_mProcedureModeMap),
mAttribute_mSignature (in_mSignature),
mAttribute_mWeakProcedure (in_mWeakProcedure) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_procedureMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mMutating.isValid () && mAttribute_mProcedureModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mWeakProcedure.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_procedureMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_procedureMap (mAttribute_lkey, mAttribute_mMutating, mAttribute_mProcedureModeMap, mAttribute_mSignature, mAttribute_mWeakProcedure COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_procedureMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMutating" ":" ;
  mAttribute_mMutating.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProcedureModeMap" ":" ;
  mAttribute_mProcedureModeMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSignature" ":" ;
  mAttribute_mSignature.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWeakProcedure" ":" ;
  mAttribute_mWeakProcedure.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_procedureMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_procedureMap * operand = (cMapElement_procedureMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mMutating.objectCompare (operand->mAttribute_mMutating) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mProcedureModeMap.objectCompare (operand->mAttribute_mProcedureModeMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSignature.objectCompare (operand->mAttribute_mSignature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mWeakProcedure.objectCompare (operand->mAttribute_mWeakProcedure) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap::GALGAS_procedureMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap::GALGAS_procedureMap (const GALGAS_procedureMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap & GALGAS_procedureMap::operator = (const GALGAS_procedureMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_procedureMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_procedureMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_procedureMap::constructor_mapWithMapToOverride (const GALGAS_procedureMap & inMapToOverride
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_procedureMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_procedureMap::getter_overriddenMap (C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_procedureMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::addAssign_operation (const GALGAS_lstring & inKey,
                                               const GALGAS_bool & inArgument0,
                                               const GALGAS_modeMap & inArgument1,
                                               const GALGAS_procedureSignature & inArgument2,
                                               const GALGAS_bool & inArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_procedureMap * p = NULL ;
  macroMyNew (p, cMapElement_procedureMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@procedureMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::modifier_insertKey (GALGAS_lstring inKey,
                                              GALGAS_bool inArgument0,
                                              GALGAS_modeMap inArgument1,
                                              GALGAS_procedureSignature inArgument2,
                                              GALGAS_bool inArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_procedureMap * p = NULL ;
  macroMyNew (p, cMapElement_procedureMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' proc is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_procedureMap_searchKey = "there is no '%K' proc" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::method_searchKey (GALGAS_lstring inKey,
                                            GALGAS_bool & outArgument0,
                                            GALGAS_modeMap & outArgument1,
                                            GALGAS_procedureSignature & outArgument2,
                                            GALGAS_bool & outArgument3,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_procedureMap_searchKey
                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    outArgument0 = p->mAttribute_mMutating ;
    outArgument1 = p->mAttribute_mProcedureModeMap ;
    outArgument2 = p->mAttribute_mSignature ;
    outArgument3 = p->mAttribute_mWeakProcedure ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::modifier_removeKey (GALGAS_lstring inKey,
                                              GALGAS_bool & outArgument0,
                                              GALGAS_modeMap & outArgument1,
                                              GALGAS_procedureSignature & outArgument2,
                                              GALGAS_bool & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' proc" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_procedureMap * p = (cMapElement_procedureMap *) attributes.ptr () ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    outArgument0 = p->mAttribute_mMutating ;
    outArgument1 = p->mAttribute_mProcedureModeMap ;
    outArgument2 = p->mAttribute_mSignature ;
    outArgument3 = p->mAttribute_mWeakProcedure ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap::getter_mMutatingForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    result = p->mAttribute_mMutating ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_procedureMap::getter_mProcedureModeMapForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) attributes ;
  GALGAS_modeMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    result = p->mAttribute_mProcedureModeMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_procedureMap::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) attributes ;
  GALGAS_procedureSignature result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    result = p->mAttribute_mSignature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procedureMap::getter_mWeakProcedureForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    result = p->mAttribute_mWeakProcedure ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::modifier_setMMutatingForKey (GALGAS_bool inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_procedureMap * p = (cMapElement_procedureMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    p->mAttribute_mMutating = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::modifier_setMProcedureModeMapForKey (GALGAS_modeMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_procedureMap * p = (cMapElement_procedureMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    p->mAttribute_mProcedureModeMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::modifier_setMSignatureForKey (GALGAS_procedureSignature inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_procedureMap * p = (cMapElement_procedureMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    p->mAttribute_mSignature = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureMap::modifier_setMWeakProcedureForKey (GALGAS_bool inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_procedureMap * p = (cMapElement_procedureMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_procedureMap) ;
    p->mAttribute_mWeakProcedure = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_procedureMap * GALGAS_procedureMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_procedureMap * result = (cMapElement_procedureMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_procedureMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procedureMap::cEnumerator_procedureMap (const GALGAS_procedureMap & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap_2D_element cEnumerator_procedureMap::current (LOCATION_ARGS) const {
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_procedureMap) ;
  return GALGAS_procedureMap_2D_element (p->mAttribute_lkey, p->mAttribute_mMutating, p->mAttribute_mProcedureModeMap, p->mAttribute_mSignature, p->mAttribute_mWeakProcedure) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procedureMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_procedureMap::current_mMutating (LOCATION_ARGS) const {
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_procedureMap) ;
  return p->mAttribute_mMutating ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap cEnumerator_procedureMap::current_mProcedureModeMap (LOCATION_ARGS) const {
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_procedureMap) ;
  return p->mAttribute_mProcedureModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature cEnumerator_procedureMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_procedureMap) ;
  return p->mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_procedureMap::current_mWeakProcedure (LOCATION_ARGS) const {
  const cMapElement_procedureMap * p = (const cMapElement_procedureMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_procedureMap) ;
  return p->mAttribute_mWeakProcedure ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @procedureMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureMap ("procedureMap",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureMap GALGAS_procedureMap::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_procedureMap result ;
  const GALGAS_procedureMap * p = (const GALGAS_procedureMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@procFormalArgumentListForGeneration' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procFormalArgumentListForGeneration : public cCollectionElement {
  public : GALGAS_procFormalArgumentListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                   const GALGAS_string & in_mFormalArgumentName
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procFormalArgumentListForGeneration::cCollectionElement_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                                                                const GALGAS_string & in_mFormalArgumentName
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procFormalArgumentListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procFormalArgumentListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procFormalArgumentListForGeneration (mObject.mAttribute_mFormalArgumentKind, mObject.mAttribute_mFormalArgumentType, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procFormalArgumentListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentKind" ":" ;
  mObject.mAttribute_mFormalArgumentKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentType" ":" ;
  mObject.mAttribute_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procFormalArgumentListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procFormalArgumentListForGeneration * operand = (cCollectionElement_procFormalArgumentListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procFormalArgumentListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration::GALGAS_procFormalArgumentListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration::GALGAS_procFormalArgumentListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::constructor_listWithValue (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procFormalArgumentListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_procFormalArgumentListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_procFormalArgumentListForGeneration (in_mFormalArgumentKind,
                                                                         in_mFormalArgumentType,
                                                                         in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::addAssign_operation (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::modifier_insertAtIndex (const GALGAS_procFormalArgumentPassingMode inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy inOperand1,
                                                                         const GALGAS_string inOperand2,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procFormalArgumentListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::modifier_removeAtIndex (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                         GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                         GALGAS_string & outOperand2,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::modifier_popFirst (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                    GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::modifier_popLast (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                                   GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::method_first (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                               GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::method_last (GALGAS_procFormalArgumentPassingMode & outOperand0,
                                                              GALGAS_unifiedTypeMap_2D_proxy & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFormalArgumentKind ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::operator_concat (const GALGAS_procFormalArgumentListForGeneration & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::add_operation (const GALGAS_procFormalArgumentListForGeneration & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procFormalArgumentListForGeneration result = GALGAS_procFormalArgumentListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration::dotAssign_operation (const GALGAS_procFormalArgumentListForGeneration inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentListForGeneration::getter_mFormalArgumentKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_procFormalArgumentPassingMode result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procFormalArgumentListForGeneration::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procFormalArgumentListForGeneration::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procFormalArgumentListForGeneration * p = (cCollectionElement_procFormalArgumentListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
    result = p->mObject.mAttribute_mFormalArgumentName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procFormalArgumentListForGeneration::cEnumerator_procFormalArgumentListForGeneration (const GALGAS_procFormalArgumentListForGeneration & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element cEnumerator_procFormalArgumentListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode cEnumerator_procFormalArgumentListForGeneration::current_mFormalArgumentKind (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_procFormalArgumentListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_procFormalArgumentListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_procFormalArgumentListForGeneration * p = (const cCollectionElement_procFormalArgumentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procFormalArgumentListForGeneration) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procFormalArgumentListForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration ("procFormalArgumentListForGeneration",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_procFormalArgumentListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration result ;
  const GALGAS_procFormalArgumentListForGeneration * p = (const GALGAS_procFormalArgumentListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         '@subprogramInvocationGraph' graph                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph::GALGAS_subprogramInvocationGraph (void) :
AC_GALGAS_graph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::constructor_emptyGraph (LOCATION_ARGS) {
  GALGAS_subprogramInvocationGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::modifier_addNode (GALGAS_lstring inKey,
                                                         GALGAS_lstring inArgument_0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' subprogram is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_topologicalSort (GALGAS_lstringlist & outSortedList,
                                                               GALGAS_lstringlist & outSortedKeyList,
                                                               GALGAS_lstringlist & outUnsortedList,
                                                               GALGAS_lstringlist & outUnsortedKeyList,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
  GALGAS_lstringlist::detachSharedList (sortedList) ;
  GALGAS_lstringlist::detachSharedList (unsortedList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_depthFirstTopologicalSort (GALGAS_lstringlist & outSortedList,
                                                                         GALGAS_lstringlist & outSortedKeyList,
                                                                         GALGAS_lstringlist & outUnsortedList,
                                                                         GALGAS_lstringlist & outUnsortedKeyList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  cSharedList * sortedList = NULL ;
  cSharedList * unsortedList = NULL ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
  GALGAS_lstringlist::detachSharedList (sortedList) ;
  GALGAS_lstringlist::detachSharedList (unsortedList) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_subprogramInvocationGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_circularities (GALGAS_lstringlist & outInfoList,
                                                             GALGAS_lstringlist & outKeyList
                                                             COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
  GALGAS_lstringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_nodesWithNoSuccessor (GALGAS_lstringlist & outInfoList,
                                                                    GALGAS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
  GALGAS_lstringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_subprogramInvocationGraph::method_nodesWithNoPredecessor (GALGAS_lstringlist & outInfoList,
                                                                      GALGAS_lstringlist & outKeyList
                                                                      COMMA_LOCATION_ARGS) const {
  cSharedList * infoList = NULL ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
  GALGAS_lstringlist::detachSharedList (infoList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                             const GALGAS_stringset & inKeysToExclude,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_subprogramInvocationGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_subprogramInvocationGraph::getter_accessibleNodesFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_subprogramInvocationGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            GALGAS_stringset::constructor_emptySet (HERE),
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @subprogramInvocationGraph type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subprogramInvocationGraph ("subprogramInvocationGraph",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_subprogramInvocationGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subprogramInvocationGraph ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_subprogramInvocationGraph::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subprogramInvocationGraph (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_subprogramInvocationGraph::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subprogramInvocationGraph result ;
  const GALGAS_subprogramInvocationGraph * p = (const GALGAS_subprogramInvocationGraph *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subprogramInvocationGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subprogramInvocationGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@registerDeclarationList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_registerDeclarationList : public cCollectionElement {
  public : GALGAS_registerDeclarationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_registerDeclarationList (const GALGAS_lstring & in_mRegisterName,
                                                       const GALGAS_lstringlist & in_mAttributeList,
                                                       const GALGAS_lbigint & in_mRegisterAddress
                                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_registerDeclarationList::cCollectionElement_registerDeclarationList (const GALGAS_lstring & in_mRegisterName,
                                                                                        const GALGAS_lstringlist & in_mAttributeList,
                                                                                        const GALGAS_lbigint & in_mRegisterAddress
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterName, in_mAttributeList, in_mRegisterAddress) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_registerDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_registerDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerDeclarationList (mObject.mAttribute_mRegisterName, mObject.mAttribute_mAttributeList, mObject.mAttribute_mRegisterAddress COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_registerDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterName" ":" ;
  mObject.mAttribute_mRegisterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mAttribute_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterAddress" ":" ;
  mObject.mAttribute_mRegisterAddress.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_registerDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerDeclarationList * operand = (cCollectionElement_registerDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList::GALGAS_registerDeclarationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList::GALGAS_registerDeclarationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_registerDeclarationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstringlist & inOperand1,
                                                                                          const GALGAS_lbigint & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_registerDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_registerDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mRegisterName,
                                                                const GALGAS_lstringlist & in_mAttributeList,
                                                                const GALGAS_lbigint & in_mRegisterAddress
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_registerDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_registerDeclarationList (in_mRegisterName,
                                                             in_mAttributeList,
                                                             in_mRegisterAddress COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstringlist & inOperand1,
                                                          const GALGAS_lbigint & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstringlist inOperand1,
                                                             const GALGAS_lbigint inOperand2,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_lbigint & outOperand2,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
      outOperand0 = p->mObject.mAttribute_mRegisterName ;
      outOperand1 = p->mObject.mAttribute_mAttributeList ;
      outOperand2 = p->mObject.mAttribute_mRegisterAddress ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstringlist & outOperand1,
                                                        GALGAS_lbigint & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mAttributeList ;
    outOperand2 = p->mObject.mAttribute_mRegisterAddress ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::modifier_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstringlist & outOperand1,
                                                       GALGAS_lbigint & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mAttributeList ;
    outOperand2 = p->mObject.mAttribute_mRegisterAddress ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstringlist & outOperand1,
                                                   GALGAS_lbigint & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mAttributeList ;
    outOperand2 = p->mObject.mAttribute_mRegisterAddress ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstringlist & outOperand1,
                                                  GALGAS_lbigint & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterName ;
    outOperand1 = p->mObject.mAttribute_mAttributeList ;
    outOperand2 = p->mObject.mAttribute_mRegisterAddress ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::operator_concat (const GALGAS_registerDeclarationList & inOperand
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::add_operation (const GALGAS_registerDeclarationList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_registerDeclarationList result = GALGAS_registerDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_registerDeclarationList result = GALGAS_registerDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_registerDeclarationList result = GALGAS_registerDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerDeclarationList::dotAssign_operation (const GALGAS_registerDeclarationList inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerDeclarationList::getter_mRegisterNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    result = p->mObject.mAttribute_mRegisterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_registerDeclarationList::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    result = p->mObject.mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_registerDeclarationList::getter_mRegisterAddressAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerDeclarationList * p = (cCollectionElement_registerDeclarationList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
    result = p->mObject.mAttribute_mRegisterAddress ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerDeclarationList::cEnumerator_registerDeclarationList (const GALGAS_registerDeclarationList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList_2D_element cEnumerator_registerDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_registerDeclarationList * p = (const cCollectionElement_registerDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerDeclarationList::current_mRegisterName (LOCATION_ARGS) const {
  const cCollectionElement_registerDeclarationList * p = (const cCollectionElement_registerDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
  return p->mObject.mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_registerDeclarationList::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_registerDeclarationList * p = (const cCollectionElement_registerDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
  return p->mObject.mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cEnumerator_registerDeclarationList::current_mRegisterAddress (LOCATION_ARGS) const {
  const cCollectionElement_registerDeclarationList * p = (const cCollectionElement_registerDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerDeclarationList) ;
  return p->mObject.mAttribute_mRegisterAddress ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @registerDeclarationList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerDeclarationList ("registerDeclarationList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerDeclarationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerDeclarationList GALGAS_registerDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerDeclarationList result ;
  const GALGAS_registerDeclarationList * p = (const GALGAS_registerDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@registerBitSliceList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_registerBitSliceList : public cCollectionElement {
  public : GALGAS_registerBitSliceList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_registerBitSliceList (const GALGAS_registerBitSlice & in_mRegisterBitSlice
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_registerBitSliceList::cCollectionElement_registerBitSliceList (const GALGAS_registerBitSlice & in_mRegisterBitSlice
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterBitSlice) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_registerBitSliceList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_registerBitSliceList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerBitSliceList (mObject.mAttribute_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_registerBitSliceList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSlice" ":" ;
  mObject.mAttribute_mRegisterBitSlice.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_registerBitSliceList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerBitSliceList * operand = (cCollectionElement_registerBitSliceList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerBitSliceList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList::GALGAS_registerBitSliceList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList::GALGAS_registerBitSliceList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_registerBitSliceList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::constructor_listWithValue (const GALGAS_registerBitSlice & inOperand0
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSliceList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_registerBitSliceList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_registerBitSlice & in_mRegisterBitSlice
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_registerBitSliceList * p = NULL ;
  macroMyNew (p, cCollectionElement_registerBitSliceList (in_mRegisterBitSlice COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::addAssign_operation (const GALGAS_registerBitSlice & inOperand0
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::modifier_insertAtIndex (const GALGAS_registerBitSlice inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::modifier_removeAtIndex (GALGAS_registerBitSlice & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerBitSliceList * p = (cCollectionElement_registerBitSliceList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
      outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::modifier_popFirst (GALGAS_registerBitSlice & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerBitSliceList * p = (cCollectionElement_registerBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::modifier_popLast (GALGAS_registerBitSlice & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerBitSliceList * p = (cCollectionElement_registerBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::method_first (GALGAS_registerBitSlice & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerBitSliceList * p = (cCollectionElement_registerBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::method_last (GALGAS_registerBitSlice & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerBitSliceList * p = (cCollectionElement_registerBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
    outOperand0 = p->mObject.mAttribute_mRegisterBitSlice ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::operator_concat (const GALGAS_registerBitSliceList & inOperand
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerBitSliceList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::add_operation (const GALGAS_registerBitSliceList & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerBitSliceList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerBitSliceList result = GALGAS_registerBitSliceList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerBitSliceList result = GALGAS_registerBitSliceList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerBitSliceList result = GALGAS_registerBitSliceList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceList::dotAssign_operation (const GALGAS_registerBitSliceList inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSlice GALGAS_registerBitSliceList::getter_mRegisterBitSliceAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerBitSliceList * p = (cCollectionElement_registerBitSliceList *) attributes.ptr () ;
  GALGAS_registerBitSlice result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
    result = p->mObject.mAttribute_mRegisterBitSlice ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerBitSliceList::cEnumerator_registerBitSliceList (const GALGAS_registerBitSliceList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList_2D_element cEnumerator_registerBitSliceList::current (LOCATION_ARGS) const {
  const cCollectionElement_registerBitSliceList * p = (const cCollectionElement_registerBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSlice cEnumerator_registerBitSliceList::current_mRegisterBitSlice (LOCATION_ARGS) const {
  const cCollectionElement_registerBitSliceList * p = (const cCollectionElement_registerBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerBitSliceList) ;
  return p->mObject.mAttribute_mRegisterBitSlice ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @registerBitSliceList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerBitSliceList ("registerBitSliceList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerBitSliceList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerBitSliceList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerBitSliceList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerBitSliceList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceList GALGAS_registerBitSliceList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSliceList result ;
  const GALGAS_registerBitSliceList * p = (const GALGAS_registerBitSliceList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerBitSliceList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerBitSliceList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_registerFieldMap::cMapElement_registerFieldMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_uint & in_mBitIndex,
                                                            const GALGAS_uint & in_mBitCount
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mBitIndex (in_mBitIndex),
mAttribute_mBitCount (in_mBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_registerFieldMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitIndex.isValid () && mAttribute_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_registerFieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_registerFieldMap (mAttribute_lkey, mAttribute_mBitIndex, mAttribute_mBitCount COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_registerFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mAttribute_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mAttribute_mBitCount.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_registerFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_registerFieldMap * operand = (cMapElement_registerFieldMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBitIndex.objectCompare (operand->mAttribute_mBitIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitCount.objectCompare (operand->mAttribute_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap::GALGAS_registerFieldMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap::GALGAS_registerFieldMap (const GALGAS_registerFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap & GALGAS_registerFieldMap::operator = (const GALGAS_registerFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap GALGAS_registerFieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_registerFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap GALGAS_registerFieldMap::constructor_mapWithMapToOverride (const GALGAS_registerFieldMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_registerFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap GALGAS_registerFieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_registerFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_uint & inArgument0,
                                                   const GALGAS_uint & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_registerFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_registerFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap::modifier_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_uint inArgument0,
                                                  GALGAS_uint inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_registerFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_registerFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_registerFieldMap_searchKey = "the '%K' register slice is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_uint & outArgument0,
                                                GALGAS_uint & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_registerFieldMap * p = (const cMapElement_registerFieldMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_registerFieldMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_registerFieldMap) ;
    outArgument0 = p->mAttribute_mBitIndex ;
    outArgument1 = p->mAttribute_mBitCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerFieldMap::getter_mBitIndexForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerFieldMap * p = (const cMapElement_registerFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerFieldMap) ;
    result = p->mAttribute_mBitIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_registerFieldMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerFieldMap * p = (const cMapElement_registerFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerFieldMap) ;
    result = p->mAttribute_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap::modifier_setMBitIndexForKey (GALGAS_uint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerFieldMap * p = (cMapElement_registerFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerFieldMap) ;
    p->mAttribute_mBitIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerFieldMap::modifier_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerFieldMap * p = (cMapElement_registerFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerFieldMap) ;
    p->mAttribute_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_registerFieldMap * GALGAS_registerFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_registerFieldMap * result = (cMapElement_registerFieldMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_registerFieldMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerFieldMap::cEnumerator_registerFieldMap (const GALGAS_registerFieldMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap_2D_element cEnumerator_registerFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_registerFieldMap * p = (const cMapElement_registerFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerFieldMap) ;
  return GALGAS_registerFieldMap_2D_element (p->mAttribute_lkey, p->mAttribute_mBitIndex, p->mAttribute_mBitCount) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_registerFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  const cMapElement_registerFieldMap * p = (const cMapElement_registerFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerFieldMap) ;
  return p->mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_registerFieldMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_registerFieldMap * p = (const cMapElement_registerFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerFieldMap) ;
  return p->mAttribute_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @registerFieldMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerFieldMap ("registerFieldMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerFieldMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap GALGAS_registerFieldMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_registerFieldMap result ;
  const GALGAS_registerFieldMap * p = (const GALGAS_registerFieldMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_registerBitSliceAccessMap::cMapElement_registerBitSliceAccessMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                                                              const GALGAS_bigint & in_mAccessRightOperand,
                                                                              const GALGAS_registerBitSliceAccessMap & in_mSubMap,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mAccessOperator (in_mAccessOperator),
mAttribute_mAccessRightOperand (in_mAccessRightOperand),
mAttribute_mSubMap (in_mSubMap),
mAttribute_mResultType (in_mResultType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_registerBitSliceAccessMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAccessOperator.isValid () && mAttribute_mAccessRightOperand.isValid () && mAttribute_mSubMap.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_registerBitSliceAccessMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_registerBitSliceAccessMap (mAttribute_lkey, mAttribute_mAccessOperator, mAttribute_mAccessRightOperand, mAttribute_mSubMap, mAttribute_mResultType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_registerBitSliceAccessMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessOperator" ":" ;
  mAttribute_mAccessOperator.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessRightOperand" ":" ;
  mAttribute_mAccessRightOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSubMap" ":" ;
  mAttribute_mSubMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_registerBitSliceAccessMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_registerBitSliceAccessMap * operand = (cMapElement_registerBitSliceAccessMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mAccessOperator.objectCompare (operand->mAttribute_mAccessOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAccessRightOperand.objectCompare (operand->mAttribute_mAccessRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSubMap.objectCompare (operand->mAttribute_mSubMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap::GALGAS_registerBitSliceAccessMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap::GALGAS_registerBitSliceAccessMap (const GALGAS_registerBitSliceAccessMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap & GALGAS_registerBitSliceAccessMap::operator = (const GALGAS_registerBitSliceAccessMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerBitSliceAccessMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_registerBitSliceAccessMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerBitSliceAccessMap::constructor_mapWithMapToOverride (const GALGAS_registerBitSliceAccessMap & inMapToOverride
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSliceAccessMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerBitSliceAccessMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_registerBitSliceAccessMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_llvmBinaryOperation & inArgument0,
                                                            const GALGAS_bigint & inArgument1,
                                                            const GALGAS_registerBitSliceAccessMap & inArgument2,
                                                            const GALGAS_unifiedTypeMap_2D_proxy & inArgument3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_registerBitSliceAccessMap * p = NULL ;
  macroMyNew (p, cMapElement_registerBitSliceAccessMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerBitSliceAccessMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::modifier_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_llvmBinaryOperation inArgument0,
                                                           GALGAS_bigint inArgument1,
                                                           GALGAS_registerBitSliceAccessMap inArgument2,
                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_registerBitSliceAccessMap * p = NULL ;
  macroMyNew (p, cMapElement_registerBitSliceAccessMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_registerBitSliceAccessMap_searchKey = "the '%K' register slice is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::method_searchKey (GALGAS_lstring inKey,
                                                         GALGAS_llvmBinaryOperation & outArgument0,
                                                         GALGAS_bigint & outArgument1,
                                                         GALGAS_registerBitSliceAccessMap & outArgument2,
                                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) performSearch (inKey,
                                                                                                                     inCompiler,
                                                                                                                     kSearchErrorMessage_registerBitSliceAccessMap_searchKey
                                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    outArgument0 = p->mAttribute_mAccessOperator ;
    outArgument1 = p->mAttribute_mAccessRightOperand ;
    outArgument2 = p->mAttribute_mSubMap ;
    outArgument3 = p->mAttribute_mResultType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_registerBitSliceAccessMap::getter_mAccessOperatorForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) attributes ;
  GALGAS_llvmBinaryOperation result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    result = p->mAttribute_mAccessOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_registerBitSliceAccessMap::getter_mAccessRightOperandForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    result = p->mAttribute_mAccessRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerBitSliceAccessMap::getter_mSubMapForKey (const GALGAS_string & inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) attributes ;
  GALGAS_registerBitSliceAccessMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    result = p->mAttribute_mSubMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_registerBitSliceAccessMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::modifier_setMAccessOperatorForKey (GALGAS_llvmBinaryOperation inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerBitSliceAccessMap * p = (cMapElement_registerBitSliceAccessMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    p->mAttribute_mAccessOperator = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::modifier_setMAccessRightOperandForKey (GALGAS_bigint inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerBitSliceAccessMap * p = (cMapElement_registerBitSliceAccessMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    p->mAttribute_mAccessRightOperand = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::modifier_setMSubMapForKey (GALGAS_registerBitSliceAccessMap inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerBitSliceAccessMap * p = (cMapElement_registerBitSliceAccessMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    p->mAttribute_mSubMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerBitSliceAccessMap::modifier_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerBitSliceAccessMap * p = (cMapElement_registerBitSliceAccessMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_registerBitSliceAccessMap * GALGAS_registerBitSliceAccessMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_registerBitSliceAccessMap * result = (cMapElement_registerBitSliceAccessMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_registerBitSliceAccessMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerBitSliceAccessMap::cEnumerator_registerBitSliceAccessMap (const GALGAS_registerBitSliceAccessMap & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap_2D_element cEnumerator_registerBitSliceAccessMap::current (LOCATION_ARGS) const {
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
  return GALGAS_registerBitSliceAccessMap_2D_element (p->mAttribute_lkey, p->mAttribute_mAccessOperator, p->mAttribute_mAccessRightOperand, p->mAttribute_mSubMap, p->mAttribute_mResultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerBitSliceAccessMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation cEnumerator_registerBitSliceAccessMap::current_mAccessOperator (LOCATION_ARGS) const {
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
  return p->mAttribute_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_registerBitSliceAccessMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
  return p->mAttribute_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap cEnumerator_registerBitSliceAccessMap::current_mSubMap (LOCATION_ARGS) const {
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
  return p->mAttribute_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_registerBitSliceAccessMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_registerBitSliceAccessMap * p = (const cMapElement_registerBitSliceAccessMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerBitSliceAccessMap) ;
  return p->mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @registerBitSliceAccessMap type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerBitSliceAccessMap ("registerBitSliceAccessMap",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerBitSliceAccessMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerBitSliceAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerBitSliceAccessMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerBitSliceAccessMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerBitSliceAccessMap::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerBitSliceAccessMap result ;
  const GALGAS_registerBitSliceAccessMap * p = (const GALGAS_registerBitSliceAccessMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerBitSliceAccessMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerBitSliceAccessMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_registerMap::cMapElement_registerMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                  const GALGAS_bool & in_mIsReadOnly,
                                                  const GALGAS_registerBitSliceAccessMap & in_mRegisterFieldAccessMap,
                                                  const GALGAS_registerFieldMap & in_mRegisterFieldMap,
                                                  const GALGAS_bigint & in_mAddress
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mType (in_mType),
mAttribute_mIsReadOnly (in_mIsReadOnly),
mAttribute_mRegisterFieldAccessMap (in_mRegisterFieldAccessMap),
mAttribute_mRegisterFieldMap (in_mRegisterFieldMap),
mAttribute_mAddress (in_mAddress) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_registerMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mIsReadOnly.isValid () && mAttribute_mRegisterFieldAccessMap.isValid () && mAttribute_mRegisterFieldMap.isValid () && mAttribute_mAddress.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_registerMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_registerMap (mAttribute_lkey, mAttribute_mType, mAttribute_mIsReadOnly, mAttribute_mRegisterFieldAccessMap, mAttribute_mRegisterFieldMap, mAttribute_mAddress COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_registerMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mAttribute_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldAccessMap" ":" ;
  mAttribute_mRegisterFieldAccessMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldMap" ":" ;
  mAttribute_mRegisterFieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mAttribute_mAddress.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_registerMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_registerMap * operand = (cMapElement_registerMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (operand->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsReadOnly.objectCompare (operand->mAttribute_mIsReadOnly) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterFieldAccessMap.objectCompare (operand->mAttribute_mRegisterFieldAccessMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRegisterFieldMap.objectCompare (operand->mAttribute_mRegisterFieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAddress.objectCompare (operand->mAttribute_mAddress) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap::GALGAS_registerMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap::GALGAS_registerMap (const GALGAS_registerMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap & GALGAS_registerMap::operator = (const GALGAS_registerMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_registerMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_registerMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_registerMap::constructor_mapWithMapToOverride (const GALGAS_registerMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_registerMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_registerMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_registerMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                              const GALGAS_bool & inArgument1,
                                              const GALGAS_registerBitSliceAccessMap & inArgument2,
                                              const GALGAS_registerFieldMap & inArgument3,
                                              const GALGAS_bigint & inArgument4,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_registerMap * p = NULL ;
  macroMyNew (p, cMapElement_registerMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@registerMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::modifier_insertKey (GALGAS_lstring inKey,
                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                             GALGAS_bool inArgument1,
                                             GALGAS_registerBitSliceAccessMap inArgument2,
                                             GALGAS_registerFieldMap inArgument3,
                                             GALGAS_bigint inArgument4,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_registerMap * p = NULL ;
  macroMyNew (p, cMapElement_registerMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_registerMap_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                           GALGAS_bool & outArgument1,
                                           GALGAS_registerBitSliceAccessMap & outArgument2,
                                           GALGAS_registerFieldMap & outArgument3,
                                           GALGAS_bigint & outArgument4,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kSearchErrorMessage_registerMap_searchKey
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_registerMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mIsReadOnly ;
    outArgument2 = p->mAttribute_mRegisterFieldAccessMap ;
    outArgument3 = p->mAttribute_mRegisterFieldMap ;
    outArgument4 = p->mAttribute_mAddress ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_registerMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    result = p->mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_registerMap::getter_mIsReadOnlyForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    result = p->mAttribute_mIsReadOnly ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_registerMap::getter_mRegisterFieldAccessMapForKey (const GALGAS_string & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) attributes ;
  GALGAS_registerBitSliceAccessMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    result = p->mAttribute_mRegisterFieldAccessMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap GALGAS_registerMap::getter_mRegisterFieldMapForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) attributes ;
  GALGAS_registerFieldMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    result = p->mAttribute_mRegisterFieldMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_registerMap::getter_mAddressForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    result = p->mAttribute_mAddress ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::modifier_setMTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerMap * p = (cMapElement_registerMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    p->mAttribute_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::modifier_setMIsReadOnlyForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerMap * p = (cMapElement_registerMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    p->mAttribute_mIsReadOnly = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::modifier_setMRegisterFieldAccessMapForKey (GALGAS_registerBitSliceAccessMap inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerMap * p = (cMapElement_registerMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    p->mAttribute_mRegisterFieldAccessMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::modifier_setMRegisterFieldMapForKey (GALGAS_registerFieldMap inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerMap * p = (cMapElement_registerMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    p->mAttribute_mRegisterFieldMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerMap::modifier_setMAddressForKey (GALGAS_bigint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_registerMap * p = (cMapElement_registerMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_registerMap) ;
    p->mAttribute_mAddress = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_registerMap * GALGAS_registerMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_registerMap * result = (cMapElement_registerMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_registerMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_registerMap::cEnumerator_registerMap (const GALGAS_registerMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap_2D_element cEnumerator_registerMap::current (LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerMap) ;
  return GALGAS_registerMap_2D_element (p->mAttribute_lkey, p->mAttribute_mType, p->mAttribute_mIsReadOnly, p->mAttribute_mRegisterFieldAccessMap, p->mAttribute_mRegisterFieldMap, p->mAttribute_mAddress) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_registerMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_registerMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerMap) ;
  return p->mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_registerMap::current_mIsReadOnly (LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerMap) ;
  return p->mAttribute_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap cEnumerator_registerMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerMap) ;
  return p->mAttribute_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerFieldMap cEnumerator_registerMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerMap) ;
  return p->mAttribute_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cEnumerator_registerMap::current_mAddress (LOCATION_ARGS) const {
  const cMapElement_registerMap * p = (const cMapElement_registerMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_registerMap) ;
  return p->mAttribute_mAddress ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @registerMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerMap ("registerMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerMap GALGAS_registerMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_registerMap result ;
  const GALGAS_registerMap * p = (const GALGAS_registerMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator::GALGAS_infixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_nonEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_nonEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_strictInf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_strictInf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_strictSup (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_strictSup ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_infEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_infEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_supEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_supEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_andOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_andOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_orOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_orOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_xorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_xorOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_booleanXorOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_booleanXorOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_addOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_addOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_addOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_addOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_subOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_subOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_subOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_subOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_mulOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_mulOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_mulOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_mulOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_divOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_divOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_divOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_divOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_modOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_modOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_modOpNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_modOpNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_leftShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_leftShiftOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::constructor_rightShiftOp (UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  result.mEnum = kEnum_rightShiftOp ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_infixOperator [23] = {
  "(not built)",
  "equal",
  "nonEqual",
  "strictInf",
  "strictSup",
  "infEqual",
  "supEqual",
  "andOp",
  "orOp",
  "xorOp",
  "booleanXorOp",
  "addOp",
  "addOpNoOvf",
  "subOp",
  "subOpNoOvf",
  "mulOp",
  "mulOpNoOvf",
  "divOp",
  "divOpNoOvf",
  "modOp",
  "modOpNoOvf",
  "leftShiftOp",
  "rightShiftOp"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isNonEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_nonEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isStrictInf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictInf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isStrictSup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_strictSup == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isInfEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_infEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSupEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_supEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAndOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_andOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isOrOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_orOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xorOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isBooleanXorOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_booleanXorOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAddOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isAddOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSubOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isSubOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isMulOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isMulOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isDivOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isDivOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isModOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isModOpNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modOpNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isLeftShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShiftOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_infixOperator::getter_isRightShiftOp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShiftOp == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperator::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "<enum @infixOperator: " << gEnumNameArrayFor_infixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperator::objectCompare (const GALGAS_infixOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @infixOperator type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperator ("infixOperator",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperator GALGAS_infixOperator::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_infixOperator result ;
  const GALGAS_infixOperator * p = (const GALGAS_infixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_infixOperatorMap::cMapElement_infixOperatorMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                            const GALGAS_infixOperatorDescription & in_mOperation
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mResultType (in_mResultType),
mAttribute_mOperation (in_mOperation) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_infixOperatorMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () && mAttribute_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_infixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_infixOperatorMap (mAttribute_lkey, mAttribute_mResultType, mAttribute_mOperation COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_infixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperation" ":" ;
  mAttribute_mOperation.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_infixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_infixOperatorMap * operand = (cMapElement_infixOperatorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperation.objectCompare (operand->mAttribute_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap::GALGAS_infixOperatorMap (const GALGAS_infixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap & GALGAS_infixOperatorMap::operator = (const GALGAS_infixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_infixOperatorMap & inMapToOverride
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_infixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                   const GALGAS_infixOperatorDescription & inArgument1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@infixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::modifier_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                  GALGAS_infixOperatorDescription inArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_infixOperatorMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_infixOperatorMap_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                GALGAS_infixOperatorDescription & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_infixOperatorMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    outArgument0 = p->mAttribute_mResultType ;
    outArgument1 = p->mAttribute_mOperation ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap::getter_mOperationForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) attributes ;
  GALGAS_infixOperatorDescription result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    result = p->mAttribute_mOperation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::modifier_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap::modifier_setMOperationForKey (GALGAS_infixOperatorDescription inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_infixOperatorMap * p = (cMapElement_infixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
    p->mAttribute_mOperation = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_infixOperatorMap * GALGAS_infixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_infixOperatorMap * result = (cMapElement_infixOperatorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_infixOperatorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_infixOperatorMap::cEnumerator_infixOperatorMap (const GALGAS_infixOperatorMap & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element cEnumerator_infixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return GALGAS_infixOperatorMap_2D_element (p->mAttribute_lkey, p->mAttribute_mResultType, p->mAttribute_mOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_infixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_infixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription cEnumerator_infixOperatorMap::current_mOperation (LOCATION_ARGS) const {
  const cMapElement_infixOperatorMap * p = (const cMapElement_infixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_infixOperatorMap) ;
  return p->mAttribute_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @infixOperatorMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap ("infixOperatorMap",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_infixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap result ;
  const GALGAS_infixOperatorMap * p = (const GALGAS_infixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator::GALGAS_prefixOperator (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_notOperator (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_notOperator ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_minus (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minus ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_unsignedComplement (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_unsignedComplement ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::constructor_minusNoOvf (UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  result.mEnum = kEnum_minusNoOvf ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_prefixOperator [5] = {
  "(not built)",
  "notOperator",
  "minus",
  "unsignedComplement",
  "minusNoOvf"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isNotOperator (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notOperator == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isMinus (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minus == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isUnsignedComplement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsignedComplement == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperator::getter_isMinusNoOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_minusNoOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperator::description (C_String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString << "<enum @prefixOperator: " << gEnumNameArrayFor_prefixOperator [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperator::objectCompare (const GALGAS_prefixOperator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefixOperator type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperator ("prefixOperator",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperator (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperator GALGAS_prefixOperator::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperator result ;
  const GALGAS_prefixOperator * p = (const GALGAS_prefixOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_prefixOperatorMap::cMapElement_prefixOperatorMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mResultType (in_mResultType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_prefixOperatorMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_prefixOperatorMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_prefixOperatorMap (mAttribute_lkey, mAttribute_mResultType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_prefixOperatorMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mAttribute_mResultType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_prefixOperatorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_prefixOperatorMap * operand = (cMapElement_prefixOperatorMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (operand->mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap::GALGAS_prefixOperatorMap (const GALGAS_prefixOperatorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap & GALGAS_prefixOperatorMap::operator = (const GALGAS_prefixOperatorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::constructor_mapWithMapToOverride (const GALGAS_prefixOperatorMap & inMapToOverride
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_prefixOperatorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_unifiedTypeMap_2D_proxy & inArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@prefixOperatorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::modifier_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * p = NULL ;
  macroMyNew (p, cMapElement_prefixOperatorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_prefixOperatorMap_searchKey = "** internal error **" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_prefixOperatorMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    outArgument0 = p->mAttribute_mResultType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_prefixOperatorMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap::modifier_setMResultTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                              GALGAS_string inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_prefixOperatorMap * p = (cMapElement_prefixOperatorMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
    p->mAttribute_mResultType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_prefixOperatorMap * GALGAS_prefixOperatorMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_prefixOperatorMap * result = (cMapElement_prefixOperatorMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_prefixOperatorMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_prefixOperatorMap::cEnumerator_prefixOperatorMap (const GALGAS_prefixOperatorMap & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element cEnumerator_prefixOperatorMap::current (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return GALGAS_prefixOperatorMap_2D_element (p->mAttribute_lkey, p->mAttribute_mResultType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_prefixOperatorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_prefixOperatorMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_prefixOperatorMap * p = (const cMapElement_prefixOperatorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_prefixOperatorMap) ;
  return p->mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @prefixOperatorMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap ("prefixOperatorMap",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_prefixOperatorMap::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap result ;
  const GALGAS_prefixOperatorMap * p = (const GALGAS_prefixOperatorMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_prefixOperatorIR_prefix::cEnumAssociatedValues_prefixOperatorIR_prefix (const GALGAS_string & inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_prefixOperatorIR_prefix::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_prefixOperatorIR_prefix::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_prefixOperatorIR_prefix * ptr = dynamic_cast<const cEnumAssociatedValues_prefixOperatorIR_prefix *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf::cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf (const GALGAS_uint & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf * ptr = dynamic_cast<const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorIR::GALGAS_prefixOperatorIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorIR GALGAS_prefixOperatorIR::constructor_prefix (const GALGAS_string & inAssociatedValue0
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_prefix ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_prefixOperatorIR_prefix (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorIR GALGAS_prefixOperatorIR::constructor_prefixMinusOvf (const GALGAS_uint & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_prefixMinusOvf ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorIR::method_prefix (GALGAS_string & outAssociatedValue0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefix) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @prefixOperatorIR prefix invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_prefixOperatorIR_prefix * ptr = (const cEnumAssociatedValues_prefixOperatorIR_prefix *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorIR::method_prefixMinusOvf (GALGAS_uint & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefixMinusOvf) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @prefixOperatorIR prefixMinusOvf invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf * ptr = (const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_prefixOperatorIR [3] = {
  "(not built)",
  "prefix",
  "prefixMinusOvf"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperatorIR::getter_isPrefix (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefix == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_prefixOperatorIR::getter_isPrefixMinusOvf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefixMinusOvf == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorIR::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @prefixOperatorIR: " << gEnumNameArrayFor_prefixOperatorIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperatorIR::objectCompare (const GALGAS_prefixOperatorIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @prefixOperatorIR type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorIR ("prefixOperatorIR",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorIR GALGAS_prefixOperatorIR::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorIR result ;
  const GALGAS_prefixOperatorIR * p = (const GALGAS_prefixOperatorIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind::GALGAS_incDecKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::constructor_incWithOverflowCheck (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_incWithOverflowCheck ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::constructor_decWithOverflowCheck (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_decWithOverflowCheck ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::constructor_incNoOverflowCheck (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_incNoOverflowCheck ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::constructor_decNoOverflowCheck (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = kEnum_decNoOverflowCheck ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_incDecKind [5] = {
  "(not built)",
  "incWithOverflowCheck",
  "decWithOverflowCheck",
  "incNoOverflowCheck",
  "decNoOverflowCheck"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_incDecKind::getter_isIncWithOverflowCheck (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_incWithOverflowCheck == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_incDecKind::getter_isDecWithOverflowCheck (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_decWithOverflowCheck == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_incDecKind::getter_isIncNoOverflowCheck (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_incNoOverflowCheck == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_incDecKind::getter_isDecNoOverflowCheck (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_decNoOverflowCheck == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_incDecKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @incDecKind: " << gEnumNameArrayFor_incDecKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_incDecKind::objectCompare (const GALGAS_incDecKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @incDecKind type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_incDecKind GALGAS_incDecKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  const GALGAS_incDecKind * p = (const GALGAS_incDecKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind::GALGAS_operatorAssignKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_bitWiseOrAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_bitWiseOrAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_bitWiseAndAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_bitWiseAndAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::constructor_bitWiseXorAssign (UNUSED_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  result.mEnum = kEnum_bitWiseXorAssign ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_operatorAssignKind [4] = {
  "(not built)",
  "bitWiseOrAssign",
  "bitWiseAndAssign",
  "bitWiseXorAssign"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isBitWiseOrAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseOrAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isBitWiseAndAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseAndAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_operatorAssignKind::getter_isBitWiseXorAssign (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bitWiseXorAssign == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operatorAssignKind::description (C_String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString << "<enum @operatorAssignKind: " << gEnumNameArrayFor_operatorAssignKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operatorAssignKind::objectCompare (const GALGAS_operatorAssignKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @operatorAssignKind type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operatorAssignKind ("operatorAssignKind",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operatorAssignKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operatorAssignKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operatorAssignKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operatorAssignKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operatorAssignKind GALGAS_operatorAssignKind::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_operatorAssignKind result ;
  const GALGAS_operatorAssignKind * p = (const GALGAS_operatorAssignKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operatorAssignKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operatorAssignKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@procEffectiveParameterListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procEffectiveParameterListAST : public cCollectionElement {
  public : GALGAS_procEffectiveParameterListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procEffectiveParameterListAST (const GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                             const GALGAS_lstring & in_mSelector
                                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procEffectiveParameterListAST::cCollectionElement_procEffectiveParameterListAST (const GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                                                                    const GALGAS_lstring & in_mSelector
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterKind, in_mSelector) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procEffectiveParameterListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procEffectiveParameterListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procEffectiveParameterListAST (mObject.mAttribute_mEffectiveParameterKind, mObject.mAttribute_mSelector COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procEffectiveParameterListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterKind" ":" ;
  mObject.mAttribute_mEffectiveParameterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procEffectiveParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procEffectiveParameterListAST * operand = (cCollectionElement_procEffectiveParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procEffectiveParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST::GALGAS_procEffectiveParameterListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST::GALGAS_procEffectiveParameterListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::constructor_listWithValue (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procEffectiveParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterKind,
                                                                      const GALGAS_lstring & in_mSelector
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterListAST (in_mEffectiveParameterKind,
                                                                   in_mSelector COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                const GALGAS_lstring & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::modifier_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeAST inOperand0,
                                                                   const GALGAS_lstring inOperand1,
                                                                   const GALGAS_uint inInsertionIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::modifier_removeAtIndex (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   const GALGAS_uint inRemoveIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
      outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::modifier_popFirst (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::modifier_popLast (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::method_first (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::method_last (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterKind ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::operator_concat (const GALGAS_procEffectiveParameterListAST & inOperand
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::add_operation (const GALGAS_procEffectiveParameterListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result = GALGAS_procEffectiveParameterListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result = GALGAS_procEffectiveParameterListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterListAST result = GALGAS_procEffectiveParameterListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterListAST::dotAssign_operation (const GALGAS_procEffectiveParameterListAST inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterListAST::getter_mEffectiveParameterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
    result = p->mObject.mAttribute_mEffectiveParameterKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterListAST * p = (cCollectionElement_procEffectiveParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procEffectiveParameterListAST::cEnumerator_procEffectiveParameterListAST (const GALGAS_procEffectiveParameterListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST_2D_element cEnumerator_procEffectiveParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterListAST * p = (const cCollectionElement_procEffectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST cEnumerator_procEffectiveParameterListAST::current_mEffectiveParameterKind (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterListAST * p = (const cCollectionElement_procEffectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
  return p->mObject.mAttribute_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procEffectiveParameterListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterListAST * p = (const cCollectionElement_procEffectiveParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterListAST) ;
  return p->mObject.mAttribute_mSelector ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @procEffectiveParameterListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterListAST ("procEffectiveParameterListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterListAST GALGAS_procEffectiveParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterListAST result ;
  const GALGAS_procEffectiveParameterListAST * p = (const GALGAS_procEffectiveParameterListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@procEffectiveParameterList' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procEffectiveParameterList : public cCollectionElement {
  public : GALGAS_procEffectiveParameterList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procEffectiveParameterList (const GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                          const GALGAS_lstring & in_mSelector,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procEffectiveParameterList::cCollectionElement_procEffectiveParameterList (const GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                              const GALGAS_lstring & in_mSelector,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procEffectiveParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procEffectiveParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procEffectiveParameterList (mObject.mAttribute_mEffectiveParameterPassingMode, mObject.mAttribute_mSelector, mObject.mAttribute_mParameterType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procEffectiveParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterPassingMode" ":" ;
  mObject.mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterType" ":" ;
  mObject.mAttribute_mParameterType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procEffectiveParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procEffectiveParameterList * operand = (cCollectionElement_procEffectiveParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procEffectiveParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList::GALGAS_procEffectiveParameterList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::constructor_listWithValue (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procEffectiveParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_procEffectiveParameterPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                   const GALGAS_lstring & in_mSelector,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy & in_mParameterType
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_procEffectiveParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_procEffectiveParameterList (in_mEffectiveParameterPassingMode,
                                                                in_mSelector,
                                                                in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeAST & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_unifiedTypeMap_2D_proxy & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::modifier_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeAST inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procEffectiveParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::modifier_removeAtIndex (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
      outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
      outOperand2 = p->mObject.mAttribute_mParameterType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::modifier_popFirst (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::modifier_popLast (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::method_first (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::method_last (GALGAS_procEffectiveParameterPassingModeAST & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_unifiedTypeMap_2D_proxy & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameterType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::operator_concat (const GALGAS_procEffectiveParameterList & inOperand
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::add_operation (const GALGAS_procEffectiveParameterList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_procEffectiveParameterList result = GALGAS_procEffectiveParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList::dotAssign_operation (const GALGAS_procEffectiveParameterList inOperand
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST GALGAS_procEffectiveParameterList::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procEffectiveParameterList * p = (cCollectionElement_procEffectiveParameterList *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
    result = p->mObject.mAttribute_mParameterType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procEffectiveParameterList::cEnumerator_procEffectiveParameterList (const GALGAS_procEffectiveParameterList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element cEnumerator_procEffectiveParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeAST cEnumerator_procEffectiveParameterList::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procEffectiveParameterList::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_procEffectiveParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_procEffectiveParameterList * p = (const cCollectionElement_procEffectiveParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procEffectiveParameterList) ;
  return p->mObject.mAttribute_mParameterType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procEffectiveParameterList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList ("procEffectiveParameterList",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList GALGAS_procEffectiveParameterList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList result ;
  const GALGAS_procEffectiveParameterList * p = (const GALGAS_procEffectiveParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR::GALGAS_procEffectiveParameterPassingModeIR (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_input (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_input ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_output (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_output ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  result.mEnum = kEnum_outputInput ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_procEffectiveParameterPassingModeIR [4] = {
  "(not built)",
  "input",
  "output",
  "outputInput"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_input == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_output == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_procEffectiveParameterPassingModeIR::getter_isOutputInput (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outputInput == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterPassingModeIR::description (C_String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @procEffectiveParameterPassingModeIR: " << gEnumNameArrayFor_procEffectiveParameterPassingModeIR [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterPassingModeIR::objectCompare (const GALGAS_procEffectiveParameterPassingModeIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterPassingModeIR type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ("procEffectiveParameterPassingModeIR",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterPassingModeIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterPassingModeIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterPassingModeIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterPassingModeIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procEffectiveParameterPassingModeIR::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterPassingModeIR result ;
  const GALGAS_procEffectiveParameterPassingModeIR * p = (const GALGAS_procEffectiveParameterPassingModeIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterPassingModeIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterPassingModeIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@procCallEffectiveParameterListIR' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_procCallEffectiveParameterListIR : public cCollectionElement {
  public : GALGAS_procCallEffectiveParameterListIR_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                const GALGAS_lstring & in_mSelector,
                                                                const GALGAS_operandIR & in_mParameter
                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_procCallEffectiveParameterListIR::cCollectionElement_procCallEffectiveParameterListIR (const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                                                          const GALGAS_lstring & in_mSelector,
                                                                                                          const GALGAS_operandIR & in_mParameter
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameter) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_procCallEffectiveParameterListIR::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_procCallEffectiveParameterListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_procCallEffectiveParameterListIR (mObject.mAttribute_mEffectiveParameterPassingMode, mObject.mAttribute_mSelector, mObject.mAttribute_mParameter COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_procCallEffectiveParameterListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEffectiveParameterPassingMode" ":" ;
  mObject.mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mAttribute_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameter" ":" ;
  mObject.mAttribute_mParameter.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_procCallEffectiveParameterListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_procCallEffectiveParameterListIR * operand = (cCollectionElement_procCallEffectiveParameterListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_procCallEffectiveParameterListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR::GALGAS_procCallEffectiveParameterListIR (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::constructor_listWithValue (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_operandIR & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_procEffectiveParameterPassingModeIR & in_mEffectiveParameterPassingMode,
                                                                         const GALGAS_lstring & in_mSelector,
                                                                         const GALGAS_operandIR & in_mParameter
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_procCallEffectiveParameterListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (in_mEffectiveParameterPassingMode,
                                                                      in_mSelector,
                                                                      in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::addAssign_operation (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                   const GALGAS_lstring & inOperand1,
                                                                   const GALGAS_operandIR & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::modifier_insertAtIndex (const GALGAS_procEffectiveParameterPassingModeIR inOperand0,
                                                                      const GALGAS_lstring inOperand1,
                                                                      const GALGAS_operandIR inOperand2,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_procCallEffectiveParameterListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::modifier_removeAtIndex (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      GALGAS_operandIR & outOperand2,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
      outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
      outOperand1 = p->mObject.mAttribute_mSelector ;
      outOperand2 = p->mObject.mAttribute_mParameter ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::modifier_popFirst (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_operandIR & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::modifier_popLast (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_operandIR & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::method_first (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_operandIR & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::method_last (GALGAS_procEffectiveParameterPassingModeIR & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_operandIR & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    outOperand0 = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
    outOperand1 = p->mObject.mAttribute_mSelector ;
    outOperand2 = p->mObject.mAttribute_mParameter ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::operator_concat (const GALGAS_procCallEffectiveParameterListIR & inOperand
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::add_operation (const GALGAS_procCallEffectiveParameterListIR & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_procCallEffectiveParameterListIR result = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR::dotAssign_operation (const GALGAS_procCallEffectiveParameterListIR inOperand
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR::getter_mEffectiveParameterPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_procEffectiveParameterPassingModeIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mAttribute_mEffectiveParameterPassingMode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procCallEffectiveParameterListIR::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mAttribute_mSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR GALGAS_procCallEffectiveParameterListIR::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_procCallEffectiveParameterListIR * p = (cCollectionElement_procCallEffectiveParameterListIR *) attributes.ptr () ;
  GALGAS_operandIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
    result = p->mObject.mAttribute_mParameter ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_procCallEffectiveParameterListIR::cEnumerator_procCallEffectiveParameterListIR (const GALGAS_procCallEffectiveParameterListIR & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element cEnumerator_procCallEffectiveParameterListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR cEnumerator_procCallEffectiveParameterListIR::current_mEffectiveParameterPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_procCallEffectiveParameterListIR::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIR cEnumerator_procCallEffectiveParameterListIR::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_procCallEffectiveParameterListIR * p = (const cCollectionElement_procCallEffectiveParameterListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_procCallEffectiveParameterListIR) ;
  return p->mObject.mAttribute_mParameter ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @procCallEffectiveParameterListIR type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ("procCallEffectiveParameterListIR",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR GALGAS_procCallEffectiveParameterListIR::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR result ;
  const GALGAS_procCallEffectiveParameterListIR * p = (const GALGAS_procCallEffectiveParameterListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap::cMapElement_variableMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                  const GALGAS_bool & in_mReadAccessAllowed,
                                                  const GALGAS_objectInMemoryIR & in_mVariableKind,
                                                  const GALGAS_bool & in_copiable,
                                                  const GALGAS_registerBitSliceAccessMap & in_fieldMap,
                                                  const GALGAS_bool & in_mCanBeUsedAsInputParameter,
                                                  const GALGAS_bool & in_mIsConstant
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mType (in_mType),
mAttribute_mReadAccessAllowed (in_mReadAccessAllowed),
mAttribute_mVariableKind (in_mVariableKind),
mAttribute_copiable (in_copiable),
mAttribute_fieldMap (in_fieldMap),
mAttribute_mCanBeUsedAsInputParameter (in_mCanBeUsedAsInputParameter),
mAttribute_mIsConstant (in_mIsConstant) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_variableMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mReadAccessAllowed.isValid () && mAttribute_mVariableKind.isValid () && mAttribute_copiable.isValid () && mAttribute_fieldMap.isValid () && mAttribute_mCanBeUsedAsInputParameter.isValid () && mAttribute_mIsConstant.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_variableMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_variableMap (mAttribute_lkey, mAttribute_mType, mAttribute_mReadAccessAllowed, mAttribute_mVariableKind, mAttribute_copiable, mAttribute_fieldMap, mAttribute_mCanBeUsedAsInputParameter, mAttribute_mIsConstant COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_variableMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mAttribute_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReadAccessAllowed" ":" ;
  mAttribute_mReadAccessAllowed.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVariableKind" ":" ;
  mAttribute_mVariableKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "copiable" ":" ;
  mAttribute_copiable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "fieldMap" ":" ;
  mAttribute_fieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCanBeUsedAsInputParameter" ":" ;
  mAttribute_mCanBeUsedAsInputParameter.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mAttribute_mIsConstant.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_variableMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_variableMap * operand = (cMapElement_variableMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mType.objectCompare (operand->mAttribute_mType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReadAccessAllowed.objectCompare (operand->mAttribute_mReadAccessAllowed) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVariableKind.objectCompare (operand->mAttribute_mVariableKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_copiable.objectCompare (operand->mAttribute_copiable) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_fieldMap.objectCompare (operand->mAttribute_fieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCanBeUsedAsInputParameter.objectCompare (operand->mAttribute_mCanBeUsedAsInputParameter) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsConstant.objectCompare (operand->mAttribute_mIsConstant) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap::GALGAS_variableMap (void) :
AC_GALGAS_uniqueMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap::GALGAS_variableMap (const GALGAS_variableMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap & GALGAS_variableMap::operator = (const GALGAS_variableMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap GALGAS_variableMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_variableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const uint32_t kMapStateCount_variableMap = 24 ;
#endif
static const uint32_t kMapState_variableMap_constantInputFormalArgument = 14 ;
static const uint32_t kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused = 16 ;
static const uint32_t kMapState_variableMap_currentInstanceAttribute = 21 ;
static const uint32_t kMapState_variableMap_currentInstanceAttributeInModifier = 22 ;
static const uint32_t kMapState_variableMap_currentInstanceDroppedAttributeInModifier = 23 ;
static const uint32_t kMapState_variableMap_definedLocalVariable = 5 ;
static const uint32_t kMapState_variableMap_definedOutputFormalArgument = 9 ;
static const uint32_t kMapState_variableMap_droppedInputFormalArgument = 19 ;
static const uint32_t kMapState_variableMap_droppedInputOutputFormalArgument = 12 ;
static const uint32_t kMapState_variableMap_droppedLocalVariable = 7 ;
static const uint32_t kMapState_variableMap_globalVariable = 0 ;
static const uint32_t kMapState_variableMap_inputFormalArgumentDeclaredAsUnused = 20 ;
static const uint32_t kMapState_variableMap_inputFormalParameter = 17 ;
static const uint32_t kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused = 13 ;
static const uint32_t kMapState_variableMap_localConstant = 2 ;
static const uint32_t kMapState_variableMap_undefinedLocalConstant = 3 ;
static const uint32_t kMapState_variableMap_undefinedLocalVariable = 4 ;
static const uint32_t kMapState_variableMap_undefinedOutputFormalArgument = 8 ;
static const uint32_t kMapState_variableMap_unusedInputOutputFormalArgument = 10 ;
static const uint32_t kMapState_variableMap_usedConstantInputFormalArgument = 15 ;
static const uint32_t kMapState_variableMap_usedInputFormalArgument = 18 ;
static const uint32_t kMapState_variableMap_usedInputOutputFormalArgument = 11 ;
static const uint32_t kMapState_variableMap_usedLocalConstant = 1 ;
static const uint32_t kMapState_variableMap_usedLocalVariable = 6 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapStateNames_variableMap [24] = {
  "globalVariable",
  "usedLocalConstant",
  "localConstant",
  "undefinedLocalConstant",
  "undefinedLocalVariable",
  "definedLocalVariable",
  "usedLocalVariable",
  "droppedLocalVariable",
  "undefinedOutputFormalArgument",
  "definedOutputFormalArgument",
  "unusedInputOutputFormalArgument",
  "usedInputOutputFormalArgument",
  "droppedInputOutputFormalArgument",
  "inputOutputFormalArgumentDeclaredAsUnused",
  "constantInputFormalArgument",
  "usedConstantInputFormalArgument",
  "constantInputFormalArgumentDeclaredAsUnused",
  "inputFormalParameter",
  "usedInputFormalArgument",
  "droppedInputFormalArgument",
  "inputFormalArgumentDeclaredAsUnused",
  "currentInstanceAttribute",
  "currentInstanceAttributeInModifier",
  "currentInstanceDroppedAttributeInModifier"
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*

static const uint32_t kMapActionCount_variableMap = 5 ;
static const uint32_t kMapAction_variableMap_dropAccess = 3 ;
static const uint32_t kMapAction_variableMap_neutralAccess = 4 ;
static const uint32_t kMapAction_variableMap_readAccess = 0 ;
static const uint32_t kMapAction_variableMap_readWriteAccess = 2 ;
static const uint32_t kMapAction_variableMap_writeAccess = 1 ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*

static const char * kMapActionNames_variableMap [5] = {
  "dropAccess",
  "neutralAccess",
  "readAccess",
  "readWriteAccess",
  "writeAccess"
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonTransition kMapTransitions_variableMap [24 * 5] = {
// State 'globalVariable', index 0 
  {kMapState_variableMap_globalVariable /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_globalVariable /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_globalVariable /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_globalVariable /* 0 */, kMapAutomatonIssueError, "a global variable cannot be drop"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_globalVariable /* 0 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedLocalConstant', index 1 
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonIssueError, "a constant cannot be drop"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'localConstant', index 2 
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonIssueError, "a constant cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonIssueError, "a constant cannot be drop"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_localConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalConstant', index 3 
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_localConstant /* 2 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "the constant is undefined"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedLocalVariable', index 4 
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "an undefined local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueWarning, "the local variable has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedLocalVariable', index 5 
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueWarning, "the local variable has been dropped without any read"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedLocalVariable', index 6 
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedLocalVariable', index 7 
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "a dropped local variable cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueWarning, "the local variable is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'undefinedOutputFormalArgument', index 8 
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "an undefined output formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueWarning, "the output formal parameter has no value"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'definedOutputFormalArgument', index 9 
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'unusedInputOutputFormalArgument', index 10 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputOutputFormalArgument', index 11 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputOutputFormalArgument', index 12 
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "a dropped input/output formal argument cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal argument is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputOutputFormalArgumentDeclaredAsUnused', index 13 
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueWarning, "the input/output formal parameter has been declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgument', index 14 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedConstantInputFormalArgument', index 15 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'constantInputFormalArgumentDeclaredAsUnused', index 16 
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueWarning, "the constant input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be written"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonIssueError, "a constant input formal parameter cannot be dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalParameter', index 17 
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'usedInputFormalArgument', index 18 
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'droppedInputFormalArgument', index 19 
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "a dropped input formal parameter cannot be read"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'inputFormalArgumentDeclaredAsUnused', index 20 
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueWarning, "the input formal parameter is declared as unused"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceAttribute', index 21 
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonIssueError, "an attribute cannot be written within a method or a reader"}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonIssueError, "an attribute cannot be modified within a method or a reader"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonIssueError, "an attribute cannot be dropped within a method or a reader"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceAttribute /* 21 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceAttributeInModifier', index 22 
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonNoIssue, ""}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
// State 'currentInstanceDroppedAttributeInModifier', index 23 
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonIssueError, "the attribute cannot be read, it has been dropped"}, // for action 'readAccess', (index 0)
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""}, // for action 'writeAccess', (index 1)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonIssueError, "the attribute cannot be read/written, it has been dropped"}, // for action 'readWriteAccess', (index 2)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonIssueWarning, "the attribute is already dropped"}, // for action 'dropAccess', (index 3)
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonNoIssue, ""}, // for action 'neutralAccess', (index 4)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*

static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_variableMap [24] = {
  {kMapAutomatonNoIssue, ""},// state 'globalVariable' (index 0)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalConstant' (index 1)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'localConstant' (index 2)
  {kMapAutomatonIssueWarning, "the '%K' constant value is unused"},// state 'undefinedLocalConstant' (index 3)
  {kMapAutomatonIssueWarning, "the '%K' local variable is unused"},// state 'undefinedLocalVariable' (index 4)
  {kMapAutomatonNoIssue, ""},// state 'definedLocalVariable' (index 5)
  {kMapAutomatonNoIssue, ""},// state 'usedLocalVariable' (index 6)
  {kMapAutomatonNoIssue, ""},// state 'droppedLocalVariable' (index 7)
  {kMapAutomatonIssueError, "the '%K' output formal parameter is undefined"},// state 'undefinedOutputFormalArgument' (index 8)
  {kMapAutomatonNoIssue, ""},// state 'definedOutputFormalArgument' (index 9)
  {kMapAutomatonIssueWarning, "the '%K' input/output formal parameter is unused"},// state 'unusedInputOutputFormalArgument' (index 10)
  {kMapAutomatonNoIssue, ""},// state 'usedInputOutputFormalArgument' (index 11)
  {kMapAutomatonIssueError, "the '%K' input/ouput formal argument should be valuated at the end of the routine"},// state 'droppedInputOutputFormalArgument' (index 12)
  {kMapAutomatonNoIssue, ""},// state 'inputOutputFormalArgumentDeclaredAsUnused' (index 13)
  {kMapAutomatonIssueWarning, "the constant '%K' input formal parameter is not used and is not declared as unused"},// state 'constantInputFormalArgument' (index 14)
  {kMapAutomatonNoIssue, ""},// state 'usedConstantInputFormalArgument' (index 15)
  {kMapAutomatonNoIssue, ""},// state 'constantInputFormalArgumentDeclaredAsUnused' (index 16)
  {kMapAutomatonIssueWarning, "the '%K' input formal parameter is not used and is not declared as unused"},// state 'inputFormalParameter' (index 17)
  {kMapAutomatonNoIssue, ""},// state 'usedInputFormalArgument' (index 18)
  {kMapAutomatonNoIssue, ""},// state 'droppedInputFormalArgument' (index 19)
  {kMapAutomatonNoIssue, ""},// state 'inputFormalArgumentDeclaredAsUnused' (index 20)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceAttribute' (index 21)
  {kMapAutomatonNoIssue, ""},// state 'currentInstanceAttributeInModifier' (index 22)
  {kMapAutomatonIssueWarning, "the '%K' attribute is in the dropped state at the end of the modifier"},// state 'currentInstanceDroppedAttributeInModifier' (index 23)
} ;
//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_closeBranch (GALGAS_location inErrorLocation,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  closeBranch (inErrorLocation,
               kMapAutomatonFinalIssue_variableMap,
               #ifndef DO_NOT_GENERATE_CHECKINGS
                 kMapStateCount_variableMap,
               #endif
               inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::method_checkAutomatonStates (GALGAS_location inErrorLocation,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_variableMap, inCompiler COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'selectBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_selectBlock [30] = {
  {kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_selectBlock [42] = {
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones let it undefined"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous defines let it"},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "this branch drops the '%K' variable, while previous ones let it defined"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "this branch defines the '%K' variable, while previous ones drop it"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch defines the '%K' output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "this branch lets the '%K' variable undefined, while previous ones define it"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it undefined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch drops the '%K' input/output formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "this branch lets the '%K' input/output formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "this branch lets the '%K' input formal argument defined, while previous ones drop it"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument defined, while previous ones let it defined"},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "this branch drops the '%K' input formal argument, while previous ones let it defined"},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "this branch defines the '%K' input formal argument, while previous ones let it dropped"},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonIssueError, "this branch drops the '%K' attribute, while previous ones let it defined"},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonIssueError, "this branch lets the '%K' attribute defined, while previous ones drop it"},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_openOverrideForSelectBlock (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_selectBlock, 30,
                kBranchCombinationForOverride_variableMap_selectBlock, 42,
                "selectBlock",
                inCompiler
                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                             map override 'repeatBlock'                                              *
//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_variableMap_repeatBlock [30] = {
  {kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_undefinedLocalConstant /* 3 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' variable"},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' variable"},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonIssueError, "the repeated branch should not define the dropped '%K' variable"},
  {kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapAutomatonIssueError, "the repeated branch should not define the '%K' output formal argument"},
  {kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapState_variableMap_undefinedOutputFormalArgument /* 8 */, kMapState_variableMap_definedOutputFormalArgument /* 9 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' output formal argument"},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapAutomatonIssueError, "the repeated branch should define the '%K' input formal argument"},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_droppedInputOutputFormalArgument /* 12 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input/output formal argument"},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_droppedInputFormalArgument /* 19 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' input formal argument"},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonIssueError, "the repeated branch should not drop the '%K' attribute"},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_variableMap_repeatBlock [20] = {
  {kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_localConstant /* 2 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapState_variableMap_usedLocalConstant /* 1 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedLocalVariable /* 6 */, kMapState_variableMap_definedLocalVariable /* 5 */, kMapState_variableMap_usedLocalVariable /* 6 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_droppedLocalVariable /* 7 */, kMapState_variableMap_undefinedLocalVariable /* 4 */, kMapState_variableMap_droppedLocalVariable /* 7 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_unusedInputOutputFormalArgument /* 10 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused /* 13 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapState_variableMap_usedInputOutputFormalArgument /* 11 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgument /* 14 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused /* 16 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapState_variableMap_usedConstantInputFormalArgument /* 15 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalParameter /* 17 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_inputFormalArgumentDeclaredAsUnused /* 20 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapState_variableMap_usedInputFormalArgument /* 18 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
  {kMapState_variableMap_currentInstanceDroppedAttributeInModifier /* 23 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapState_variableMap_currentInstanceAttributeInModifier /* 22 */, kMapAutomatonNoIssue, ""},
} ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_openOverrideForRepeatBlock (C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  openOverride (kBranchBehaviourForOverride_variableMap_repeatBlock, 30,
                kBranchCombinationForOverride_variableMap_repeatBlock, 20,
                "repeatBlock",
                inCompiler
                COMMA_THERE) ;
}


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertGlobalVariable (GALGAS_lstring inKey,
                                                        GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                        GALGAS_bool inArgument1,
                                                        GALGAS_objectInMemoryIR inArgument2,
                                                        GALGAS_bool inArgument3,
                                                        GALGAS_registerBitSliceAccessMap inArgument4,
                                                        GALGAS_bool inArgument5,
                                                        GALGAS_bool inArgument6,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' global variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_globalVariable,
                        kMapStateNames_variableMap [kMapState_variableMap_globalVariable],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertMutableAttribute (GALGAS_lstring inKey,
                                                          GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                          GALGAS_bool inArgument1,
                                                          GALGAS_objectInMemoryIR inArgument2,
                                                          GALGAS_bool inArgument3,
                                                          GALGAS_registerBitSliceAccessMap inArgument4,
                                                          GALGAS_bool inArgument5,
                                                          GALGAS_bool inArgument6,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' attribute (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_currentInstanceAttributeInModifier,
                        kMapStateNames_variableMap [kMapState_variableMap_currentInstanceAttributeInModifier],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertNonMutableAttribute (GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                             GALGAS_bool inArgument1,
                                                             GALGAS_objectInMemoryIR inArgument2,
                                                             GALGAS_bool inArgument3,
                                                             GALGAS_registerBitSliceAccessMap inArgument4,
                                                             GALGAS_bool inArgument5,
                                                             GALGAS_bool inArgument6,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' attribute (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_currentInstanceAttribute,
                        kMapStateNames_variableMap [kMapState_variableMap_currentInstanceAttribute],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUndefinedLocalVariable (GALGAS_lstring inKey,
                                                                GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                GALGAS_bool inArgument1,
                                                                GALGAS_objectInMemoryIR inArgument2,
                                                                GALGAS_bool inArgument3,
                                                                GALGAS_registerBitSliceAccessMap inArgument4,
                                                                GALGAS_bool inArgument5,
                                                                GALGAS_bool inArgument6,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_undefinedLocalVariable,
                        kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalVariable],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertDefinedLocalVariable (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_bool inArgument1,
                                                              GALGAS_objectInMemoryIR inArgument2,
                                                              GALGAS_bool inArgument3,
                                                              GALGAS_registerBitSliceAccessMap inArgument4,
                                                              GALGAS_bool inArgument5,
                                                              GALGAS_bool inArgument6,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_definedLocalVariable,
                        kMapStateNames_variableMap [kMapState_variableMap_definedLocalVariable],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUndefinedLocalConstant (GALGAS_lstring inKey,
                                                                GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                GALGAS_bool inArgument1,
                                                                GALGAS_objectInMemoryIR inArgument2,
                                                                GALGAS_bool inArgument3,
                                                                GALGAS_registerBitSliceAccessMap inArgument4,
                                                                GALGAS_bool inArgument5,
                                                                GALGAS_bool inArgument6,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_undefinedLocalConstant,
                        kMapStateNames_variableMap [kMapState_variableMap_undefinedLocalConstant],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertLocalConstant (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                       GALGAS_bool inArgument1,
                                                       GALGAS_objectInMemoryIR inArgument2,
                                                       GALGAS_bool inArgument3,
                                                       GALGAS_registerBitSliceAccessMap inArgument4,
                                                       GALGAS_bool inArgument5,
                                                       GALGAS_bool inArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_localConstant,
                        kMapStateNames_variableMap [kMapState_variableMap_localConstant],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUsedLocalConstant (GALGAS_lstring inKey,
                                                           GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                           GALGAS_bool inArgument1,
                                                           GALGAS_objectInMemoryIR inArgument2,
                                                           GALGAS_bool inArgument3,
                                                           GALGAS_registerBitSliceAccessMap inArgument4,
                                                           GALGAS_bool inArgument5,
                                                           GALGAS_bool inArgument6,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_usedLocalConstant,
                        kMapStateNames_variableMap [kMapState_variableMap_usedLocalConstant],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputFormalArgument (GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                             GALGAS_bool inArgument1,
                                                             GALGAS_objectInMemoryIR inArgument2,
                                                             GALGAS_bool inArgument3,
                                                             GALGAS_registerBitSliceAccessMap inArgument4,
                                                             GALGAS_bool inArgument5,
                                                             GALGAS_bool inArgument6,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_inputFormalParameter,
                        kMapStateNames_variableMap [kMapState_variableMap_inputFormalParameter],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                             GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                             GALGAS_bool inArgument1,
                                                                             GALGAS_objectInMemoryIR inArgument2,
                                                                             GALGAS_bool inArgument3,
                                                                             GALGAS_registerBitSliceAccessMap inArgument4,
                                                                             GALGAS_bool inArgument5,
                                                                             GALGAS_bool inArgument6,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_inputFormalArgumentDeclaredAsUnused,
                        kMapStateNames_variableMap [kMapState_variableMap_inputFormalArgumentDeclaredAsUnused],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                     GALGAS_bool inArgument1,
                                                                     GALGAS_objectInMemoryIR inArgument2,
                                                                     GALGAS_bool inArgument3,
                                                                     GALGAS_registerBitSliceAccessMap inArgument4,
                                                                     GALGAS_bool inArgument5,
                                                                     GALGAS_bool inArgument6,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_constantInputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertUsedConstantInputFormalArgument (GALGAS_lstring inKey,
                                                                         GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                         GALGAS_bool inArgument1,
                                                                         GALGAS_objectInMemoryIR inArgument2,
                                                                         GALGAS_bool inArgument3,
                                                                         GALGAS_registerBitSliceAccessMap inArgument4,
                                                                         GALGAS_bool inArgument5,
                                                                         GALGAS_bool inArgument6,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_usedConstantInputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_usedConstantInputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertConstantInputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                     GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                     GALGAS_bool inArgument1,
                                                                                     GALGAS_objectInMemoryIR inArgument2,
                                                                                     GALGAS_bool inArgument3,
                                                                                     GALGAS_registerBitSliceAccessMap inArgument4,
                                                                                     GALGAS_bool inArgument5,
                                                                                     GALGAS_bool inArgument6,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused,
                        kMapStateNames_variableMap [kMapState_variableMap_constantInputFormalArgumentDeclaredAsUnused],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertOutputFormalArgument (GALGAS_lstring inKey,
                                                              GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                              GALGAS_bool inArgument1,
                                                              GALGAS_objectInMemoryIR inArgument2,
                                                              GALGAS_bool inArgument3,
                                                              GALGAS_registerBitSliceAccessMap inArgument4,
                                                              GALGAS_bool inArgument5,
                                                              GALGAS_bool inArgument6,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_undefinedOutputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_undefinedOutputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputOutputFormalArgument (GALGAS_lstring inKey,
                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                   GALGAS_bool inArgument1,
                                                                   GALGAS_objectInMemoryIR inArgument2,
                                                                   GALGAS_bool inArgument3,
                                                                   GALGAS_registerBitSliceAccessMap inArgument4,
                                                                   GALGAS_bool inArgument5,
                                                                   GALGAS_bool inArgument6,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_unusedInputOutputFormalArgument,
                        kMapStateNames_variableMap [kMapState_variableMap_unusedInputOutputFormalArgument],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_insertInputOutputFormalArgumentDeclaredAsUnused (GALGAS_lstring inKey,
                                                                                   GALGAS_unifiedTypeMap_2D_proxy inArgument0,
                                                                                   GALGAS_bool inArgument1,
                                                                                   GALGAS_objectInMemoryIR inArgument2,
                                                                                   GALGAS_bool inArgument3,
                                                                                   GALGAS_registerBitSliceAccessMap inArgument4,
                                                                                   GALGAS_bool inArgument5,
                                                                                   GALGAS_bool inArgument6,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * p = NULL ;
  macroMyNew (p, cMapElement_variableMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "redefinition of '%K' variable (previous declaration was in %L)" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused,
                        kMapStateNames_variableMap [kMapState_variableMap_inputOutputFormalArgumentDeclaredAsUnused],
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForReadAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForReadAccess (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                       GALGAS_bool & outArgument1,
                                                       GALGAS_objectInMemoryIR & outArgument2,
                                                       GALGAS_bool & outArgument3,
                                                       GALGAS_registerBitSliceAccessMap & outArgument4,
                                                       GALGAS_bool & outArgument5,
                                                       GALGAS_bool & outArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mReadAccessAllowed ;
    outArgument2 = p->mAttribute_mVariableKind ;
    outArgument3 = p->mAttribute_copiable ;
    outArgument4 = p->mAttribute_fieldMap ;
    outArgument5 = p->mAttribute_mCanBeUsedAsInputParameter ;
    outArgument6 = p->mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForWriteAccess (GALGAS_lstring inKey,
                                                        GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                        GALGAS_bool & outArgument1,
                                                        GALGAS_objectInMemoryIR & outArgument2,
                                                        GALGAS_bool & outArgument3,
                                                        GALGAS_registerBitSliceAccessMap & outArgument4,
                                                        GALGAS_bool & outArgument5,
                                                        GALGAS_bool & outArgument6,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_writeAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mReadAccessAllowed ;
    outArgument2 = p->mAttribute_mVariableKind ;
    outArgument3 = p->mAttribute_copiable ;
    outArgument4 = p->mAttribute_fieldMap ;
    outArgument5 = p->mAttribute_mCanBeUsedAsInputParameter ;
    outArgument6 = p->mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForReadWriteAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForReadWriteAccess (GALGAS_lstring inKey,
                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                            GALGAS_bool & outArgument1,
                                                            GALGAS_objectInMemoryIR & outArgument2,
                                                            GALGAS_bool & outArgument3,
                                                            GALGAS_registerBitSliceAccessMap & outArgument4,
                                                            GALGAS_bool & outArgument5,
                                                            GALGAS_bool & outArgument6,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_readWriteAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForReadWriteAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mReadAccessAllowed ;
    outArgument2 = p->mAttribute_mVariableKind ;
    outArgument3 = p->mAttribute_copiable ;
    outArgument4 = p->mAttribute_fieldMap ;
    outArgument5 = p->mAttribute_mCanBeUsedAsInputParameter ;
    outArgument6 = p->mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_searchForDropAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_searchForDropAccess (GALGAS_lstring inKey,
                                                       GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                       GALGAS_bool & outArgument1,
                                                       GALGAS_objectInMemoryIR & outArgument2,
                                                       GALGAS_bool & outArgument3,
                                                       GALGAS_registerBitSliceAccessMap & outArgument4,
                                                       GALGAS_bool & outArgument5,
                                                       GALGAS_bool & outArgument6,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_dropAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_searchForDropAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mReadAccessAllowed ;
    outArgument2 = p->mAttribute_mVariableKind ;
    outArgument3 = p->mAttribute_copiable ;
    outArgument4 = p->mAttribute_fieldMap ;
    outArgument5 = p->mAttribute_mCanBeUsedAsInputParameter ;
    outArgument6 = p->mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_variableMap_neutralAccess = "the '%K' variable is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_neutralAccess (GALGAS_lstring inKey,
                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument0,
                                                 GALGAS_bool & outArgument1,
                                                 GALGAS_objectInMemoryIR & outArgument2,
                                                 GALGAS_bool & outArgument3,
                                                 GALGAS_registerBitSliceAccessMap & outArgument4,
                                                 GALGAS_bool & outArgument5,
                                                 GALGAS_bool & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) performSearch (inKey,
                                                                                         inCompiler,
                                                                                         kMapAction_variableMap_neutralAccess,
                                                                                         kMapTransitions_variableMap,
                                                                                         kMapActionCount_variableMap,
                                                                                         kMapStateNames_variableMap,
                                                                                         kMapActionNames_variableMap,
                                                                                         #ifndef DO_NOT_GENERATE_CHECKINGS
                                                                                           kMapStateCount_variableMap,
                                                                                         #endif
                                                                                         kSearchErrorMessage_variableMap_neutralAccess
                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_variableMap) ;
    outArgument0 = p->mAttribute_mType ;
    outArgument1 = p->mAttribute_mReadAccessAllowed ;
    outArgument2 = p->mAttribute_mVariableKind ;
    outArgument3 = p->mAttribute_copiable ;
    outArgument4 = p->mAttribute_fieldMap ;
    outArgument5 = p->mAttribute_mCanBeUsedAsInputParameter ;
    outArgument6 = p->mAttribute_mIsConstant ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_mReadAccessAllowedForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mReadAccessAllowed ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_variableMap::getter_mVariableKindForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_objectInMemoryIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mVariableKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_copiableForKey (const GALGAS_string & inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_copiable ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_variableMap::getter_fieldMapForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_registerBitSliceAccessMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_fieldMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_mCanBeUsedAsInputParameterForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mCanBeUsedAsInputParameter ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap::getter_mIsConstantForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mIsConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMTypeForKey (GALGAS_unifiedTypeMap_2D_proxy inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMReadAccessAllowedForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mReadAccessAllowed = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMVariableKindForKey (GALGAS_objectInMemoryIR inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mVariableKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setCopiableForKey (GALGAS_bool inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_copiable = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setFieldMapForKey (GALGAS_registerBitSliceAccessMap inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_fieldMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMCanBeUsedAsInputParameterForKey (GALGAS_bool inAttributeValue,
                                                                       GALGAS_string inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mCanBeUsedAsInputParameter = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap::modifier_setMIsConstantForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_variableMap * p = (cMapElement_variableMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    p->mAttribute_mIsConstant = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_variableMap * GALGAS_variableMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_variableMap * result = (cMapElement_variableMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_variableMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_variableMap::cEnumerator_variableMap (const GALGAS_variableMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_variableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_variableMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_mReadAccessAllowed (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mReadAccessAllowed ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR cEnumerator_variableMap::current_mVariableKind (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mVariableKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_copiable (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_copiable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap cEnumerator_variableMap::current_fieldMap (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_fieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_mCanBeUsedAsInputParameter (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mCanBeUsedAsInputParameter ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_variableMap::current_mIsConstant (LOCATION_ARGS) const {
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_variableMap) ;
  return p->mAttribute_mIsConstant ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @variableMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap ("variableMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap GALGAS_variableMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_variableMap result ;
  const GALGAS_variableMap * p = (const GALGAS_variableMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy::GALGAS_variableMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap_2D_proxy::class_method_makeProxy (GALGAS_variableMap & ioMap,
                                                          GALGAS_lstring inKey,
                                                          GALGAS_variableMap_2D_proxy & outProxy
                                                          COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_variableMap_2D_proxy::class_method_makeProxyFromString (GALGAS_variableMap & ioMap,
                                                                    GALGAS_string inKey,
                                                                    GALGAS_variableMap_2D_proxy & outProxy
                                                                    COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_variableMap_2D_proxy::getter_mType (C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mType" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mType;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_mReadAccessAllowed (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mReadAccessAllowed" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mReadAccessAllowed;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectInMemoryIR GALGAS_variableMap_2D_proxy::getter_mVariableKind (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_objectInMemoryIR result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mVariableKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mVariableKind;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_copiable (C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "copiable" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_copiable;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerBitSliceAccessMap GALGAS_variableMap_2D_proxy::getter_fieldMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_registerBitSliceAccessMap result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "fieldMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_fieldMap;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_mCanBeUsedAsInputParameter (C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mCanBeUsedAsInputParameter" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mCanBeUsedAsInputParameter;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_variableMap_2D_proxy::getter_mIsConstant (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_bool result ;
  const cMapElement_variableMap * p = (const cMapElement_variableMap *) getAttributeListPointer (inCompiler, "mIsConstant" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_variableMap) ;
    result = p->mAttribute_mIsConstant;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForWriteAccess (const GALGAS_variableMap & inMap,
                                                                                           const GALGAS_lstring & inKey,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForReadWriteAccess (const GALGAS_variableMap & inMap,
                                                                                               const GALGAS_lstring & inKey,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForReadWriteAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_searchForDropAccess (const GALGAS_variableMap & inMap,
                                                                                          const GALGAS_lstring & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_searchForDropAccess, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::constructor_neutralAccess (const GALGAS_variableMap & inMap,
                                                                                    const GALGAS_lstring & inKey,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_variableMap_neutralAccess, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @variableMap-proxy type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableMap_2D_proxy ("variableMap-proxy",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableMap_2D_proxy GALGAS_variableMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_variableMap_2D_proxy result ;
  const GALGAS_variableMap_2D_proxy * p = (const GALGAS_variableMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

