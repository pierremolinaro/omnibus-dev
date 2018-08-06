#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * ptr = dynamic_cast<const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST::GALGAS_structurePropertyInitOptionalExpressionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (const GALGAS_expressionAST & inAssociatedValue0
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_expression ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::constructor_noExpression (UNUSED_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  result.mEnum = kEnum_noExpression ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyInitOptionalExpressionAST::method_expression (GALGAS_expressionAST & outAssociatedValue0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_expression) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @structurePropertyInitOptionalExpressionAST expression invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * ptr = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_structurePropertyInitOptionalExpressionAST [3] = {
  "(not built)",
  "expression",
  "noExpression"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structurePropertyInitOptionalExpressionAST::getter_isExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_expression == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_structurePropertyInitOptionalExpressionAST::getter_isNoExpression (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noExpression == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_structurePropertyInitOptionalExpressionAST::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<enum @structurePropertyInitOptionalExpressionAST: " << gEnumNameArrayFor_structurePropertyInitOptionalExpressionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_structurePropertyInitOptionalExpressionAST::objectCompare (const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @structurePropertyInitOptionalExpressionAST type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ("structurePropertyInitOptionalExpressionAST",
                                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_structurePropertyInitOptionalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structurePropertyInitOptionalExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_structurePropertyInitOptionalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structurePropertyInitOptionalExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_structurePropertyInitOptionalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  const GALGAS_structurePropertyInitOptionalExpressionAST * p = (const GALGAS_structurePropertyInitOptionalExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structurePropertyInitOptionalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structurePropertyInitOptionalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@propertyAttributeList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_propertyAttributeList : public cCollectionElement {
  public : GALGAS_propertyAttributeList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_propertyAttributeList (const GALGAS_lstring & in_mAttributeName,
                                                     const GALGAS_lbigint & in_mAttributeValue
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_propertyAttributeList (const GALGAS_propertyAttributeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyAttributeList::cCollectionElement_propertyAttributeList (const GALGAS_lstring & in_mAttributeName,
                                                                                    const GALGAS_lbigint & in_mAttributeValue
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyAttributeList::cCollectionElement_propertyAttributeList (const GALGAS_propertyAttributeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_propertyAttributeList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_propertyAttributeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyAttributeList (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_propertyAttributeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_propertyAttributeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyAttributeList * operand = (cCollectionElement_propertyAttributeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyAttributeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList::GALGAS_propertyAttributeList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList::GALGAS_propertyAttributeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyAttributeList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lbigint & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyAttributeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyAttributeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mAttributeName,
                                                              const GALGAS_lbigint & in_mAttributeValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyAttributeList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyAttributeList (in_mAttributeName,
                                                           in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lbigint & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyAttributeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::setter_append (GALGAS_propertyAttributeList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyAttributeList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lbigint inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyAttributeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lbigint & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mAttributeValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lbigint & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lbigint & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lbigint & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lbigint & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::add_operation (const GALGAS_propertyAttributeList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result = GALGAS_propertyAttributeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result = GALGAS_propertyAttributeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyAttributeList result = GALGAS_propertyAttributeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyAttributeList::plusAssign_operation (const GALGAS_propertyAttributeList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyAttributeList::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint GALGAS_propertyAttributeList::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyAttributeList * p = (cCollectionElement_propertyAttributeList *) attributes.ptr () ;
  GALGAS_lbigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyAttributeList::cEnumerator_propertyAttributeList (const GALGAS_propertyAttributeList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList_2D_element cEnumerator_propertyAttributeList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyAttributeList * p = (const cCollectionElement_propertyAttributeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_propertyAttributeList::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_propertyAttributeList * p = (const cCollectionElement_propertyAttributeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
  return p->mObject.mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigint cEnumerator_propertyAttributeList::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_propertyAttributeList * p = (const cCollectionElement_propertyAttributeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyAttributeList) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @propertyAttributeList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAttributeList ("propertyAttributeList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyAttributeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyAttributeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAttributeList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_propertyAttributeList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList result ;
  const GALGAS_propertyAttributeList * p = (const GALGAS_propertyAttributeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyAttributeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@propertyList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_propertyList : public cCollectionElement {
  public : GALGAS_propertyList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                            const GALGAS_PLMType & in_mType
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_propertyList (const GALGAS_propertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyList::cCollectionElement_propertyList (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_PLMType & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_propertyList::cCollectionElement_propertyList (const GALGAS_propertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_propertyList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_propertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_propertyList (mObject.mProperty_mPropertyName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_propertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_propertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_propertyList * operand = (cCollectionElement_propertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_propertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList::GALGAS_propertyList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList::GALGAS_propertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_propertyList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mPropertyName,
                                                     const GALGAS_PLMType & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_propertyList (in_mPropertyName,
                                                  in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_PLMType & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::setter_append (GALGAS_propertyList_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_PLMType inOperand1,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_propertyList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_propertyList) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mType ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_PLMType & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_PLMType & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::method_first (GALGAS_string & outOperand0,
                                        GALGAS_PLMType & outOperand1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::method_last (GALGAS_string & outOperand0,
                                       GALGAS_PLMType & outOperand1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::add_operation (const GALGAS_propertyList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyList result = GALGAS_propertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyList::plusAssign_operation (const GALGAS_propertyList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_propertyList::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_propertyList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_propertyList * p = (cCollectionElement_propertyList *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_propertyList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_propertyList::cEnumerator_propertyList (const GALGAS_propertyList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList_2D_element cEnumerator_propertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_propertyList::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_propertyList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_propertyList * p = (const cCollectionElement_propertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_propertyList) ;
  return p->mObject.mProperty_mType ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @propertyList type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList ("propertyList",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyList GALGAS_propertyList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyList result ;
  const GALGAS_propertyList * p = (const GALGAS_propertyList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@sortedOperandIRList' sorted list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_sortedOperandIRList : public cSortedListElement {
  public : GALGAS_sortedOperandIRList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_sortedOperandIRList (const GALGAS_objectIR & in_mOperand,
                                                   const GALGAS_uint & in_mIndex
                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement_sortedOperandIRList::cSortedListElement_sortedOperandIRList (const GALGAS_objectIR & in_mOperand,
                                                                                const GALGAS_uint & in_mIndex
                                                                                COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mOperand, in_mIndex) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_sortedOperandIRList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_sortedOperandIRList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_sortedOperandIRList (mObject.mProperty_mOperand, mObject.mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_sortedOperandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_sortedOperandIRList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_sortedOperandIRList * operand = (cSortedListElement_sortedOperandIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_sortedOperandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedOperandIRList::GALGAS_sortedOperandIRList (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_sortedOperandIRList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_sortedOperandIRList * operand = (const cSortedListElement_sortedOperandIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_sortedOperandIRList) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mIndex.objectCompare (operand->mObject.mProperty_mIndex) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::constructor_sortedListWithValue (const GALGAS_objectIR & inOperand0,
                                                                                        const GALGAS_uint & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedOperandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0,
                                                      const GALGAS_uint & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_sortedOperandIRList (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedOperandIRList::plusAssign_operation (const GALGAS_sortedOperandIRList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedOperandIRList::setter_popSmallest (GALGAS_objectIR & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedOperandIRList::setter_popGreatest (GALGAS_objectIR & outOperand0,
                                                     GALGAS_uint & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedOperandIRList::method_smallest (GALGAS_objectIR & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sortedOperandIRList::method_greatest (GALGAS_objectIR & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_sortedOperandIRList * p = (cSortedListElement_sortedOperandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
    outOperand1 = p->mObject.mProperty_mIndex ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_sortedOperandIRList::cEnumerator_sortedOperandIRList (const GALGAS_sortedOperandIRList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedOperandIRList_2D_element cEnumerator_sortedOperandIRList::current (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_sortedOperandIRList::current_mOperand (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mProperty_mOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_sortedOperandIRList::current_mIndex (LOCATION_ARGS) const {
  const cSortedListElement_sortedOperandIRList * p = (const cSortedListElement_sortedOperandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_sortedOperandIRList) ;
  return p->mObject.mProperty_mIndex ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @sortedOperandIRList type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedOperandIRList ("sortedOperandIRList",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sortedOperandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sortedOperandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedOperandIRList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sortedOperandIRList GALGAS_sortedOperandIRList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList result ;
  const GALGAS_sortedOperandIRList * p = (const GALGAS_sortedOperandIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedOperandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_reference::cEnumAssociatedValues_objectIR_reference (const GALGAS_PLMType & inAssociatedValue0,
                                                                                    const GALGAS_string & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_reference::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_reference::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_reference * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_reference *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_null::cEnumAssociatedValues_objectIR_null (const GALGAS_PLMType & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_null::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_null::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_null * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_null *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_llvmValue::cEnumAssociatedValues_objectIR_llvmValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                                    const GALGAS_string & inAssociatedValue1
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_llvmValue::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_literalInteger::cEnumAssociatedValues_objectIR_literalInteger (const GALGAS_PLMType & inAssociatedValue0,
                                                                                              const GALGAS_bigint & inAssociatedValue1
                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_literalInteger::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_literalInteger::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_literalInteger * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_literalInteger *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_llvmStructureValue::cEnumAssociatedValues_objectIR_llvmStructureValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                      const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_llvmStructureValue::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmStructureValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmStructureValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmStructureValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_literalString::cEnumAssociatedValues_objectIR_literalString (const GALGAS_uint & inAssociatedValue0,
                                                                                            const GALGAS_uint & inAssociatedValue1
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_literalString::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_literalString::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_literalString * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_literalString *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_zero::cEnumAssociatedValues_objectIR_zero (const GALGAS_PLMType & inAssociatedValue0
                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_zero::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_zero::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_zero * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_zero *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_llvmArrayStaticValues::cEnumAssociatedValues_objectIR_llvmArrayStaticValues (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                            const GALGAS_operandIRList & inAssociatedValue1,
                                                                                                            const GALGAS_uint & inAssociatedValue2
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_llvmArrayStaticValues::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayStaticValues::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                              const GALGAS_operandIRList & inAssociatedValue1
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayDynamicValues::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                                          const GALGAS_uint & inAssociatedValue1,
                                                                                                                          const GALGAS_objectIR & inAssociatedValue2,
                                                                                                                          const GALGAS_uint & inAssociatedValue3
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                                                                            const GALGAS_uint & inAssociatedValue1,
                                                                                                                            const GALGAS_objectIR & inAssociatedValue2
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * ptr = dynamic_cast<const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR::GALGAS_objectIR (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_void (UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  result.mEnum = kEnum_void ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_reference (const GALGAS_PLMType & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_reference ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_reference (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_null (const GALGAS_PLMType & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_null ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_null (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmValue (const GALGAS_PLMType & inAssociatedValue0,
                                                        const GALGAS_string & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_literalInteger (const GALGAS_PLMType & inAssociatedValue0,
                                                             const GALGAS_bigint & inAssociatedValue1
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalInteger ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalInteger (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmStructureValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                 const GALGAS_sortedOperandIRList & inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmStructureValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmStructureValue (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_literalString (const GALGAS_uint & inAssociatedValue0,
                                                            const GALGAS_uint & inAssociatedValue1
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_literalString ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_literalString (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_zero (const GALGAS_PLMType & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_zero ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_zero (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayStaticValues (const GALGAS_PLMType & inAssociatedValue0,
                                                                    const GALGAS_operandIRList & inAssociatedValue1,
                                                                    const GALGAS_uint & inAssociatedValue2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmArrayStaticValues ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayStaticValues (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayDynamicValues (const GALGAS_PLMType & inAssociatedValue0,
                                                                     const GALGAS_operandIRList & inAssociatedValue1
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_llvmArrayDynamicValues ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayDynamicValues (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                           const GALGAS_uint & inAssociatedValue1,
                                                                           const GALGAS_objectIR & inAssociatedValue2,
                                                                           const GALGAS_uint & inAssociatedValue3
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_llvmArrayRepeatedStaticValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (const GALGAS_PLMType & inAssociatedValue0,
                                                                            const GALGAS_uint & inAssociatedValue1,
                                                                            const GALGAS_objectIR & inAssociatedValue2
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_llvmArrayRepeatedDynamicValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_reference (GALGAS_PLMType & outAssociatedValue0,
                                        GALGAS_string & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_reference) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR reference invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_reference * ptr = (const cEnumAssociatedValues_objectIR_reference *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_null (GALGAS_PLMType & outAssociatedValue0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_null) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectIR null invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_null * ptr = (const cEnumAssociatedValues_objectIR_null *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_llvmValue (GALGAS_PLMType & outAssociatedValue0,
                                        GALGAS_string & outAssociatedValue1,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmValue * ptr = (const cEnumAssociatedValues_objectIR_llvmValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_literalInteger (GALGAS_PLMType & outAssociatedValue0,
                                             GALGAS_bigint & outAssociatedValue1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalInteger) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR literalInteger invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalInteger * ptr = (const cEnumAssociatedValues_objectIR_literalInteger *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_llvmStructureValue (GALGAS_PLMType & outAssociatedValue0,
                                                 GALGAS_sortedOperandIRList & outAssociatedValue1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmStructureValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmStructureValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmStructureValue * ptr = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_literalString (GALGAS_uint & outAssociatedValue0,
                                            GALGAS_uint & outAssociatedValue1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_literalString) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR literalString invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_literalString * ptr = (const cEnumAssociatedValues_objectIR_literalString *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_zero (GALGAS_PLMType & outAssociatedValue0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_zero) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @objectIR zero invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_zero * ptr = (const cEnumAssociatedValues_objectIR_zero *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_llvmArrayStaticValues (GALGAS_PLMType & outAssociatedValue0,
                                                    GALGAS_operandIRList & outAssociatedValue1,
                                                    GALGAS_uint & outAssociatedValue2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayStaticValues) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayStaticValues invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_llvmArrayDynamicValues (GALGAS_PLMType & outAssociatedValue0,
                                                     GALGAS_operandIRList & outAssociatedValue1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayDynamicValues) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayDynamicValues invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_llvmArrayRepeatedStaticValue (GALGAS_PLMType & outAssociatedValue0,
                                                           GALGAS_uint & outAssociatedValue1,
                                                           GALGAS_objectIR & outAssociatedValue2,
                                                           GALGAS_uint & outAssociatedValue3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayRepeatedStaticValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayRepeatedStaticValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::method_llvmArrayRepeatedDynamicValue (GALGAS_PLMType & outAssociatedValue0,
                                                            GALGAS_uint & outAssociatedValue1,
                                                            GALGAS_objectIR & outAssociatedValue2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_llvmArrayRepeatedDynamicValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @objectIR llvmArrayRepeatedDynamicValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * ptr = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_objectIR [13] = {
  "(not built)",
  "void",
  "reference",
  "null",
  "llvmValue",
  "literalInteger",
  "llvmStructureValue",
  "literalString",
  "zero",
  "llvmArrayStaticValues",
  "llvmArrayDynamicValues",
  "llvmArrayRepeatedStaticValue",
  "llvmArrayRepeatedDynamicValue"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isVoid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_void == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isReference (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_reference == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_null == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLlvmValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLiteralInteger (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalInteger == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLlvmStructureValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmStructureValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLiteralString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_literalString == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isZero (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_zero == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayStaticValues (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayStaticValues == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayDynamicValues (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayDynamicValues == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayRepeatedStaticValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayRepeatedStaticValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectIR::getter_isLlvmArrayRepeatedDynamicValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_llvmArrayRepeatedDynamicValue == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectIR::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @objectIR: " << gEnumNameArrayFor_objectIR [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_objectIR::objectCompare (const GALGAS_objectIR & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @objectIR type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectIR ("objectIR",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_objectIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_objectIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_objectIR::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectIR result ;
  const GALGAS_objectIR * p = (const GALGAS_objectIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@globalVariableIRList' sorted list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_globalVariableIRList : public cSortedListElement {
  public : GALGAS_globalVariableIRList_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_globalVariableIRList (const GALGAS_string & in_mLLVMVariable,
                                                    const GALGAS_objectIR & in_mExpression,
                                                    const GALGAS_uint & in_mAlignment
                                                    COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement_globalVariableIRList::cSortedListElement_globalVariableIRList (const GALGAS_string & in_mLLVMVariable,
                                                                                  const GALGAS_objectIR & in_mExpression,
                                                                                  const GALGAS_uint & in_mAlignment
                                                                                  COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mLLVMVariable, in_mExpression, in_mAlignment) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_globalVariableIRList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_globalVariableIRList::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_globalVariableIRList (mObject.mProperty_mLLVMVariable, mObject.mProperty_mExpression, mObject.mProperty_mAlignment COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_globalVariableIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLLVMVariable" ":" ;
  mObject.mProperty_mLLVMVariable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAlignment" ":" ;
  mObject.mProperty_mAlignment.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_globalVariableIRList::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_globalVariableIRList * operand = (cSortedListElement_globalVariableIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_globalVariableIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalVariableIRList::GALGAS_globalVariableIRList (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_globalVariableIRList::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_globalVariableIRList * operand = (const cSortedListElement_globalVariableIRList *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_globalVariableIRList) ;
  if (result == kOperandEqual) {
    result = operand->mObject.mProperty_mAlignment.objectCompare (mObject.mProperty_mAlignment) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalVariableIRList GALGAS_globalVariableIRList::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_globalVariableIRList result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalVariableIRList GALGAS_globalVariableIRList::constructor_sortedListWithValue (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_objectIR & inOperand1,
                                                                                          const GALGAS_uint & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableIRList result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_globalVariableIRList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalVariableIRList::addAssign_operation (const GALGAS_string & inOperand0,
                                                       const GALGAS_objectIR & inOperand1,
                                                       const GALGAS_uint & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_globalVariableIRList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalVariableIRList::plusAssign_operation (const GALGAS_globalVariableIRList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalVariableIRList::setter_popSmallest (GALGAS_string & outOperand0,
                                                      GALGAS_objectIR & outOperand1,
                                                      GALGAS_uint & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_globalVariableIRList * p = (cSortedListElement_globalVariableIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
    outOperand0 = p->mObject.mProperty_mLLVMVariable ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mAlignment ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalVariableIRList::setter_popGreatest (GALGAS_string & outOperand0,
                                                      GALGAS_objectIR & outOperand1,
                                                      GALGAS_uint & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_globalVariableIRList * p = (cSortedListElement_globalVariableIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
    outOperand0 = p->mObject.mProperty_mLLVMVariable ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mAlignment ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalVariableIRList::method_smallest (GALGAS_string & outOperand0,
                                                   GALGAS_objectIR & outOperand1,
                                                   GALGAS_uint & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_globalVariableIRList * p = (cSortedListElement_globalVariableIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
    outOperand0 = p->mObject.mProperty_mLLVMVariable ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mAlignment ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalVariableIRList::method_greatest (GALGAS_string & outOperand0,
                                                   GALGAS_objectIR & outOperand1,
                                                   GALGAS_uint & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_globalVariableIRList * p = (cSortedListElement_globalVariableIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
    outOperand0 = p->mObject.mProperty_mLLVMVariable ;
    outOperand1 = p->mObject.mProperty_mExpression ;
    outOperand2 = p->mObject.mProperty_mAlignment ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalVariableIRList::cEnumerator_globalVariableIRList (const GALGAS_globalVariableIRList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalVariableIRList_2D_element cEnumerator_globalVariableIRList::current (LOCATION_ARGS) const {
  const cSortedListElement_globalVariableIRList * p = (const cSortedListElement_globalVariableIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_globalVariableIRList::current_mLLVMVariable (LOCATION_ARGS) const {
  const cSortedListElement_globalVariableIRList * p = (const cSortedListElement_globalVariableIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
  return p->mObject.mProperty_mLLVMVariable ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_globalVariableIRList::current_mExpression (LOCATION_ARGS) const {
  const cSortedListElement_globalVariableIRList * p = (const cSortedListElement_globalVariableIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
  return p->mObject.mProperty_mExpression ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_globalVariableIRList::current_mAlignment (LOCATION_ARGS) const {
  const cSortedListElement_globalVariableIRList * p = (const cSortedListElement_globalVariableIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_globalVariableIRList) ;
  return p->mObject.mProperty_mAlignment ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @globalVariableIRList type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableIRList ("globalVariableIRList",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalVariableIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableIRList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalVariableIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableIRList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalVariableIRList GALGAS_globalVariableIRList::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableIRList result ;
  const GALGAS_globalVariableIRList * p = (const GALGAS_globalVariableIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractDecoratedDeclaration::objectCompare (const GALGAS_abstractDecoratedDeclaration & inOperand) const {
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

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDecoratedDeclaration::GALGAS_abstractDecoratedDeclaration (const cPtr_abstractDecoratedDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDecoratedDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @abstractDecoratedDeclaration class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDecoratedDeclaration::cPtr_abstractDecoratedDeclaration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @abstractDecoratedDeclaration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ("abstractDecoratedDeclaration",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDecoratedDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDecoratedDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDecoratedDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDecoratedDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDecoratedDeclaration GALGAS_abstractDecoratedDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDecoratedDeclaration result ;
  const GALGAS_abstractDecoratedDeclaration * p = (const GALGAS_abstractDecoratedDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDecoratedDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDecoratedDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_integerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsSigned.objectCompare (p->mProperty_mIsSigned) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSize.objectCompare (p->mProperty_mSize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_integerDeclarationAST::objectCompare (const GALGAS_integerDeclarationAST & inOperand) const {
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

GALGAS_integerDeclarationAST::GALGAS_integerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_uint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerDeclarationAST::GALGAS_integerDeclarationAST (const cPtr_integerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsSigned,
                                                                            const GALGAS_uint & inAttribute_mSize
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST result ;
  if (inAttribute_mIsSigned.isValid () && inAttribute_mSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerDeclarationAST (inAttribute_mIsSigned, inAttribute_mSize COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_integerDeclarationAST::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    result = p->mProperty_mIsSigned ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_integerDeclarationAST::getter_mIsSigned (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsSigned ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_integerDeclarationAST::getter_mSize (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerDeclarationAST * p = (const cPtr_integerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerDeclarationAST) ;
    result = p->mProperty_mSize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_integerDeclarationAST::getter_mSize (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @integerDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerDeclarationAST::cPtr_integerDeclarationAST (const GALGAS_bool & in_mIsSigned,
                                                        const GALGAS_uint & in_mSize
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mIsSigned (in_mIsSigned),
mProperty_mSize (in_mSize) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_integerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

void cPtr_integerDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerDeclarationAST:" ;
  mProperty_mIsSigned.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSize.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerDeclarationAST (mProperty_mIsSigned, mProperty_mSize COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @integerDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerDeclarationAST ("integerDeclarationAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerDeclarationAST GALGAS_integerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerDeclarationAST result ;
  const GALGAS_integerDeclarationAST * p = (const GALGAS_integerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension getter '@integerDeclarationAST typeName'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_integerDeclarationAST_typeName> gExtensionGetterTable_integerDeclarationAST_typeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_typeName (const int32_t inClassIndex,
                                    enterExtensionGetter_integerDeclarationAST_typeName inGetter) {
  gExtensionGetterTable_integerDeclarationAST_typeName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string callExtensionGetter_typeName (const cPtr_integerDeclarationAST * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_integerDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_integerDeclarationAST_typeName f = NULL ;
    if (classIndex < gExtensionGetterTable_integerDeclarationAST_typeName.count ()) {
      f = gExtensionGetterTable_integerDeclarationAST_typeName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_integerDeclarationAST_typeName.count ()) {
           f = gExtensionGetterTable_integerDeclarationAST_typeName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_integerDeclarationAST_typeName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_integerDeclarationAST_typeName (const cPtr_integerDeclarationAST * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_integerDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("$int") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$uint") ;
  }
  result_outName = temp_0.add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 19)) ;
//---
  return result_outName ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_integerDeclarationAST_typeName (void) {
  enterExtensionGetter_typeName (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                 extensionGetter_integerDeclarationAST_typeName) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_integerDeclarationAST_typeName (void) {
  gExtensionGetterTable_integerDeclarationAST_typeName.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_integerDeclarationAST_typeName (defineExtensionGetter_integerDeclarationAST_typeName,
                                                           freeExtensionGetter_integerDeclarationAST_typeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalIntegerDeclarationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalIntegerDeclarationAST::objectCompare (const GALGAS_literalIntegerDeclarationAST & inOperand) const {
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

GALGAS_literalIntegerDeclarationAST::GALGAS_literalIntegerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerDeclarationAST GALGAS_literalIntegerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntegerDeclarationAST::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerDeclarationAST::GALGAS_literalIntegerDeclarationAST (const cPtr_literalIntegerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntegerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerDeclarationAST GALGAS_literalIntegerDeclarationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_literalIntegerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntegerDeclarationAST (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @literalIntegerDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalIntegerDeclarationAST::cPtr_literalIntegerDeclarationAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalIntegerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerDeclarationAST ;
}

void cPtr_literalIntegerDeclarationAST::description (C_String & ioString,
                                                     const int32_t /* inIndentation */) const {
  ioString << "[@literalIntegerDeclarationAST]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalIntegerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntegerDeclarationAST (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @literalIntegerDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntegerDeclarationAST ("literalIntegerDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalIntegerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntegerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalIntegerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntegerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalIntegerDeclarationAST GALGAS_literalIntegerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalIntegerDeclarationAST result ;
  const GALGAS_literalIntegerDeclarationAST * p = (const GALGAS_literalIntegerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntegerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntegerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_literalStringDeclarationAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_literalStringDeclarationAST::objectCompare (const GALGAS_literalStringDeclarationAST & inOperand) const {
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

GALGAS_literalStringDeclarationAST::GALGAS_literalStringDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringDeclarationAST::constructor_new (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringDeclarationAST::GALGAS_literalStringDeclarationAST (const cPtr_literalStringDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::constructor_new (LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalStringDeclarationAST (THERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @literalStringDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_literalStringDeclarationAST::cPtr_literalStringDeclarationAST (LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_literalStringDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

void cPtr_literalStringDeclarationAST::description (C_String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString << "[@literalStringDeclarationAST]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_literalStringDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringDeclarationAST (THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @literalStringDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringDeclarationAST ("literalStringDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_literalStringDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_literalStringDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_literalStringDeclarationAST GALGAS_literalStringDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringDeclarationAST result ;
  const GALGAS_literalStringDeclarationAST * p = (const GALGAS_literalStringDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_controlRegisterKind_registerArray::cEnumAssociatedValues_controlRegisterKind_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1,
                                                                                                                  const GALGAS_expressionAST & inAssociatedValue2,
                                                                                                                  const GALGAS_location & inAssociatedValue3
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_controlRegisterKind_registerArray::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_controlRegisterKind_registerArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterKind_registerArray * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterKind_registerArray *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind::GALGAS_controlRegisterKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::constructor_scalar (UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  result.mEnum = kEnum_scalar ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::constructor_registerArray (const GALGAS_expressionAST & inAssociatedValue0,
                                                                                  const GALGAS_location & inAssociatedValue1,
                                                                                  const GALGAS_expressionAST & inAssociatedValue2,
                                                                                  const GALGAS_location & inAssociatedValue3
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_registerArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterKind_registerArray (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterKind::method_registerArray (GALGAS_expressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       GALGAS_expressionAST & outAssociatedValue2,
                                                       GALGAS_location & outAssociatedValue3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_registerArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @controlRegisterKind registerArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterKind_registerArray * ptr = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_controlRegisterKind [3] = {
  "(not built)",
  "scalar",
  "registerArray"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterKind::getter_isScalar (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_scalar == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterKind::getter_isRegisterArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterKind::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterKind: " << gEnumNameArrayFor_controlRegisterKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterKind::objectCompare (const GALGAS_controlRegisterKind & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @controlRegisterKind type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterKind ("controlRegisterKind",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind GALGAS_controlRegisterKind::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterKind result ;
  const GALGAS_controlRegisterKind * p = (const GALGAS_controlRegisterKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@controlRegisterNameListAST' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controlRegisterNameListAST : public cCollectionElement {
  public : GALGAS_controlRegisterNameListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterNameListAST (const GALGAS_lstring & in_mRegisterName,
                                                          const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                          const GALGAS_lstringlist & in_mAttributeList,
                                                          const GALGAS_expressionAST & in_mRegisterOffset,
                                                          const GALGAS_location & in_mRegisterOffsetLocation
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterNameListAST::cCollectionElement_controlRegisterNameListAST (const GALGAS_lstring & in_mRegisterName,
                                                                                              const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                              const GALGAS_lstringlist & in_mAttributeList,
                                                                                              const GALGAS_expressionAST & in_mRegisterOffset,
                                                                                              const GALGAS_location & in_mRegisterOffsetLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterName, in_mControlRegisterKind, in_mAttributeList, in_mRegisterOffset, in_mRegisterOffsetLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterNameListAST::cCollectionElement_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterName, inElement.mProperty_mControlRegisterKind, inElement.mProperty_mAttributeList, inElement.mProperty_mRegisterOffset, inElement.mProperty_mRegisterOffsetLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controlRegisterNameListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controlRegisterNameListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterNameListAST (mObject.mProperty_mRegisterName, mObject.mProperty_mControlRegisterKind, mObject.mProperty_mAttributeList, mObject.mProperty_mRegisterOffset, mObject.mProperty_mRegisterOffsetLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controlRegisterNameListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterName" ":" ;
  mObject.mProperty_mRegisterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterKind" ":" ;
  mObject.mProperty_mControlRegisterKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterOffset" ":" ;
  mObject.mProperty_mRegisterOffset.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterOffsetLocation" ":" ;
  mObject.mProperty_mRegisterOffsetLocation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controlRegisterNameListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterNameListAST * operand = (cCollectionElement_controlRegisterNameListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterNameListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST::GALGAS_controlRegisterNameListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST::GALGAS_controlRegisterNameListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterNameListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_controlRegisterKind & inOperand1,
                                                                                                const GALGAS_lstringlist & inOperand2,
                                                                                                const GALGAS_expressionAST & inOperand3,
                                                                                                const GALGAS_location & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterNameListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterNameListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mRegisterName,
                                                                   const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                   const GALGAS_lstringlist & in_mAttributeList,
                                                                   const GALGAS_expressionAST & in_mRegisterOffset,
                                                                   const GALGAS_location & in_mRegisterOffsetLocation
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterNameListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterNameListAST (in_mRegisterName,
                                                                in_mControlRegisterKind,
                                                                in_mAttributeList,
                                                                in_mRegisterOffset,
                                                                in_mRegisterOffsetLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_controlRegisterKind & inOperand1,
                                                             const GALGAS_lstringlist & inOperand2,
                                                             const GALGAS_expressionAST & inOperand3,
                                                             const GALGAS_location & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterNameListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::setter_append (GALGAS_controlRegisterNameListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterNameListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_controlRegisterKind inOperand1,
                                                              const GALGAS_lstringlist inOperand2,
                                                              const GALGAS_expressionAST inOperand3,
                                                              const GALGAS_location inOperand4,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterNameListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_controlRegisterKind & outOperand1,
                                                              GALGAS_lstringlist & outOperand2,
                                                              GALGAS_expressionAST & outOperand3,
                                                              GALGAS_location & outOperand4,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
      outOperand0 = p->mObject.mProperty_mRegisterName ;
      outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
      outOperand2 = p->mObject.mProperty_mAttributeList ;
      outOperand3 = p->mObject.mProperty_mRegisterOffset ;
      outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_controlRegisterKind & outOperand1,
                                                         GALGAS_lstringlist & outOperand2,
                                                         GALGAS_expressionAST & outOperand3,
                                                         GALGAS_location & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_controlRegisterKind & outOperand1,
                                                        GALGAS_lstringlist & outOperand2,
                                                        GALGAS_expressionAST & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_controlRegisterKind & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      GALGAS_expressionAST & outOperand3,
                                                      GALGAS_location & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_controlRegisterKind & outOperand1,
                                                     GALGAS_lstringlist & outOperand2,
                                                     GALGAS_expressionAST & outOperand3,
                                                     GALGAS_location & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterKind ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
    outOperand3 = p->mObject.mProperty_mRegisterOffset ;
    outOperand4 = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::add_operation (const GALGAS_controlRegisterNameListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result = GALGAS_controlRegisterNameListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result = GALGAS_controlRegisterNameListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterNameListAST result = GALGAS_controlRegisterNameListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterNameListAST::plusAssign_operation (const GALGAS_controlRegisterNameListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterNameListAST::getter_mRegisterNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mRegisterName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind GALGAS_controlRegisterNameListAST::getter_mControlRegisterKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_controlRegisterKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mControlRegisterKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_controlRegisterNameListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_controlRegisterNameListAST::getter_mRegisterOffsetAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mRegisterOffset ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_controlRegisterNameListAST::getter_mRegisterOffsetLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterNameListAST * p = (cCollectionElement_controlRegisterNameListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
    result = p->mObject.mProperty_mRegisterOffsetLocation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterNameListAST::cEnumerator_controlRegisterNameListAST (const GALGAS_controlRegisterNameListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST_2D_element cEnumerator_controlRegisterNameListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterNameListAST::current_mRegisterName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mRegisterName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterKind cEnumerator_controlRegisterNameListAST::current_mControlRegisterKind (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mControlRegisterKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_controlRegisterNameListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cEnumerator_controlRegisterNameListAST::current_mRegisterOffset (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mRegisterOffset ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_controlRegisterNameListAST::current_mRegisterOffsetLocation (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterNameListAST * p = (const cCollectionElement_controlRegisterNameListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterNameListAST) ;
  return p->mObject.mProperty_mRegisterOffsetLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @controlRegisterNameListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameListAST ("controlRegisterNameListAST",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterNameListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterNameListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterNameListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST result ;
  const GALGAS_controlRegisterNameListAST * p = (const GALGAS_controlRegisterNameListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterNameListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@controlRegisterDeclarationList' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controlRegisterDeclarationList : public cCollectionElement {
  public : GALGAS_controlRegisterDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                              const GALGAS_lstring & in_mRegisterTypeName,
                                                              const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                              const GALGAS_location & in_mRegisterBitSliceListLocation
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterDeclarationList::cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                                                      const GALGAS_lstring & in_mRegisterTypeName,
                                                                                                      const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                                                      const GALGAS_location & in_mRegisterBitSliceListLocation
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterArrayList, in_mRegisterTypeName, in_mRegisterBitSliceList, in_mRegisterBitSliceListLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterDeclarationList::cCollectionElement_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterArrayList, inElement.mProperty_mRegisterTypeName, inElement.mProperty_mRegisterBitSliceList, inElement.mProperty_mRegisterBitSliceListLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controlRegisterDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controlRegisterDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterDeclarationList (mObject.mProperty_mRegisterArrayList, mObject.mProperty_mRegisterTypeName, mObject.mProperty_mRegisterBitSliceList, mObject.mProperty_mRegisterBitSliceListLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controlRegisterDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterArrayList" ":" ;
  mObject.mProperty_mRegisterArrayList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterTypeName" ":" ;
  mObject.mProperty_mRegisterTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSliceList" ":" ;
  mObject.mProperty_mRegisterBitSliceList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSliceListLocation" ":" ;
  mObject.mProperty_mRegisterBitSliceListLocation.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controlRegisterDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterDeclarationList * operand = (cCollectionElement_controlRegisterDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList::GALGAS_controlRegisterDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList::GALGAS_controlRegisterDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::constructor_listWithValue (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                                                        const GALGAS_location & inOperand3
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_controlRegisterDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_controlRegisterNameListAST & in_mRegisterArrayList,
                                                                       const GALGAS_lstring & in_mRegisterTypeName,
                                                                       const GALGAS_controlRegisterBitSliceList & in_mRegisterBitSliceList,
                                                                       const GALGAS_location & in_mRegisterBitSliceListLocation
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (in_mRegisterArrayList,
                                                                    in_mRegisterTypeName,
                                                                    in_mRegisterBitSliceList,
                                                                    in_mRegisterBitSliceListLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::addAssign_operation (const GALGAS_controlRegisterNameListAST & inOperand0,
                                                                 const GALGAS_lstring & inOperand1,
                                                                 const GALGAS_controlRegisterBitSliceList & inOperand2,
                                                                 const GALGAS_location & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::setter_append (GALGAS_controlRegisterDeclarationList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::setter_insertAtIndex (const GALGAS_controlRegisterNameListAST inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_controlRegisterBitSliceList inOperand2,
                                                                  const GALGAS_location inOperand3,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::setter_removeAtIndex (GALGAS_controlRegisterNameListAST & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_controlRegisterBitSliceList & outOperand2,
                                                                  GALGAS_location & outOperand3,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
      outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
      outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
      outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::setter_popFirst (GALGAS_controlRegisterNameListAST & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_controlRegisterBitSliceList & outOperand2,
                                                             GALGAS_location & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::setter_popLast (GALGAS_controlRegisterNameListAST & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_controlRegisterBitSliceList & outOperand2,
                                                            GALGAS_location & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::method_first (GALGAS_controlRegisterNameListAST & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_controlRegisterBitSliceList & outOperand2,
                                                          GALGAS_location & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::method_last (GALGAS_controlRegisterNameListAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_controlRegisterBitSliceList & outOperand2,
                                                         GALGAS_location & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mRegisterArrayList ;
    outOperand1 = p->mObject.mProperty_mRegisterTypeName ;
    outOperand2 = p->mObject.mProperty_mRegisterBitSliceList ;
    outOperand3 = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::add_operation (const GALGAS_controlRegisterDeclarationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result = GALGAS_controlRegisterDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result = GALGAS_controlRegisterDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result = GALGAS_controlRegisterDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterDeclarationList::plusAssign_operation (const GALGAS_controlRegisterDeclarationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST GALGAS_controlRegisterDeclarationList::getter_mRegisterArrayListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_controlRegisterNameListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterArrayList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterDeclarationList::getter_mRegisterTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterDeclarationList::getter_mRegisterBitSliceListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_controlRegisterBitSliceList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterBitSliceList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location GALGAS_controlRegisterDeclarationList::getter_mRegisterBitSliceListLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterDeclarationList * p = (cCollectionElement_controlRegisterDeclarationList *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
    result = p->mObject.mProperty_mRegisterBitSliceListLocation ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterDeclarationList::cEnumerator_controlRegisterDeclarationList (const GALGAS_controlRegisterDeclarationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList_2D_element cEnumerator_controlRegisterDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterNameListAST cEnumerator_controlRegisterDeclarationList::current_mRegisterArrayList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterDeclarationList::current_mRegisterTypeName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList cEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceList (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterBitSliceList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_controlRegisterDeclarationList::current_mRegisterBitSliceListLocation (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterDeclarationList * p = (const cCollectionElement_controlRegisterDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterDeclarationList) ;
  return p->mObject.mProperty_mRegisterBitSliceListLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @controlRegisterDeclarationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterDeclarationList ("controlRegisterDeclarationList",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterDeclarationList result ;
  const GALGAS_controlRegisterDeclarationList * p = (const GALGAS_controlRegisterDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@controlRegisterBitSliceList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controlRegisterBitSliceList : public cCollectionElement {
  public : GALGAS_controlRegisterBitSliceList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterBitSlice) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterBitSliceList::cCollectionElement_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterBitSlice) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controlRegisterBitSliceList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controlRegisterBitSliceList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterBitSliceList (mObject.mProperty_mRegisterBitSlice COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controlRegisterBitSliceList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitSlice" ":" ;
  mObject.mProperty_mRegisterBitSlice.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controlRegisterBitSliceList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterBitSliceList * operand = (cCollectionElement_controlRegisterBitSliceList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterBitSliceList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList::GALGAS_controlRegisterBitSliceList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterBitSliceList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::constructor_listWithValue (const GALGAS_controlRegisterBitSlice & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterBitSliceList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_controlRegisterBitSlice & in_mRegisterBitSlice
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterBitSliceList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (in_mRegisterBitSlice COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::addAssign_operation (const GALGAS_controlRegisterBitSlice & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::setter_append (GALGAS_controlRegisterBitSliceList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::setter_insertAtIndex (const GALGAS_controlRegisterBitSlice inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterBitSliceList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::setter_removeAtIndex (GALGAS_controlRegisterBitSlice & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
      outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::setter_popFirst (GALGAS_controlRegisterBitSlice & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::setter_popLast (GALGAS_controlRegisterBitSlice & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::method_first (GALGAS_controlRegisterBitSlice & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::method_last (GALGAS_controlRegisterBitSlice & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    outOperand0 = p->mObject.mProperty_mRegisterBitSlice ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::add_operation (const GALGAS_controlRegisterBitSliceList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterBitSliceList result = GALGAS_controlRegisterBitSliceList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSliceList::plusAssign_operation (const GALGAS_controlRegisterBitSliceList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList::getter_mRegisterBitSliceAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterBitSliceList * p = (cCollectionElement_controlRegisterBitSliceList *) attributes.ptr () ;
  GALGAS_controlRegisterBitSlice result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
    result = p->mObject.mProperty_mRegisterBitSlice ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterBitSliceList::cEnumerator_controlRegisterBitSliceList (const GALGAS_controlRegisterBitSliceList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList_2D_element cEnumerator_controlRegisterBitSliceList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterBitSliceList * p = (const cCollectionElement_controlRegisterBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSlice cEnumerator_controlRegisterBitSliceList::current_mRegisterBitSlice (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterBitSliceList * p = (const cCollectionElement_controlRegisterBitSliceList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterBitSliceList) ;
  return p->mObject.mProperty_mRegisterBitSlice ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @controlRegisterBitSliceList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceList ("controlRegisterBitSliceList",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterBitSliceList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSliceList GALGAS_controlRegisterBitSliceList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList result ;
  const GALGAS_controlRegisterBitSliceList * p = (const GALGAS_controlRegisterBitSliceList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSliceList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_unusedBits::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_controlRegisterBitSlice_namedBit::cEnumAssociatedValues_controlRegisterBitSlice_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                const GALGAS_lbigint & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_controlRegisterBitSlice_namedBit::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_controlRegisterBitSlice_namedBit::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSlice::GALGAS_controlRegisterBitSlice (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_unusedBits (const GALGAS_lbigint & inAssociatedValue0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_unusedBits ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_unusedBits (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::constructor_namedBit (const GALGAS_lstring & inAssociatedValue0,
                                                                                     const GALGAS_lbigint & inAssociatedValue1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_namedBit ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterBitSlice_namedBit (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSlice::method_unusedBits (GALGAS_lbigint & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_unusedBits) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice unusedBits invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSlice::method_namedBit (GALGAS_lstring & outAssociatedValue0,
                                                      GALGAS_lbigint & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedBit) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @controlRegisterBitSlice namedBit invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * ptr = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_controlRegisterBitSlice [3] = {
  "(not built)",
  "unusedBits",
  "namedBit"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isUnusedBits (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unusedBits == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterBitSlice::getter_isNamedBit (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedBit == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterBitSlice::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterBitSlice: " << gEnumNameArrayFor_controlRegisterBitSlice [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterBitSlice::objectCompare (const GALGAS_controlRegisterBitSlice & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @controlRegisterBitSlice type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSlice ("controlRegisterBitSlice",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSlice::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSlice ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterBitSlice::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSlice (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSlice::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSlice result ;
  const GALGAS_controlRegisterBitSlice * p = (const GALGAS_controlRegisterBitSlice *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSlice *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSlice", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_controlRegisterGroupKindAST_single::cEnumAssociatedValues_controlRegisterGroupKindAST_single (const GALGAS_lbigint & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_controlRegisterGroupKindAST_single::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_controlRegisterGroupKindAST_single::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterGroupKindAST_single * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterGroupKindAST_single *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray::cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray (const GALGAS_lbigint & inAssociatedValue0,
                                                                                                                            const GALGAS_lbigintlist & inAssociatedValue1
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * ptr = dynamic_cast<const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST::GALGAS_controlRegisterGroupKindAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST GALGAS_controlRegisterGroupKindAST::constructor_single (const GALGAS_lbigint & inAssociatedValue0
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_single ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterGroupKindAST_single (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST GALGAS_controlRegisterGroupKindAST::constructor_groupArray (const GALGAS_lbigint & inAssociatedValue0,
                                                                                               const GALGAS_lbigintlist & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_groupArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupKindAST::method_single (GALGAS_lbigint & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_single) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @controlRegisterGroupKindAST single invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterGroupKindAST_single * ptr = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupKindAST::method_groupArray (GALGAS_lbigint & outAssociatedValue0,
                                                            GALGAS_lbigintlist & outAssociatedValue1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_groupArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @controlRegisterGroupKindAST groupArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * ptr = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_controlRegisterGroupKindAST [3] = {
  "(not built)",
  "single",
  "groupArray"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterGroupKindAST::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterGroupKindAST::getter_isGroupArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_groupArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupKindAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @controlRegisterGroupKindAST: " << gEnumNameArrayFor_controlRegisterGroupKindAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controlRegisterGroupKindAST::objectCompare (const GALGAS_controlRegisterGroupKindAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @controlRegisterGroupKindAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ("controlRegisterGroupKindAST",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupKindAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupKindAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupKindAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupKindAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST GALGAS_controlRegisterGroupKindAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupKindAST result ;
  const GALGAS_controlRegisterGroupKindAST * p = (const GALGAS_controlRegisterGroupKindAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupKindAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupKindAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Class for element of '@registerGroupListAST' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_registerGroupListAST : public cCollectionElement {
  public : GALGAS_registerGroupListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_registerGroupListAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                    const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_registerGroupListAST (const GALGAS_registerGroupListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                  const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRegisterGroupName, in_mControlRegisterGroupKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_registerGroupListAST::cCollectionElement_registerGroupListAST (const GALGAS_registerGroupListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRegisterGroupName, inElement.mProperty_mControlRegisterGroupKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_registerGroupListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_registerGroupListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_registerGroupListAST (mObject.mProperty_mRegisterGroupName, mObject.mProperty_mControlRegisterGroupKind COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_registerGroupListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterGroupName" ":" ;
  mObject.mProperty_mRegisterGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterGroupKind" ":" ;
  mObject.mProperty_mControlRegisterGroupKind.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_registerGroupListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_registerGroupListAST * operand = (cCollectionElement_registerGroupListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_registerGroupListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST::GALGAS_registerGroupListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST::GALGAS_registerGroupListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_registerGroupListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_controlRegisterGroupKindAST & inOperand1
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_registerGroupListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_registerGroupListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mRegisterGroupName,
                                                             const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_registerGroupListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_registerGroupListAST (in_mRegisterGroupName,
                                                          in_mControlRegisterGroupKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_controlRegisterGroupKindAST & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::setter_append (GALGAS_registerGroupListAST_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_controlRegisterGroupKindAST inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_registerGroupListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
      outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
      outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_controlRegisterGroupKindAST & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_controlRegisterGroupKindAST & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    outOperand0 = p->mObject.mProperty_mRegisterGroupName ;
    outOperand1 = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::add_operation (const GALGAS_registerGroupListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result = GALGAS_registerGroupListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupListAST::plusAssign_operation (const GALGAS_registerGroupListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_registerGroupListAST::getter_mRegisterGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    result = p->mObject.mProperty_mRegisterGroupName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST GALGAS_registerGroupListAST::getter_mControlRegisterGroupKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_registerGroupListAST * p = (cCollectionElement_registerGroupListAST *) attributes.ptr () ;
  GALGAS_controlRegisterGroupKindAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
    result = p->mObject.mProperty_mControlRegisterGroupKind ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_registerGroupListAST::cEnumerator_registerGroupListAST (const GALGAS_registerGroupListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST_2D_element cEnumerator_registerGroupListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_registerGroupListAST::current_mRegisterGroupName (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject.mProperty_mRegisterGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupKindAST cEnumerator_registerGroupListAST::current_mControlRegisterGroupKind (LOCATION_ARGS) const {
  const cCollectionElement_registerGroupListAST * p = (const cCollectionElement_registerGroupListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_registerGroupListAST) ;
  return p->mObject.mProperty_mControlRegisterGroupKind ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @registerGroupListAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupListAST ("registerGroupListAST",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerGroupListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerGroupListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_registerGroupListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST result ;
  const GALGAS_registerGroupListAST * p = (const GALGAS_registerGroupListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerGroupListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_controlRegisterGroupDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRegisterGroupList.objectCompare (p->mProperty_mRegisterGroupList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisters.objectCompare (p->mProperty_mRegisters) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_controlRegisterGroupDeclarationAST::objectCompare (const GALGAS_controlRegisterGroupDeclarationAST & inOperand) const {
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

GALGAS_controlRegisterGroupDeclarationAST::GALGAS_controlRegisterGroupDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupDeclarationAST::constructor_new (GALGAS_registerGroupListAST::constructor_emptyList (HERE),
                                                                     GALGAS_controlRegisterDeclarationList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupDeclarationAST::GALGAS_controlRegisterGroupDeclarationAST (const cPtr_controlRegisterGroupDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_controlRegisterGroupDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::constructor_new (const GALGAS_registerGroupListAST & inAttribute_mRegisterGroupList,
                                                                                                      const GALGAS_controlRegisterDeclarationList & inAttribute_mRegisters
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  if (inAttribute_mRegisterGroupList.isValid () && inAttribute_mRegisters.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_controlRegisterGroupDeclarationAST (inAttribute_mRegisterGroupList, inAttribute_mRegisters COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST GALGAS_controlRegisterGroupDeclarationAST::getter_mRegisterGroupList (UNUSED_LOCATION_ARGS) const {
  GALGAS_registerGroupListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    result = p->mProperty_mRegisterGroupList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupListAST cPtr_controlRegisterGroupDeclarationAST::getter_mRegisterGroupList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisterGroupList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList GALGAS_controlRegisterGroupDeclarationAST::getter_mRegisters (UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_controlRegisterGroupDeclarationAST * p = (const cPtr_controlRegisterGroupDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_controlRegisterGroupDeclarationAST) ;
    result = p->mProperty_mRegisters ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterDeclarationList cPtr_controlRegisterGroupDeclarationAST::getter_mRegisters (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegisters ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @controlRegisterGroupDeclarationAST class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_controlRegisterGroupDeclarationAST::cPtr_controlRegisterGroupDeclarationAST (const GALGAS_registerGroupListAST & in_mRegisterGroupList,
                                                                                  const GALGAS_controlRegisterDeclarationList & in_mRegisters
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mRegisterGroupList (in_mRegisterGroupList),
mProperty_mRegisters (in_mRegisters) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_controlRegisterGroupDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

void cPtr_controlRegisterGroupDeclarationAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@controlRegisterGroupDeclarationAST:" ;
  mProperty_mRegisterGroupList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegisters.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_controlRegisterGroupDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_controlRegisterGroupDeclarationAST (mProperty_mRegisterGroupList, mProperty_mRegisters COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @controlRegisterGroupDeclarationAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ("controlRegisterGroupDeclarationAST",
                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupDeclarationAST GALGAS_controlRegisterGroupDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupDeclarationAST result ;
  const GALGAS_controlRegisterGroupDeclarationAST * p = (const GALGAS_controlRegisterGroupDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterUserAccesMapAST::cMapElement_controlRegisterUserAccesMapAST (const GALGAS_lstring & inKey
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_controlRegisterUserAccesMapAST::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_controlRegisterUserAccesMapAST::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterUserAccesMapAST (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_controlRegisterUserAccesMapAST::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_controlRegisterUserAccesMapAST::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterUserAccesMapAST * operand = (cMapElement_controlRegisterUserAccesMapAST *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST::GALGAS_controlRegisterUserAccesMapAST (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST::GALGAS_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST & GALGAS_controlRegisterUserAccesMapAST::operator = (const GALGAS_controlRegisterUserAccesMapAST & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::constructor_mapWithMapToOverride (const GALGAS_controlRegisterUserAccesMapAST & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterUserAccesMapAST result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterUserAccesMapAST::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterUserAccesMapAST insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterUserAccesMapAST::setter_insertKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterUserAccesMapAST (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' register is already marked as @user in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterUserAccesMapAST::setter_removeKey (GALGAS_lstring inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "-- INTERNAL ERROR ('%K') --" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_controlRegisterUserAccesMapAST * p = (cMapElement_controlRegisterUserAccesMapAST *) attributes.ptr () ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterUserAccesMapAST * GALGAS_controlRegisterUserAccesMapAST::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterUserAccesMapAST * result = (cMapElement_controlRegisterUserAccesMapAST *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterUserAccesMapAST) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterUserAccesMapAST::cEnumerator_controlRegisterUserAccesMapAST (const GALGAS_controlRegisterUserAccesMapAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST_2D_element cEnumerator_controlRegisterUserAccesMapAST::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterUserAccesMapAST * p = (const cMapElement_controlRegisterUserAccesMapAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterUserAccesMapAST) ;
  return GALGAS_controlRegisterUserAccesMapAST_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterUserAccesMapAST::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @controlRegisterUserAccesMapAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ("controlRegisterUserAccesMapAST",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterUserAccesMapAST GALGAS_controlRegisterUserAccesMapAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST result ;
  const GALGAS_controlRegisterUserAccesMapAST * p = (const GALGAS_controlRegisterUserAccesMapAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@controlRegisterFieldList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controlRegisterFieldList : public cCollectionElement {
  public : GALGAS_controlRegisterFieldList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                        const GALGAS_string & in_mFieldName
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterFieldList (const GALGAS_controlRegisterFieldList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_uint & in_mFieldBitCount,
                                                                                          const GALGAS_string & in_mFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFieldBitCount, in_mFieldName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterFieldList::cCollectionElement_controlRegisterFieldList (const GALGAS_controlRegisterFieldList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFieldBitCount, inElement.mProperty_mFieldName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controlRegisterFieldList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controlRegisterFieldList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterFieldList (mObject.mProperty_mFieldBitCount, mObject.mProperty_mFieldName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controlRegisterFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldBitCount" ":" ;
  mObject.mProperty_mFieldBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldName" ":" ;
  mObject.mProperty_mFieldName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controlRegisterFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterFieldList * operand = (cCollectionElement_controlRegisterFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList::GALGAS_controlRegisterFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_uint & in_mFieldBitCount,
                                                                 const GALGAS_string & in_mFieldName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterFieldList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterFieldList (in_mFieldBitCount,
                                                              in_mFieldName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::addAssign_operation (const GALGAS_uint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::setter_append (GALGAS_controlRegisterFieldList_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                            const GALGAS_string inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
      outOperand0 = p->mObject.mProperty_mFieldBitCount ;
      outOperand1 = p->mObject.mProperty_mFieldName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::setter_popFirst (GALGAS_uint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::setter_popLast (GALGAS_uint & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::method_first (GALGAS_uint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::method_last (GALGAS_uint & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    outOperand0 = p->mObject.mProperty_mFieldBitCount ;
    outOperand1 = p->mObject.mProperty_mFieldName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::add_operation (const GALGAS_controlRegisterFieldList & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldList result = GALGAS_controlRegisterFieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldList::plusAssign_operation (const GALGAS_controlRegisterFieldList inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterFieldList::getter_mFieldBitCountAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_controlRegisterFieldList::getter_mFieldNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterFieldList * p = (cCollectionElement_controlRegisterFieldList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
    result = p->mObject.mProperty_mFieldName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterFieldList::cEnumerator_controlRegisterFieldList (const GALGAS_controlRegisterFieldList & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList_2D_element cEnumerator_controlRegisterFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_controlRegisterFieldList::current_mFieldBitCount (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_controlRegisterFieldList::current_mFieldName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterFieldList * p = (const cCollectionElement_controlRegisterFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterFieldList) ;
  return p->mObject.mProperty_mFieldName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @controlRegisterFieldList type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldList ("controlRegisterFieldList",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterFieldList::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldList result ;
  const GALGAS_controlRegisterFieldList * p = (const GALGAS_controlRegisterFieldList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterFieldMap::cMapElement_controlRegisterFieldMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mBitIndex,
                                                                          const GALGAS_uint & in_mBitCount
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBitIndex (in_mBitIndex),
mProperty_mBitCount (in_mBitCount) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_controlRegisterFieldMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_controlRegisterFieldMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterFieldMap (mProperty_lkey, mProperty_mBitIndex, mProperty_mBitCount COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_controlRegisterFieldMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_controlRegisterFieldMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterFieldMap * operand = (cMapElement_controlRegisterFieldMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitIndex.objectCompare (operand->mProperty_mBitIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap::GALGAS_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap & GALGAS_controlRegisterFieldMap::operator = (const GALGAS_controlRegisterFieldMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterFieldMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterFieldMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          const GALGAS_uint & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterFieldMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       GALGAS_uint inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterFieldMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_controlRegisterFieldMap_searchKey = "the '%K' slice is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       GALGAS_uint & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterFieldMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    outArgument0 = p->mProperty_mBitIndex ;
    outArgument1 = p->mProperty_mBitCount ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitIndexForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitIndex ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterFieldMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap::setter_setMBitIndexForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitIndex = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterFieldMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterFieldMap * p = (cMapElement_controlRegisterFieldMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterFieldMap * GALGAS_controlRegisterFieldMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterFieldMap * result = (cMapElement_controlRegisterFieldMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterFieldMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterFieldMap::cEnumerator_controlRegisterFieldMap (const GALGAS_controlRegisterFieldMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap_2D_element cEnumerator_controlRegisterFieldMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return GALGAS_controlRegisterFieldMap_2D_element (p->mProperty_lkey, p->mProperty_mBitIndex, p->mProperty_mBitCount) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterFieldMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitIndex (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitIndex ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_controlRegisterFieldMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterFieldMap * p = (const cMapElement_controlRegisterFieldMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterFieldMap) ;
  return p->mProperty_mBitCount ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @controlRegisterFieldMap type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap ("controlRegisterFieldMap",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterFieldMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap result ;
  const GALGAS_controlRegisterFieldMap * p = (const GALGAS_controlRegisterFieldMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_sliceMap::cMapElement_sliceMap (const GALGAS_lstring & inKey,
                                            const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                            const GALGAS_bigint & in_mAccessRightOperand,
                                            const GALGAS_PLMType & in_mResultType
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAccessOperator (in_mAccessOperator),
mProperty_mAccessRightOperand (in_mAccessRightOperand),
mProperty_mResultType (in_mResultType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_sliceMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_sliceMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_sliceMap (mProperty_lkey, mProperty_mAccessOperator, mProperty_mAccessRightOperand, mProperty_mResultType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_sliceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessOperator" ":" ;
  mProperty_mAccessOperator.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAccessRightOperand" ":" ;
  mProperty_mAccessRightOperand.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResultType" ":" ;
  mProperty_mResultType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_sliceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_sliceMap * operand = (cMapElement_sliceMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mAccessOperator.objectCompare (operand->mProperty_mAccessOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAccessRightOperand.objectCompare (operand->mProperty_mAccessRightOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (operand->mProperty_mResultType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap::GALGAS_sliceMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap::GALGAS_sliceMap (const GALGAS_sliceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap & GALGAS_sliceMap::operator = (const GALGAS_sliceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap GALGAS_sliceMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap GALGAS_sliceMap::constructor_mapWithMapToOverride (const GALGAS_sliceMap & inMapToOverride
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap GALGAS_sliceMap::getter_overriddenMap (C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_sliceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_llvmBinaryOperation & inArgument0,
                                           const GALGAS_bigint & inArgument1,
                                           const GALGAS_PLMType & inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = NULL ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@sliceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation inArgument0,
                                        GALGAS_bigint inArgument1,
                                        GALGAS_PLMType inArgument2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * p = NULL ;
  macroMyNew (p, cMapElement_sliceMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' slice has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_sliceMap_searchKey = "the '%K' slice is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_llvmBinaryOperation & outArgument0,
                                        GALGAS_bigint & outArgument1,
                                        GALGAS_PLMType & outArgument2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_sliceMap_searchKey
                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    outArgument0 = p->mProperty_mAccessOperator ;
    outArgument1 = p->mProperty_mAccessRightOperand ;
    outArgument2 = p->mProperty_mResultType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_sliceMap::getter_mAccessOperatorForKey (const GALGAS_string & inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_llvmBinaryOperation result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_sliceMap::getter_mAccessRightOperandForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mAccessRightOperand ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_sliceMap::getter_mResultTypeForKey (const GALGAS_string & inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    result = p->mProperty_mResultType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap::setter_setMAccessOperatorForKey (GALGAS_llvmBinaryOperation inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessOperator = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap::setter_setMAccessRightOperandForKey (GALGAS_bigint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mAccessRightOperand = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_sliceMap::setter_setMResultTypeForKey (GALGAS_PLMType inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_sliceMap * p = (cMapElement_sliceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_sliceMap) ;
    p->mProperty_mResultType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_sliceMap * GALGAS_sliceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_sliceMap * result = (cMapElement_sliceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_sliceMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_sliceMap::cEnumerator_sliceMap (const GALGAS_sliceMap & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap_2D_element cEnumerator_sliceMap::current (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return GALGAS_sliceMap_2D_element (p->mProperty_lkey, p->mProperty_mAccessOperator, p->mProperty_mAccessRightOperand, p->mProperty_mResultType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_sliceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation cEnumerator_sliceMap::current_mAccessOperator (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_sliceMap::current_mAccessRightOperand (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mAccessRightOperand ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_sliceMap::current_mResultType (LOCATION_ARGS) const {
  const cMapElement_sliceMap * p = (const cMapElement_sliceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_sliceMap) ;
  return p->mProperty_mResultType ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @sliceMap type                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap ("sliceMap",
                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_sliceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_sliceMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap GALGAS_sliceMap::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap result ;
  const GALGAS_sliceMap * p = (const GALGAS_sliceMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation::GALGAS_llvmBinaryOperation (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_addNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_addNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_subNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_subNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_mulNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_mulNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremNoOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremNoOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uaddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uaddOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_saddOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_saddOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_usubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_usubOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ssubOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ssubOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_umulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_umulOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_smulOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_smulOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_udivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_udivOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sdivOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sdivOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_uremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_uremOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_sremOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_sremOVF ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_and (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_and ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ior (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ior ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_xor ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_shl (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_shl ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_ashr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_ashr ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_lshr (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_lshr ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_eq ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ne ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ult ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ule ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_ugt ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_uge ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_slt ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sle ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sgt ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_llvmBinaryOperation GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (UNUSED_LOCATION_ARGS) {
  GALGAS_llvmBinaryOperation result ;
  result.mEnum = kEnum_icmp_5F_sge ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAddNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSubNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isMulNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mulNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremNoOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremNoOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uaddOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSaddOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_saddOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_usubOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSsubOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ssubOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_umulOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSmulOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_smulOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_udivOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSdivOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sdivOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isUremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_uremOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isSremOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sremOVF == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAnd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_and == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ior == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isXor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_xor == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isShl (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_shl == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isAshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ashr == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isLshr (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lshr == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_eq (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_eq == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ne == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ult (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ult == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ule (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ule == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_ugt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_ugt == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_uge (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_uge == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_slt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_slt == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sle == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sgt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sgt == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_llvmBinaryOperation::getter_isIcmp_5F_sge (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_icmp_5F_sge == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_llvmBinaryOperation::description (C_String & ioString,
                                              const int32_t /* inIndentation */) const {
  ioString << "<enum @llvmBinaryOperation: " << gEnumNameArrayFor_llvmBinaryOperation [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @llvmBinaryOperation type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_llvmBinaryOperation ("llvmBinaryOperation",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_llvmBinaryOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmBinaryOperation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_llvmBinaryOperation::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmBinaryOperation (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@controlRegisterGroupDeclarationAST noteTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph> gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_noteTypesInPrecedenceGraph (const int32_t inClassIndex,
                                                      extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph inMethod) {
  gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_noteTypesInPrecedenceGraph (const cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                     GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_controlRegisterGroupDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.count ()) {
           f = gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (const cPtr_controlRegisterGroupDeclarationAST * inObject,
                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  cEnumerator_controlRegisterDeclarationList enumerator_9590 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_9590.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_9590.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 257)) ;
    }
    enumerator_9590.gotoNextObject () ;
  }
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                   extensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (void) {
  gExtensionMethodTable_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph,
                                                                                          freeExtensionMethod_controlRegisterGroupDeclarationAST_noteTypesInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterMap::cMapElement_controlRegisterMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_PLMType & in_mType,
                                                                const GALGAS_bool & in_mIsReadOnly,
                                                                const GALGAS_bool & in_mUserAccess,
                                                                const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                const GALGAS_bigint & in_mAddressOffset,
                                                                const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                const GALGAS_uint & in_mRegisterBitCount,
                                                                const GALGAS_uint & in_mArraySize,
                                                                const GALGAS_uint & in_mElementArraySize
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mIsReadOnly (in_mIsReadOnly),
mProperty_mUserAccess (in_mUserAccess),
mProperty_mRegisterFieldAccessMap (in_mRegisterFieldAccessMap),
mProperty_mRegisterFieldMap (in_mRegisterFieldMap),
mProperty_mAddressOffset (in_mAddressOffset),
mProperty_mControlRegisterFieldList (in_mControlRegisterFieldList),
mProperty_mRegisterBitCount (in_mRegisterBitCount),
mProperty_mArraySize (in_mArraySize),
mProperty_mElementArraySize (in_mElementArraySize) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_controlRegisterMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_controlRegisterMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterMap (mProperty_lkey, mProperty_mType, mProperty_mIsReadOnly, mProperty_mUserAccess, mProperty_mRegisterFieldAccessMap, mProperty_mRegisterFieldMap, mProperty_mAddressOffset, mProperty_mControlRegisterFieldList, mProperty_mRegisterBitCount, mProperty_mArraySize, mProperty_mElementArraySize COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_controlRegisterMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsReadOnly" ":" ;
  mProperty_mIsReadOnly.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mUserAccess" ":" ;
  mProperty_mUserAccess.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldAccessMap" ":" ;
  mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterFieldMap" ":" ;
  mProperty_mRegisterFieldMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddressOffset" ":" ;
  mProperty_mAddressOffset.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterFieldList" ":" ;
  mProperty_mControlRegisterFieldList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegisterBitCount" ":" ;
  mProperty_mRegisterBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArraySize" ":" ;
  mProperty_mArraySize.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementArraySize" ":" ;
  mProperty_mElementArraySize.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_controlRegisterMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterMap * operand = (cMapElement_controlRegisterMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReadOnly.objectCompare (operand->mProperty_mIsReadOnly) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserAccess.objectCompare (operand->mProperty_mUserAccess) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (operand->mProperty_mRegisterFieldAccessMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterFieldMap.objectCompare (operand->mProperty_mRegisterFieldMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddressOffset.objectCompare (operand->mProperty_mAddressOffset) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterFieldList.objectCompare (operand->mProperty_mControlRegisterFieldList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterBitCount.objectCompare (operand->mProperty_mRegisterBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (operand->mProperty_mArraySize) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementArraySize.objectCompare (operand->mProperty_mElementArraySize) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap::GALGAS_controlRegisterMap (const GALGAS_controlRegisterMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap & GALGAS_controlRegisterMap::operator = (const GALGAS_controlRegisterMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_PLMType & inArgument0,
                                                     const GALGAS_bool & inArgument1,
                                                     const GALGAS_bool & inArgument2,
                                                     const GALGAS_sliceMap & inArgument3,
                                                     const GALGAS_controlRegisterFieldMap & inArgument4,
                                                     const GALGAS_bigint & inArgument5,
                                                     const GALGAS_controlRegisterFieldList & inArgument6,
                                                     const GALGAS_uint & inArgument7,
                                                     const GALGAS_uint & inArgument8,
                                                     const GALGAS_uint & inArgument9,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_PLMType inArgument0,
                                                  GALGAS_bool inArgument1,
                                                  GALGAS_bool inArgument2,
                                                  GALGAS_sliceMap inArgument3,
                                                  GALGAS_controlRegisterFieldMap inArgument4,
                                                  GALGAS_bigint inArgument5,
                                                  GALGAS_controlRegisterFieldList inArgument6,
                                                  GALGAS_uint inArgument7,
                                                  GALGAS_uint inArgument8,
                                                  GALGAS_uint inArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8, inArgument9 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_controlRegisterMap_searchKey = "the '%K' control register is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_PLMType & outArgument0,
                                                  GALGAS_bool & outArgument1,
                                                  GALGAS_bool & outArgument2,
                                                  GALGAS_sliceMap & outArgument3,
                                                  GALGAS_controlRegisterFieldMap & outArgument4,
                                                  GALGAS_bigint & outArgument5,
                                                  GALGAS_controlRegisterFieldList & outArgument6,
                                                  GALGAS_uint & outArgument7,
                                                  GALGAS_uint & outArgument8,
                                                  GALGAS_uint & outArgument9,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_controlRegisterMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
    outArgument9.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mIsReadOnly ;
    outArgument2 = p->mProperty_mUserAccess ;
    outArgument3 = p->mProperty_mRegisterFieldAccessMap ;
    outArgument4 = p->mProperty_mRegisterFieldMap ;
    outArgument5 = p->mProperty_mAddressOffset ;
    outArgument6 = p->mProperty_mControlRegisterFieldList ;
    outArgument7 = p->mProperty_mRegisterBitCount ;
    outArgument8 = p->mProperty_mArraySize ;
    outArgument9 = p->mProperty_mElementArraySize ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_controlRegisterMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterMap::getter_mIsReadOnlyForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mIsReadOnly ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_controlRegisterMap::getter_mUserAccessForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mUserAccess ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap GALGAS_controlRegisterMap::getter_mRegisterFieldAccessMapForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_sliceMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldAccessMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap::getter_mRegisterFieldMapForKey (const GALGAS_string & inKey,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterFieldMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint GALGAS_controlRegisterMap::getter_mAddressOffsetForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_bigint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mAddressOffset ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap::getter_mControlRegisterFieldListForKey (const GALGAS_string & inKey,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_controlRegisterFieldList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mControlRegisterFieldList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterMap::getter_mRegisterBitCountForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mRegisterBitCount ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterMap::getter_mArraySizeForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mArraySize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_controlRegisterMap::getter_mElementArraySizeForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    result = p->mProperty_mElementArraySize ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMTypeForKey (GALGAS_PLMType inAttributeValue,
                                                       GALGAS_string inKey,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMIsReadOnlyForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mIsReadOnly = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMUserAccessForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mUserAccess = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMRegisterFieldAccessMapForKey (GALGAS_sliceMap inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldAccessMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMRegisterFieldMapForKey (GALGAS_controlRegisterFieldMap inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterFieldMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMAddressOffsetForKey (GALGAS_bigint inAttributeValue,
                                                                GALGAS_string inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mAddressOffset = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMControlRegisterFieldListForKey (GALGAS_controlRegisterFieldList inAttributeValue,
                                                                           GALGAS_string inKey,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mControlRegisterFieldList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMRegisterBitCountForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mRegisterBitCount = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMArraySizeForKey (GALGAS_uint inAttributeValue,
                                                            GALGAS_string inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mArraySize = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterMap::setter_setMElementArraySizeForKey (GALGAS_uint inAttributeValue,
                                                                   GALGAS_string inKey,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterMap * p = (cMapElement_controlRegisterMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
    p->mProperty_mElementArraySize = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterMap * GALGAS_controlRegisterMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterMap * result = (cMapElement_controlRegisterMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterMap::cEnumerator_controlRegisterMap (const GALGAS_controlRegisterMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap_2D_element cEnumerator_controlRegisterMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return GALGAS_controlRegisterMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mIsReadOnly, p->mProperty_mUserAccess, p->mProperty_mRegisterFieldAccessMap, p->mProperty_mRegisterFieldMap, p->mProperty_mAddressOffset, p->mProperty_mControlRegisterFieldList, p->mProperty_mRegisterBitCount, p->mProperty_mArraySize, p->mProperty_mElementArraySize) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_controlRegisterMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_controlRegisterMap::current_mIsReadOnly (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mIsReadOnly ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_controlRegisterMap::current_mUserAccess (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mUserAccess ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_sliceMap cEnumerator_controlRegisterMap::current_mRegisterFieldAccessMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldAccessMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldMap cEnumerator_controlRegisterMap::current_mRegisterFieldMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterFieldMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_controlRegisterMap::current_mAddressOffset (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mAddressOffset ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterFieldList cEnumerator_controlRegisterMap::current_mControlRegisterFieldList (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mControlRegisterFieldList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_controlRegisterMap::current_mRegisterBitCount (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mRegisterBitCount ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_controlRegisterMap::current_mArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mArraySize ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cEnumerator_controlRegisterMap::current_mElementArraySize (LOCATION_ARGS) const {
  const cMapElement_controlRegisterMap * p = (const cMapElement_controlRegisterMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterMap) ;
  return p->mProperty_mElementArraySize ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @controlRegisterMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap ("controlRegisterMap",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap GALGAS_controlRegisterMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap result ;
  const GALGAS_controlRegisterMap * p = (const GALGAS_controlRegisterMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_registerGroupKind_single::cEnumAssociatedValues_registerGroupKind_single (const GALGAS_bigint & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_registerGroupKind_single::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_registerGroupKind_single::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupKind_single * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupKind_single *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_registerGroupKind_arrayGroup::cEnumAssociatedValues_registerGroupKind_arrayGroup (const GALGAS_lbigintlist & inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_registerGroupKind_arrayGroup::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_registerGroupKind_arrayGroup::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_registerGroupKind_arrayGroup * ptr = dynamic_cast<const cEnumAssociatedValues_registerGroupKind_arrayGroup *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind::GALGAS_registerGroupKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind GALGAS_registerGroupKind::constructor_single (const GALGAS_bigint & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_single ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupKind_single (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind GALGAS_registerGroupKind::constructor_arrayGroup (const GALGAS_lbigintlist & inAssociatedValue0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_arrayGroup ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_registerGroupKind_arrayGroup (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupKind::method_single (GALGAS_bigint & outAssociatedValue0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_single) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerGroupKind single invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupKind_single * ptr = (const cEnumAssociatedValues_registerGroupKind_single *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupKind::method_arrayGroup (GALGAS_lbigintlist & outAssociatedValue0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayGroup) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @registerGroupKind arrayGroup invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_registerGroupKind_arrayGroup * ptr = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_registerGroupKind [3] = {
  "(not built)",
  "single",
  "arrayGroup"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_registerGroupKind::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_registerGroupKind::getter_isArrayGroup (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayGroup == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_registerGroupKind::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @registerGroupKind: " << gEnumNameArrayFor_registerGroupKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_registerGroupKind::objectCompare (const GALGAS_registerGroupKind & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @registerGroupKind type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerGroupKind ("registerGroupKind",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_registerGroupKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_registerGroupKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind GALGAS_registerGroupKind::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupKind result ;
  const GALGAS_registerGroupKind * p = (const GALGAS_registerGroupKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerGroupKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterGroupMap::cMapElement_controlRegisterGroupMap (const GALGAS_lstring & inKey,
                                                                          const GALGAS_registerGroupKind & in_mGroupKind,
                                                                          const GALGAS_controlRegisterMap & in_mControlRegisterMap
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mGroupKind (in_mGroupKind),
mProperty_mControlRegisterMap (in_mControlRegisterMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_controlRegisterGroupMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_controlRegisterGroupMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_controlRegisterGroupMap (mProperty_lkey, mProperty_mGroupKind, mProperty_mControlRegisterMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_controlRegisterGroupMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupKind" ":" ;
  mProperty_mGroupKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControlRegisterMap" ":" ;
  mProperty_mControlRegisterMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_controlRegisterGroupMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_controlRegisterGroupMap * operand = (cMapElement_controlRegisterGroupMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mGroupKind.objectCompare (operand->mProperty_mGroupKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControlRegisterMap.objectCompare (operand->mProperty_mControlRegisterMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap::GALGAS_controlRegisterGroupMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap::GALGAS_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap & GALGAS_controlRegisterGroupMap::operator = (const GALGAS_controlRegisterGroupMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::constructor_mapWithMapToOverride (const GALGAS_controlRegisterGroupMap & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_registerGroupKind & inArgument0,
                                                          const GALGAS_controlRegisterMap & inArgument1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@controlRegisterGroupMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_registerGroupKind inArgument0,
                                                       GALGAS_controlRegisterMap inArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * p = NULL ;
  macroMyNew (p, cMapElement_controlRegisterGroupMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' control register group has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_controlRegisterGroupMap_searchKey = "** internal error **" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_registerGroupKind & outArgument0,
                                                       GALGAS_controlRegisterMap & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_controlRegisterGroupMap_searchKey
                                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    outArgument0 = p->mProperty_mGroupKind ;
    outArgument1 = p->mProperty_mControlRegisterMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind GALGAS_controlRegisterGroupMap::getter_mGroupKindForKey (const GALGAS_string & inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GALGAS_registerGroupKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mGroupKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap GALGAS_controlRegisterGroupMap::getter_mControlRegisterMapForKey (const GALGAS_string & inKey,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) attributes ;
  GALGAS_controlRegisterMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    result = p->mProperty_mControlRegisterMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap::setter_setMGroupKindForKey (GALGAS_registerGroupKind inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mGroupKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupMap::setter_setMControlRegisterMapForKey (GALGAS_controlRegisterMap inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_controlRegisterGroupMap * p = (cMapElement_controlRegisterGroupMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
    p->mProperty_mControlRegisterMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_controlRegisterGroupMap * GALGAS_controlRegisterGroupMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_controlRegisterGroupMap * result = (cMapElement_controlRegisterGroupMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_controlRegisterGroupMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterGroupMap::cEnumerator_controlRegisterGroupMap (const GALGAS_controlRegisterGroupMap & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap_2D_element cEnumerator_controlRegisterGroupMap::current (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return GALGAS_controlRegisterGroupMap_2D_element (p->mProperty_lkey, p->mProperty_mGroupKind, p->mProperty_mControlRegisterMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterGroupMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_registerGroupKind cEnumerator_controlRegisterGroupMap::current_mGroupKind (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mGroupKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterMap cEnumerator_controlRegisterGroupMap::current_mControlRegisterMap (LOCATION_ARGS) const {
  const cMapElement_controlRegisterGroupMap * p = (const cMapElement_controlRegisterGroupMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_controlRegisterGroupMap) ;
  return p->mProperty_mControlRegisterMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @controlRegisterGroupMap type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupMap ("controlRegisterGroupMap",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupMap GALGAS_controlRegisterGroupMap::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap result ;
  const GALGAS_controlRegisterGroupMap * p = (const GALGAS_controlRegisterGroupMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@controlRegisterGroupArrayList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controlRegisterGroupArrayList : public cCollectionElement {
  public : GALGAS_controlRegisterGroupArrayList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controlRegisterGroupArrayList (const GALGAS_lstring & in_mGroupName,
                                                             const GALGAS_lbigintlist & in_mBaseAddresses
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GALGAS_lstring & in_mGroupName,
                                                                                                    const GALGAS_lbigintlist & in_mBaseAddresses
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupName, in_mBaseAddresses) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controlRegisterGroupArrayList::cCollectionElement_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupName, inElement.mProperty_mBaseAddresses) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controlRegisterGroupArrayList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controlRegisterGroupArrayList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controlRegisterGroupArrayList (mObject.mProperty_mGroupName, mObject.mProperty_mBaseAddresses COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controlRegisterGroupArrayList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBaseAddresses" ":" ;
  mObject.mProperty_mBaseAddresses.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controlRegisterGroupArrayList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controlRegisterGroupArrayList * operand = (cCollectionElement_controlRegisterGroupArrayList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controlRegisterGroupArrayList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList::GALGAS_controlRegisterGroupArrayList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList::GALGAS_controlRegisterGroupArrayList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterGroupArrayList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lbigintlist & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controlRegisterGroupArrayList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controlRegisterGroupArrayList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mGroupName,
                                                                      const GALGAS_lbigintlist & in_mBaseAddresses
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_controlRegisterGroupArrayList * p = NULL ;
  macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (in_mGroupName,
                                                                   in_mBaseAddresses COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lbigintlist & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::setter_append (GALGAS_controlRegisterGroupArrayList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lbigintlist inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controlRegisterGroupArrayList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lbigintlist & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
      outOperand0 = p->mObject.mProperty_mGroupName ;
      outOperand1 = p->mObject.mProperty_mBaseAddresses ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lbigintlist & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lbigintlist & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lbigintlist & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lbigintlist & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    outOperand0 = p->mObject.mProperty_mGroupName ;
    outOperand1 = p->mObject.mProperty_mBaseAddresses ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::add_operation (const GALGAS_controlRegisterGroupArrayList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controlRegisterGroupArrayList result = GALGAS_controlRegisterGroupArrayList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterGroupArrayList::plusAssign_operation (const GALGAS_controlRegisterGroupArrayList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controlRegisterGroupArrayList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigintlist GALGAS_controlRegisterGroupArrayList::getter_mBaseAddressesAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controlRegisterGroupArrayList * p = (cCollectionElement_controlRegisterGroupArrayList *) attributes.ptr () ;
  GALGAS_lbigintlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
    result = p->mObject.mProperty_mBaseAddresses ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterGroupArrayList::cEnumerator_controlRegisterGroupArrayList (const GALGAS_controlRegisterGroupArrayList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList_2D_element cEnumerator_controlRegisterGroupArrayList::current (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controlRegisterGroupArrayList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject.mProperty_mGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbigintlist cEnumerator_controlRegisterGroupArrayList::current_mBaseAddresses (LOCATION_ARGS) const {
  const cCollectionElement_controlRegisterGroupArrayList * p = (const cCollectionElement_controlRegisterGroupArrayList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controlRegisterGroupArrayList) ;
  return p->mObject.mProperty_mBaseAddresses ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @controlRegisterGroupArrayList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ("controlRegisterGroupArrayList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterGroupArrayList GALGAS_controlRegisterGroupArrayList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList result ;
  const GALGAS_controlRegisterGroupArrayList * p = (const GALGAS_controlRegisterGroupArrayList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterGroupArrayList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@controlRegisterByAddress' sorted list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_controlRegisterByAddress : public cSortedListElement {
  public : GALGAS_controlRegisterByAddress_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_controlRegisterByAddress (const GALGAS_bigint & in_mAddress,
                                                        const GALGAS_string & in_mHTML
                                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement_controlRegisterByAddress::cSortedListElement_controlRegisterByAddress (const GALGAS_bigint & in_mAddress,
                                                                                          const GALGAS_string & in_mHTML
                                                                                          COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_controlRegisterByAddress::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_controlRegisterByAddress::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_controlRegisterByAddress (mObject.mProperty_mAddress, mObject.mProperty_mHTML COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_controlRegisterByAddress::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHTML" ":" ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_controlRegisterByAddress::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByAddress * operand = (cSortedListElement_controlRegisterByAddress *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByAddress) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByAddress::GALGAS_controlRegisterByAddress (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_controlRegisterByAddress::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_controlRegisterByAddress * operand = (const cSortedListElement_controlRegisterByAddress *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByAddress) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mAddress.objectCompare (operand->mObject.mProperty_mAddress) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::constructor_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                                  const GALGAS_string & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByAddress::addAssign_operation (const GALGAS_bigint & inOperand0,
                                                           const GALGAS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_controlRegisterByAddress (inOperand0, inOperand1 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByAddress::plusAssign_operation (const GALGAS_controlRegisterByAddress inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByAddress::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByAddress::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByAddress::method_smallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByAddress::method_greatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByAddress * p = (cSortedListElement_controlRegisterByAddress *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterByAddress::cEnumerator_controlRegisterByAddress (const GALGAS_controlRegisterByAddress & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByAddress_2D_element cEnumerator_controlRegisterByAddress::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_controlRegisterByAddress::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject.mProperty_mAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_controlRegisterByAddress::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByAddress * p = (const cSortedListElement_controlRegisterByAddress *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByAddress) ;
  return p->mObject.mProperty_mHTML ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @controlRegisterByAddress type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterByAddress ("controlRegisterByAddress",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterByAddress::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterByAddress::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByAddress (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByAddress GALGAS_controlRegisterByAddress::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByAddress result ;
  const GALGAS_controlRegisterByAddress * p = (const GALGAS_controlRegisterByAddress *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterByAddress *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByAddress", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@controlRegisterByName' sorted list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cSortedListElement_controlRegisterByName : public cSortedListElement {
  public : GALGAS_controlRegisterByName_2D_element mObject ;

//--- Constructor
  public : cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                     const GALGAS_string & in_mHTML,
                                                     const GALGAS_string & in_mName
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public : virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement_controlRegisterByName::cSortedListElement_controlRegisterByName (const GALGAS_bigint & in_mAddress,
                                                                                    const GALGAS_string & in_mHTML,
                                                                                    const GALGAS_string & in_mName
                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mAddress, in_mHTML, in_mName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cSortedListElement_controlRegisterByName::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cSortedListElement * cSortedListElement_controlRegisterByName::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_controlRegisterByName (mObject.mProperty_mAddress, mObject.mProperty_mHTML, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cSortedListElement_controlRegisterByName::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAddress" ":" ;
  mObject.mProperty_mAddress.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHTML" ":" ;
  mObject.mProperty_mHTML.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_controlRegisterByName::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_controlRegisterByName * operand = (cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByName::GALGAS_controlRegisterByName (void) :
AC_GALGAS_sortedlist () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cSortedListElement_controlRegisterByName::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_controlRegisterByName * operand = (const cSortedListElement_controlRegisterByName *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_controlRegisterByName) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::constructor_sortedListWithValue (const GALGAS_bigint & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = NULL ;
  macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByName::addAssign_operation (const GALGAS_bigint & inOperand0,
                                                        const GALGAS_string & inOperand1,
                                                        const GALGAS_string & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = NULL ;
    macroMyNew (p, cSortedListElement_controlRegisterByName (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByName::plusAssign_operation (const GALGAS_controlRegisterByName inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByName::setter_popSmallest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByName::setter_popGreatest (GALGAS_bigint & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByName::method_smallest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controlRegisterByName::method_greatest (GALGAS_bigint & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_controlRegisterByName * p = (cSortedListElement_controlRegisterByName *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
    outOperand0 = p->mObject.mProperty_mAddress ;
    outOperand1 = p->mObject.mProperty_mHTML ;
    outOperand2 = p->mObject.mProperty_mName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controlRegisterByName::cEnumerator_controlRegisterByName (const GALGAS_controlRegisterByName & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByName_2D_element cEnumerator_controlRegisterByName::current (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bigint cEnumerator_controlRegisterByName::current_mAddress (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mAddress ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_controlRegisterByName::current_mHTML (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mHTML ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_controlRegisterByName::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_controlRegisterByName * p = (const cSortedListElement_controlRegisterByName *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_controlRegisterByName) ;
  return p->mObject.mProperty_mName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @controlRegisterByName type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterByName ("controlRegisterByName",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controlRegisterByName::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterByName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controlRegisterByName::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterByName (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controlRegisterByName GALGAS_controlRegisterByName::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterByName result ;
  const GALGAS_controlRegisterByName * p = (const GALGAS_controlRegisterByName *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterByName *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterByName", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Abstract extension method '@expressionAST addDependenceEdgeForStaticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression> gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_addDependenceEdgeForStaticExpression (const int32_t inClassIndex,
                                                                extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression inMethod) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression (void) {
  gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionAST_addDependenceEdgeForStaticExpression (NULL,
                                                                               freeExtensionMethod_expressionAST_addDependenceEdgeForStaticExpression) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_lstring constin_inConstantName,
                                                               GALGAS_semanticTypePrecedenceGraph & io_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_expressionAST_addDependenceEdgeForStaticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
      f = gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.count ()) {
          f = gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_expressionAST_addDependenceEdgeForStaticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inConstantName, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalSyncInstanceMap::cMapElement_globalSyncInstanceMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_PLMType & in_type,
                                                                      const GALGAS_objectIR & in_initialValue
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_type (in_type),
mProperty_initialValue (in_initialValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_globalSyncInstanceMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_initialValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_globalSyncInstanceMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalSyncInstanceMap (mProperty_lkey, mProperty_type, mProperty_initialValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_globalSyncInstanceMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "type" ":" ;
  mProperty_type.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "initialValue" ":" ;
  mProperty_initialValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_globalSyncInstanceMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalSyncInstanceMap * operand = (cMapElement_globalSyncInstanceMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (operand->mProperty_type) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_initialValue.objectCompare (operand->mProperty_initialValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap::GALGAS_globalSyncInstanceMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap::GALGAS_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap & GALGAS_globalSyncInstanceMap::operator = (const GALGAS_globalSyncInstanceMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::constructor_mapWithMapToOverride (const GALGAS_globalSyncInstanceMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_PLMType & inArgument0,
                                                        const GALGAS_objectIR & inArgument1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_PLMType inArgument0,
                                                     GALGAS_objectIR inArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' global variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_globalSyncInstanceMap_searchKey = "there is no '%K' global variable" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_PLMType & outArgument0,
                                                     GALGAS_objectIR & outArgument1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_globalSyncInstanceMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    outArgument0 = p->mProperty_type ;
    outArgument1 = p->mProperty_initialValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_globalSyncInstanceMap::getter_typeForKey (const GALGAS_string & inKey,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalSyncInstanceMap::getter_initialValueForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    result = p->mProperty_initialValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMap::setter_setTypeForKey (GALGAS_PLMType inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_type = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMap::setter_setInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMap * p = (cMapElement_globalSyncInstanceMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
    p->mProperty_initialValue = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalSyncInstanceMap * GALGAS_globalSyncInstanceMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMap * result = (cMapElement_globalSyncInstanceMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalSyncInstanceMap::cEnumerator_globalSyncInstanceMap (const GALGAS_globalSyncInstanceMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap_2D_element cEnumerator_globalSyncInstanceMap::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return GALGAS_globalSyncInstanceMap_2D_element (p->mProperty_lkey, p->mProperty_type, p->mProperty_initialValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_globalSyncInstanceMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_globalSyncInstanceMap::current_type (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_type ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_globalSyncInstanceMap::current_initialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMap * p = (const cMapElement_globalSyncInstanceMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMap) ;
  return p->mProperty_initialValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @globalSyncInstanceMap type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMap ("globalSyncInstanceMap",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalSyncInstanceMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMap GALGAS_globalSyncInstanceMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap result ;
  const GALGAS_globalSyncInstanceMap * p = (const GALGAS_globalSyncInstanceMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalSyncInstanceMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalSyncInstanceMapIR::cMapElement_globalSyncInstanceMapIR (const GALGAS_lstring & inKey,
                                                                          const GALGAS_objectIR & in_mInitialValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mInitialValue (in_mInitialValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_globalSyncInstanceMapIR::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_globalSyncInstanceMapIR::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_globalSyncInstanceMapIR (mProperty_lkey, mProperty_mInitialValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_globalSyncInstanceMapIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValue" ":" ;
  mProperty_mInitialValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_globalSyncInstanceMapIR::compare (const cCollectionElement * inOperand) const {
  cMapElement_globalSyncInstanceMapIR * operand = (cMapElement_globalSyncInstanceMapIR *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mInitialValue.objectCompare (operand->mProperty_mInitialValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR::GALGAS_globalSyncInstanceMapIR (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR::GALGAS_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR & GALGAS_globalSyncInstanceMapIR::operator = (const GALGAS_globalSyncInstanceMapIR & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::constructor_mapWithMapToOverride (const GALGAS_globalSyncInstanceMapIR & inMapToOverride
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::getter_overriddenMap (C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_globalSyncInstanceMapIR result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMapIR::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_objectIR & inArgument0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@globalSyncInstanceMapIR insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMapIR::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_objectIR inArgument0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * p = NULL ;
  macroMyNew (p, cMapElement_globalSyncInstanceMapIR (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "** internal error **" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_globalSyncInstanceMapIR::getter_mInitialValueForKey (const GALGAS_string & inKey,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) attributes ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    result = p->mProperty_mInitialValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_globalSyncInstanceMapIR::setter_setMInitialValueForKey (GALGAS_objectIR inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_globalSyncInstanceMapIR * p = (cMapElement_globalSyncInstanceMapIR *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
    p->mProperty_mInitialValue = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_globalSyncInstanceMapIR * GALGAS_globalSyncInstanceMapIR::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_globalSyncInstanceMapIR * result = (cMapElement_globalSyncInstanceMapIR *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_globalSyncInstanceMapIR) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_globalSyncInstanceMapIR::cEnumerator_globalSyncInstanceMapIR (const GALGAS_globalSyncInstanceMapIR & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR_2D_element cEnumerator_globalSyncInstanceMapIR::current (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
  return GALGAS_globalSyncInstanceMapIR_2D_element (p->mProperty_lkey, p->mProperty_mInitialValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_globalSyncInstanceMapIR::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_globalSyncInstanceMapIR::current_mInitialValue (LOCATION_ARGS) const {
  const cMapElement_globalSyncInstanceMapIR * p = (const cMapElement_globalSyncInstanceMapIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_globalSyncInstanceMapIR) ;
  return p->mProperty_mInitialValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @globalSyncInstanceMapIR type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ("globalSyncInstanceMapIR",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMapIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMapIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_globalSyncInstanceMapIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMapIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_globalSyncInstanceMapIR GALGAS_globalSyncInstanceMapIR::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMapIR result ;
  const GALGAS_globalSyncInstanceMapIR * p = (const GALGAS_globalSyncInstanceMapIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalSyncInstanceMapIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMapIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@driverPropertyListAST' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_driverPropertyListAST : public cCollectionElement {
  public : GALGAS_driverPropertyListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                     const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                     const GALGAS_bool & in_mIsConstant,
                                                     const GALGAS_lstring & in_mTypeName,
                                                     const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverPropertyListAST (const GALGAS_driverPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverPropertyListAST::cCollectionElement_driverPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                    const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                                                    const GALGAS_bool & in_mIsConstant,
                                                                                    const GALGAS_lstring & in_mTypeName,
                                                                                    const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyAttributeList, in_mIsConstant, in_mTypeName, in_mOptionalExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverPropertyListAST::cCollectionElement_driverPropertyListAST (const GALGAS_driverPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyAttributeList, inElement.mProperty_mIsConstant, inElement.mProperty_mTypeName, inElement.mProperty_mOptionalExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_driverPropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_driverPropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverPropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyAttributeList, mObject.mProperty_mIsConstant, mObject.mProperty_mTypeName, mObject.mProperty_mOptionalExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_driverPropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyAttributeList" ":" ;
  mObject.mProperty_mPropertyAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsConstant" ":" ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalExpression" ":" ;
  mObject.mProperty_mOptionalExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_driverPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverPropertyListAST * operand = (cCollectionElement_driverPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST::GALGAS_driverPropertyListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST::GALGAS_driverPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverPropertyListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_propertyAttributeList & inOperand1,
                                                                                      const GALGAS_bool & inOperand2,
                                                                                      const GALGAS_lstring & inOperand3,
                                                                                      const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_driverPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_driverPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mPropertyName,
                                                              const GALGAS_propertyAttributeList & in_mPropertyAttributeList,
                                                              const GALGAS_bool & in_mIsConstant,
                                                              const GALGAS_lstring & in_mTypeName,
                                                              const GALGAS_structurePropertyInitOptionalExpressionAST & in_mOptionalExpression
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_driverPropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverPropertyListAST (in_mPropertyName,
                                                           in_mPropertyAttributeList,
                                                           in_mIsConstant,
                                                           in_mTypeName,
                                                           in_mOptionalExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_propertyAttributeList & inOperand1,
                                                        const GALGAS_bool & inOperand2,
                                                        const GALGAS_lstring & inOperand3,
                                                        const GALGAS_structurePropertyInitOptionalExpressionAST & inOperand4
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverPropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::setter_append (GALGAS_driverPropertyListAST_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverPropertyListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_propertyAttributeList inOperand1,
                                                         const GALGAS_bool inOperand2,
                                                         const GALGAS_lstring inOperand3,
                                                         const GALGAS_structurePropertyInitOptionalExpressionAST inOperand4,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverPropertyListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_propertyAttributeList & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         GALGAS_lstring & outOperand3,
                                                         GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
      outOperand2 = p->mObject.mProperty_mIsConstant ;
      outOperand3 = p->mObject.mProperty_mTypeName ;
      outOperand4 = p->mObject.mProperty_mOptionalExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_propertyAttributeList & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mTypeName ;
    outOperand4 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_propertyAttributeList & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mTypeName ;
    outOperand4 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_propertyAttributeList & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 GALGAS_lstring & outOperand3,
                                                 GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mTypeName ;
    outOperand4 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_propertyAttributeList & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                GALGAS_lstring & outOperand3,
                                                GALGAS_structurePropertyInitOptionalExpressionAST & outOperand4,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyAttributeList ;
    outOperand2 = p->mObject.mProperty_mIsConstant ;
    outOperand3 = p->mObject.mProperty_mTypeName ;
    outOperand4 = p->mObject.mProperty_mOptionalExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::add_operation (const GALGAS_driverPropertyListAST & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_driverPropertyListAST result = GALGAS_driverPropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_driverPropertyListAST result = GALGAS_driverPropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverPropertyListAST result = GALGAS_driverPropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverPropertyListAST::plusAssign_operation (const GALGAS_driverPropertyListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_driverPropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList GALGAS_driverPropertyListAST::getter_mPropertyAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  GALGAS_propertyAttributeList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_driverPropertyListAST::getter_mIsConstantAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_driverPropertyListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST GALGAS_driverPropertyListAST::getter_mOptionalExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverPropertyListAST * p = (cCollectionElement_driverPropertyListAST *) attributes.ptr () ;
  GALGAS_structurePropertyInitOptionalExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
    result = p->mObject.mProperty_mOptionalExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_driverPropertyListAST::cEnumerator_driverPropertyListAST (const GALGAS_driverPropertyListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST_2D_element cEnumerator_driverPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverPropertyListAST * p = (const cCollectionElement_driverPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_driverPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_driverPropertyListAST * p = (const cCollectionElement_driverPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyAttributeList cEnumerator_driverPropertyListAST::current_mPropertyAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_driverPropertyListAST * p = (const cCollectionElement_driverPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
  return p->mObject.mProperty_mPropertyAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_driverPropertyListAST::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_driverPropertyListAST * p = (const cCollectionElement_driverPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
  return p->mObject.mProperty_mIsConstant ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_driverPropertyListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_driverPropertyListAST * p = (const cCollectionElement_driverPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_structurePropertyInitOptionalExpressionAST cEnumerator_driverPropertyListAST::current_mOptionalExpression (LOCATION_ARGS) const {
  const cCollectionElement_driverPropertyListAST * p = (const cCollectionElement_driverPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverPropertyListAST) ;
  return p->mObject.mProperty_mOptionalExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @driverPropertyListAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverPropertyListAST ("driverPropertyListAST",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverPropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverPropertyListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverPropertyListAST GALGAS_driverPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverPropertyListAST result ;
  const GALGAS_driverPropertyListAST * p = (const GALGAS_driverPropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@instructionListAST' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_instructionListAST : public cCollectionElement {
  public : GALGAS_instructionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_instructionListAST (const GALGAS_instructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionAST & in_mInstruction
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_instructionListAST::cCollectionElement_instructionListAST (const GALGAS_instructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_instructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_instructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_instructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_instructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_instructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_instructionListAST * operand = (cCollectionElement_instructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_instructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST::GALGAS_instructionListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST::GALGAS_instructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_instructionListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_instructionListAST::constructor_listWithValue (const GALGAS_instructionAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_instructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_instructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_instructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_instructionAST & in_mInstruction
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_instructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_instructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::addAssign_operation (const GALGAS_instructionAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::setter_append (GALGAS_instructionListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::setter_insertAtIndex (const GALGAS_instructionAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_instructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::setter_removeAtIndex (GALGAS_instructionAST & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::setter_popFirst (GALGAS_instructionAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::setter_popLast (GALGAS_instructionAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST GALGAS_instructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_instructionListAST result = GALGAS_instructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instructionListAST::plusAssign_operation (const GALGAS_instructionListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionAST GALGAS_instructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_instructionListAST * p = (cCollectionElement_instructionListAST *) attributes.ptr () ;
  GALGAS_instructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_instructionListAST::cEnumerator_instructionListAST (const GALGAS_instructionListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionListAST_2D_element cEnumerator_instructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instructionAST cEnumerator_instructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_instructionListAST * p = (const cCollectionElement_instructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_instructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @instructionListAST type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instructionListAST ("instructionListAST",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_instructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instructionListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_instructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instructionListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@driverDeclarationListAST' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_driverDeclarationListAST : public cCollectionElement {
  public : GALGAS_driverDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationAST & in_mDriver
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationAST & in_mDriver
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriver) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverDeclarationListAST::cCollectionElement_driverDeclarationListAST (const GALGAS_driverDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriver) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_driverDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_driverDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverDeclarationListAST (mObject.mProperty_mDriver COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_driverDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriver" ":" ;
  mObject.mProperty_mDriver.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_driverDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverDeclarationListAST * operand = (cCollectionElement_driverDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST::GALGAS_driverDeclarationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST::GALGAS_driverDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverDeclarationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::constructor_listWithValue (const GALGAS_driverDeclarationAST & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_driverDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_driverDeclarationAST & in_mDriver
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_driverDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverDeclarationListAST (in_mDriver COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::addAssign_operation (const GALGAS_driverDeclarationAST & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::setter_append (GALGAS_driverDeclarationListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::setter_insertAtIndex (const GALGAS_driverDeclarationAST inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::setter_removeAtIndex (GALGAS_driverDeclarationAST & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mDriver ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::setter_popFirst (GALGAS_driverDeclarationAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::setter_popLast (GALGAS_driverDeclarationAST & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::method_first (GALGAS_driverDeclarationAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::method_last (GALGAS_driverDeclarationAST & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriver ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::add_operation (const GALGAS_driverDeclarationListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_driverDeclarationListAST result = GALGAS_driverDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverDeclarationListAST::plusAssign_operation (const GALGAS_driverDeclarationListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST GALGAS_driverDeclarationListAST::getter_mDriverAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverDeclarationListAST * p = (cCollectionElement_driverDeclarationListAST *) attributes.ptr () ;
  GALGAS_driverDeclarationAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
    result = p->mObject.mProperty_mDriver ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_driverDeclarationListAST::cEnumerator_driverDeclarationListAST (const GALGAS_driverDeclarationListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST_2D_element cEnumerator_driverDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationAST cEnumerator_driverDeclarationListAST::current_mDriver (LOCATION_ARGS) const {
  const cCollectionElement_driverDeclarationListAST * p = (const cCollectionElement_driverDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverDeclarationListAST) ;
  return p->mObject.mProperty_mDriver ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @driverDeclarationListAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverDeclarationListAST ("driverDeclarationListAST",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverDeclarationListAST GALGAS_driverDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST result ;
  const GALGAS_driverDeclarationListAST * p = (const GALGAS_driverDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Class for element of '@driverInstanciationArgumentListAST' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_driverInstanciationArgumentListAST : public cCollectionElement {
  public : GALGAS_driverInstanciationArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                  const GALGAS_expressionAST & in_mExpression
                                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_lstring & in_mSelector,
                                                                                                              const GALGAS_expressionAST & in_mExpression
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelector, in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverInstanciationArgumentListAST::cCollectionElement_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelector, inElement.mProperty_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_driverInstanciationArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_driverInstanciationArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverInstanciationArgumentListAST (mObject.mProperty_mSelector, mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_driverInstanciationArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelector" ":" ;
  mObject.mProperty_mSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_driverInstanciationArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverInstanciationArgumentListAST * operand = (cCollectionElement_driverInstanciationArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverInstanciationArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST::GALGAS_driverInstanciationArgumentListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST::GALGAS_driverInstanciationArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationArgumentListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_expressionAST & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_driverInstanciationArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverInstanciationArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mSelector,
                                                                           const GALGAS_expressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (in_mSelector,
                                                                        in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_expressionAST & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::setter_append (GALGAS_driverInstanciationArgumentListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_expressionAST inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_expressionAST & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
      outOperand0 = p->mObject.mProperty_mSelector ;
      outOperand1 = p->mObject.mProperty_mExpression ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_expressionAST & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_expressionAST & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_expressionAST & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_expressionAST & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mSelector ;
    outOperand1 = p->mObject.mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::add_operation (const GALGAS_driverInstanciationArgumentListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentListAST result = GALGAS_driverInstanciationArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentListAST::plusAssign_operation (const GALGAS_driverInstanciationArgumentListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_driverInstanciationArgumentListAST::getter_mSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mSelector ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_driverInstanciationArgumentListAST::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationArgumentListAST * p = (cCollectionElement_driverInstanciationArgumentListAST *) attributes.ptr () ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_driverInstanciationArgumentListAST::cEnumerator_driverInstanciationArgumentListAST (const GALGAS_driverInstanciationArgumentListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST_2D_element cEnumerator_driverInstanciationArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_driverInstanciationArgumentListAST::current_mSelector (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mSelector ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cEnumerator_driverInstanciationArgumentListAST::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationArgumentListAST * p = (const cCollectionElement_driverInstanciationArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationArgumentListAST) ;
  return p->mObject.mProperty_mExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @driverInstanciationArgumentListAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ("driverInstanciationArgumentListAST",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverInstanciationArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST result ;
  const GALGAS_driverInstanciationArgumentListAST * p = (const GALGAS_driverInstanciationArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverInstanciationArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@driverInstanciationListAST' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_driverInstanciationListAST : public cCollectionElement {
  public : GALGAS_driverInstanciationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverInstanciationListAST (const GALGAS_lstring & in_mDriverName,
                                                          const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverInstanciationListAST (const GALGAS_driverInstanciationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GALGAS_lstring & in_mDriverName,
                                                                                              const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mDriverInstanciationArgumentList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverInstanciationListAST::cCollectionElement_driverInstanciationListAST (const GALGAS_driverInstanciationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mDriverInstanciationArgumentList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_driverInstanciationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_driverInstanciationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverInstanciationListAST (mObject.mProperty_mDriverName, mObject.mProperty_mDriverInstanciationArgumentList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_driverInstanciationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverInstanciationArgumentList" ":" ;
  mObject.mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_driverInstanciationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverInstanciationListAST * operand = (cCollectionElement_driverInstanciationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverInstanciationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST::GALGAS_driverInstanciationListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST::GALGAS_driverInstanciationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverInstanciationListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_driverInstanciationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverInstanciationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mDriverName,
                                                                   const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_driverInstanciationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_driverInstanciationListAST (in_mDriverName,
                                                                in_mDriverInstanciationArgumentList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_driverInstanciationArgumentListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::setter_append (GALGAS_driverInstanciationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_driverInstanciationArgumentListAST inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverInstanciationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
      outOperand0 = p->mObject.mProperty_mDriverName ;
      outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_driverInstanciationArgumentListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::add_operation (const GALGAS_driverInstanciationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationListAST result = GALGAS_driverInstanciationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationListAST::plusAssign_operation (const GALGAS_driverInstanciationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_driverInstanciationListAST::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST GALGAS_driverInstanciationListAST::getter_mDriverInstanciationArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverInstanciationListAST * p = (cCollectionElement_driverInstanciationListAST *) attributes.ptr () ;
  GALGAS_driverInstanciationArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
    result = p->mObject.mProperty_mDriverInstanciationArgumentList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_driverInstanciationListAST::cEnumerator_driverInstanciationListAST (const GALGAS_driverInstanciationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST_2D_element cEnumerator_driverInstanciationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_driverInstanciationListAST::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentListAST cEnumerator_driverInstanciationListAST::current_mDriverInstanciationArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_driverInstanciationListAST * p = (const cCollectionElement_driverInstanciationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverInstanciationListAST) ;
  return p->mObject.mProperty_mDriverInstanciationArgumentList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @driverInstanciationListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverInstanciationListAST ("driverInstanciationListAST",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverInstanciationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverInstanciationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationListAST GALGAS_driverInstanciationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST result ;
  const GALGAS_driverInstanciationListAST * p = (const GALGAS_driverInstanciationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverInstanciationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_driverInstanciationArgumentMap::cMapElement_driverInstanciationArgumentMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_expressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_driverInstanciationArgumentMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_driverInstanciationArgumentMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_driverInstanciationArgumentMap (mProperty_lkey, mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_driverInstanciationArgumentMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExpression" ":" ;
  mProperty_mExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_driverInstanciationArgumentMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_driverInstanciationArgumentMap * operand = (cMapElement_driverInstanciationArgumentMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (operand->mProperty_mExpression) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap::GALGAS_driverInstanciationArgumentMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap::GALGAS_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap & GALGAS_driverInstanciationArgumentMap::operator = (const GALGAS_driverInstanciationArgumentMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::constructor_mapWithMapToOverride (const GALGAS_driverInstanciationArgumentMap & inMapToOverride
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_driverInstanciationArgumentMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_expressionAST & inArgument0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = NULL ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@driverInstanciationArgumentMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST inArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * p = NULL ;
  macroMyNew (p, cMapElement_driverInstanciationArgumentMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "duplicated '%K' selector" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_driverInstanciationArgumentMap_searchKey = "uninitialized '%K' property" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_expressionAST & outArgument0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_driverInstanciationArgumentMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    outArgument0 = p->mProperty_mExpression ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST GALGAS_driverInstanciationArgumentMap::getter_mExpressionForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) attributes ;
  GALGAS_expressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverInstanciationArgumentMap::setter_setMExpressionForKey (GALGAS_expressionAST inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_driverInstanciationArgumentMap * p = (cMapElement_driverInstanciationArgumentMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
    p->mProperty_mExpression = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_driverInstanciationArgumentMap * GALGAS_driverInstanciationArgumentMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_driverInstanciationArgumentMap * result = (cMapElement_driverInstanciationArgumentMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_driverInstanciationArgumentMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_driverInstanciationArgumentMap::cEnumerator_driverInstanciationArgumentMap (const GALGAS_driverInstanciationArgumentMap & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap_2D_element cEnumerator_driverInstanciationArgumentMap::current (LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
  return GALGAS_driverInstanciationArgumentMap_2D_element (p->mProperty_lkey, p->mProperty_mExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_driverInstanciationArgumentMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_expressionAST cEnumerator_driverInstanciationArgumentMap::current_mExpression (LOCATION_ARGS) const {
  const cMapElement_driverInstanciationArgumentMap * p = (const cMapElement_driverInstanciationArgumentMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_driverInstanciationArgumentMap) ;
  return p->mProperty_mExpression ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @driverInstanciationArgumentMap type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ("driverInstanciationArgumentMap",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap GALGAS_driverInstanciationArgumentMap::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap result ;
  const GALGAS_driverInstanciationArgumentMap * p = (const GALGAS_driverInstanciationArgumentMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverInstanciationArgumentMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_instanciedDriverMap::cMapElement_instanciedDriverMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDriverInstanciationArgumentMap (in_mDriverInstanciationArgumentMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_instanciedDriverMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDriverInstanciationArgumentMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_instanciedDriverMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_instanciedDriverMap (mProperty_lkey, mProperty_mDriverInstanciationArgumentMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_instanciedDriverMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverInstanciationArgumentMap" ":" ;
  mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_instanciedDriverMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_instanciedDriverMap * operand = (cMapElement_instanciedDriverMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDriverInstanciationArgumentMap.objectCompare (operand->mProperty_mDriverInstanciationArgumentMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap::GALGAS_instanciedDriverMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap::GALGAS_instanciedDriverMap (const GALGAS_instanciedDriverMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap & GALGAS_instanciedDriverMap::operator = (const GALGAS_instanciedDriverMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::constructor_mapWithMapToOverride (const GALGAS_instanciedDriverMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_instanciedDriverMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instanciedDriverMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_driverInstanciationArgumentMap & inArgument0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = NULL ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@instanciedDriverMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instanciedDriverMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_driverInstanciationArgumentMap inArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * p = NULL ;
  macroMyNew (p, cMapElement_instanciedDriverMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' driver is already instancied in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_instanciedDriverMap_searchKey = "internal error %K" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instanciedDriverMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_driverInstanciationArgumentMap & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_instanciedDriverMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    outArgument0 = p->mProperty_mDriverInstanciationArgumentMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap GALGAS_instanciedDriverMap::getter_mDriverInstanciationArgumentMapForKey (const GALGAS_string & inKey,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) attributes ;
  GALGAS_driverInstanciationArgumentMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    result = p->mProperty_mDriverInstanciationArgumentMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_instanciedDriverMap::setter_setMDriverInstanciationArgumentMapForKey (GALGAS_driverInstanciationArgumentMap inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_instanciedDriverMap * p = (cMapElement_instanciedDriverMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
    p->mProperty_mDriverInstanciationArgumentMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_instanciedDriverMap * GALGAS_instanciedDriverMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_instanciedDriverMap * result = (cMapElement_instanciedDriverMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_instanciedDriverMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_instanciedDriverMap::cEnumerator_instanciedDriverMap (const GALGAS_instanciedDriverMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap_2D_element cEnumerator_instanciedDriverMap::current (LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
  return GALGAS_instanciedDriverMap_2D_element (p->mProperty_lkey, p->mProperty_mDriverInstanciationArgumentMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_instanciedDriverMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverInstanciationArgumentMap cEnumerator_instanciedDriverMap::current_mDriverInstanciationArgumentMap (LOCATION_ARGS) const {
  const cMapElement_instanciedDriverMap * p = (const cMapElement_instanciedDriverMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_instanciedDriverMap) ;
  return p->mProperty_mDriverInstanciationArgumentMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @instanciedDriverMap type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_instanciedDriverMap ("instanciedDriverMap",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_instanciedDriverMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_instanciedDriverMap GALGAS_instanciedDriverMap::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap result ;
  const GALGAS_instanciedDriverMap * p = (const GALGAS_instanciedDriverMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_instanciedDriverMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Class for element of '@driverListIR' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_driverListIR : public cCollectionElement {
  public : GALGAS_driverListIR_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_driverListIR (const GALGAS_string & in_mDriverName,
                                            const GALGAS_PLMType & in_mType,
                                            const GALGAS_operandIRList & in_mInitialValueList
                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_driverListIR (const GALGAS_driverListIR_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GALGAS_string & in_mDriverName,
                                                                  const GALGAS_PLMType & in_mType,
                                                                  const GALGAS_operandIRList & in_mInitialValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDriverName, in_mType, in_mInitialValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_driverListIR::cCollectionElement_driverListIR (const GALGAS_driverListIR_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDriverName, inElement.mProperty_mType, inElement.mProperty_mInitialValueList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_driverListIR::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_driverListIR::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_driverListIR (mObject.mProperty_mDriverName, mObject.mProperty_mType, mObject.mProperty_mInitialValueList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_driverListIR::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDriverName" ":" ;
  mObject.mProperty_mDriverName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInitialValueList" ":" ;
  mObject.mProperty_mInitialValueList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_driverListIR::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_driverListIR * operand = (cCollectionElement_driverListIR *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_driverListIR) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR::GALGAS_driverListIR (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR::GALGAS_driverListIR (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_driverListIR  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                    const GALGAS_PLMType & inOperand1,
                                                                    const GALGAS_operandIRList & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_driverListIR (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_driverListIR::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_string & in_mDriverName,
                                                     const GALGAS_PLMType & in_mType,
                                                     const GALGAS_operandIRList & in_mInitialValueList
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_driverListIR * p = NULL ;
  macroMyNew (p, cCollectionElement_driverListIR (in_mDriverName,
                                                  in_mType,
                                                  in_mInitialValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::addAssign_operation (const GALGAS_string & inOperand0,
                                               const GALGAS_PLMType & inOperand1,
                                               const GALGAS_operandIRList & inOperand2
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::setter_append (GALGAS_driverListIR_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverListIR (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_PLMType inOperand1,
                                                const GALGAS_operandIRList inOperand2,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_driverListIR (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                GALGAS_PLMType & outOperand1,
                                                GALGAS_operandIRList & outOperand2,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_driverListIR) ;
      outOperand0 = p->mObject.mProperty_mDriverName ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mInitialValueList ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::setter_popFirst (GALGAS_string & outOperand0,
                                           GALGAS_PLMType & outOperand1,
                                           GALGAS_operandIRList & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::setter_popLast (GALGAS_string & outOperand0,
                                          GALGAS_PLMType & outOperand1,
                                          GALGAS_operandIRList & outOperand2,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::method_first (GALGAS_string & outOperand0,
                                        GALGAS_PLMType & outOperand1,
                                        GALGAS_operandIRList & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::method_last (GALGAS_string & outOperand0,
                                       GALGAS_PLMType & outOperand1,
                                       GALGAS_operandIRList & outOperand2,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    outOperand0 = p->mObject.mProperty_mDriverName ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mInitialValueList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::add_operation (const GALGAS_driverListIR & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_driverListIR result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_driverListIR result = GALGAS_driverListIR::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_driverListIR::plusAssign_operation (const GALGAS_driverListIR inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_driverListIR::getter_mDriverNameAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mDriverName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType GALGAS_driverListIR::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_PLMType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_driverListIR::getter_mInitialValueListAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_driverListIR * p = (cCollectionElement_driverListIR *) attributes.ptr () ;
  GALGAS_operandIRList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_driverListIR) ;
    result = p->mObject.mProperty_mInitialValueList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_driverListIR::cEnumerator_driverListIR (const GALGAS_driverListIR & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR_2D_element cEnumerator_driverListIR::current (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_driverListIR::current_mDriverName (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mDriverName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_PLMType cEnumerator_driverListIR::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList cEnumerator_driverListIR::current_mInitialValueList (LOCATION_ARGS) const {
  const cCollectionElement_driverListIR * p = (const cCollectionElement_driverListIR *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_driverListIR) ;
  return p->mObject.mProperty_mInitialValueList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @driverListIR type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_driverListIR ("driverListIR",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_driverListIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverListIR ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_driverListIR::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverListIR (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_driverListIR GALGAS_driverListIR::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_driverListIR result ;
  const GALGAS_driverListIR * p = (const GALGAS_driverListIR *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_driverListIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverListIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@operandIRList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_operandIRList : public cCollectionElement {
  public : GALGAS_operandIRList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_operandIRList (const GALGAS_operandIRList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_objectIR & in_mOperand
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_operandIRList::cCollectionElement_operandIRList (const GALGAS_operandIRList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOperand) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_operandIRList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_operandIRList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_operandIRList (mObject.mProperty_mOperand COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_operandIRList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOperand" ":" ;
  mObject.mProperty_mOperand.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_operandIRList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_operandIRList * operand = (cCollectionElement_operandIRList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_operandIRList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList::GALGAS_operandIRList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList::GALGAS_operandIRList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_operandIRList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::constructor_listWithValue (const GALGAS_objectIR & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_operandIRList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_objectIR & in_mOperand
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_operandIRList * p = NULL ;
  macroMyNew (p, cCollectionElement_operandIRList (in_mOperand COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::addAssign_operation (const GALGAS_objectIR & inOperand0
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::setter_append (GALGAS_operandIRList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandIRList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::setter_insertAtIndex (const GALGAS_objectIR inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_operandIRList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::setter_removeAtIndex (GALGAS_objectIR & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_operandIRList) ;
      outOperand0 = p->mObject.mProperty_mOperand ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::setter_popFirst (GALGAS_objectIR & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::setter_popLast (GALGAS_objectIR & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::method_first (GALGAS_objectIR & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::method_last (GALGAS_objectIR & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    outOperand0 = p->mObject.mProperty_mOperand ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::add_operation (const GALGAS_operandIRList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_operandIRList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_operandIRList result = GALGAS_operandIRList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_operandIRList::plusAssign_operation (const GALGAS_operandIRList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR GALGAS_operandIRList::getter_mOperandAtIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_operandIRList * p = (cCollectionElement_operandIRList *) attributes.ptr () ;
  GALGAS_objectIR result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_operandIRList) ;
    result = p->mObject.mProperty_mOperand ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_operandIRList::cEnumerator_operandIRList (const GALGAS_operandIRList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList_2D_element cEnumerator_operandIRList::current (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectIR cEnumerator_operandIRList::current_mOperand (LOCATION_ARGS) const {
  const cCollectionElement_operandIRList * p = (const cCollectionElement_operandIRList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_operandIRList) ;
  return p->mObject.mProperty_mOperand ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @operandIRList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList ("operandIRList",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_operandIRList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_operandIRList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_operandIRList GALGAS_operandIRList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList result ;
  const GALGAS_operandIRList * p = (const GALGAS_operandIRList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension method '@driverListIR generateLLVMDriverCode'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_generateLLVMDriverCode (const GALGAS_driverListIR inObject,
                                             GALGAS_string & ioArgument_ioLLVMcode,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 481)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 482)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 482)) ;
  const GALGAS_driverListIR temp_0 = inObject ;
  cEnumerator_driverListIR enumerator_19766 (temp_0, kENUMERATION_UP) ;
  while (enumerator_19766.hasCurrentObject ()) {
    GALGAS_lstring var_bootRoutineMangledName_19800 = function_routineMangledNameFromAST (function_llvmDriverNameFromName (enumerator_19766.current (HERE).getter_mDriverName (HERE).getter_nowhere (SOURCE_FILE ("declaration-driver.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 485)).getter_string (SOURCE_FILE ("declaration-driver.galgas", 485)), GALGAS_string ("boot").getter_nowhere (SOURCE_FILE ("declaration-driver.galgas", 486)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 484)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (var_bootRoutineMangledName_19800.getter_string (SOURCE_FILE ("declaration-driver.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 489)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 489)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19766.current (HERE).getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 490)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 490)).add_operation (function_llvmNameForGlobalVariable (enumerator_19766.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 490)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 491)) ;
    enumerator_19766.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 493)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 494)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Startup"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 496)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @startup ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 497)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 497)) ;
  const GALGAS_driverListIR temp_1 = inObject ;
  cEnumerator_driverListIR enumerator_20370 (temp_1, kENUMERATION_UP) ;
  while (enumerator_20370.hasCurrentObject ()) {
    GALGAS_lstring var_startupRoutineMangledName_20407 = function_routineMangledNameFromAST (function_llvmDriverNameFromName (enumerator_20370.current (HERE).getter_mDriverName (HERE).getter_nowhere (SOURCE_FILE ("declaration-driver.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 500)).getter_string (SOURCE_FILE ("declaration-driver.galgas", 500)), GALGAS_string ("startup").getter_nowhere (SOURCE_FILE ("declaration-driver.galgas", 501)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 499)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForFunction (var_startupRoutineMangledName_20407.getter_string (SOURCE_FILE ("declaration-driver.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 504)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 504)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20370.current (HERE).getter_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 505)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 505)).add_operation (function_llvmNameForGlobalVariable (enumerator_20370.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 505)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 506)) ;
    enumerator_20370.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 508)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 509)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_staticListPropertyTypeAST_valueType::cEnumAssociatedValues_staticListPropertyTypeAST_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_staticListPropertyTypeAST_valueType::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_valueType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_staticListPropertyTypeAST_function::cEnumAssociatedValues_staticListPropertyTypeAST_function (const GALGAS_mode & inAssociatedValue0,
                                                                                                                    const GALGAS_bool & inAssociatedValue1,
                                                                                                                    const GALGAS_routineFormalArgumentListAST & inAssociatedValue2,
                                                                                                                    const GALGAS_lstring & inAssociatedValue3
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_staticListPropertyTypeAST_function::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_staticListPropertyTypeAST_function::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = dynamic_cast<const cEnumAssociatedValues_staticListPropertyTypeAST_function *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyTypeAST::GALGAS_staticListPropertyTypeAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::constructor_valueType (const GALGAS_lstring & inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_valueType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_valueType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::constructor_function (const GALGAS_mode & inAssociatedValue0,
                                                                                         const GALGAS_bool & inAssociatedValue1,
                                                                                         const GALGAS_routineFormalArgumentListAST & inAssociatedValue2,
                                                                                         const GALGAS_lstring & inAssociatedValue3
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_function ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_staticListPropertyTypeAST_function (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyTypeAST::method_valueType (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_valueType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @staticListPropertyTypeAST valueType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyTypeAST::method_function (GALGAS_mode & outAssociatedValue0,
                                                        GALGAS_bool & outAssociatedValue1,
                                                        GALGAS_routineFormalArgumentListAST & outAssociatedValue2,
                                                        GALGAS_lstring & outAssociatedValue3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_function) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    C_String s ;
    s << "method @staticListPropertyTypeAST function invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_staticListPropertyTypeAST_function * ptr = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_staticListPropertyTypeAST [3] = {
  "(not built)",
  "valueType",
  "function"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isValueType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_valueType == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_staticListPropertyTypeAST::getter_isFunction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_function == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyTypeAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @staticListPropertyTypeAST: " << gEnumNameArrayFor_staticListPropertyTypeAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_staticListPropertyTypeAST::objectCompare (const GALGAS_staticListPropertyTypeAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @staticListPropertyTypeAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyTypeAST ("staticListPropertyTypeAST",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListPropertyTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyTypeAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListPropertyTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyTypeAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyTypeAST result ;
  const GALGAS_staticListPropertyTypeAST * p = (const GALGAS_staticListPropertyTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@staticListPropertyListAST' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_staticListPropertyListAST : public cCollectionElement {
  public : GALGAS_staticListPropertyListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                         const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_staticListPropertyListAST (const GALGAS_staticListPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_lstring & in_mPropertyName,
                                                                                            const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyName, in_mPropertyType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_staticListPropertyListAST::cCollectionElement_staticListPropertyListAST (const GALGAS_staticListPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyName, inElement.mProperty_mPropertyType) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_staticListPropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_staticListPropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_staticListPropertyListAST (mObject.mProperty_mPropertyName, mObject.mProperty_mPropertyType COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_staticListPropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyType" ":" ;
  mObject.mProperty_mPropertyType.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_staticListPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_staticListPropertyListAST * operand = (cCollectionElement_staticListPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_staticListPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST::GALGAS_staticListPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticListPropertyListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_staticListPropertyTypeAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticListPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_staticListPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lstring & in_mPropertyName,
                                                                  const GALGAS_staticListPropertyTypeAST & in_mPropertyType
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_staticListPropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_staticListPropertyListAST (in_mPropertyName,
                                                               in_mPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_staticListPropertyTypeAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::setter_append (GALGAS_staticListPropertyListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                             const GALGAS_staticListPropertyTypeAST inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_staticListPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                             GALGAS_staticListPropertyTypeAST & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mPropertyName ;
      outOperand1 = p->mObject.mProperty_mPropertyType ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                        GALGAS_staticListPropertyTypeAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                       GALGAS_staticListPropertyTypeAST & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                     GALGAS_staticListPropertyTypeAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                    GALGAS_staticListPropertyTypeAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mPropertyName ;
    outOperand1 = p->mObject.mProperty_mPropertyType ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::add_operation (const GALGAS_staticListPropertyListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_staticListPropertyListAST result = GALGAS_staticListPropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_staticListPropertyListAST::plusAssign_operation (const GALGAS_staticListPropertyListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_staticListPropertyListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyTypeAST GALGAS_staticListPropertyListAST::getter_mPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_staticListPropertyListAST * p = (cCollectionElement_staticListPropertyListAST *) attributes.ptr () ;
  GALGAS_staticListPropertyTypeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
    result = p->mObject.mProperty_mPropertyType ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_staticListPropertyListAST::cEnumerator_staticListPropertyListAST (const GALGAS_staticListPropertyListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST_2D_element cEnumerator_staticListPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_staticListPropertyListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyTypeAST cEnumerator_staticListPropertyListAST::current_mPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_staticListPropertyListAST * p = (const cCollectionElement_staticListPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_staticListPropertyListAST) ;
  return p->mObject.mProperty_mPropertyType ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @staticListPropertyListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticListPropertyListAST ("staticListPropertyListAST",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_staticListPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_staticListPropertyListAST GALGAS_staticListPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST result ;
  const GALGAS_staticListPropertyListAST * p = (const GALGAS_staticListPropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticListPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

